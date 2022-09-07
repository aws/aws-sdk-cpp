/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/codedeploy/CodeDeployClient.h>
#include <aws/codedeploy/CodeDeployEndpoint.h>
#include <aws/codedeploy/CodeDeployErrorMarshaller.h>
#include <aws/codedeploy/model/AddTagsToOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/BatchGetApplicationsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentGroupsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentTargetsRequest.h>
#include <aws/codedeploy/model/BatchGetDeploymentsRequest.h>
#include <aws/codedeploy/model/BatchGetOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/ContinueDeploymentRequest.h>
#include <aws/codedeploy/model/CreateApplicationRequest.h>
#include <aws/codedeploy/model/CreateDeploymentRequest.h>
#include <aws/codedeploy/model/CreateDeploymentConfigRequest.h>
#include <aws/codedeploy/model/CreateDeploymentGroupRequest.h>
#include <aws/codedeploy/model/DeleteApplicationRequest.h>
#include <aws/codedeploy/model/DeleteDeploymentConfigRequest.h>
#include <aws/codedeploy/model/DeleteDeploymentGroupRequest.h>
#include <aws/codedeploy/model/DeleteGitHubAccountTokenRequest.h>
#include <aws/codedeploy/model/DeleteResourcesByExternalIdRequest.h>
#include <aws/codedeploy/model/DeregisterOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/GetApplicationRequest.h>
#include <aws/codedeploy/model/GetApplicationRevisionRequest.h>
#include <aws/codedeploy/model/GetDeploymentRequest.h>
#include <aws/codedeploy/model/GetDeploymentConfigRequest.h>
#include <aws/codedeploy/model/GetDeploymentGroupRequest.h>
#include <aws/codedeploy/model/GetDeploymentTargetRequest.h>
#include <aws/codedeploy/model/GetOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/ListApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/ListApplicationsRequest.h>
#include <aws/codedeploy/model/ListDeploymentConfigsRequest.h>
#include <aws/codedeploy/model/ListDeploymentGroupsRequest.h>
#include <aws/codedeploy/model/ListDeploymentTargetsRequest.h>
#include <aws/codedeploy/model/ListDeploymentsRequest.h>
#include <aws/codedeploy/model/ListGitHubAccountTokenNamesRequest.h>
#include <aws/codedeploy/model/ListOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/ListTagsForResourceRequest.h>
#include <aws/codedeploy/model/PutLifecycleEventHookExecutionStatusRequest.h>
#include <aws/codedeploy/model/RegisterApplicationRevisionRequest.h>
#include <aws/codedeploy/model/RegisterOnPremisesInstanceRequest.h>
#include <aws/codedeploy/model/RemoveTagsFromOnPremisesInstancesRequest.h>
#include <aws/codedeploy/model/StopDeploymentRequest.h>
#include <aws/codedeploy/model/TagResourceRequest.h>
#include <aws/codedeploy/model/UntagResourceRequest.h>
#include <aws/codedeploy/model/UpdateApplicationRequest.h>
#include <aws/codedeploy/model/UpdateDeploymentGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeDeploy;
using namespace Aws::CodeDeploy::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codedeploy";
static const char* ALLOCATION_TAG = "CodeDeployClient";

CodeDeployClient::CodeDeployClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeDeployClient::~CodeDeployClient()
{
}

void CodeDeployClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeDeploy");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeDeployEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeDeployClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AddTagsToOnPremisesInstancesOutcome CodeDeployClient::AddTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToOnPremisesInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToOnPremisesInstancesOutcomeCallable CodeDeployClient::AddTagsToOnPremisesInstancesCallable(const AddTagsToOnPremisesInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientAddTagsToOnPremisesInstancesAsyncHelper(CodeDeployClient const * const clientThis, const AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToOnPremisesInstances(request), context);
}

void CodeDeployClient::AddTagsToOnPremisesInstancesAsync(const AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientAddTagsToOnPremisesInstancesAsyncHelper( this, request, handler, context ); } );
}

