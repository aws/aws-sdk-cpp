/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/opsworks/OpsWorksClient.h>
#include <aws/opsworks/OpsWorksEndpoint.h>
#include <aws/opsworks/OpsWorksErrorMarshaller.h>
#include <aws/opsworks/model/AssignInstanceRequest.h>
#include <aws/opsworks/model/AssignVolumeRequest.h>
#include <aws/opsworks/model/AssociateElasticIpRequest.h>
#include <aws/opsworks/model/AttachElasticLoadBalancerRequest.h>
#include <aws/opsworks/model/CloneStackRequest.h>
#include <aws/opsworks/model/CreateAppRequest.h>
#include <aws/opsworks/model/CreateDeploymentRequest.h>
#include <aws/opsworks/model/CreateInstanceRequest.h>
#include <aws/opsworks/model/CreateLayerRequest.h>
#include <aws/opsworks/model/CreateStackRequest.h>
#include <aws/opsworks/model/CreateUserProfileRequest.h>
#include <aws/opsworks/model/DeleteAppRequest.h>
#include <aws/opsworks/model/DeleteInstanceRequest.h>
#include <aws/opsworks/model/DeleteLayerRequest.h>
#include <aws/opsworks/model/DeleteStackRequest.h>
#include <aws/opsworks/model/DeleteUserProfileRequest.h>
#include <aws/opsworks/model/DeregisterEcsClusterRequest.h>
#include <aws/opsworks/model/DeregisterElasticIpRequest.h>
#include <aws/opsworks/model/DeregisterInstanceRequest.h>
#include <aws/opsworks/model/DeregisterRdsDbInstanceRequest.h>
#include <aws/opsworks/model/DeregisterVolumeRequest.h>
#include <aws/opsworks/model/DescribeAgentVersionsRequest.h>
#include <aws/opsworks/model/DescribeAppsRequest.h>
#include <aws/opsworks/model/DescribeCommandsRequest.h>
#include <aws/opsworks/model/DescribeDeploymentsRequest.h>
#include <aws/opsworks/model/DescribeEcsClustersRequest.h>
#include <aws/opsworks/model/DescribeElasticIpsRequest.h>
#include <aws/opsworks/model/DescribeElasticLoadBalancersRequest.h>
#include <aws/opsworks/model/DescribeInstancesRequest.h>
#include <aws/opsworks/model/DescribeLayersRequest.h>
#include <aws/opsworks/model/DescribeLoadBasedAutoScalingRequest.h>
#include <aws/opsworks/model/DescribePermissionsRequest.h>
#include <aws/opsworks/model/DescribeRaidArraysRequest.h>
#include <aws/opsworks/model/DescribeRdsDbInstancesRequest.h>
#include <aws/opsworks/model/DescribeServiceErrorsRequest.h>
#include <aws/opsworks/model/DescribeStackProvisioningParametersRequest.h>
#include <aws/opsworks/model/DescribeStackSummaryRequest.h>
#include <aws/opsworks/model/DescribeStacksRequest.h>
#include <aws/opsworks/model/DescribeTimeBasedAutoScalingRequest.h>
#include <aws/opsworks/model/DescribeUserProfilesRequest.h>
#include <aws/opsworks/model/DescribeVolumesRequest.h>
#include <aws/opsworks/model/DetachElasticLoadBalancerRequest.h>
#include <aws/opsworks/model/DisassociateElasticIpRequest.h>
#include <aws/opsworks/model/GetHostnameSuggestionRequest.h>
#include <aws/opsworks/model/GrantAccessRequest.h>
#include <aws/opsworks/model/ListTagsRequest.h>
#include <aws/opsworks/model/RebootInstanceRequest.h>
#include <aws/opsworks/model/RegisterEcsClusterRequest.h>
#include <aws/opsworks/model/RegisterElasticIpRequest.h>
#include <aws/opsworks/model/RegisterInstanceRequest.h>
#include <aws/opsworks/model/RegisterRdsDbInstanceRequest.h>
#include <aws/opsworks/model/RegisterVolumeRequest.h>
#include <aws/opsworks/model/SetLoadBasedAutoScalingRequest.h>
#include <aws/opsworks/model/SetPermissionRequest.h>
#include <aws/opsworks/model/SetTimeBasedAutoScalingRequest.h>
#include <aws/opsworks/model/StartInstanceRequest.h>
#include <aws/opsworks/model/StartStackRequest.h>
#include <aws/opsworks/model/StopInstanceRequest.h>
#include <aws/opsworks/model/StopStackRequest.h>
#include <aws/opsworks/model/TagResourceRequest.h>
#include <aws/opsworks/model/UnassignInstanceRequest.h>
#include <aws/opsworks/model/UnassignVolumeRequest.h>
#include <aws/opsworks/model/UntagResourceRequest.h>
#include <aws/opsworks/model/UpdateAppRequest.h>
#include <aws/opsworks/model/UpdateElasticIpRequest.h>
#include <aws/opsworks/model/UpdateInstanceRequest.h>
#include <aws/opsworks/model/UpdateLayerRequest.h>
#include <aws/opsworks/model/UpdateMyUserProfileRequest.h>
#include <aws/opsworks/model/UpdateRdsDbInstanceRequest.h>
#include <aws/opsworks/model/UpdateStackRequest.h>
#include <aws/opsworks/model/UpdateUserProfileRequest.h>
#include <aws/opsworks/model/UpdateVolumeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpsWorks;
using namespace Aws::OpsWorks::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "opsworks";
static const char* ALLOCATION_TAG = "OpsWorksClient";


