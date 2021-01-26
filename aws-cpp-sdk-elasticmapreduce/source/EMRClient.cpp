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
#include <aws/elasticmapreduce/model/DescribeSecurityConfigurationRequest.h>
#include <aws/elasticmapreduce/model/DescribeStepRequest.h>
#include <aws/elasticmapreduce/model/DescribeStudioRequest.h>
#include <aws/elasticmapreduce/model/GetBlockPublicAccessConfigurationRequest.h>
#include <aws/elasticmapreduce/model/GetManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/GetStudioSessionMappingRequest.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsRequest.h>
#include <aws/elasticmapreduce/model/ListClustersRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsRequest.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/ListInstancesRequest.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsRequest.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsRequest.h>
#include <aws/elasticmapreduce/model/ListStepsRequest.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsRequest.h>
#include <aws/elasticmapreduce/model/ListStudiosRequest.h>
#include <aws/elasticmapreduce/model/ModifyClusterRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceFleetRequest.h>
#include <aws/elasticmapreduce/model/ModifyInstanceGroupsRequest.h>
#include <aws/elasticmapreduce/model/PutAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/PutBlockPublicAccessConfigurationRequest.h>
#include <aws/elasticmapreduce/model/PutManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveAutoScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveManagedScalingPolicyRequest.h>
#include <aws/elasticmapreduce/model/RemoveTagsRequest.h>
#include <aws/elasticmapreduce/model/RunJobFlowRequest.h>
#include <aws/elasticmapreduce/model/SetTerminationProtectionRequest.h>
#include <aws/elasticmapreduce/model/SetVisibleToAllUsersRequest.h>
#include <aws/elasticmapreduce/model/StartNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/StopNotebookExecutionRequest.h>
#include <aws/elasticmapreduce/model/TerminateJobFlowsRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::EMRClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::EMRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EMRErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EMRClient::~EMRClient()
{
}

void EMRClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("EMR");
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddInstanceFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddInstanceFleetOutcomeCallable EMRClient::AddInstanceFleetCallable(const AddInstanceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddInstanceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddInstanceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddInstanceFleetAsync(const AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddInstanceFleetAsyncHelper( request, handler, context ); } );
}

void EMRClient::AddInstanceFleetAsyncHelper(const AddInstanceFleetRequest& request, const AddInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddInstanceFleet(request), context);
}

AddInstanceGroupsOutcome EMRClient::AddInstanceGroups(const AddInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddInstanceGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddInstanceGroupsOutcomeCallable EMRClient::AddInstanceGroupsCallable(const AddInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddInstanceGroupsAsync(const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddInstanceGroupsAsyncHelper( request, handler, context ); } );
}

void EMRClient::AddInstanceGroupsAsyncHelper(const AddInstanceGroupsRequest& request, const AddInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddInstanceGroups(request), context);
}

AddJobFlowStepsOutcome EMRClient::AddJobFlowSteps(const AddJobFlowStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddJobFlowStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddJobFlowStepsOutcomeCallable EMRClient::AddJobFlowStepsCallable(const AddJobFlowStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddJobFlowStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddJobFlowSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddJobFlowStepsAsync(const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddJobFlowStepsAsyncHelper( request, handler, context ); } );
}

void EMRClient::AddJobFlowStepsAsyncHelper(const AddJobFlowStepsRequest& request, const AddJobFlowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddJobFlowSteps(request), context);
}

AddTagsOutcome EMRClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable EMRClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void EMRClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CancelStepsOutcome EMRClient::CancelSteps(const CancelStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelStepsOutcomeCallable EMRClient::CancelStepsCallable(const CancelStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CancelStepsAsync(const CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelStepsAsyncHelper( request, handler, context ); } );
}

void EMRClient::CancelStepsAsyncHelper(const CancelStepsRequest& request, const CancelStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSteps(request), context);
}