BatchGetApplicationRevisionsOutcome CodeDeployClient::BatchGetApplicationRevisions(const BatchGetApplicationRevisionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetApplicationRevisionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetApplicationRevisionsOutcomeCallable CodeDeployClient::BatchGetApplicationRevisionsCallable(const BatchGetApplicationRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetApplicationRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetApplicationRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientBatchGetApplicationRevisionsAsyncHelper(CodeDeployClient const * const clientThis, const BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetApplicationRevisions(request), context);
}

void CodeDeployClient::BatchGetApplicationRevisionsAsync(const BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientBatchGetApplicationRevisionsAsyncHelper( this, request, handler, context ); } );
}

BatchGetApplicationsOutcome CodeDeployClient::BatchGetApplications(const BatchGetApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetApplicationsOutcomeCallable CodeDeployClient::BatchGetApplicationsCallable(const BatchGetApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientBatchGetApplicationsAsyncHelper(CodeDeployClient const * const clientThis, const BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetApplications(request), context);
}

void CodeDeployClient::BatchGetApplicationsAsync(const BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientBatchGetApplicationsAsyncHelper( this, request, handler, context ); } );
}

BatchGetDeploymentGroupsOutcome CodeDeployClient::BatchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetDeploymentGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDeploymentGroupsOutcomeCallable CodeDeployClient::BatchGetDeploymentGroupsCallable(const BatchGetDeploymentGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeploymentGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientBatchGetDeploymentGroupsAsyncHelper(CodeDeployClient const * const clientThis, const BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetDeploymentGroups(request), context);
}

void CodeDeployClient::BatchGetDeploymentGroupsAsync(const BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientBatchGetDeploymentGroupsAsyncHelper( this, request, handler, context ); } );
}

BatchGetDeploymentTargetsOutcome CodeDeployClient::BatchGetDeploymentTargets(const BatchGetDeploymentTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetDeploymentTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDeploymentTargetsOutcomeCallable CodeDeployClient::BatchGetDeploymentTargetsCallable(const BatchGetDeploymentTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeploymentTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientBatchGetDeploymentTargetsAsyncHelper(CodeDeployClient const * const clientThis, const BatchGetDeploymentTargetsRequest& request, const BatchGetDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetDeploymentTargets(request), context);
}

void CodeDeployClient::BatchGetDeploymentTargetsAsync(const BatchGetDeploymentTargetsRequest& request, const BatchGetDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientBatchGetDeploymentTargetsAsyncHelper( this, request, handler, context ); } );
}

BatchGetDeploymentsOutcome CodeDeployClient::BatchGetDeployments(const BatchGetDeploymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDeploymentsOutcomeCallable CodeDeployClient::BatchGetDeploymentsCallable(const BatchGetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientBatchGetDeploymentsAsyncHelper(CodeDeployClient const * const clientThis, const BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetDeployments(request), context);
}

void CodeDeployClient::BatchGetDeploymentsAsync(const BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientBatchGetDeploymentsAsyncHelper( this, request, handler, context ); } );
}

BatchGetOnPremisesInstancesOutcome CodeDeployClient::BatchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchGetOnPremisesInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetOnPremisesInstancesOutcomeCallable CodeDeployClient::BatchGetOnPremisesInstancesCallable(const BatchGetOnPremisesInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientBatchGetOnPremisesInstancesAsyncHelper(CodeDeployClient const * const clientThis, const BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetOnPremisesInstances(request), context);
}

void CodeDeployClient::BatchGetOnPremisesInstancesAsync(const BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientBatchGetOnPremisesInstancesAsyncHelper( this, request, handler, context ); } );
}

ContinueDeploymentOutcome CodeDeployClient::ContinueDeployment(const ContinueDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ContinueDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ContinueDeploymentOutcomeCallable CodeDeployClient::ContinueDeploymentCallable(const ContinueDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ContinueDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ContinueDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientContinueDeploymentAsyncHelper(CodeDeployClient const * const clientThis, const ContinueDeploymentRequest& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ContinueDeployment(request), context);
}

void CodeDeployClient::ContinueDeploymentAsync(const ContinueDeploymentRequest& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientContinueDeploymentAsyncHelper( this, request, handler, context ); } );
}