OpsWorksClient::OpsWorksClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::~OpsWorksClient()
{
}

void OpsWorksClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + OpsWorksEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void OpsWorksClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssignInstanceOutcome OpsWorksClient::AssignInstance(const AssignInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssignInstanceOutcome(NoResult());
  }
  else
  {
    return AssignInstanceOutcome(outcome.GetError());
  }
}

AssignInstanceOutcomeCallable OpsWorksClient::AssignInstanceCallable(const AssignInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::AssignInstanceAsync(const AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssignInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::AssignInstanceAsyncHelper(const AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssignInstance(request), context);
}

AssignVolumeOutcome OpsWorksClient::AssignVolume(const AssignVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssignVolumeOutcome(NoResult());
  }
  else
  {
    return AssignVolumeOutcome(outcome.GetError());
  }
}

AssignVolumeOutcomeCallable OpsWorksClient::AssignVolumeCallable(const AssignVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::AssignVolumeAsync(const AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssignVolumeAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::AssignVolumeAsyncHelper(const AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssignVolume(request), context);
}

AssociateElasticIpOutcome OpsWorksClient::AssociateElasticIp(const AssociateElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateElasticIpOutcome(NoResult());
  }
  else
  {
    return AssociateElasticIpOutcome(outcome.GetError());
  }
}

AssociateElasticIpOutcomeCallable OpsWorksClient::AssociateElasticIpCallable(const AssociateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::AssociateElasticIpAsync(const AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateElasticIpAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::AssociateElasticIpAsyncHelper(const AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateElasticIp(request), context);
}

AttachElasticLoadBalancerOutcome OpsWorksClient::AttachElasticLoadBalancer(const AttachElasticLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AttachElasticLoadBalancerOutcome(NoResult());
  }
  else
  {
    return AttachElasticLoadBalancerOutcome(outcome.GetError());
  }
}

AttachElasticLoadBalancerOutcomeCallable OpsWorksClient::AttachElasticLoadBalancerCallable(const AttachElasticLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachElasticLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachElasticLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::AttachElasticLoadBalancerAsync(const AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachElasticLoadBalancerAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::AttachElasticLoadBalancerAsyncHelper(const AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachElasticLoadBalancer(request), context);
}

CloneStackOutcome OpsWorksClient::CloneStack(const CloneStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CloneStackOutcome(CloneStackResult(outcome.GetResult()));
  }
  else
  {
    return CloneStackOutcome(outcome.GetError());
  }
}

CloneStackOutcomeCallable OpsWorksClient::CloneStackCallable(const CloneStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CloneStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CloneStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CloneStackAsync(const CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CloneStackAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::CloneStackAsyncHelper(const CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CloneStack(request), context);
}

CreateAppOutcome OpsWorksClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAppOutcome(CreateAppResult(outcome.GetResult()));
  }
  else
  {
    return CreateAppOutcome(outcome.GetError());
  }
}

CreateAppOutcomeCallable OpsWorksClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAppAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::CreateAppAsyncHelper(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApp(request), context);
}

CreateDeploymentOutcome OpsWorksClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDeploymentOutcome(CreateDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeploymentOutcome(outcome.GetError());
  }
}

CreateDeploymentOutcomeCallable OpsWorksClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeployment(request), context);
}

CreateInstanceOutcome OpsWorksClient::CreateInstance(const CreateInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateInstanceOutcome(CreateInstanceResult(outcome.GetResult()));
  }
  else
  {
    return CreateInstanceOutcome(outcome.GetError());
  }
}

CreateInstanceOutcomeCallable OpsWorksClient::CreateInstanceCallable(const CreateInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::CreateInstanceAsyncHelper(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstance(request), context);
}

CreateLayerOutcome OpsWorksClient::CreateLayer(const CreateLayerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLayerOutcome(CreateLayerResult(outcome.GetResult()));
  }
  else
  {
    return CreateLayerOutcome(outcome.GetError());
  }
}

CreateLayerOutcomeCallable OpsWorksClient::CreateLayerCallable(const CreateLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateLayerAsync(const CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLayerAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::CreateLayerAsyncHelper(const CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLayer(request), context);
}

CreateStackOutcome OpsWorksClient::CreateStack(const CreateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStackOutcome(CreateStackResult(outcome.GetResult()));
  }
  else
  {
    return CreateStackOutcome(outcome.GetError());
  }
}

CreateStackOutcomeCallable OpsWorksClient::CreateStackCallable(const CreateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStackAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::CreateStackAsyncHelper(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStack(request), context);
}

