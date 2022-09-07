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

#include <aws/elasticmapreduce/EMRClient.h>
#include <aws/elasticmapreduce/EMREndpoint.h>
#include <aws/elasticmapreduce/EMRErrorMarshaller.h>
#include <aws/elasticmapreduce/model/AddInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/AddInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/AddJobFlowStepsRequest.h>
#include <aws/elasticmapreduce/model/AddTagsRequest.h>
#include <aws/elasticmapreduce/model/CancelStepsRequest.h>
#include <aws/elasticmapreduce/model/CreateSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/CreateStudioRequest.h>
#include <aws/elasticmapreduce/model/CreateStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/DeleteSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DeleteStudioRequest.h>
#include <aws/elasticmapreduce/model/DeleteStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/DescribeClusterRequest.h>
#include <aws/elasticmapreduce/model/DescribeNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/DescribeReleaseLabelRequest.h>
#include <aws/elasticmapreduce/model/DescribeSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DescribeStepRequest.h>
#include <aws/elasticmapreduce/model/DescribeStudioRequest.h>
#include <aws/elasticmapreduce/model/GetAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/GetBlockPublicAccessConfigurationRequest.h>
#include <aws/elasticmapreduce/model/GetManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/GetStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsRequest.h>
#include <aws/elasticmapreduce/model/ListClustersRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/ListInstancesRequest.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsRequest.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsRequest.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsRequest.h>
#include <aws/elasticmapreduce/model/ListStepsRequest.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsRequest.h>
#include <aws/elasticmapreduce/model/ListStudiosRequest.h>
#include <aws/elasticmapreduce/model/ModifyClusterRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/PutAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/PutAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/PutBlockPublicAccessConfigurationRequest.h>
#include <aws/elasticmapreduce/model/PutManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveAutoTerminationPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveTagsRequest.h>
#include <aws/elasticmapreduce/model/RunJobFlowRequest.h>
#include <aws/elasticmapreduce/model/SetTerminationProtectionRequest.h>
#include <aws/elasticmapreduce/model/SetVisibleToAllUsersRequest.h>
#include <aws/elasticmapreduce/model/StartNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/StopNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/TerminateJobFlowsRequest.h>
#include <aws/elasticmapreduce/model/UpdateStudioRequest.h>
#include <aws/elasticmapreduce/model/UpdateStudioSessionMappingRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMR;
using namespace Aws::EMR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "elasticmapreduce";
static const char* ALLOCATION_TAG = "EMRClient";

EMRClient::EMRClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::EMRClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::EMRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::~EMRClient()
{
}

void EMRClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EMR");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EMREndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void EMRClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddInstanceFleetOutcome EMRClient::AddInstanceFleet(const AddInstanceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddInstanceFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddInstanceFleetOutcomeCallable EMRClient::AddInstanceFleetCallable(const AddInstanceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddInstanceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddInstanceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientAddInstanceFleetAsyncHelper(EMRClient const * const clientThis, const AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddInstanceFleet(request), context);
}

void EMRClient::AddInstanceFleetAsync(const AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientAddInstanceFleetAsyncHelper( this, request, handler, context ); } );
}

AddInstanceGroupsOutcome EMRClient::AddInstanceGroups(const AddInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddInstanceGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddInstanceGroupsOutcomeCallable EMRClient::AddInstanceGroupsCallable(const AddInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientAddInstanceGroupsAsyncHelper(EMRClient const * const clientThis, const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddInstanceGroups(request), context);
}

void EMRClient::AddInstanceGroupsAsync(const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientAddInstanceGroupsAsyncHelper( this, request, handler, context ); } );
}

AddJobFlowStepsOutcome EMRClient::AddJobFlowSteps(const AddJobFlowStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddJobFlowStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddJobFlowStepsOutcomeCallable EMRClient::AddJobFlowStepsCallable(const AddJobFlowStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddJobFlowStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddJobFlowSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientAddJobFlowStepsAsyncHelper(EMRClient const * const clientThis, const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddJobFlowSteps(request), context);
}

void EMRClient::AddJobFlowStepsAsync(const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientAddJobFlowStepsAsyncHelper( this, request, handler, context ); } );
}