CreateApplicationOutcome CodeDeployClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable CodeDeployClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientCreateApplicationAsyncHelper(CodeDeployClient const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void CodeDeployClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentOutcome CodeDeployClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable CodeDeployClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientCreateDeploymentAsyncHelper(CodeDeployClient const * const clientThis, const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeployment(request), context);
}

void CodeDeployClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientCreateDeploymentAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentConfigOutcome CodeDeployClient::CreateDeploymentConfig(const CreateDeploymentConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDeploymentConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentConfigOutcomeCallable CodeDeployClient::CreateDeploymentConfigCallable(const CreateDeploymentConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientCreateDeploymentConfigAsyncHelper(CodeDeployClient const * const clientThis, const CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeploymentConfig(request), context);
}

void CodeDeployClient::CreateDeploymentConfigAsync(const CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientCreateDeploymentConfigAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentGroupOutcome CodeDeployClient::CreateDeploymentGroup(const CreateDeploymentGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDeploymentGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentGroupOutcomeCallable CodeDeployClient::CreateDeploymentGroupCallable(const CreateDeploymentGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientCreateDeploymentGroupAsyncHelper(CodeDeployClient const * const clientThis, const CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeploymentGroup(request), context);
}

void CodeDeployClient::CreateDeploymentGroupAsync(const CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientCreateDeploymentGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutcome CodeDeployClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable CodeDeployClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientDeleteApplicationAsyncHelper(CodeDeployClient const * const clientThis, const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplication(request), context);
}

void CodeDeployClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientDeleteApplicationAsyncHelper( this, request, handler, context ); } );
}

DeleteDeploymentConfigOutcome CodeDeployClient::DeleteDeploymentConfig(const DeleteDeploymentConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDeploymentConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentConfigOutcomeCallable CodeDeployClient::DeleteDeploymentConfigCallable(const DeleteDeploymentConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientDeleteDeploymentConfigAsyncHelper(CodeDeployClient const * const clientThis, const DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeploymentConfig(request), context);
}

void CodeDeployClient::DeleteDeploymentConfigAsync(const DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientDeleteDeploymentConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteDeploymentGroupOutcome CodeDeployClient::DeleteDeploymentGroup(const DeleteDeploymentGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDeploymentGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentGroupOutcomeCallable CodeDeployClient::DeleteDeploymentGroupCallable(const DeleteDeploymentGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientDeleteDeploymentGroupAsyncHelper(CodeDeployClient const * const clientThis, const DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeploymentGroup(request), context);
}

void CodeDeployClient::DeleteDeploymentGroupAsync(const DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientDeleteDeploymentGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteGitHubAccountTokenOutcome CodeDeployClient::DeleteGitHubAccountToken(const DeleteGitHubAccountTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGitHubAccountTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGitHubAccountTokenOutcomeCallable CodeDeployClient::DeleteGitHubAccountTokenCallable(const DeleteGitHubAccountTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGitHubAccountTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGitHubAccountToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientDeleteGitHubAccountTokenAsyncHelper(CodeDeployClient const * const clientThis, const DeleteGitHubAccountTokenRequest& request, const DeleteGitHubAccountTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGitHubAccountToken(request), context);
}

void CodeDeployClient::DeleteGitHubAccountTokenAsync(const DeleteGitHubAccountTokenRequest& request, const DeleteGitHubAccountTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientDeleteGitHubAccountTokenAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcesByExternalIdOutcome CodeDeployClient::DeleteResourcesByExternalId(const DeleteResourcesByExternalIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcesByExternalIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcesByExternalIdOutcomeCallable CodeDeployClient::DeleteResourcesByExternalIdCallable(const DeleteResourcesByExternalIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcesByExternalIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcesByExternalId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientDeleteResourcesByExternalIdAsyncHelper(CodeDeployClient const * const clientThis, const DeleteResourcesByExternalIdRequest& request, const DeleteResourcesByExternalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcesByExternalId(request), context);
}

void CodeDeployClient::DeleteResourcesByExternalIdAsync(const DeleteResourcesByExternalIdRequest& request, const DeleteResourcesByExternalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientDeleteResourcesByExternalIdAsyncHelper( this, request, handler, context ); } );
}

DeregisterOnPremisesInstanceOutcome CodeDeployClient::DeregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterOnPremisesInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterOnPremisesInstanceOutcomeCallable CodeDeployClient::DeregisterOnPremisesInstanceCallable(const DeregisterOnPremisesInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientDeregisterOnPremisesInstanceAsyncHelper(CodeDeployClient const * const clientThis, const DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterOnPremisesInstance(request), context);
}

void CodeDeployClient::DeregisterOnPremisesInstanceAsync(const DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientDeregisterOnPremisesInstanceAsyncHelper( this, request, handler, context ); } );
}

GetApplicationOutcome CodeDeployClient::GetApplication(const GetApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable CodeDeployClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientGetApplicationAsyncHelper(CodeDeployClient const * const clientThis, const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplication(request), context);
}

void CodeDeployClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientGetApplicationAsyncHelper( this, request, handler, context ); } );
}