CreateUserProfileOutcome OpsWorksClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserProfileOutcome(CreateUserProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserProfileOutcome(outcome.GetError());
  }
}

CreateUserProfileOutcomeCallable OpsWorksClient::CreateUserProfileCallable(const CreateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::CreateUserProfileAsync(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserProfileAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::CreateUserProfileAsyncHelper(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserProfile(request), context);
}

DeleteAppOutcome OpsWorksClient::DeleteApp(const DeleteAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAppOutcome(NoResult());
  }
  else
  {
    return DeleteAppOutcome(outcome.GetError());
  }
}

DeleteAppOutcomeCallable OpsWorksClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeleteAppAsyncHelper(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApp(request), context);
}

DeleteInstanceOutcome OpsWorksClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteInstanceOutcome(NoResult());
  }
  else
  {
    return DeleteInstanceOutcome(outcome.GetError());
  }
}

DeleteInstanceOutcomeCallable OpsWorksClient::DeleteInstanceCallable(const DeleteInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeleteInstanceAsyncHelper(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstance(request), context);
}

DeleteLayerOutcome OpsWorksClient::DeleteLayer(const DeleteLayerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLayerOutcome(NoResult());
  }
  else
  {
    return DeleteLayerOutcome(outcome.GetError());
  }
}

DeleteLayerOutcomeCallable OpsWorksClient::DeleteLayerCallable(const DeleteLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteLayerAsync(const DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLayerAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeleteLayerAsyncHelper(const DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLayer(request), context);
}

DeleteStackOutcome OpsWorksClient::DeleteStack(const DeleteStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteStackOutcome(NoResult());
  }
  else
  {
    return DeleteStackOutcome(outcome.GetError());
  }
}

DeleteStackOutcomeCallable OpsWorksClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStackAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeleteStackAsyncHelper(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStack(request), context);
}

DeleteUserProfileOutcome OpsWorksClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserProfileOutcome(NoResult());
  }
  else
  {
    return DeleteUserProfileOutcome(outcome.GetError());
  }
}

DeleteUserProfileOutcomeCallable OpsWorksClient::DeleteUserProfileCallable(const DeleteUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserProfileAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeleteUserProfileAsyncHelper(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserProfile(request), context);
}

DeregisterEcsClusterOutcome OpsWorksClient::DeregisterEcsCluster(const DeregisterEcsClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterEcsClusterOutcome(NoResult());
  }
  else
  {
    return DeregisterEcsClusterOutcome(outcome.GetError());
  }
}

DeregisterEcsClusterOutcomeCallable OpsWorksClient::DeregisterEcsClusterCallable(const DeregisterEcsClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterEcsClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterEcsCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterEcsClusterAsync(const DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterEcsClusterAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeregisterEcsClusterAsyncHelper(const DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterEcsCluster(request), context);
}

DeregisterElasticIpOutcome OpsWorksClient::DeregisterElasticIp(const DeregisterElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterElasticIpOutcome(NoResult());
  }
  else
  {
    return DeregisterElasticIpOutcome(outcome.GetError());
  }
}

DeregisterElasticIpOutcomeCallable OpsWorksClient::DeregisterElasticIpCallable(const DeregisterElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterElasticIpAsync(const DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterElasticIpAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeregisterElasticIpAsyncHelper(const DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterElasticIp(request), context);
}

DeregisterInstanceOutcome OpsWorksClient::DeregisterInstance(const DeregisterInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterInstanceOutcome(NoResult());
  }
  else
  {
    return DeregisterInstanceOutcome(outcome.GetError());
  }
}

DeregisterInstanceOutcomeCallable OpsWorksClient::DeregisterInstanceCallable(const DeregisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterInstanceAsync(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeregisterInstanceAsyncHelper(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterInstance(request), context);
}

DeregisterRdsDbInstanceOutcome OpsWorksClient::DeregisterRdsDbInstance(const DeregisterRdsDbInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterRdsDbInstanceOutcome(NoResult());
  }
  else
  {
    return DeregisterRdsDbInstanceOutcome(outcome.GetError());
  }
}

DeregisterRdsDbInstanceOutcomeCallable OpsWorksClient::DeregisterRdsDbInstanceCallable(const DeregisterRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterRdsDbInstanceAsync(const DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterRdsDbInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeregisterRdsDbInstanceAsyncHelper(const DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterRdsDbInstance(request), context);
}

DeregisterVolumeOutcome OpsWorksClient::DeregisterVolume(const DeregisterVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterVolumeOutcome(NoResult());
  }
  else
  {
    return DeregisterVolumeOutcome(outcome.GetError());
  }
}