AddTagsOutcome EMRClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable EMRClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientAddTagsAsyncHelper(EMRClient const * const clientThis, const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTags(request), context);
}

void EMRClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientAddTagsAsyncHelper( this, request, handler, context ); } );
}

CancelStepsOutcome EMRClient::CancelSteps(const CancelStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelStepsOutcomeCallable EMRClient::CancelStepsCallable(const CancelStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientCancelStepsAsyncHelper(EMRClient const * const clientThis, const CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelSteps(request), context);
}

void EMRClient::CancelStepsAsync(const CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientCancelStepsAsyncHelper( this, request, handler, context ); } );
}

CreateSecurityConfigurationOutcome EMRClient::CreateSecurityConfiguration(const CreateSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityConfigurationOutcomeCallable EMRClient::CreateSecurityConfigurationCallable(const CreateSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientCreateSecurityConfigurationAsyncHelper(EMRClient const * const clientThis, const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSecurityConfiguration(request), context);
}

void EMRClient::CreateSecurityConfigurationAsync(const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientCreateSecurityConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateStudioOutcome EMRClient::CreateStudio(const CreateStudioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStudioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioOutcomeCallable EMRClient::CreateStudioCallable(const CreateStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientCreateStudioAsyncHelper(EMRClient const * const clientThis, const CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStudio(request), context);
}

void EMRClient::CreateStudioAsync(const CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientCreateStudioAsyncHelper( this, request, handler, context ); } );
}

CreateStudioSessionMappingOutcome EMRClient::CreateStudioSessionMapping(const CreateStudioSessionMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStudioSessionMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioSessionMappingOutcomeCallable EMRClient::CreateStudioSessionMappingCallable(const CreateStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientCreateStudioSessionMappingAsyncHelper(EMRClient const * const clientThis, const CreateStudioSessionMappingRequest& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStudioSessionMapping(request), context);
}

void EMRClient::CreateStudioSessionMappingAsync(const CreateStudioSessionMappingRequest& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientCreateStudioSessionMappingAsyncHelper( this, request, handler, context ); } );
}

DeleteSecurityConfigurationOutcome EMRClient::DeleteSecurityConfiguration(const DeleteSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityConfigurationOutcomeCallable EMRClient::DeleteSecurityConfigurationCallable(const DeleteSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDeleteSecurityConfigurationAsyncHelper(EMRClient const * const clientThis, const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSecurityConfiguration(request), context);
}

void EMRClient::DeleteSecurityConfigurationAsync(const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDeleteSecurityConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteStudioOutcome EMRClient::DeleteStudio(const DeleteStudioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStudioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioOutcomeCallable EMRClient::DeleteStudioCallable(const DeleteStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDeleteStudioAsyncHelper(EMRClient const * const clientThis, const DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStudio(request), context);
}

void EMRClient::DeleteStudioAsync(const DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDeleteStudioAsyncHelper( this, request, handler, context ); } );
}

DeleteStudioSessionMappingOutcome EMRClient::DeleteStudioSessionMapping(const DeleteStudioSessionMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStudioSessionMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioSessionMappingOutcomeCallable EMRClient::DeleteStudioSessionMappingCallable(const DeleteStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDeleteStudioSessionMappingAsyncHelper(EMRClient const * const clientThis, const DeleteStudioSessionMappingRequest& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStudioSessionMapping(request), context);
}

void EMRClient::DeleteStudioSessionMappingAsync(const DeleteStudioSessionMappingRequest& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDeleteStudioSessionMappingAsyncHelper( this, request, handler, context ); } );
}

DescribeClusterOutcome EMRClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOutcomeCallable EMRClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDescribeClusterAsyncHelper(EMRClient const * const clientThis, const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCluster(request), context);
}

void EMRClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDescribeClusterAsyncHelper( this, request, handler, context ); } );
}