GetApplicationRevisionOutcome CodeDeployClient::GetApplicationRevision(const GetApplicationRevisionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetApplicationRevisionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationRevisionOutcomeCallable CodeDeployClient::GetApplicationRevisionCallable(const GetApplicationRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientGetApplicationRevisionAsyncHelper(CodeDeployClient const * const clientThis, const GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplicationRevision(request), context);
}

void CodeDeployClient::GetApplicationRevisionAsync(const GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientGetApplicationRevisionAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentOutcome CodeDeployClient::GetDeployment(const GetDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentOutcomeCallable CodeDeployClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientGetDeploymentAsyncHelper(CodeDeployClient const * const clientThis, const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeployment(request), context);
}

void CodeDeployClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientGetDeploymentAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentConfigOutcome CodeDeployClient::GetDeploymentConfig(const GetDeploymentConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeploymentConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentConfigOutcomeCallable CodeDeployClient::GetDeploymentConfigCallable(const GetDeploymentConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientGetDeploymentConfigAsyncHelper(CodeDeployClient const * const clientThis, const GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeploymentConfig(request), context);
}

void CodeDeployClient::GetDeploymentConfigAsync(const GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientGetDeploymentConfigAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentGroupOutcome CodeDeployClient::GetDeploymentGroup(const GetDeploymentGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeploymentGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentGroupOutcomeCallable CodeDeployClient::GetDeploymentGroupCallable(const GetDeploymentGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientGetDeploymentGroupAsyncHelper(CodeDeployClient const * const clientThis, const GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeploymentGroup(request), context);
}

void CodeDeployClient::GetDeploymentGroupAsync(const GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientGetDeploymentGroupAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentTargetOutcome CodeDeployClient::GetDeploymentTarget(const GetDeploymentTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeploymentTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentTargetOutcomeCallable CodeDeployClient::GetDeploymentTargetCallable(const GetDeploymentTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientGetDeploymentTargetAsyncHelper(CodeDeployClient const * const clientThis, const GetDeploymentTargetRequest& request, const GetDeploymentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeploymentTarget(request), context);
}

void CodeDeployClient::GetDeploymentTargetAsync(const GetDeploymentTargetRequest& request, const GetDeploymentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientGetDeploymentTargetAsyncHelper( this, request, handler, context ); } );
}

GetOnPremisesInstanceOutcome CodeDeployClient::GetOnPremisesInstance(const GetOnPremisesInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetOnPremisesInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOnPremisesInstanceOutcomeCallable CodeDeployClient::GetOnPremisesInstanceCallable(const GetOnPremisesInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientGetOnPremisesInstanceAsyncHelper(CodeDeployClient const * const clientThis, const GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOnPremisesInstance(request), context);
}

void CodeDeployClient::GetOnPremisesInstanceAsync(const GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientGetOnPremisesInstanceAsyncHelper( this, request, handler, context ); } );
}

ListApplicationRevisionsOutcome CodeDeployClient::ListApplicationRevisions(const ListApplicationRevisionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApplicationRevisionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationRevisionsOutcomeCallable CodeDeployClient::ListApplicationRevisionsCallable(const ListApplicationRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListApplicationRevisionsAsyncHelper(CodeDeployClient const * const clientThis, const ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationRevisions(request), context);
}

void CodeDeployClient::ListApplicationRevisionsAsync(const ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListApplicationRevisionsAsyncHelper( this, request, handler, context ); } );
}

ListApplicationsOutcome CodeDeployClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable CodeDeployClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListApplicationsAsyncHelper(CodeDeployClient const * const clientThis, const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplications(request), context);
}

void CodeDeployClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListApplicationsAsyncHelper( this, request, handler, context ); } );
}