DeregisterVolumeOutcomeCallable OpsWorksClient::DeregisterVolumeCallable(const DeregisterVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DeregisterVolumeAsync(const DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterVolumeAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DeregisterVolumeAsyncHelper(const DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterVolume(request), context);
}

DescribeAgentVersionsOutcome OpsWorksClient::DescribeAgentVersions(const DescribeAgentVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAgentVersionsOutcome(DescribeAgentVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAgentVersionsOutcome(outcome.GetError());
  }
}

DescribeAgentVersionsOutcomeCallable OpsWorksClient::DescribeAgentVersionsCallable(const DescribeAgentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAgentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAgentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeAgentVersionsAsync(const DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAgentVersionsAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeAgentVersionsAsyncHelper(const DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAgentVersions(request), context);
}

DescribeAppsOutcome OpsWorksClient::DescribeApps(const DescribeAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAppsOutcome(DescribeAppsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAppsOutcome(outcome.GetError());
  }
}

DescribeAppsOutcomeCallable OpsWorksClient::DescribeAppsCallable(const DescribeAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAppsAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeAppsAsyncHelper(const DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApps(request), context);
}

DescribeCommandsOutcome OpsWorksClient::DescribeCommands(const DescribeCommandsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCommandsOutcome(DescribeCommandsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCommandsOutcome(outcome.GetError());
  }
}

DescribeCommandsOutcomeCallable OpsWorksClient::DescribeCommandsCallable(const DescribeCommandsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCommandsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCommands(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeCommandsAsync(const DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCommandsAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeCommandsAsyncHelper(const DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCommands(request), context);
}

DescribeDeploymentsOutcome OpsWorksClient::DescribeDeployments(const DescribeDeploymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDeploymentsOutcome(DescribeDeploymentsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDeploymentsOutcome(outcome.GetError());
  }
}

DescribeDeploymentsOutcomeCallable OpsWorksClient::DescribeDeploymentsCallable(const DescribeDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeDeploymentsAsync(const DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeploymentsAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeDeploymentsAsyncHelper(const DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeployments(request), context);
}

DescribeEcsClustersOutcome OpsWorksClient::DescribeEcsClusters(const DescribeEcsClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEcsClustersOutcome(DescribeEcsClustersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEcsClustersOutcome(outcome.GetError());
  }
}

DescribeEcsClustersOutcomeCallable OpsWorksClient::DescribeEcsClustersCallable(const DescribeEcsClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEcsClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEcsClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeEcsClustersAsync(const DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEcsClustersAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeEcsClustersAsyncHelper(const DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEcsClusters(request), context);
}

DescribeElasticIpsOutcome OpsWorksClient::DescribeElasticIps(const DescribeElasticIpsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeElasticIpsOutcome(DescribeElasticIpsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticIpsOutcome(outcome.GetError());
  }
}

DescribeElasticIpsOutcomeCallable OpsWorksClient::DescribeElasticIpsCallable(const DescribeElasticIpsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticIpsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticIps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeElasticIpsAsync(const DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticIpsAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeElasticIpsAsyncHelper(const DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticIps(request), context);
}

DescribeElasticLoadBalancersOutcome OpsWorksClient::DescribeElasticLoadBalancers(const DescribeElasticLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeElasticLoadBalancersOutcome(DescribeElasticLoadBalancersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeElasticLoadBalancersOutcome(outcome.GetError());
  }
}

DescribeElasticLoadBalancersOutcomeCallable OpsWorksClient::DescribeElasticLoadBalancersCallable(const DescribeElasticLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeElasticLoadBalancersAsync(const DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeElasticLoadBalancersAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeElasticLoadBalancersAsyncHelper(const DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeElasticLoadBalancers(request), context);
}

DescribeInstancesOutcome OpsWorksClient::DescribeInstances(const DescribeInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeInstancesOutcome(DescribeInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstancesOutcome(outcome.GetError());
  }
}

DescribeInstancesOutcomeCallable OpsWorksClient::DescribeInstancesCallable(const DescribeInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstancesAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeInstancesAsyncHelper(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstances(request), context);
}

DescribeLayersOutcome OpsWorksClient::DescribeLayers(const DescribeLayersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLayersOutcome(DescribeLayersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLayersOutcome(outcome.GetError());
  }
}

DescribeLayersOutcomeCallable OpsWorksClient::DescribeLayersCallable(const DescribeLayersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLayersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLayers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeLayersAsync(const DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLayersAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeLayersAsyncHelper(const DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLayers(request), context);
}

DescribeLoadBasedAutoScalingOutcome OpsWorksClient::DescribeLoadBasedAutoScaling(const DescribeLoadBasedAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBasedAutoScalingOutcome(DescribeLoadBasedAutoScalingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBasedAutoScalingOutcome(outcome.GetError());
  }
}

DescribeLoadBasedAutoScalingOutcomeCallable OpsWorksClient::DescribeLoadBasedAutoScalingCallable(const DescribeLoadBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeLoadBasedAutoScalingAsync(const DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBasedAutoScalingAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeLoadBasedAutoScalingAsyncHelper(const DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBasedAutoScaling(request), context);
}

DescribeMyUserProfileOutcome OpsWorksClient::DescribeMyUserProfile() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeMyUserProfile");
  if(outcome.IsSuccess())
  {
    return DescribeMyUserProfileOutcome(DescribeMyUserProfileResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMyUserProfileOutcome(outcome.GetError());
  }
}

DescribeMyUserProfileOutcomeCallable OpsWorksClient::DescribeMyUserProfileCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMyUserProfileOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeMyUserProfile(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeMyUserProfileAsync(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->DescribeMyUserProfileAsyncHelper( handler, context ); } );
}

void OpsWorksClient::DescribeMyUserProfileAsyncHelper(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DescribeMyUserProfile(), context);
}

DescribeOperatingSystemsOutcome OpsWorksClient::DescribeOperatingSystems() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeOperatingSystems");
  if(outcome.IsSuccess())
  {
    return DescribeOperatingSystemsOutcome(DescribeOperatingSystemsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOperatingSystemsOutcome(outcome.GetError());
  }
}

DescribeOperatingSystemsOutcomeCallable OpsWorksClient::DescribeOperatingSystemsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOperatingSystemsOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeOperatingSystems(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeOperatingSystemsAsync(const DescribeOperatingSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->DescribeOperatingSystemsAsyncHelper( handler, context ); } );
}

void OpsWorksClient::DescribeOperatingSystemsAsyncHelper(const DescribeOperatingSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DescribeOperatingSystems(), context);
}

DescribePermissionsOutcome OpsWorksClient::DescribePermissions(const DescribePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePermissionsOutcome(DescribePermissionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribePermissionsOutcome(outcome.GetError());
  }
}

DescribePermissionsOutcomeCallable OpsWorksClient::DescribePermissionsCallable(const DescribePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribePermissionsAsync(const DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePermissionsAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribePermissionsAsyncHelper(const DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePermissions(request), context);
}

DescribeRaidArraysOutcome OpsWorksClient::DescribeRaidArrays(const DescribeRaidArraysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRaidArraysOutcome(DescribeRaidArraysResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRaidArraysOutcome(outcome.GetError());
  }
}

DescribeRaidArraysOutcomeCallable OpsWorksClient::DescribeRaidArraysCallable(const DescribeRaidArraysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRaidArraysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRaidArrays(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeRaidArraysAsync(const DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRaidArraysAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeRaidArraysAsyncHelper(const DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRaidArrays(request), context);
}

DescribeRdsDbInstancesOutcome OpsWorksClient::DescribeRdsDbInstances(const DescribeRdsDbInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRdsDbInstancesOutcome(DescribeRdsDbInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRdsDbInstancesOutcome(outcome.GetError());
  }
}

DescribeRdsDbInstancesOutcomeCallable OpsWorksClient::DescribeRdsDbInstancesCallable(const DescribeRdsDbInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRdsDbInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRdsDbInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeRdsDbInstancesAsync(const DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRdsDbInstancesAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeRdsDbInstancesAsyncHelper(const DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRdsDbInstances(request), context);
}

DescribeServiceErrorsOutcome OpsWorksClient::DescribeServiceErrors(const DescribeServiceErrorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeServiceErrorsOutcome(DescribeServiceErrorsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeServiceErrorsOutcome(outcome.GetError());
  }
}

DescribeServiceErrorsOutcomeCallable OpsWorksClient::DescribeServiceErrorsCallable(const DescribeServiceErrorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceErrorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceErrors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeServiceErrorsAsync(const DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServiceErrorsAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeServiceErrorsAsyncHelper(const DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServiceErrors(request), context);
}

DescribeStackProvisioningParametersOutcome OpsWorksClient::DescribeStackProvisioningParameters(const DescribeStackProvisioningParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStackProvisioningParametersOutcome(DescribeStackProvisioningParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackProvisioningParametersOutcome(outcome.GetError());
  }
}

DescribeStackProvisioningParametersOutcomeCallable OpsWorksClient::DescribeStackProvisioningParametersCallable(const DescribeStackProvisioningParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackProvisioningParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackProvisioningParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeStackProvisioningParametersAsync(const DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackProvisioningParametersAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeStackProvisioningParametersAsyncHelper(const DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackProvisioningParameters(request), context);
}

DescribeStackSummaryOutcome OpsWorksClient::DescribeStackSummary(const DescribeStackSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStackSummaryOutcome(DescribeStackSummaryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStackSummaryOutcome(outcome.GetError());
  }
}

DescribeStackSummaryOutcomeCallable OpsWorksClient::DescribeStackSummaryCallable(const DescribeStackSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeStackSummaryAsync(const DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStackSummaryAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeStackSummaryAsyncHelper(const DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStackSummary(request), context);
}

DescribeStacksOutcome OpsWorksClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStacksOutcome(DescribeStacksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStacksOutcome(outcome.GetError());
  }
}

DescribeStacksOutcomeCallable OpsWorksClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStacksAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeStacksAsyncHelper(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStacks(request), context);
}

DescribeTimeBasedAutoScalingOutcome OpsWorksClient::DescribeTimeBasedAutoScaling(const DescribeTimeBasedAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTimeBasedAutoScalingOutcome(DescribeTimeBasedAutoScalingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTimeBasedAutoScalingOutcome(outcome.GetError());
  }
}

DescribeTimeBasedAutoScalingOutcomeCallable OpsWorksClient::DescribeTimeBasedAutoScalingCallable(const DescribeTimeBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTimeBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTimeBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeTimeBasedAutoScalingAsync(const DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTimeBasedAutoScalingAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeTimeBasedAutoScalingAsyncHelper(const DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTimeBasedAutoScaling(request), context);
}

DescribeUserProfilesOutcome OpsWorksClient::DescribeUserProfiles(const DescribeUserProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserProfilesOutcome(DescribeUserProfilesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserProfilesOutcome(outcome.GetError());
  }
}

DescribeUserProfilesOutcomeCallable OpsWorksClient::DescribeUserProfilesCallable(const DescribeUserProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeUserProfilesAsync(const DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserProfilesAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeUserProfilesAsyncHelper(const DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserProfiles(request), context);
}

DescribeVolumesOutcome OpsWorksClient::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeVolumesOutcome(DescribeVolumesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVolumesOutcome(outcome.GetError());
  }
}

DescribeVolumesOutcomeCallable OpsWorksClient::DescribeVolumesCallable(const DescribeVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVolumesAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DescribeVolumesAsyncHelper(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVolumes(request), context);
}

DetachElasticLoadBalancerOutcome OpsWorksClient::DetachElasticLoadBalancer(const DetachElasticLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetachElasticLoadBalancerOutcome(NoResult());
  }
  else
  {
    return DetachElasticLoadBalancerOutcome(outcome.GetError());
  }
}

DetachElasticLoadBalancerOutcomeCallable OpsWorksClient::DetachElasticLoadBalancerCallable(const DetachElasticLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachElasticLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachElasticLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DetachElasticLoadBalancerAsync(const DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachElasticLoadBalancerAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DetachElasticLoadBalancerAsyncHelper(const DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachElasticLoadBalancer(request), context);
}

DisassociateElasticIpOutcome OpsWorksClient::DisassociateElasticIp(const DisassociateElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateElasticIpOutcome(NoResult());
  }
  else
  {
    return DisassociateElasticIpOutcome(outcome.GetError());
  }
}

DisassociateElasticIpOutcomeCallable OpsWorksClient::DisassociateElasticIpCallable(const DisassociateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::DisassociateElasticIpAsync(const DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateElasticIpAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::DisassociateElasticIpAsyncHelper(const DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateElasticIp(request), context);
}

GetHostnameSuggestionOutcome OpsWorksClient::GetHostnameSuggestion(const GetHostnameSuggestionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetHostnameSuggestionOutcome(GetHostnameSuggestionResult(outcome.GetResult()));
  }
  else
  {
    return GetHostnameSuggestionOutcome(outcome.GetError());
  }
}

GetHostnameSuggestionOutcomeCallable OpsWorksClient::GetHostnameSuggestionCallable(const GetHostnameSuggestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostnameSuggestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostnameSuggestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::GetHostnameSuggestionAsync(const GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHostnameSuggestionAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::GetHostnameSuggestionAsyncHelper(const GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHostnameSuggestion(request), context);
}

GrantAccessOutcome OpsWorksClient::GrantAccess(const GrantAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GrantAccessOutcome(GrantAccessResult(outcome.GetResult()));
  }
  else
  {
    return GrantAccessOutcome(outcome.GetError());
  }
}

GrantAccessOutcomeCallable OpsWorksClient::GrantAccessCallable(const GrantAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GrantAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GrantAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::GrantAccessAsync(const GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GrantAccessAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::GrantAccessAsyncHelper(const GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GrantAccess(request), context);
}

ListTagsOutcome OpsWorksClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
}

ListTagsOutcomeCallable OpsWorksClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

RebootInstanceOutcome OpsWorksClient::RebootInstance(const RebootInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RebootInstanceOutcome(NoResult());
  }
  else
  {
    return RebootInstanceOutcome(outcome.GetError());
  }
}

RebootInstanceOutcomeCallable OpsWorksClient::RebootInstanceCallable(const RebootInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebootInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::RebootInstanceAsyncHelper(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootInstance(request), context);
}

RegisterEcsClusterOutcome OpsWorksClient::RegisterEcsCluster(const RegisterEcsClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterEcsClusterOutcome(RegisterEcsClusterResult(outcome.GetResult()));
  }
  else
  {
    return RegisterEcsClusterOutcome(outcome.GetError());
  }
}

RegisterEcsClusterOutcomeCallable OpsWorksClient::RegisterEcsClusterCallable(const RegisterEcsClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterEcsClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterEcsCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterEcsClusterAsync(const RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterEcsClusterAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::RegisterEcsClusterAsyncHelper(const RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterEcsCluster(request), context);
}

RegisterElasticIpOutcome OpsWorksClient::RegisterElasticIp(const RegisterElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterElasticIpOutcome(RegisterElasticIpResult(outcome.GetResult()));
  }
  else
  {
    return RegisterElasticIpOutcome(outcome.GetError());
  }
}

RegisterElasticIpOutcomeCallable OpsWorksClient::RegisterElasticIpCallable(const RegisterElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterElasticIpAsync(const RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterElasticIpAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::RegisterElasticIpAsyncHelper(const RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterElasticIp(request), context);
}

RegisterInstanceOutcome OpsWorksClient::RegisterInstance(const RegisterInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterInstanceOutcome(RegisterInstanceResult(outcome.GetResult()));
  }
  else
  {
    return RegisterInstanceOutcome(outcome.GetError());
  }
}

RegisterInstanceOutcomeCallable OpsWorksClient::RegisterInstanceCallable(const RegisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterInstanceAsync(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::RegisterInstanceAsyncHelper(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterInstance(request), context);
}

RegisterRdsDbInstanceOutcome OpsWorksClient::RegisterRdsDbInstance(const RegisterRdsDbInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterRdsDbInstanceOutcome(NoResult());
  }
  else
  {
    return RegisterRdsDbInstanceOutcome(outcome.GetError());
  }
}

RegisterRdsDbInstanceOutcomeCallable OpsWorksClient::RegisterRdsDbInstanceCallable(const RegisterRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterRdsDbInstanceAsync(const RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterRdsDbInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::RegisterRdsDbInstanceAsyncHelper(const RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterRdsDbInstance(request), context);
}

RegisterVolumeOutcome OpsWorksClient::RegisterVolume(const RegisterVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterVolumeOutcome(RegisterVolumeResult(outcome.GetResult()));
  }
  else
  {
    return RegisterVolumeOutcome(outcome.GetError());
  }
}

RegisterVolumeOutcomeCallable OpsWorksClient::RegisterVolumeCallable(const RegisterVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::RegisterVolumeAsync(const RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterVolumeAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::RegisterVolumeAsyncHelper(const RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterVolume(request), context);
}

SetLoadBasedAutoScalingOutcome OpsWorksClient::SetLoadBasedAutoScaling(const SetLoadBasedAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetLoadBasedAutoScalingOutcome(NoResult());
  }
  else
  {
    return SetLoadBasedAutoScalingOutcome(outcome.GetError());
  }
}

SetLoadBasedAutoScalingOutcomeCallable OpsWorksClient::SetLoadBasedAutoScalingCallable(const SetLoadBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::SetLoadBasedAutoScalingAsync(const SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetLoadBasedAutoScalingAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::SetLoadBasedAutoScalingAsyncHelper(const SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLoadBasedAutoScaling(request), context);
}

SetPermissionOutcome OpsWorksClient::SetPermission(const SetPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetPermissionOutcome(NoResult());
  }
  else
  {
    return SetPermissionOutcome(outcome.GetError());
  }
}

SetPermissionOutcomeCallable OpsWorksClient::SetPermissionCallable(const SetPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::SetPermissionAsync(const SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetPermissionAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::SetPermissionAsyncHelper(const SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetPermission(request), context);
}

SetTimeBasedAutoScalingOutcome OpsWorksClient::SetTimeBasedAutoScaling(const SetTimeBasedAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetTimeBasedAutoScalingOutcome(NoResult());
  }
  else
  {
    return SetTimeBasedAutoScalingOutcome(outcome.GetError());
  }
}

SetTimeBasedAutoScalingOutcomeCallable OpsWorksClient::SetTimeBasedAutoScalingCallable(const SetTimeBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTimeBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTimeBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::SetTimeBasedAutoScalingAsync(const SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetTimeBasedAutoScalingAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::SetTimeBasedAutoScalingAsyncHelper(const SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTimeBasedAutoScaling(request), context);
}

StartInstanceOutcome OpsWorksClient::StartInstance(const StartInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartInstanceOutcome(NoResult());
  }
  else
  {
    return StartInstanceOutcome(outcome.GetError());
  }
}

StartInstanceOutcomeCallable OpsWorksClient::StartInstanceCallable(const StartInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::StartInstanceAsync(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::StartInstanceAsyncHelper(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartInstance(request), context);
}

StartStackOutcome OpsWorksClient::StartStack(const StartStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartStackOutcome(NoResult());
  }
  else
  {
    return StartStackOutcome(outcome.GetError());
  }
}

StartStackOutcomeCallable OpsWorksClient::StartStackCallable(const StartStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::StartStackAsync(const StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartStackAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::StartStackAsyncHelper(const StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartStack(request), context);
}

StopInstanceOutcome OpsWorksClient::StopInstance(const StopInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopInstanceOutcome(NoResult());
  }
  else
  {
    return StopInstanceOutcome(outcome.GetError());
  }
}

StopInstanceOutcomeCallable OpsWorksClient::StopInstanceCallable(const StopInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::StopInstanceAsyncHelper(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopInstance(request), context);
}

StopStackOutcome OpsWorksClient::StopStack(const StopStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopStackOutcome(NoResult());
  }
  else
  {
    return StopStackOutcome(outcome.GetError());
  }
}

StopStackOutcomeCallable OpsWorksClient::StopStackCallable(const StopStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::StopStackAsync(const StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopStackAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::StopStackAsyncHelper(const StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopStack(request), context);
}

TagResourceOutcome OpsWorksClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable OpsWorksClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UnassignInstanceOutcome OpsWorksClient::UnassignInstance(const UnassignInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UnassignInstanceOutcome(NoResult());
  }
  else
  {
    return UnassignInstanceOutcome(outcome.GetError());
  }
}

UnassignInstanceOutcomeCallable OpsWorksClient::UnassignInstanceCallable(const UnassignInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnassignInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnassignInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UnassignInstanceAsync(const UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnassignInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UnassignInstanceAsyncHelper(const UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnassignInstance(request), context);
}

UnassignVolumeOutcome OpsWorksClient::UnassignVolume(const UnassignVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UnassignVolumeOutcome(NoResult());
  }
  else
  {
    return UnassignVolumeOutcome(outcome.GetError());
  }
}

UnassignVolumeOutcomeCallable OpsWorksClient::UnassignVolumeCallable(const UnassignVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnassignVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnassignVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UnassignVolumeAsync(const UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnassignVolumeAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UnassignVolumeAsyncHelper(const UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnassignVolume(request), context);
}

UntagResourceOutcome OpsWorksClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable OpsWorksClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAppOutcome OpsWorksClient::UpdateApp(const UpdateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAppOutcome(NoResult());
  }
  else
  {
    return UpdateAppOutcome(outcome.GetError());
  }
}

UpdateAppOutcomeCallable OpsWorksClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAppAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateAppAsyncHelper(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApp(request), context);
}

UpdateElasticIpOutcome OpsWorksClient::UpdateElasticIp(const UpdateElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateElasticIpOutcome(NoResult());
  }
  else
  {
    return UpdateElasticIpOutcome(outcome.GetError());
  }
}

UpdateElasticIpOutcomeCallable OpsWorksClient::UpdateElasticIpCallable(const UpdateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateElasticIpAsync(const UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateElasticIpAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateElasticIpAsyncHelper(const UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateElasticIp(request), context);
}

UpdateInstanceOutcome OpsWorksClient::UpdateInstance(const UpdateInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateInstanceOutcome(NoResult());
  }
  else
  {
    return UpdateInstanceOutcome(outcome.GetError());
  }
}

UpdateInstanceOutcomeCallable OpsWorksClient::UpdateInstanceCallable(const UpdateInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateInstanceAsyncHelper(const UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInstance(request), context);
}

UpdateLayerOutcome OpsWorksClient::UpdateLayer(const UpdateLayerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateLayerOutcome(NoResult());
  }
  else
  {
    return UpdateLayerOutcome(outcome.GetError());
  }
}

UpdateLayerOutcomeCallable OpsWorksClient::UpdateLayerCallable(const UpdateLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateLayerAsync(const UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLayerAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateLayerAsyncHelper(const UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLayer(request), context);
}

UpdateMyUserProfileOutcome OpsWorksClient::UpdateMyUserProfile(const UpdateMyUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMyUserProfileOutcome(NoResult());
  }
  else
  {
    return UpdateMyUserProfileOutcome(outcome.GetError());
  }
}

UpdateMyUserProfileOutcomeCallable OpsWorksClient::UpdateMyUserProfileCallable(const UpdateMyUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMyUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMyUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateMyUserProfileAsync(const UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMyUserProfileAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateMyUserProfileAsyncHelper(const UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMyUserProfile(request), context);
}

UpdateRdsDbInstanceOutcome OpsWorksClient::UpdateRdsDbInstance(const UpdateRdsDbInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRdsDbInstanceOutcome(NoResult());
  }
  else
  {
    return UpdateRdsDbInstanceOutcome(outcome.GetError());
  }
}

UpdateRdsDbInstanceOutcomeCallable OpsWorksClient::UpdateRdsDbInstanceCallable(const UpdateRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateRdsDbInstanceAsync(const UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRdsDbInstanceAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateRdsDbInstanceAsyncHelper(const UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRdsDbInstance(request), context);
}

UpdateStackOutcome OpsWorksClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateStackOutcome(NoResult());
  }
  else
  {
    return UpdateStackOutcome(outcome.GetError());
  }
}

UpdateStackOutcomeCallable OpsWorksClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStackAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateStackAsyncHelper(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStack(request), context);
}

UpdateUserProfileOutcome OpsWorksClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserProfileOutcome(NoResult());
  }
  else
  {
    return UpdateUserProfileOutcome(outcome.GetError());
  }
}

UpdateUserProfileOutcomeCallable OpsWorksClient::UpdateUserProfileCallable(const UpdateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserProfileAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateUserProfileAsyncHelper(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserProfile(request), context);
}

UpdateVolumeOutcome OpsWorksClient::UpdateVolume(const UpdateVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVolumeOutcome(NoResult());
  }
  else
  {
    return UpdateVolumeOutcome(outcome.GetError());
  }
}

UpdateVolumeOutcomeCallable OpsWorksClient::UpdateVolumeCallable(const UpdateVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClient::UpdateVolumeAsync(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVolumeAsyncHelper( request, handler, context ); } );
}

void OpsWorksClient::UpdateVolumeAsyncHelper(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVolume(request), context);
}

