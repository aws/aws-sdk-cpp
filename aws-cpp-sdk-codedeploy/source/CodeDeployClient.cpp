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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/codedeploy/CodeDeployClient.h>
#include <aws/codedeploy/CodeDeployErrorMarshaller.h>
#include <aws/codedeploy/CodeDeployEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CodeDeployClient::SERVICE_NAME = "codedeploy";
const char* CodeDeployClient::ALLOCATION_TAG = "CodeDeployClient";

CodeDeployClient::CodeDeployClient(const CodeDeploy::CodeDeployClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const AWSCredentials& credentials,
                                   std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider,
                                   const CodeDeploy::CodeDeployClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CodeDeployEndpointProviderBase> endpointProvider,
                                   const CodeDeploy::CodeDeployClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CodeDeployClient::CodeDeployClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeDeployClient::CodeDeployClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeDeployErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeDeployEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CodeDeployClient::~CodeDeployClient()
{
}

std::shared_ptr<CodeDeployEndpointProviderBase>& CodeDeployClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CodeDeployClient::init(const CodeDeploy::CodeDeployClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeDeploy");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CodeDeployClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddTagsToOnPremisesInstancesOutcome CodeDeployClient::AddTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTagsToOnPremisesInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTagsToOnPremisesInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsToOnPremisesInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToOnPremisesInstancesOutcomeCallable CodeDeployClient::AddTagsToOnPremisesInstancesCallable(const AddTagsToOnPremisesInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::AddTagsToOnPremisesInstancesAsync(const AddTagsToOnPremisesInstancesRequest& request, const AddTagsToOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTagsToOnPremisesInstances(request), context);
    } );
}

BatchGetApplicationRevisionsOutcome CodeDeployClient::BatchGetApplicationRevisions(const BatchGetApplicationRevisionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetApplicationRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetApplicationRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetApplicationRevisionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetApplicationRevisionsOutcomeCallable CodeDeployClient::BatchGetApplicationRevisionsCallable(const BatchGetApplicationRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetApplicationRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetApplicationRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetApplicationRevisionsAsync(const BatchGetApplicationRevisionsRequest& request, const BatchGetApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetApplicationRevisions(request), context);
    } );
}

BatchGetApplicationsOutcome CodeDeployClient::BatchGetApplications(const BatchGetApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetApplicationsOutcomeCallable CodeDeployClient::BatchGetApplicationsCallable(const BatchGetApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetApplicationsAsync(const BatchGetApplicationsRequest& request, const BatchGetApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetApplications(request), context);
    } );
}

BatchGetDeploymentGroupsOutcome CodeDeployClient::BatchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetDeploymentGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetDeploymentGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetDeploymentGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDeploymentGroupsOutcomeCallable CodeDeployClient::BatchGetDeploymentGroupsCallable(const BatchGetDeploymentGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeploymentGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetDeploymentGroupsAsync(const BatchGetDeploymentGroupsRequest& request, const BatchGetDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetDeploymentGroups(request), context);
    } );
}

BatchGetDeploymentTargetsOutcome CodeDeployClient::BatchGetDeploymentTargets(const BatchGetDeploymentTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetDeploymentTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetDeploymentTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetDeploymentTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDeploymentTargetsOutcomeCallable CodeDeployClient::BatchGetDeploymentTargetsCallable(const BatchGetDeploymentTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeploymentTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetDeploymentTargetsAsync(const BatchGetDeploymentTargetsRequest& request, const BatchGetDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetDeploymentTargets(request), context);
    } );
}

BatchGetDeploymentsOutcome CodeDeployClient::BatchGetDeployments(const BatchGetDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetDeploymentsOutcomeCallable CodeDeployClient::BatchGetDeploymentsCallable(const BatchGetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetDeploymentsAsync(const BatchGetDeploymentsRequest& request, const BatchGetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetDeployments(request), context);
    } );
}

BatchGetOnPremisesInstancesOutcome CodeDeployClient::BatchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetOnPremisesInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetOnPremisesInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetOnPremisesInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetOnPremisesInstancesOutcomeCallable CodeDeployClient::BatchGetOnPremisesInstancesCallable(const BatchGetOnPremisesInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::BatchGetOnPremisesInstancesAsync(const BatchGetOnPremisesInstancesRequest& request, const BatchGetOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetOnPremisesInstances(request), context);
    } );
}