ListDeploymentConfigsOutcome CodeDeployClient::ListDeploymentConfigs(const ListDeploymentConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDeploymentConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentConfigsOutcomeCallable CodeDeployClient::ListDeploymentConfigsCallable(const ListDeploymentConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListDeploymentConfigsAsyncHelper(CodeDeployClient const * const clientThis, const ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeploymentConfigs(request), context);
}

void CodeDeployClient::ListDeploymentConfigsAsync(const ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListDeploymentConfigsAsyncHelper( this, request, handler, context ); } );
}

ListDeploymentGroupsOutcome CodeDeployClient::ListDeploymentGroups(const ListDeploymentGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDeploymentGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentGroupsOutcomeCallable CodeDeployClient::ListDeploymentGroupsCallable(const ListDeploymentGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListDeploymentGroupsAsyncHelper(CodeDeployClient const * const clientThis, const ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeploymentGroups(request), context);
}

void CodeDeployClient::ListDeploymentGroupsAsync(const ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListDeploymentGroupsAsyncHelper( this, request, handler, context ); } );
}

ListDeploymentTargetsOutcome CodeDeployClient::ListDeploymentTargets(const ListDeploymentTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDeploymentTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentTargetsOutcomeCallable CodeDeployClient::ListDeploymentTargetsCallable(const ListDeploymentTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListDeploymentTargetsAsyncHelper(CodeDeployClient const * const clientThis, const ListDeploymentTargetsRequest& request, const ListDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeploymentTargets(request), context);
}

void CodeDeployClient::ListDeploymentTargetsAsync(const ListDeploymentTargetsRequest& request, const ListDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListDeploymentTargetsAsyncHelper( this, request, handler, context ); } );
}

ListDeploymentsOutcome CodeDeployClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentsOutcomeCallable CodeDeployClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListDeploymentsAsyncHelper(CodeDeployClient const * const clientThis, const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeployments(request), context);
}

void CodeDeployClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListDeploymentsAsyncHelper( this, request, handler, context ); } );
}

ListGitHubAccountTokenNamesOutcome CodeDeployClient::ListGitHubAccountTokenNames(const ListGitHubAccountTokenNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGitHubAccountTokenNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGitHubAccountTokenNamesOutcomeCallable CodeDeployClient::ListGitHubAccountTokenNamesCallable(const ListGitHubAccountTokenNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGitHubAccountTokenNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGitHubAccountTokenNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListGitHubAccountTokenNamesAsyncHelper(CodeDeployClient const * const clientThis, const ListGitHubAccountTokenNamesRequest& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGitHubAccountTokenNames(request), context);
}

void CodeDeployClient::ListGitHubAccountTokenNamesAsync(const ListGitHubAccountTokenNamesRequest& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListGitHubAccountTokenNamesAsyncHelper( this, request, handler, context ); } );
}