CreateSecurityConfigurationOutcome EMRClient::CreateSecurityConfiguration(const CreateSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityConfigurationOutcomeCallable EMRClient::CreateSecurityConfigurationCallable(const CreateSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CreateSecurityConfigurationAsync(const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSecurityConfigurationAsyncHelper( request, handler, context ); } );
}

void EMRClient::CreateSecurityConfigurationAsyncHelper(const CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSecurityConfiguration(request), context);
}

CreateStudioOutcome EMRClient::CreateStudio(const CreateStudioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateStudioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioOutcomeCallable EMRClient::CreateStudioCallable(const CreateStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CreateStudioAsync(const CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStudioAsyncHelper( request, handler, context ); } );
}

void EMRClient::CreateStudioAsyncHelper(const CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStudio(request), context);
}

CreateStudioSessionMappingOutcome EMRClient::CreateStudioSessionMapping(const CreateStudioSessionMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateStudioSessionMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioSessionMappingOutcomeCallable EMRClient::CreateStudioSessionMappingCallable(const CreateStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::CreateStudioSessionMappingAsync(const CreateStudioSessionMappingRequest& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStudioSessionMappingAsyncHelper( request, handler, context ); } );
}

void EMRClient::CreateStudioSessionMappingAsyncHelper(const CreateStudioSessionMappingRequest& request, const CreateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStudioSessionMapping(request), context);
}

DeleteSecurityConfigurationOutcome EMRClient::DeleteSecurityConfiguration(const DeleteSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityConfigurationOutcomeCallable EMRClient::DeleteSecurityConfigurationCallable(const DeleteSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DeleteSecurityConfigurationAsync(const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSecurityConfigurationAsyncHelper( request, handler, context ); } );
}

void EMRClient::DeleteSecurityConfigurationAsyncHelper(const DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSecurityConfiguration(request), context);
}

DeleteStudioOutcome EMRClient::DeleteStudio(const DeleteStudioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteStudioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioOutcomeCallable EMRClient::DeleteStudioCallable(const DeleteStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DeleteStudioAsync(const DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStudioAsyncHelper( request, handler, context ); } );
}

void EMRClient::DeleteStudioAsyncHelper(const DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStudio(request), context);
}

DeleteStudioSessionMappingOutcome EMRClient::DeleteStudioSessionMapping(const DeleteStudioSessionMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteStudioSessionMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioSessionMappingOutcomeCallable EMRClient::DeleteStudioSessionMappingCallable(const DeleteStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DeleteStudioSessionMappingAsync(const DeleteStudioSessionMappingRequest& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStudioSessionMappingAsyncHelper( request, handler, context ); } );
}

void EMRClient::DeleteStudioSessionMappingAsyncHelper(const DeleteStudioSessionMappingRequest& request, const DeleteStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStudioSessionMapping(request), context);
}

DescribeClusterOutcome EMRClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOutcomeCallable EMRClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClusterAsyncHelper( request, handler, context ); } );
}

void EMRClient::DescribeClusterAsyncHelper(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCluster(request), context);
}

DescribeNotebookExecutionOutcome EMRClient::DescribeNotebookExecution(const DescribeNotebookExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeNotebookExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotebookExecutionOutcomeCallable EMRClient::DescribeNotebookExecutionCallable(const DescribeNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeNotebookExecutionAsync(const DescribeNotebookExecutionRequest& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNotebookExecutionAsyncHelper( request, handler, context ); } );
}

void EMRClient::DescribeNotebookExecutionAsyncHelper(const DescribeNotebookExecutionRequest& request, const DescribeNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNotebookExecution(request), context);
}

DescribeSecurityConfigurationOutcome EMRClient::DescribeSecurityConfiguration(const DescribeSecurityConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeSecurityConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSecurityConfigurationOutcomeCallable EMRClient::DescribeSecurityConfigurationCallable(const DescribeSecurityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSecurityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeSecurityConfigurationAsync(const DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSecurityConfigurationAsyncHelper( request, handler, context ); } );
}