DescribeNotebookExecutionOutcome EMRClient::DescribeNotebookExecution(const DescribeNotebookExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeNotebookExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotebookExecutionOutcomeCallable EMRClient::DescribeNotebookExecutionCallable(const DescribeNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDescribeNotebookExecutionAsyncHelper(EMRClient const * const clientThis, const DescribeNotebookExecutionRequest& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNotebookExecution(request), context);
}

void EMRClient::DescribeNotebookExecutionAsync(const DescribeNotebookExecutionRequest& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDescribeNotebookExecutionAsyncHelper( this, request, handler, context ); } );
}

DescribeReleaseLabelOutcome EMRClient::DescribeReleaseLabel(const DescribeReleaseLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReleaseLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReleaseLabelOutcomeCallable EMRClient::DescribeReleaseLabelCallable(const DescribeReleaseLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReleaseLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReleaseLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDescribeReleaseLabelAsyncHelper(EMRClient const * const clientThis, const DescribeReleaseLabelRequest& request, const DescribeReleaseLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReleaseLabel(request), context);
}

void EMRClient::DescribeReleaseLabelAsync(const DescribeReleaseLabelRequest& request, const DescribeReleaseLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDescribeReleaseLabelAsyncHelper( this, request, handler, context ); } );
}

DescribeSecurityConfigurationOutcome EMRClient::DescribeSecurityConfiguration(const DescribeSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecurityConfigurationOutcomeCallable EMRClient::DescribeSecurityConfigurationCallable(const DescribeSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDescribeSecurityConfigurationAsyncHelper(EMRClient const * const clientThis, const DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSecurityConfiguration(request), context);
}

void EMRClient::DescribeSecurityConfigurationAsync(const DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDescribeSecurityConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeStepOutcome EMRClient::DescribeStep(const DescribeStepRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStepOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStepOutcomeCallable EMRClient::DescribeStepCallable(const DescribeStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDescribeStepAsyncHelper(EMRClient const * const clientThis, const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStep(request), context);
}

void EMRClient::DescribeStepAsync(const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDescribeStepAsyncHelper( this, request, handler, context ); } );
}

DescribeStudioOutcome EMRClient::DescribeStudio(const DescribeStudioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStudioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStudioOutcomeCallable EMRClient::DescribeStudioCallable(const DescribeStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientDescribeStudioAsyncHelper(EMRClient const * const clientThis, const DescribeStudioRequest& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStudio(request), context);
}

void EMRClient::DescribeStudioAsync(const DescribeStudioRequest& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientDescribeStudioAsyncHelper( this, request, handler, context ); } );
}

GetAutoTerminationPolicyOutcome EMRClient::GetAutoTerminationPolicy(const GetAutoTerminationPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAutoTerminationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAutoTerminationPolicyOutcomeCallable EMRClient::GetAutoTerminationPolicyCallable(const GetAutoTerminationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutoTerminationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutoTerminationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientGetAutoTerminationPolicyAsyncHelper(EMRClient const * const clientThis, const GetAutoTerminationPolicyRequest& request, const GetAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAutoTerminationPolicy(request), context);
}

void EMRClient::GetAutoTerminationPolicyAsync(const GetAutoTerminationPolicyRequest& request, const GetAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientGetAutoTerminationPolicyAsyncHelper( this, request, handler, context ); } );
}