ListOnPremisesInstancesOutcome CodeDeployClient::ListOnPremisesInstances(const ListOnPremisesInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOnPremisesInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOnPremisesInstancesOutcomeCallable CodeDeployClient::ListOnPremisesInstancesCallable(const ListOnPremisesInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListOnPremisesInstancesAsyncHelper(CodeDeployClient const * const clientThis, const ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOnPremisesInstances(request), context);
}

void CodeDeployClient::ListOnPremisesInstancesAsync(const ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListOnPremisesInstancesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CodeDeployClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodeDeployClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientListTagsForResourceAsyncHelper(CodeDeployClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CodeDeployClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutLifecycleEventHookExecutionStatusOutcome CodeDeployClient::PutLifecycleEventHookExecutionStatus(const PutLifecycleEventHookExecutionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLifecycleEventHookExecutionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLifecycleEventHookExecutionStatusOutcomeCallable CodeDeployClient::PutLifecycleEventHookExecutionStatusCallable(const PutLifecycleEventHookExecutionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLifecycleEventHookExecutionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecycleEventHookExecutionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientPutLifecycleEventHookExecutionStatusAsyncHelper(CodeDeployClient const * const clientThis, const PutLifecycleEventHookExecutionStatusRequest& request, const PutLifecycleEventHookExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLifecycleEventHookExecutionStatus(request), context);
}

void CodeDeployClient::PutLifecycleEventHookExecutionStatusAsync(const PutLifecycleEventHookExecutionStatusRequest& request, const PutLifecycleEventHookExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientPutLifecycleEventHookExecutionStatusAsyncHelper( this, request, handler, context ); } );
}

RegisterApplicationRevisionOutcome CodeDeployClient::RegisterApplicationRevision(const RegisterApplicationRevisionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterApplicationRevisionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterApplicationRevisionOutcomeCallable CodeDeployClient::RegisterApplicationRevisionCallable(const RegisterApplicationRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterApplicationRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterApplicationRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientRegisterApplicationRevisionAsyncHelper(CodeDeployClient const * const clientThis, const RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterApplicationRevision(request), context);
}

void CodeDeployClient::RegisterApplicationRevisionAsync(const RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientRegisterApplicationRevisionAsyncHelper( this, request, handler, context ); } );
}

RegisterOnPremisesInstanceOutcome CodeDeployClient::RegisterOnPremisesInstance(const RegisterOnPremisesInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterOnPremisesInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterOnPremisesInstanceOutcomeCallable CodeDeployClient::RegisterOnPremisesInstanceCallable(const RegisterOnPremisesInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientRegisterOnPremisesInstanceAsyncHelper(CodeDeployClient const * const clientThis, const RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterOnPremisesInstance(request), context);
}

void CodeDeployClient::RegisterOnPremisesInstanceAsync(const RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientRegisterOnPremisesInstanceAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromOnPremisesInstancesOutcome CodeDeployClient::RemoveTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromOnPremisesInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromOnPremisesInstancesOutcomeCallable CodeDeployClient::RemoveTagsFromOnPremisesInstancesCallable(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientRemoveTagsFromOnPremisesInstancesAsyncHelper(CodeDeployClient const * const clientThis, const RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromOnPremisesInstances(request), context);
}

void CodeDeployClient::RemoveTagsFromOnPremisesInstancesAsync(const RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientRemoveTagsFromOnPremisesInstancesAsyncHelper( this, request, handler, context ); } );
}

StopDeploymentOutcome CodeDeployClient::StopDeployment(const StopDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDeploymentOutcomeCallable CodeDeployClient::StopDeploymentCallable(const StopDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientStopDeploymentAsyncHelper(CodeDeployClient const * const clientThis, const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDeployment(request), context);
}

void CodeDeployClient::StopDeploymentAsync(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientStopDeploymentAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CodeDeployClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodeDeployClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientTagResourceAsyncHelper(CodeDeployClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CodeDeployClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CodeDeployClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodeDeployClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientUntagResourceAsyncHelper(CodeDeployClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CodeDeployClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationOutcome CodeDeployClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable CodeDeployClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientUpdateApplicationAsyncHelper(CodeDeployClient const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void CodeDeployClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

UpdateDeploymentGroupOutcome CodeDeployClient::UpdateDeploymentGroup(const UpdateDeploymentGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDeploymentGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeploymentGroupOutcomeCallable CodeDeployClient::UpdateDeploymentGroupCallable(const UpdateDeploymentGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClientUpdateDeploymentGroupAsyncHelper(CodeDeployClient const * const clientThis, const UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDeploymentGroup(request), context);
}

void CodeDeployClient::UpdateDeploymentGroupAsync(const UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeDeployClientUpdateDeploymentGroupAsyncHelper( this, request, handler, context ); } );
}