void EMRClient::DescribeSecurityConfigurationAsyncHelper(const DescribeSecurityConfigurationRequest& request, const DescribeSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSecurityConfiguration(request), context);
}

DescribeStepOutcome EMRClient::DescribeStep(const DescribeStepRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeStepOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStepOutcomeCallable EMRClient::DescribeStepCallable(const DescribeStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeStepAsync(const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStepAsyncHelper( request, handler, context ); } );
}

void EMRClient::DescribeStepAsyncHelper(const DescribeStepRequest& request, const DescribeStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStep(request), context);
}

DescribeStudioOutcome EMRClient::DescribeStudio(const DescribeStudioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeStudioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStudioOutcomeCallable EMRClient::DescribeStudioCallable(const DescribeStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::DescribeStudioAsync(const DescribeStudioRequest& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStudioAsyncHelper( request, handler, context ); } );
}

void EMRClient::DescribeStudioAsyncHelper(const DescribeStudioRequest& request, const DescribeStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStudio(request), context);
}

GetBlockPublicAccessConfigurationOutcome EMRClient::GetBlockPublicAccessConfiguration(const GetBlockPublicAccessConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetBlockPublicAccessConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlockPublicAccessConfigurationOutcomeCallable EMRClient::GetBlockPublicAccessConfigurationCallable(const GetBlockPublicAccessConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlockPublicAccessConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlockPublicAccessConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::GetBlockPublicAccessConfigurationAsync(const GetBlockPublicAccessConfigurationRequest& request, const GetBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBlockPublicAccessConfigurationAsyncHelper( request, handler, context ); } );
}

void EMRClient::GetBlockPublicAccessConfigurationAsyncHelper(const GetBlockPublicAccessConfigurationRequest& request, const GetBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBlockPublicAccessConfiguration(request), context);
}

GetManagedScalingPolicyOutcome EMRClient::GetManagedScalingPolicy(const GetManagedScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetManagedScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetManagedScalingPolicyOutcomeCallable EMRClient::GetManagedScalingPolicyCallable(const GetManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::GetManagedScalingPolicyAsync(const GetManagedScalingPolicyRequest& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetManagedScalingPolicyAsyncHelper( request, handler, context ); } );
}

void EMRClient::GetManagedScalingPolicyAsyncHelper(const GetManagedScalingPolicyRequest& request, const GetManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetManagedScalingPolicy(request), context);
}

GetStudioSessionMappingOutcome EMRClient::GetStudioSessionMapping(const GetStudioSessionMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetStudioSessionMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStudioSessionMappingOutcomeCallable EMRClient::GetStudioSessionMappingCallable(const GetStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::GetStudioSessionMappingAsync(const GetStudioSessionMappingRequest& request, const GetStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStudioSessionMappingAsyncHelper( request, handler, context ); } );
}

void EMRClient::GetStudioSessionMappingAsyncHelper(const GetStudioSessionMappingRequest& request, const GetStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStudioSessionMapping(request), context);
}