GetBlockPublicAccessConfigurationOutcome EMRClient::GetBlockPublicAccessConfiguration(const GetBlockPublicAccessConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetBlockPublicAccessConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlockPublicAccessConfigurationOutcomeCallable EMRClient::GetBlockPublicAccessConfigurationCallable(const GetBlockPublicAccessConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlockPublicAccessConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlockPublicAccessConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientGetBlockPublicAccessConfigurationAsyncHelper(EMRClient const * const clientThis, const GetBlockPublicAccessConfigurationRequest& request, const GetBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBlockPublicAccessConfiguration(request), context);
}

void EMRClient::GetBlockPublicAccessConfigurationAsync(const GetBlockPublicAccessConfigurationRequest& request, const GetBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientGetBlockPublicAccessConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetManagedScalingPolicyOutcome EMRClient::GetManagedScalingPolicy(const GetManagedScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetManagedScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetManagedScalingPolicyOutcomeCallable EMRClient::GetManagedScalingPolicyCallable(const GetManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientGetManagedScalingPolicyAsyncHelper(EMRClient const * const clientThis, const GetManagedScalingPolicyRequest& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetManagedScalingPolicy(request), context);
}

void EMRClient::GetManagedScalingPolicyAsync(const GetManagedScalingPolicyRequest& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientGetManagedScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

GetStudioSessionMappingOutcome EMRClient::GetStudioSessionMapping(const GetStudioSessionMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetStudioSessionMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStudioSessionMappingOutcomeCallable EMRClient::GetStudioSessionMappingCallable(const GetStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientGetStudioSessionMappingAsyncHelper(EMRClient const * const clientThis, const GetStudioSessionMappingRequest& request, const GetStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStudioSessionMapping(request), context);
}

void EMRClient::GetStudioSessionMappingAsync(const GetStudioSessionMappingRequest& request, const GetStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientGetStudioSessionMappingAsyncHelper( this, request, handler, context ); } );
}

ListBootstrapActionsOutcome EMRClient::ListBootstrapActions(const ListBootstrapActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBootstrapActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBootstrapActionsOutcomeCallable EMRClient::ListBootstrapActionsCallable(const ListBootstrapActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBootstrapActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBootstrapActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListBootstrapActionsAsyncHelper(EMRClient const * const clientThis, const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBootstrapActions(request), context);
}

void EMRClient::ListBootstrapActionsAsync(const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListBootstrapActionsAsyncHelper( this, request, handler, context ); } );
}

ListClustersOutcome EMRClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable EMRClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListClustersAsyncHelper(EMRClient const * const clientThis, const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClusters(request), context);
}

void EMRClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListClustersAsyncHelper( this, request, handler, context ); } );
}

ListInstanceFleetsOutcome EMRClient::ListInstanceFleets(const ListInstanceFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInstanceFleetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceFleetsOutcomeCallable EMRClient::ListInstanceFleetsCallable(const ListInstanceFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListInstanceFleetsAsyncHelper(EMRClient const * const clientThis, const ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceFleets(request), context);
}

void EMRClient::ListInstanceFleetsAsync(const ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListInstanceFleetsAsyncHelper( this, request, handler, context ); } );
}

ListInstanceGroupsOutcome EMRClient::ListInstanceGroups(const ListInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInstanceGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceGroupsOutcomeCallable EMRClient::ListInstanceGroupsCallable(const ListInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListInstanceGroupsAsyncHelper(EMRClient const * const clientThis, const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstanceGroups(request), context);
}

void EMRClient::ListInstanceGroupsAsync(const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListInstanceGroupsAsyncHelper( this, request, handler, context ); } );
}

ListInstancesOutcome EMRClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcomeCallable EMRClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListInstancesAsyncHelper(EMRClient const * const clientThis, const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstances(request), context);
}

void EMRClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListInstancesAsyncHelper( this, request, handler, context ); } );
}