ContinueDeploymentOutcome CodeDeployClient::ContinueDeployment(const ContinueDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ContinueDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ContinueDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ContinueDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ContinueDeploymentOutcomeCallable CodeDeployClient::ContinueDeploymentCallable(const ContinueDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ContinueDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ContinueDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ContinueDeploymentAsync(const ContinueDeploymentRequest& request, const ContinueDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ContinueDeployment(request), context);
    } );
}

CreateApplicationOutcome CodeDeployClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable CodeDeployClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplication(request), context);
    } );
}

CreateDeploymentOutcome CodeDeployClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable CodeDeployClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeployment(request), context);
    } );
}

CreateDeploymentConfigOutcome CodeDeployClient::CreateDeploymentConfig(const CreateDeploymentConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeploymentConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeploymentConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDeploymentConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentConfigOutcomeCallable CodeDeployClient::CreateDeploymentConfigCallable(const CreateDeploymentConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::CreateDeploymentConfigAsync(const CreateDeploymentConfigRequest& request, const CreateDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeploymentConfig(request), context);
    } );
}

CreateDeploymentGroupOutcome CodeDeployClient::CreateDeploymentGroup(const CreateDeploymentGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeploymentGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeploymentGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDeploymentGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentGroupOutcomeCallable CodeDeployClient::CreateDeploymentGroupCallable(const CreateDeploymentGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::CreateDeploymentGroupAsync(const CreateDeploymentGroupRequest& request, const CreateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeploymentGroup(request), context);
    } );
}

DeleteApplicationOutcome CodeDeployClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable CodeDeployClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplication(request), context);
    } );
}

DeleteDeploymentConfigOutcome CodeDeployClient::DeleteDeploymentConfig(const DeleteDeploymentConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeploymentConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeploymentConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDeploymentConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentConfigOutcomeCallable CodeDeployClient::DeleteDeploymentConfigCallable(const DeleteDeploymentConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteDeploymentConfigAsync(const DeleteDeploymentConfigRequest& request, const DeleteDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDeploymentConfig(request), context);
    } );
}

DeleteDeploymentGroupOutcome CodeDeployClient::DeleteDeploymentGroup(const DeleteDeploymentGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeploymentGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeploymentGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDeploymentGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentGroupOutcomeCallable CodeDeployClient::DeleteDeploymentGroupCallable(const DeleteDeploymentGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteDeploymentGroupAsync(const DeleteDeploymentGroupRequest& request, const DeleteDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDeploymentGroup(request), context);
    } );
}

DeleteGitHubAccountTokenOutcome CodeDeployClient::DeleteGitHubAccountToken(const DeleteGitHubAccountTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGitHubAccountToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGitHubAccountToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGitHubAccountTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGitHubAccountTokenOutcomeCallable CodeDeployClient::DeleteGitHubAccountTokenCallable(const DeleteGitHubAccountTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGitHubAccountTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGitHubAccountToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteGitHubAccountTokenAsync(const DeleteGitHubAccountTokenRequest& request, const DeleteGitHubAccountTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteGitHubAccountToken(request), context);
    } );
}

DeleteResourcesByExternalIdOutcome CodeDeployClient::DeleteResourcesByExternalId(const DeleteResourcesByExternalIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcesByExternalId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcesByExternalId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourcesByExternalIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcesByExternalIdOutcomeCallable CodeDeployClient::DeleteResourcesByExternalIdCallable(const DeleteResourcesByExternalIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcesByExternalIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcesByExternalId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeleteResourcesByExternalIdAsync(const DeleteResourcesByExternalIdRequest& request, const DeleteResourcesByExternalIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcesByExternalId(request), context);
    } );
}

DeregisterOnPremisesInstanceOutcome CodeDeployClient::DeregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterOnPremisesInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterOnPremisesInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterOnPremisesInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterOnPremisesInstanceOutcomeCallable CodeDeployClient::DeregisterOnPremisesInstanceCallable(const DeregisterOnPremisesInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::DeregisterOnPremisesInstanceAsync(const DeregisterOnPremisesInstanceRequest& request, const DeregisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterOnPremisesInstance(request), context);
    } );
}

GetApplicationOutcome CodeDeployClient::GetApplication(const GetApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable CodeDeployClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApplication(request), context);
    } );
}