ListBootstrapActionsOutcome EMRClient::ListBootstrapActions(const ListBootstrapActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListBootstrapActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBootstrapActionsOutcomeCallable EMRClient::ListBootstrapActionsCallable(const ListBootstrapActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBootstrapActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBootstrapActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListBootstrapActionsAsync(const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBootstrapActionsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListBootstrapActionsAsyncHelper(const ListBootstrapActionsRequest& request, const ListBootstrapActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBootstrapActions(request), context);
}

ListClustersOutcome EMRClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable EMRClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListClustersAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListClustersAsyncHelper(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListClusters(request), context);
}

ListInstanceFleetsOutcome EMRClient::ListInstanceFleets(const ListInstanceFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListInstanceFleetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceFleetsOutcomeCallable EMRClient::ListInstanceFleetsCallable(const ListInstanceFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstanceFleetsAsync(const ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceFleetsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListInstanceFleetsAsyncHelper(const ListInstanceFleetsRequest& request, const ListInstanceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceFleets(request), context);
}

ListInstanceGroupsOutcome EMRClient::ListInstanceGroups(const ListInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListInstanceGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceGroupsOutcomeCallable EMRClient::ListInstanceGroupsCallable(const ListInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstanceGroupsAsync(const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstanceGroupsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListInstanceGroupsAsyncHelper(const ListInstanceGroupsRequest& request, const ListInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstanceGroups(request), context);
}

ListInstancesOutcome EMRClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcomeCallable EMRClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstancesAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListInstancesAsyncHelper(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstances(request), context);
}

ListNotebookExecutionsOutcome EMRClient::ListNotebookExecutions(const ListNotebookExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListNotebookExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotebookExecutionsOutcomeCallable EMRClient::ListNotebookExecutionsCallable(const ListNotebookExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListNotebookExecutionsAsync(const ListNotebookExecutionsRequest& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNotebookExecutionsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListNotebookExecutionsAsyncHelper(const ListNotebookExecutionsRequest& request, const ListNotebookExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNotebookExecutions(request), context);
}

ListSecurityConfigurationsOutcome EMRClient::ListSecurityConfigurations(const ListSecurityConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSecurityConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityConfigurationsOutcomeCallable EMRClient::ListSecurityConfigurationsCallable(const ListSecurityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSecurityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSecurityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListSecurityConfigurationsAsync(const ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSecurityConfigurationsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListSecurityConfigurationsAsyncHelper(const ListSecurityConfigurationsRequest& request, const ListSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSecurityConfigurations(request), context);
}

ListStepsOutcome EMRClient::ListSteps(const ListStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStepsOutcomeCallable EMRClient::ListStepsCallable(const ListStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListStepsAsync(const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStepsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListStepsAsyncHelper(const ListStepsRequest& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSteps(request), context);
}

ListStudioSessionMappingsOutcome EMRClient::ListStudioSessionMappings(const ListStudioSessionMappingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListStudioSessionMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStudioSessionMappingsOutcomeCallable EMRClient::ListStudioSessionMappingsCallable(const ListStudioSessionMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudioSessionMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudioSessionMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListStudioSessionMappingsAsync(const ListStudioSessionMappingsRequest& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStudioSessionMappingsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListStudioSessionMappingsAsyncHelper(const ListStudioSessionMappingsRequest& request, const ListStudioSessionMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStudioSessionMappings(request), context);
}

ListStudiosOutcome EMRClient::ListStudios(const ListStudiosRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListStudiosOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStudiosOutcomeCallable EMRClient::ListStudiosCallable(const ListStudiosRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudiosOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudios(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ListStudiosAsync(const ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStudiosAsyncHelper( request, handler, context ); } );
}

void EMRClient::ListStudiosAsyncHelper(const ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStudios(request), context);
}

ModifyClusterOutcome EMRClient::ModifyCluster(const ModifyClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyClusterOutcomeCallable EMRClient::ModifyClusterCallable(const ModifyClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ModifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyClusterAsyncHelper( request, handler, context ); } );
}

void EMRClient::ModifyClusterAsyncHelper(const ModifyClusterRequest& request, const ModifyClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyCluster(request), context);
}

ModifyInstanceFleetOutcome EMRClient::ModifyInstanceFleet(const ModifyInstanceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyInstanceFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyInstanceFleetOutcomeCallable EMRClient::ModifyInstanceFleetCallable(const ModifyInstanceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ModifyInstanceFleetAsync(const ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstanceFleetAsyncHelper( request, handler, context ); } );
}

void EMRClient::ModifyInstanceFleetAsyncHelper(const ModifyInstanceFleetRequest& request, const ModifyInstanceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceFleet(request), context);
}

ModifyInstanceGroupsOutcome EMRClient::ModifyInstanceGroups(const ModifyInstanceGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ModifyInstanceGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyInstanceGroupsOutcomeCallable EMRClient::ModifyInstanceGroupsCallable(const ModifyInstanceGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyInstanceGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::ModifyInstanceGroupsAsync(const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyInstanceGroupsAsyncHelper( request, handler, context ); } );
}

void EMRClient::ModifyInstanceGroupsAsyncHelper(const ModifyInstanceGroupsRequest& request, const ModifyInstanceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyInstanceGroups(request), context);
}

PutAutoScalingPolicyOutcome EMRClient::PutAutoScalingPolicy(const PutAutoScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAutoScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAutoScalingPolicyOutcomeCallable EMRClient::PutAutoScalingPolicyCallable(const PutAutoScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAutoScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAutoScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::PutAutoScalingPolicyAsync(const PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAutoScalingPolicyAsyncHelper( request, handler, context ); } );
}

void EMRClient::PutAutoScalingPolicyAsyncHelper(const PutAutoScalingPolicyRequest& request, const PutAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAutoScalingPolicy(request), context);
}

PutBlockPublicAccessConfigurationOutcome EMRClient::PutBlockPublicAccessConfiguration(const PutBlockPublicAccessConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutBlockPublicAccessConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutBlockPublicAccessConfigurationOutcomeCallable EMRClient::PutBlockPublicAccessConfigurationCallable(const PutBlockPublicAccessConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBlockPublicAccessConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBlockPublicAccessConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::PutBlockPublicAccessConfigurationAsync(const PutBlockPublicAccessConfigurationRequest& request, const PutBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutBlockPublicAccessConfigurationAsyncHelper( request, handler, context ); } );
}

void EMRClient::PutBlockPublicAccessConfigurationAsyncHelper(const PutBlockPublicAccessConfigurationRequest& request, const PutBlockPublicAccessConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBlockPublicAccessConfiguration(request), context);
}

PutManagedScalingPolicyOutcome EMRClient::PutManagedScalingPolicy(const PutManagedScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutManagedScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutManagedScalingPolicyOutcomeCallable EMRClient::PutManagedScalingPolicyCallable(const PutManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::PutManagedScalingPolicyAsync(const PutManagedScalingPolicyRequest& request, const PutManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutManagedScalingPolicyAsyncHelper( request, handler, context ); } );
}

void EMRClient::PutManagedScalingPolicyAsyncHelper(const PutManagedScalingPolicyRequest& request, const PutManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutManagedScalingPolicy(request), context);
}

RemoveAutoScalingPolicyOutcome EMRClient::RemoveAutoScalingPolicy(const RemoveAutoScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveAutoScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAutoScalingPolicyOutcomeCallable EMRClient::RemoveAutoScalingPolicyCallable(const RemoveAutoScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAutoScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAutoScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveAutoScalingPolicyAsync(const RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveAutoScalingPolicyAsyncHelper( request, handler, context ); } );
}

void EMRClient::RemoveAutoScalingPolicyAsyncHelper(const RemoveAutoScalingPolicyRequest& request, const RemoveAutoScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveAutoScalingPolicy(request), context);
}

RemoveManagedScalingPolicyOutcome EMRClient::RemoveManagedScalingPolicy(const RemoveManagedScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveManagedScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveManagedScalingPolicyOutcomeCallable EMRClient::RemoveManagedScalingPolicyCallable(const RemoveManagedScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveManagedScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveManagedScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveManagedScalingPolicyAsync(const RemoveManagedScalingPolicyRequest& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveManagedScalingPolicyAsyncHelper( request, handler, context ); } );
}

void EMRClient::RemoveManagedScalingPolicyAsyncHelper(const RemoveManagedScalingPolicyRequest& request, const RemoveManagedScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveManagedScalingPolicy(request), context);
}

RemoveTagsOutcome EMRClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsOutcomeCallable EMRClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void EMRClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

RunJobFlowOutcome EMRClient::RunJobFlow(const RunJobFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RunJobFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunJobFlowOutcomeCallable EMRClient::RunJobFlowCallable(const RunJobFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunJobFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunJobFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::RunJobFlowAsync(const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RunJobFlowAsyncHelper( request, handler, context ); } );
}

void EMRClient::RunJobFlowAsyncHelper(const RunJobFlowRequest& request, const RunJobFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunJobFlow(request), context);
}

SetTerminationProtectionOutcome EMRClient::SetTerminationProtection(const SetTerminationProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return SetTerminationProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetTerminationProtectionOutcomeCallable EMRClient::SetTerminationProtectionCallable(const SetTerminationProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTerminationProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTerminationProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::SetTerminationProtectionAsync(const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetTerminationProtectionAsyncHelper( request, handler, context ); } );
}

void EMRClient::SetTerminationProtectionAsyncHelper(const SetTerminationProtectionRequest& request, const SetTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTerminationProtection(request), context);
}

SetVisibleToAllUsersOutcome EMRClient::SetVisibleToAllUsers(const SetVisibleToAllUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return SetVisibleToAllUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetVisibleToAllUsersOutcomeCallable EMRClient::SetVisibleToAllUsersCallable(const SetVisibleToAllUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetVisibleToAllUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetVisibleToAllUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::SetVisibleToAllUsersAsync(const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetVisibleToAllUsersAsyncHelper( request, handler, context ); } );
}

void EMRClient::SetVisibleToAllUsersAsyncHelper(const SetVisibleToAllUsersRequest& request, const SetVisibleToAllUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetVisibleToAllUsers(request), context);
}