ListNotebookExecutionsOutcome EMRClient::ListNotebookExecutions(const ListNotebookExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListNotebookExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotebookExecutionsOutcomeCallable EMRClient::ListNotebookExecutionsCallable(const ListNotebookExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListNotebookExecutionsAsyncHelper(EMRClient const * const clientThis, const ListNotebookExecutionsRequest& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNotebookExecutions(request), context);
}

void EMRClient::ListNotebookExecutionsAsync(const ListNotebookExecutionsRequest& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListNotebookExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListReleaseLabelsOutcome EMRClient::ListReleaseLabels(const ListReleaseLabelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReleaseLabelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReleaseLabelsOutcomeCallable EMRClient::ListReleaseLabelsCallable(const ListReleaseLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReleaseLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReleaseLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListReleaseLabelsAsyncHelper(EMRClient const * const clientThis, const ListReleaseLabelsRequest& request, const ListReleaseLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReleaseLabels(request), context);
}

void EMRClient::ListReleaseLabelsAsync(const ListReleaseLabelsRequest& request, const ListReleaseLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListReleaseLabelsAsyncHelper( this, request, handler, context ); } );
}

ListSecurityConfigurationsOutcome EMRClient::ListSecurityConfigurations(const ListSecurityConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSecurityConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityConfigurationsOutcomeCallable EMRClient::ListSecurityConfigurationsCallable(const ListSecurityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListSecurityConfigurationsAsyncHelper(EMRClient const * const clientThis, const ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSecurityConfigurations(request), context);
}

void EMRClient::ListSecurityConfigurationsAsync(const ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListSecurityConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListStepsOutcome EMRClient::ListSteps(const ListStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStepsOutcomeCallable EMRClient::ListStepsCallable(const ListStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListStepsAsyncHelper(EMRClient const * const clientThis, const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSteps(request), context);
}

void EMRClient::ListStepsAsync(const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListStepsAsyncHelper( this, request, handler, context ); } );
}

ListStudioSessionMappingsOutcome EMRClient::ListStudioSessionMappings(const ListStudioSessionMappingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStudioSessionMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStudioSessionMappingsOutcomeCallable EMRClient::ListStudioSessionMappingsCallable(const ListStudioSessionMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudioSessionMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudioSessionMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListStudioSessionMappingsAsyncHelper(EMRClient const * const clientThis, const ListStudioSessionMappingsRequest& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStudioSessionMappings(request), context);
}

void EMRClient::ListStudioSessionMappingsAsync(const ListStudioSessionMappingsRequest& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListStudioSessionMappingsAsyncHelper( this, request, handler, context ); } );
}

ListStudiosOutcome EMRClient::ListStudios(const ListStudiosRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStudiosOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStudiosOutcomeCallable EMRClient::ListStudiosCallable(const ListStudiosRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudiosOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudios(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientListStudiosAsyncHelper(EMRClient const * const clientThis, const ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStudios(request), context);
}

void EMRClient::ListStudiosAsync(const ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientListStudiosAsyncHelper( this, request, handler, context ); } );
}

ModifyClusterOutcome EMRClient::ModifyCluster(const ModifyClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyClusterOutcomeCallable EMRClient::ModifyClusterCallable(const ModifyClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientModifyClusterAsyncHelper(EMRClient const * const clientThis, const ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyCluster(request), context);
}

void EMRClient::ModifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientModifyClusterAsyncHelper( this, request, handler, context ); } );
}

ModifyInstanceFleetOutcome EMRClient::ModifyInstanceFleet(const ModifyInstanceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyInstanceFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyInstanceFleetOutcomeCallable EMRClient::ModifyInstanceFleetCallable(const ModifyInstanceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientModifyInstanceFleetAsyncHelper(EMRClient const * const clientThis, const ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyInstanceFleet(request), context);
}

void EMRClient::ModifyInstanceFleetAsync(const ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientModifyInstanceFleetAsyncHelper( this, request, handler, context ); } );
}

ModifyInstanceGroupsOutcome EMRClient::ModifyInstanceGroups(const ModifyInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyInstanceGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyInstanceGroupsOutcomeCallable EMRClient::ModifyInstanceGroupsCallable(const ModifyInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientModifyInstanceGroupsAsyncHelper(EMRClient const * const clientThis, const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyInstanceGroups(request), context);
}

void EMRClient::ModifyInstanceGroupsAsync(const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientModifyInstanceGroupsAsyncHelper( this, request, handler, context ); } );
}