GetApplicationRevisionOutcome CodeDeployClient::GetApplicationRevision(const GetApplicationRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplicationRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplicationRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetApplicationRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationRevisionOutcomeCallable CodeDeployClient::GetApplicationRevisionCallable(const GetApplicationRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetApplicationRevisionAsync(const GetApplicationRevisionRequest& request, const GetApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApplicationRevision(request), context);
    } );
}

GetDeploymentOutcome CodeDeployClient::GetDeployment(const GetDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentOutcomeCallable CodeDeployClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeployment(request), context);
    } );
}

GetDeploymentConfigOutcome CodeDeployClient::GetDeploymentConfig(const GetDeploymentConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeploymentConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeploymentConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeploymentConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentConfigOutcomeCallable CodeDeployClient::GetDeploymentConfigCallable(const GetDeploymentConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetDeploymentConfigAsync(const GetDeploymentConfigRequest& request, const GetDeploymentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeploymentConfig(request), context);
    } );
}

GetDeploymentGroupOutcome CodeDeployClient::GetDeploymentGroup(const GetDeploymentGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeploymentGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeploymentGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeploymentGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentGroupOutcomeCallable CodeDeployClient::GetDeploymentGroupCallable(const GetDeploymentGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetDeploymentGroupAsync(const GetDeploymentGroupRequest& request, const GetDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeploymentGroup(request), context);
    } );
}

GetDeploymentTargetOutcome CodeDeployClient::GetDeploymentTarget(const GetDeploymentTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeploymentTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeploymentTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeploymentTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentTargetOutcomeCallable CodeDeployClient::GetDeploymentTargetCallable(const GetDeploymentTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeploymentTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetDeploymentTargetAsync(const GetDeploymentTargetRequest& request, const GetDeploymentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeploymentTarget(request), context);
    } );
}

GetOnPremisesInstanceOutcome CodeDeployClient::GetOnPremisesInstance(const GetOnPremisesInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOnPremisesInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOnPremisesInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOnPremisesInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOnPremisesInstanceOutcomeCallable CodeDeployClient::GetOnPremisesInstanceCallable(const GetOnPremisesInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::GetOnPremisesInstanceAsync(const GetOnPremisesInstanceRequest& request, const GetOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOnPremisesInstance(request), context);
    } );
}

ListApplicationRevisionsOutcome CodeDeployClient::ListApplicationRevisions(const ListApplicationRevisionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListApplicationRevisionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationRevisionsOutcomeCallable CodeDeployClient::ListApplicationRevisionsCallable(const ListApplicationRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListApplicationRevisionsAsync(const ListApplicationRevisionsRequest& request, const ListApplicationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplicationRevisions(request), context);
    } );
}

ListApplicationsOutcome CodeDeployClient::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable CodeDeployClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplications(request), context);
    } );
}

ListDeploymentConfigsOutcome CodeDeployClient::ListDeploymentConfigs(const ListDeploymentConfigsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeploymentConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeploymentConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDeploymentConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentConfigsOutcomeCallable CodeDeployClient::ListDeploymentConfigsCallable(const ListDeploymentConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListDeploymentConfigsAsync(const ListDeploymentConfigsRequest& request, const ListDeploymentConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeploymentConfigs(request), context);
    } );
}

ListDeploymentGroupsOutcome CodeDeployClient::ListDeploymentGroups(const ListDeploymentGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeploymentGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeploymentGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDeploymentGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentGroupsOutcomeCallable CodeDeployClient::ListDeploymentGroupsCallable(const ListDeploymentGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListDeploymentGroupsAsync(const ListDeploymentGroupsRequest& request, const ListDeploymentGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeploymentGroups(request), context);
    } );
}

ListDeploymentTargetsOutcome CodeDeployClient::ListDeploymentTargets(const ListDeploymentTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeploymentTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeploymentTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDeploymentTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentTargetsOutcomeCallable CodeDeployClient::ListDeploymentTargetsCallable(const ListDeploymentTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeploymentTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListDeploymentTargetsAsync(const ListDeploymentTargetsRequest& request, const ListDeploymentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeploymentTargets(request), context);
    } );
}

ListDeploymentsOutcome CodeDeployClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentsOutcomeCallable CodeDeployClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeployments(request), context);
    } );
}