StartNotebookExecutionOutcome EMRClient::StartNotebookExecution(const StartNotebookExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartNotebookExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartNotebookExecutionOutcomeCallable EMRClient::StartNotebookExecutionCallable(const StartNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::StartNotebookExecutionAsync(const StartNotebookExecutionRequest& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartNotebookExecutionAsyncHelper( request, handler, context ); } );
}

void EMRClient::StartNotebookExecutionAsyncHelper(const StartNotebookExecutionRequest& request, const StartNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartNotebookExecution(request), context);
}

StopNotebookExecutionOutcome EMRClient::StopNotebookExecution(const StopNotebookExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopNotebookExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopNotebookExecutionOutcomeCallable EMRClient::StopNotebookExecutionCallable(const StopNotebookExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopNotebookExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopNotebookExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::StopNotebookExecutionAsync(const StopNotebookExecutionRequest& request, const StopNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopNotebookExecutionAsyncHelper( request, handler, context ); } );
}

void EMRClient::StopNotebookExecutionAsyncHelper(const StopNotebookExecutionRequest& request, const StopNotebookExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopNotebookExecution(request), context);
}

TerminateJobFlowsOutcome EMRClient::TerminateJobFlows(const TerminateJobFlowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TerminateJobFlowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateJobFlowsOutcomeCallable EMRClient::TerminateJobFlowsCallable(const TerminateJobFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateJobFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateJobFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::TerminateJobFlowsAsync(const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateJobFlowsAsyncHelper( request, handler, context ); } );
}

void EMRClient::TerminateJobFlowsAsyncHelper(const TerminateJobFlowsRequest& request, const TerminateJobFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateJobFlows(request), context);
}

UpdateStudioSessionMappingOutcome EMRClient::UpdateStudioSessionMapping(const UpdateStudioSessionMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateStudioSessionMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStudioSessionMappingOutcomeCallable EMRClient::UpdateStudioSessionMappingCallable(const UpdateStudioSessionMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStudioSessionMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStudioSessionMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EMRClient::UpdateStudioSessionMappingAsync(const UpdateStudioSessionMappingRequest& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStudioSessionMappingAsyncHelper( request, handler, context ); } );
}

void EMRClient::UpdateStudioSessionMappingAsyncHelper(const UpdateStudioSessionMappingRequest& request, const UpdateStudioSessionMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStudioSessionMapping(request), context);
}