PutAutoScalingPolicyOutcome EMRClient::PutAutoScalingPolicy(const PutAutoScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAutoScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAutoScalingPolicyOutcomeCallable EMRClient::PutAutoScalingPolicyCallable(const PutAutoScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAutoScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAutoScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientPutAutoScalingPolicyAsyncHelper(EMRClient const * const clientThis, const PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAutoScalingPolicy(request), context);
}

void EMRClient::PutAutoScalingPolicyAsync(const PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientPutAutoScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

PutAutoTerminationPolicyOutcome EMRClient::PutAutoTerminationPolicy(const PutAutoTerminationPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAutoTerminationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAutoTerminationPolicyOutcomeCallable EMRClient::PutAutoTerminationPolicyCallable(const PutAutoTerminationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAutoTerminationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAutoTerminationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientPutAutoTerminationPolicyAsyncHelper(EMRClient const * const clientThis, const PutAutoTerminationPolicyRequest& request, const PutAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAutoTerminationPolicy(request), context);
}

void EMRClient::PutAutoTerminationPolicyAsync(const PutAutoTerminationPolicyRequest& request, const PutAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientPutAutoTerminationPolicyAsyncHelper( this, request, handler, context ); } );
}

PutBlockPublicAccessConfigurationOutcome EMRClient::PutBlockPublicAccessConfiguration(const PutBlockPublicAccessConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutBlockPublicAccessConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutBlockPublicAccessConfigurationOutcomeCallable EMRClient::PutBlockPublicAccessConfigurationCallable(const PutBlockPublicAccessConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBlockPublicAccessConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBlockPublicAccessConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientPutBlockPublicAccessConfigurationAsyncHelper(EMRClient const * const clientThis, const PutBlockPublicAccessConfigurationRequest& request, const PutBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutBlockPublicAccessConfiguration(request), context);
}

void EMRClient::PutBlockPublicAccessConfigurationAsync(const PutBlockPublicAccessConfigurationRequest& request, const PutBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientPutBlockPublicAccessConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutManagedScalingPolicyOutcome EMRClient::PutManagedScalingPolicy(const PutManagedScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutManagedScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutManagedScalingPolicyOutcomeCallable EMRClient::PutManagedScalingPolicyCallable(const PutManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientPutManagedScalingPolicyAsyncHelper(EMRClient const * const clientThis, const PutManagedScalingPolicyRequest& request, const PutManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutManagedScalingPolicy(request), context);
}

void EMRClient::PutManagedScalingPolicyAsync(const PutManagedScalingPolicyRequest& request, const PutManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientPutManagedScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

RemoveAutoScalingPolicyOutcome EMRClient::RemoveAutoScalingPolicy(const RemoveAutoScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveAutoScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAutoScalingPolicyOutcomeCallable EMRClient::RemoveAutoScalingPolicyCallable(const RemoveAutoScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAutoScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAutoScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientRemoveAutoScalingPolicyAsyncHelper(EMRClient const * const clientThis, const RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveAutoScalingPolicy(request), context);
}

void EMRClient::RemoveAutoScalingPolicyAsync(const RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientRemoveAutoScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

RemoveAutoTerminationPolicyOutcome EMRClient::RemoveAutoTerminationPolicy(const RemoveAutoTerminationPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveAutoTerminationPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAutoTerminationPolicyOutcomeCallable EMRClient::RemoveAutoTerminationPolicyCallable(const RemoveAutoTerminationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAutoTerminationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAutoTerminationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientRemoveAutoTerminationPolicyAsyncHelper(EMRClient const * const clientThis, const RemoveAutoTerminationPolicyRequest& request, const RemoveAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveAutoTerminationPolicy(request), context);
}

void EMRClient::RemoveAutoTerminationPolicyAsync(const RemoveAutoTerminationPolicyRequest& request, const RemoveAutoTerminationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientRemoveAutoTerminationPolicyAsyncHelper( this, request, handler, context ); } );
}

RemoveManagedScalingPolicyOutcome EMRClient::RemoveManagedScalingPolicy(const RemoveManagedScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveManagedScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveManagedScalingPolicyOutcomeCallable EMRClient::RemoveManagedScalingPolicyCallable(const RemoveManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientRemoveManagedScalingPolicyAsyncHelper(EMRClient const * const clientThis, const RemoveManagedScalingPolicyRequest& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveManagedScalingPolicy(request), context);
}

void EMRClient::RemoveManagedScalingPolicyAsync(const RemoveManagedScalingPolicyRequest& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientRemoveManagedScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsOutcome EMRClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsOutcomeCallable EMRClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientRemoveTagsAsyncHelper(EMRClient const * const clientThis, const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTags(request), context);
}

void EMRClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientRemoveTagsAsyncHelper( this, request, handler, context ); } );
}

RunJobFlowOutcome EMRClient::RunJobFlow(const RunJobFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RunJobFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunJobFlowOutcomeCallable EMRClient::RunJobFlowCallable(const RunJobFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunJobFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunJobFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientRunJobFlowAsyncHelper(EMRClient const * const clientThis, const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RunJobFlow(request), context);
}

void EMRClient::RunJobFlowAsync(const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientRunJobFlowAsyncHelper( this, request, handler, context ); } );
}

SetTerminationProtectionOutcome EMRClient::SetTerminationProtection(const SetTerminationProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetTerminationProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetTerminationProtectionOutcomeCallable EMRClient::SetTerminationProtectionCallable(const SetTerminationProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTerminationProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTerminationProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientSetTerminationProtectionAsyncHelper(EMRClient const * const clientThis, const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetTerminationProtection(request), context);
}

void EMRClient::SetTerminationProtectionAsync(const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientSetTerminationProtectionAsyncHelper( this, request, handler, context ); } );
}

SetVisibleToAllUsersOutcome EMRClient::SetVisibleToAllUsers(const SetVisibleToAllUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetVisibleToAllUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetVisibleToAllUsersOutcomeCallable EMRClient::SetVisibleToAllUsersCallable(const SetVisibleToAllUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetVisibleToAllUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetVisibleToAllUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientSetVisibleToAllUsersAsyncHelper(EMRClient const * const clientThis, const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetVisibleToAllUsers(request), context);
}

void EMRClient::SetVisibleToAllUsersAsync(const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientSetVisibleToAllUsersAsyncHelper( this, request, handler, context ); } );
}

StartNotebookExecutionOutcome EMRClient::StartNotebookExecution(const StartNotebookExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartNotebookExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartNotebookExecutionOutcomeCallable EMRClient::StartNotebookExecutionCallable(const StartNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientStartNotebookExecutionAsyncHelper(EMRClient const * const clientThis, const StartNotebookExecutionRequest& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartNotebookExecution(request), context);
}

void EMRClient::StartNotebookExecutionAsync(const StartNotebookExecutionRequest& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientStartNotebookExecutionAsyncHelper( this, request, handler, context ); } );
}