ListGitHubAccountTokenNamesOutcome CodeDeployClient::ListGitHubAccountTokenNames(const ListGitHubAccountTokenNamesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGitHubAccountTokenNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGitHubAccountTokenNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGitHubAccountTokenNamesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGitHubAccountTokenNamesOutcomeCallable CodeDeployClient::ListGitHubAccountTokenNamesCallable(const ListGitHubAccountTokenNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGitHubAccountTokenNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGitHubAccountTokenNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListGitHubAccountTokenNamesAsync(const ListGitHubAccountTokenNamesRequest& request, const ListGitHubAccountTokenNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGitHubAccountTokenNames(request), context);
    } );
}

ListOnPremisesInstancesOutcome CodeDeployClient::ListOnPremisesInstances(const ListOnPremisesInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOnPremisesInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOnPremisesInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOnPremisesInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOnPremisesInstancesOutcomeCallable CodeDeployClient::ListOnPremisesInstancesCallable(const ListOnPremisesInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListOnPremisesInstancesAsync(const ListOnPremisesInstancesRequest& request, const ListOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOnPremisesInstances(request), context);
    } );
}

ListTagsForResourceOutcome CodeDeployClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodeDeployClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutLifecycleEventHookExecutionStatusOutcome CodeDeployClient::PutLifecycleEventHookExecutionStatus(const PutLifecycleEventHookExecutionStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLifecycleEventHookExecutionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLifecycleEventHookExecutionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutLifecycleEventHookExecutionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLifecycleEventHookExecutionStatusOutcomeCallable CodeDeployClient::PutLifecycleEventHookExecutionStatusCallable(const PutLifecycleEventHookExecutionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLifecycleEventHookExecutionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecycleEventHookExecutionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::PutLifecycleEventHookExecutionStatusAsync(const PutLifecycleEventHookExecutionStatusRequest& request, const PutLifecycleEventHookExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLifecycleEventHookExecutionStatus(request), context);
    } );
}

RegisterApplicationRevisionOutcome CodeDeployClient::RegisterApplicationRevision(const RegisterApplicationRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterApplicationRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterApplicationRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterApplicationRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterApplicationRevisionOutcomeCallable CodeDeployClient::RegisterApplicationRevisionCallable(const RegisterApplicationRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterApplicationRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterApplicationRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::RegisterApplicationRevisionAsync(const RegisterApplicationRevisionRequest& request, const RegisterApplicationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterApplicationRevision(request), context);
    } );
}

RegisterOnPremisesInstanceOutcome CodeDeployClient::RegisterOnPremisesInstance(const RegisterOnPremisesInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterOnPremisesInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterOnPremisesInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterOnPremisesInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterOnPremisesInstanceOutcomeCallable CodeDeployClient::RegisterOnPremisesInstanceCallable(const RegisterOnPremisesInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterOnPremisesInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterOnPremisesInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::RegisterOnPremisesInstanceAsync(const RegisterOnPremisesInstanceRequest& request, const RegisterOnPremisesInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterOnPremisesInstance(request), context);
    } );
}

RemoveTagsFromOnPremisesInstancesOutcome CodeDeployClient::RemoveTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTagsFromOnPremisesInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTagsFromOnPremisesInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsFromOnPremisesInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromOnPremisesInstancesOutcomeCallable CodeDeployClient::RemoveTagsFromOnPremisesInstancesCallable(const RemoveTagsFromOnPremisesInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromOnPremisesInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromOnPremisesInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::RemoveTagsFromOnPremisesInstancesAsync(const RemoveTagsFromOnPremisesInstancesRequest& request, const RemoveTagsFromOnPremisesInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTagsFromOnPremisesInstances(request), context);
    } );
}

StopDeploymentOutcome CodeDeployClient::StopDeployment(const StopDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDeploymentOutcomeCallable CodeDeployClient::StopDeploymentCallable(const StopDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::StopDeploymentAsync(const StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopDeployment(request), context);
    } );
}

TagResourceOutcome CodeDeployClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodeDeployClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome CodeDeployClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodeDeployClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateApplicationOutcome CodeDeployClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable CodeDeployClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplication(request), context);
    } );
}

UpdateDeploymentGroupOutcome CodeDeployClient::UpdateDeploymentGroup(const UpdateDeploymentGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeploymentGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeploymentGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDeploymentGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeploymentGroupOutcomeCallable CodeDeployClient::UpdateDeploymentGroupCallable(const UpdateDeploymentGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeploymentGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeploymentGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeDeployClient::UpdateDeploymentGroupAsync(const UpdateDeploymentGroupRequest& request, const UpdateDeploymentGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDeploymentGroup(request), context);
    } );
}