StopNotebookExecutionOutcome EMRClient::StopNotebookExecution(const StopNotebookExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopNotebookExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopNotebookExecutionOutcomeCallable EMRClient::StopNotebookExecutionCallable(const StopNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientStopNotebookExecutionAsyncHelper(EMRClient const * const clientThis, const StopNotebookExecutionRequest& request, const StopNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopNotebookExecution(request), context);
}

void EMRClient::StopNotebookExecutionAsync(const StopNotebookExecutionRequest& request, const StopNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientStopNotebookExecutionAsyncHelper( this, request, handler, context ); } );
}

TerminateJobFlowsOutcome EMRClient::TerminateJobFlows(const TerminateJobFlowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TerminateJobFlowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateJobFlowsOutcomeCallable EMRClient::TerminateJobFlowsCallable(const TerminateJobFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateJobFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateJobFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientTerminateJobFlowsAsyncHelper(EMRClient const * const clientThis, const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TerminateJobFlows(request), context);
}

void EMRClient::TerminateJobFlowsAsync(const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientTerminateJobFlowsAsyncHelper( this, request, handler, context ); } );
}

UpdateStudioOutcome EMRClient::UpdateStudio(const UpdateStudioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStudioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStudioOutcomeCallable EMRClient::UpdateStudioCallable(const UpdateStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientUpdateStudioAsyncHelper(EMRClient const * const clientThis, const UpdateStudioRequest& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStudio(request), context);
}

void EMRClient::UpdateStudioAsync(const UpdateStudioRequest& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientUpdateStudioAsyncHelper( this, request, handler, context ); } );
}

UpdateStudioSessionMappingOutcome EMRClient::UpdateStudioSessionMapping(const UpdateStudioSessionMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStudioSessionMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStudioSessionMappingOutcomeCallable EMRClient::UpdateStudioSessionMappingCallable(const UpdateStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClientUpdateStudioSessionMappingAsyncHelper(EMRClient const * const clientThis, const UpdateStudioSessionMappingRequest& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStudioSessionMapping(request), context);
}

void EMRClient::UpdateStudioSessionMappingAsync(const UpdateStudioSessionMappingRequest& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EMRClientUpdateStudioSessionMappingAsyncHelper( this, request, handler, context ); } );
}

