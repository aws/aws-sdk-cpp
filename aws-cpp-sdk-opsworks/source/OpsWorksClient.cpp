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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::OpsWorksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpsWorksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OpsWorksClient::~OpsWorksClient()
{
}

void OpsWorksClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("OpsWorks");
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
  return AssignInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssignInstanceOutcomeCallable OpsWorksClient::AssignInstanceCallable(const AssignInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientAssignInstanceAsyncHelper(OpsWorksClient const * const clientThis, const AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssignInstance(request), context);
}

void OpsWorksClient::AssignInstanceAsync(const AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientAssignInstanceAsyncHelper( this, request, handler, context ); } );
}

AssignVolumeOutcome OpsWorksClient::AssignVolume(const AssignVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssignVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssignVolumeOutcomeCallable OpsWorksClient::AssignVolumeCallable(const AssignVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssignVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssignVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientAssignVolumeAsyncHelper(OpsWorksClient const * const clientThis, const AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssignVolume(request), context);
}

void OpsWorksClient::AssignVolumeAsync(const AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientAssignVolumeAsyncHelper( this, request, handler, context ); } );
}

AssociateElasticIpOutcome OpsWorksClient::AssociateElasticIp(const AssociateElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateElasticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateElasticIpOutcomeCallable OpsWorksClient::AssociateElasticIpCallable(const AssociateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientAssociateElasticIpAsyncHelper(OpsWorksClient const * const clientThis, const AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateElasticIp(request), context);
}

void OpsWorksClient::AssociateElasticIpAsync(const AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientAssociateElasticIpAsyncHelper( this, request, handler, context ); } );
}

AttachElasticLoadBalancerOutcome OpsWorksClient::AttachElasticLoadBalancer(const AttachElasticLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AttachElasticLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachElasticLoadBalancerOutcomeCallable OpsWorksClient::AttachElasticLoadBalancerCallable(const AttachElasticLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachElasticLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachElasticLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientAttachElasticLoadBalancerAsyncHelper(OpsWorksClient const * const clientThis, const AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachElasticLoadBalancer(request), context);
}

void OpsWorksClient::AttachElasticLoadBalancerAsync(const AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientAttachElasticLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

CloneStackOutcome OpsWorksClient::CloneStack(const CloneStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CloneStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CloneStackOutcomeCallable OpsWorksClient::CloneStackCallable(const CloneStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CloneStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CloneStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientCloneStackAsyncHelper(OpsWorksClient const * const clientThis, const CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CloneStack(request), context);
}

void OpsWorksClient::CloneStackAsync(const CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientCloneStackAsyncHelper( this, request, handler, context ); } );
}

CreateAppOutcome OpsWorksClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable OpsWorksClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientCreateAppAsyncHelper(OpsWorksClient const * const clientThis, const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApp(request), context);
}

void OpsWorksClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientCreateAppAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentOutcome OpsWorksClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable OpsWorksClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientCreateDeploymentAsyncHelper(OpsWorksClient const * const clientThis, const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeployment(request), context);
}

void OpsWorksClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientCreateDeploymentAsyncHelper( this, request, handler, context ); } );
}

CreateInstanceOutcome OpsWorksClient::CreateInstance(const CreateInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceOutcomeCallable OpsWorksClient::CreateInstanceCallable(const CreateInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientCreateInstanceAsyncHelper(OpsWorksClient const * const clientThis, const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInstance(request), context);
}

void OpsWorksClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientCreateInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateLayerOutcome OpsWorksClient::CreateLayer(const CreateLayerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLayerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLayerOutcomeCallable OpsWorksClient::CreateLayerCallable(const CreateLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientCreateLayerAsyncHelper(OpsWorksClient const * const clientThis, const CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLayer(request), context);
}

void OpsWorksClient::CreateLayerAsync(const CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientCreateLayerAsyncHelper( this, request, handler, context ); } );
}

CreateStackOutcome OpsWorksClient::CreateStack(const CreateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStackOutcomeCallable OpsWorksClient::CreateStackCallable(const CreateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientCreateStackAsyncHelper(OpsWorksClient const * const clientThis, const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStack(request), context);
}

void OpsWorksClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientCreateStackAsyncHelper( this, request, handler, context ); } );
}

CreateUserProfileOutcome OpsWorksClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserProfileOutcomeCallable OpsWorksClient::CreateUserProfileCallable(const CreateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientCreateUserProfileAsyncHelper(OpsWorksClient const * const clientThis, const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUserProfile(request), context);
}

void OpsWorksClient::CreateUserProfileAsync(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientCreateUserProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteAppOutcome OpsWorksClient::DeleteApp(const DeleteAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable OpsWorksClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeleteAppAsyncHelper(OpsWorksClient const * const clientThis, const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApp(request), context);
}

void OpsWorksClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeleteAppAsyncHelper( this, request, handler, context ); } );
}

DeleteInstanceOutcome OpsWorksClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceOutcomeCallable OpsWorksClient::DeleteInstanceCallable(const DeleteInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeleteInstanceAsyncHelper(OpsWorksClient const * const clientThis, const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInstance(request), context);
}

void OpsWorksClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeleteInstanceAsyncHelper( this, request, handler, context ); } );
}

DeleteLayerOutcome OpsWorksClient::DeleteLayer(const DeleteLayerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLayerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLayerOutcomeCallable OpsWorksClient::DeleteLayerCallable(const DeleteLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeleteLayerAsyncHelper(OpsWorksClient const * const clientThis, const DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLayer(request), context);
}

void OpsWorksClient::DeleteLayerAsync(const DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeleteLayerAsyncHelper( this, request, handler, context ); } );
}

DeleteStackOutcome OpsWorksClient::DeleteStack(const DeleteStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStackOutcomeCallable OpsWorksClient::DeleteStackCallable(const DeleteStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeleteStackAsyncHelper(OpsWorksClient const * const clientThis, const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStack(request), context);
}

void OpsWorksClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeleteStackAsyncHelper( this, request, handler, context ); } );
}

DeleteUserProfileOutcome OpsWorksClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserProfileOutcomeCallable OpsWorksClient::DeleteUserProfileCallable(const DeleteUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeleteUserProfileAsyncHelper(OpsWorksClient const * const clientThis, const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserProfile(request), context);
}

void OpsWorksClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeleteUserProfileAsyncHelper( this, request, handler, context ); } );
}

DeregisterEcsClusterOutcome OpsWorksClient::DeregisterEcsCluster(const DeregisterEcsClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterEcsClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterEcsClusterOutcomeCallable OpsWorksClient::DeregisterEcsClusterCallable(const DeregisterEcsClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterEcsClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterEcsCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeregisterEcsClusterAsyncHelper(OpsWorksClient const * const clientThis, const DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterEcsCluster(request), context);
}

void OpsWorksClient::DeregisterEcsClusterAsync(const DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeregisterEcsClusterAsyncHelper( this, request, handler, context ); } );
}

DeregisterElasticIpOutcome OpsWorksClient::DeregisterElasticIp(const DeregisterElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterElasticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterElasticIpOutcomeCallable OpsWorksClient::DeregisterElasticIpCallable(const DeregisterElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeregisterElasticIpAsyncHelper(OpsWorksClient const * const clientThis, const DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterElasticIp(request), context);
}

void OpsWorksClient::DeregisterElasticIpAsync(const DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeregisterElasticIpAsyncHelper( this, request, handler, context ); } );
}

DeregisterInstanceOutcome OpsWorksClient::DeregisterInstance(const DeregisterInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterInstanceOutcomeCallable OpsWorksClient::DeregisterInstanceCallable(const DeregisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeregisterInstanceAsyncHelper(OpsWorksClient const * const clientThis, const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterInstance(request), context);
}

void OpsWorksClient::DeregisterInstanceAsync(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeregisterInstanceAsyncHelper( this, request, handler, context ); } );
}

DeregisterRdsDbInstanceOutcome OpsWorksClient::DeregisterRdsDbInstance(const DeregisterRdsDbInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterRdsDbInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterRdsDbInstanceOutcomeCallable OpsWorksClient::DeregisterRdsDbInstanceCallable(const DeregisterRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeregisterRdsDbInstanceAsyncHelper(OpsWorksClient const * const clientThis, const DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterRdsDbInstance(request), context);
}

void OpsWorksClient::DeregisterRdsDbInstanceAsync(const DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeregisterRdsDbInstanceAsyncHelper( this, request, handler, context ); } );
}

DeregisterVolumeOutcome OpsWorksClient::DeregisterVolume(const DeregisterVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterVolumeOutcomeCallable OpsWorksClient::DeregisterVolumeCallable(const DeregisterVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDeregisterVolumeAsyncHelper(OpsWorksClient const * const clientThis, const DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterVolume(request), context);
}

void OpsWorksClient::DeregisterVolumeAsync(const DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDeregisterVolumeAsyncHelper( this, request, handler, context ); } );
}

DescribeAgentVersionsOutcome OpsWorksClient::DescribeAgentVersions(const DescribeAgentVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAgentVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAgentVersionsOutcomeCallable OpsWorksClient::DescribeAgentVersionsCallable(const DescribeAgentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAgentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAgentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeAgentVersionsAsyncHelper(OpsWorksClient const * const clientThis, const DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAgentVersions(request), context);
}

void OpsWorksClient::DescribeAgentVersionsAsync(const DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeAgentVersionsAsyncHelper( this, request, handler, context ); } );
}

DescribeAppsOutcome OpsWorksClient::DescribeApps(const DescribeAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAppsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppsOutcomeCallable OpsWorksClient::DescribeAppsCallable(const DescribeAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeAppsAsyncHelper(OpsWorksClient const * const clientThis, const DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApps(request), context);
}

void OpsWorksClient::DescribeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeAppsAsyncHelper( this, request, handler, context ); } );
}

DescribeCommandsOutcome OpsWorksClient::DescribeCommands(const DescribeCommandsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCommandsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCommandsOutcomeCallable OpsWorksClient::DescribeCommandsCallable(const DescribeCommandsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCommandsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCommands(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeCommandsAsyncHelper(OpsWorksClient const * const clientThis, const DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCommands(request), context);
}

void OpsWorksClient::DescribeCommandsAsync(const DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeCommandsAsyncHelper( this, request, handler, context ); } );
}

DescribeDeploymentsOutcome OpsWorksClient::DescribeDeployments(const DescribeDeploymentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeploymentsOutcomeCallable OpsWorksClient::DescribeDeploymentsCallable(const DescribeDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeDeploymentsAsyncHelper(OpsWorksClient const * const clientThis, const DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDeployments(request), context);
}

void OpsWorksClient::DescribeDeploymentsAsync(const DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeDeploymentsAsyncHelper( this, request, handler, context ); } );
}

DescribeEcsClustersOutcome OpsWorksClient::DescribeEcsClusters(const DescribeEcsClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEcsClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEcsClustersOutcomeCallable OpsWorksClient::DescribeEcsClustersCallable(const DescribeEcsClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEcsClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEcsClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeEcsClustersAsyncHelper(OpsWorksClient const * const clientThis, const DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEcsClusters(request), context);
}

void OpsWorksClient::DescribeEcsClustersAsync(const DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeEcsClustersAsyncHelper( this, request, handler, context ); } );
}

DescribeElasticIpsOutcome OpsWorksClient::DescribeElasticIps(const DescribeElasticIpsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeElasticIpsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeElasticIpsOutcomeCallable OpsWorksClient::DescribeElasticIpsCallable(const DescribeElasticIpsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticIpsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticIps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeElasticIpsAsyncHelper(OpsWorksClient const * const clientThis, const DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeElasticIps(request), context);
}

void OpsWorksClient::DescribeElasticIpsAsync(const DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeElasticIpsAsyncHelper( this, request, handler, context ); } );
}

DescribeElasticLoadBalancersOutcome OpsWorksClient::DescribeElasticLoadBalancers(const DescribeElasticLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeElasticLoadBalancersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeElasticLoadBalancersOutcomeCallable OpsWorksClient::DescribeElasticLoadBalancersCallable(const DescribeElasticLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeElasticLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeElasticLoadBalancersAsyncHelper(OpsWorksClient const * const clientThis, const DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeElasticLoadBalancers(request), context);
}

void OpsWorksClient::DescribeElasticLoadBalancersAsync(const DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeElasticLoadBalancersAsyncHelper( this, request, handler, context ); } );
}

DescribeInstancesOutcome OpsWorksClient::DescribeInstances(const DescribeInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancesOutcomeCallable OpsWorksClient::DescribeInstancesCallable(const DescribeInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeInstancesAsyncHelper(OpsWorksClient const * const clientThis, const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstances(request), context);
}

void OpsWorksClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeLayersOutcome OpsWorksClient::DescribeLayers(const DescribeLayersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLayersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLayersOutcomeCallable OpsWorksClient::DescribeLayersCallable(const DescribeLayersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLayersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLayers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeLayersAsyncHelper(OpsWorksClient const * const clientThis, const DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLayers(request), context);
}

void OpsWorksClient::DescribeLayersAsync(const DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeLayersAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBasedAutoScalingOutcome OpsWorksClient::DescribeLoadBasedAutoScaling(const DescribeLoadBasedAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBasedAutoScalingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoadBasedAutoScalingOutcomeCallable OpsWorksClient::DescribeLoadBasedAutoScalingCallable(const DescribeLoadBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeLoadBasedAutoScalingAsyncHelper(OpsWorksClient const * const clientThis, const DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBasedAutoScaling(request), context);
}

void OpsWorksClient::DescribeLoadBasedAutoScalingAsync(const DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeLoadBasedAutoScalingAsyncHelper( this, request, handler, context ); } );
}

DescribeMyUserProfileOutcome OpsWorksClient::DescribeMyUserProfile() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return DescribeMyUserProfileOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeMyUserProfile"));
}

DescribeMyUserProfileOutcomeCallable OpsWorksClient::DescribeMyUserProfileCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMyUserProfileOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeMyUserProfile(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeMyUserProfileAsyncHelper(OpsWorksClient const * const clientThis, const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->DescribeMyUserProfile(), context);
}

void OpsWorksClient::DescribeMyUserProfileAsync(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ OpsWorksClientDescribeMyUserProfileAsyncHelper( this, handler, context ); } );
}

DescribeOperatingSystemsOutcome OpsWorksClient::DescribeOperatingSystems() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";
  return DescribeOperatingSystemsOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeOperatingSystems"));
}

DescribeOperatingSystemsOutcomeCallable OpsWorksClient::DescribeOperatingSystemsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOperatingSystemsOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeOperatingSystems(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeOperatingSystemsAsyncHelper(OpsWorksClient const * const clientThis, const DescribeOperatingSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->DescribeOperatingSystems(), context);
}

void OpsWorksClient::DescribeOperatingSystemsAsync(const DescribeOperatingSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ OpsWorksClientDescribeOperatingSystemsAsyncHelper( this, handler, context ); } );
}

DescribePermissionsOutcome OpsWorksClient::DescribePermissions(const DescribePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePermissionsOutcomeCallable OpsWorksClient::DescribePermissionsCallable(const DescribePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribePermissionsAsyncHelper(OpsWorksClient const * const clientThis, const DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePermissions(request), context);
}

void OpsWorksClient::DescribePermissionsAsync(const DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribePermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeRaidArraysOutcome OpsWorksClient::DescribeRaidArrays(const DescribeRaidArraysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRaidArraysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRaidArraysOutcomeCallable OpsWorksClient::DescribeRaidArraysCallable(const DescribeRaidArraysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRaidArraysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRaidArrays(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeRaidArraysAsyncHelper(OpsWorksClient const * const clientThis, const DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRaidArrays(request), context);
}

void OpsWorksClient::DescribeRaidArraysAsync(const DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeRaidArraysAsyncHelper( this, request, handler, context ); } );
}

DescribeRdsDbInstancesOutcome OpsWorksClient::DescribeRdsDbInstances(const DescribeRdsDbInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRdsDbInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRdsDbInstancesOutcomeCallable OpsWorksClient::DescribeRdsDbInstancesCallable(const DescribeRdsDbInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRdsDbInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRdsDbInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeRdsDbInstancesAsyncHelper(OpsWorksClient const * const clientThis, const DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRdsDbInstances(request), context);
}

void OpsWorksClient::DescribeRdsDbInstancesAsync(const DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeRdsDbInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeServiceErrorsOutcome OpsWorksClient::DescribeServiceErrors(const DescribeServiceErrorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServiceErrorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceErrorsOutcomeCallable OpsWorksClient::DescribeServiceErrorsCallable(const DescribeServiceErrorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceErrorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceErrors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeServiceErrorsAsyncHelper(OpsWorksClient const * const clientThis, const DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServiceErrors(request), context);
}

void OpsWorksClient::DescribeServiceErrorsAsync(const DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeServiceErrorsAsyncHelper( this, request, handler, context ); } );
}

DescribeStackProvisioningParametersOutcome OpsWorksClient::DescribeStackProvisioningParameters(const DescribeStackProvisioningParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackProvisioningParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStackProvisioningParametersOutcomeCallable OpsWorksClient::DescribeStackProvisioningParametersCallable(const DescribeStackProvisioningParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackProvisioningParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackProvisioningParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeStackProvisioningParametersAsyncHelper(OpsWorksClient const * const clientThis, const DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackProvisioningParameters(request), context);
}

void OpsWorksClient::DescribeStackProvisioningParametersAsync(const DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeStackProvisioningParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeStackSummaryOutcome OpsWorksClient::DescribeStackSummary(const DescribeStackSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStackSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStackSummaryOutcomeCallable OpsWorksClient::DescribeStackSummaryCallable(const DescribeStackSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStackSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStackSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeStackSummaryAsyncHelper(OpsWorksClient const * const clientThis, const DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStackSummary(request), context);
}

void OpsWorksClient::DescribeStackSummaryAsync(const DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeStackSummaryAsyncHelper( this, request, handler, context ); } );
}

DescribeStacksOutcome OpsWorksClient::DescribeStacks(const DescribeStacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStacksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStacksOutcomeCallable OpsWorksClient::DescribeStacksCallable(const DescribeStacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeStacksAsyncHelper(OpsWorksClient const * const clientThis, const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStacks(request), context);
}

void OpsWorksClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeStacksAsyncHelper( this, request, handler, context ); } );
}

DescribeTimeBasedAutoScalingOutcome OpsWorksClient::DescribeTimeBasedAutoScaling(const DescribeTimeBasedAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTimeBasedAutoScalingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTimeBasedAutoScalingOutcomeCallable OpsWorksClient::DescribeTimeBasedAutoScalingCallable(const DescribeTimeBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTimeBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTimeBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeTimeBasedAutoScalingAsyncHelper(OpsWorksClient const * const clientThis, const DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTimeBasedAutoScaling(request), context);
}

void OpsWorksClient::DescribeTimeBasedAutoScalingAsync(const DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeTimeBasedAutoScalingAsyncHelper( this, request, handler, context ); } );
}

DescribeUserProfilesOutcome OpsWorksClient::DescribeUserProfiles(const DescribeUserProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUserProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserProfilesOutcomeCallable OpsWorksClient::DescribeUserProfilesCallable(const DescribeUserProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeUserProfilesAsyncHelper(OpsWorksClient const * const clientThis, const DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUserProfiles(request), context);
}

void OpsWorksClient::DescribeUserProfilesAsync(const DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeUserProfilesAsyncHelper( this, request, handler, context ); } );
}

DescribeVolumesOutcome OpsWorksClient::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeVolumesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVolumesOutcomeCallable OpsWorksClient::DescribeVolumesCallable(const DescribeVolumesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVolumes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDescribeVolumesAsyncHelper(OpsWorksClient const * const clientThis, const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVolumes(request), context);
}

void OpsWorksClient::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDescribeVolumesAsyncHelper( this, request, handler, context ); } );
}

DetachElasticLoadBalancerOutcome OpsWorksClient::DetachElasticLoadBalancer(const DetachElasticLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetachElasticLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachElasticLoadBalancerOutcomeCallable OpsWorksClient::DetachElasticLoadBalancerCallable(const DetachElasticLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachElasticLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachElasticLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDetachElasticLoadBalancerAsyncHelper(OpsWorksClient const * const clientThis, const DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachElasticLoadBalancer(request), context);
}

void OpsWorksClient::DetachElasticLoadBalancerAsync(const DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDetachElasticLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

DisassociateElasticIpOutcome OpsWorksClient::DisassociateElasticIp(const DisassociateElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateElasticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateElasticIpOutcomeCallable OpsWorksClient::DisassociateElasticIpCallable(const DisassociateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientDisassociateElasticIpAsyncHelper(OpsWorksClient const * const clientThis, const DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateElasticIp(request), context);
}

void OpsWorksClient::DisassociateElasticIpAsync(const DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientDisassociateElasticIpAsyncHelper( this, request, handler, context ); } );
}

GetHostnameSuggestionOutcome OpsWorksClient::GetHostnameSuggestion(const GetHostnameSuggestionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetHostnameSuggestionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetHostnameSuggestionOutcomeCallable OpsWorksClient::GetHostnameSuggestionCallable(const GetHostnameSuggestionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostnameSuggestionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostnameSuggestion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientGetHostnameSuggestionAsyncHelper(OpsWorksClient const * const clientThis, const GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetHostnameSuggestion(request), context);
}

void OpsWorksClient::GetHostnameSuggestionAsync(const GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientGetHostnameSuggestionAsyncHelper( this, request, handler, context ); } );
}

GrantAccessOutcome OpsWorksClient::GrantAccess(const GrantAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GrantAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GrantAccessOutcomeCallable OpsWorksClient::GrantAccessCallable(const GrantAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GrantAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GrantAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientGrantAccessAsyncHelper(OpsWorksClient const * const clientThis, const GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GrantAccess(request), context);
}

void OpsWorksClient::GrantAccessAsync(const GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientGrantAccessAsyncHelper( this, request, handler, context ); } );
}

ListTagsOutcome OpsWorksClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable OpsWorksClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientListTagsAsyncHelper(OpsWorksClient const * const clientThis, const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTags(request), context);
}

void OpsWorksClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientListTagsAsyncHelper( this, request, handler, context ); } );
}

RebootInstanceOutcome OpsWorksClient::RebootInstance(const RebootInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootInstanceOutcomeCallable OpsWorksClient::RebootInstanceCallable(const RebootInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientRebootInstanceAsyncHelper(OpsWorksClient const * const clientThis, const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootInstance(request), context);
}

void OpsWorksClient::RebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientRebootInstanceAsyncHelper( this, request, handler, context ); } );
}

RegisterEcsClusterOutcome OpsWorksClient::RegisterEcsCluster(const RegisterEcsClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterEcsClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterEcsClusterOutcomeCallable OpsWorksClient::RegisterEcsClusterCallable(const RegisterEcsClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterEcsClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterEcsCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientRegisterEcsClusterAsyncHelper(OpsWorksClient const * const clientThis, const RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterEcsCluster(request), context);
}

void OpsWorksClient::RegisterEcsClusterAsync(const RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientRegisterEcsClusterAsyncHelper( this, request, handler, context ); } );
}

RegisterElasticIpOutcome OpsWorksClient::RegisterElasticIp(const RegisterElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterElasticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterElasticIpOutcomeCallable OpsWorksClient::RegisterElasticIpCallable(const RegisterElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientRegisterElasticIpAsyncHelper(OpsWorksClient const * const clientThis, const RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterElasticIp(request), context);
}

void OpsWorksClient::RegisterElasticIpAsync(const RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientRegisterElasticIpAsyncHelper( this, request, handler, context ); } );
}

RegisterInstanceOutcome OpsWorksClient::RegisterInstance(const RegisterInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterInstanceOutcomeCallable OpsWorksClient::RegisterInstanceCallable(const RegisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientRegisterInstanceAsyncHelper(OpsWorksClient const * const clientThis, const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterInstance(request), context);
}

void OpsWorksClient::RegisterInstanceAsync(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientRegisterInstanceAsyncHelper( this, request, handler, context ); } );
}

RegisterRdsDbInstanceOutcome OpsWorksClient::RegisterRdsDbInstance(const RegisterRdsDbInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterRdsDbInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterRdsDbInstanceOutcomeCallable OpsWorksClient::RegisterRdsDbInstanceCallable(const RegisterRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientRegisterRdsDbInstanceAsyncHelper(OpsWorksClient const * const clientThis, const RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterRdsDbInstance(request), context);
}

void OpsWorksClient::RegisterRdsDbInstanceAsync(const RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientRegisterRdsDbInstanceAsyncHelper( this, request, handler, context ); } );
}

RegisterVolumeOutcome OpsWorksClient::RegisterVolume(const RegisterVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterVolumeOutcomeCallable OpsWorksClient::RegisterVolumeCallable(const RegisterVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientRegisterVolumeAsyncHelper(OpsWorksClient const * const clientThis, const RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterVolume(request), context);
}

void OpsWorksClient::RegisterVolumeAsync(const RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientRegisterVolumeAsyncHelper( this, request, handler, context ); } );
}

SetLoadBasedAutoScalingOutcome OpsWorksClient::SetLoadBasedAutoScaling(const SetLoadBasedAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetLoadBasedAutoScalingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetLoadBasedAutoScalingOutcomeCallable OpsWorksClient::SetLoadBasedAutoScalingCallable(const SetLoadBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientSetLoadBasedAutoScalingAsyncHelper(OpsWorksClient const * const clientThis, const SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetLoadBasedAutoScaling(request), context);
}

void OpsWorksClient::SetLoadBasedAutoScalingAsync(const SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientSetLoadBasedAutoScalingAsyncHelper( this, request, handler, context ); } );
}

SetPermissionOutcome OpsWorksClient::SetPermission(const SetPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetPermissionOutcomeCallable OpsWorksClient::SetPermissionCallable(const SetPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientSetPermissionAsyncHelper(OpsWorksClient const * const clientThis, const SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetPermission(request), context);
}

void OpsWorksClient::SetPermissionAsync(const SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientSetPermissionAsyncHelper( this, request, handler, context ); } );
}

SetTimeBasedAutoScalingOutcome OpsWorksClient::SetTimeBasedAutoScaling(const SetTimeBasedAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetTimeBasedAutoScalingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetTimeBasedAutoScalingOutcomeCallable OpsWorksClient::SetTimeBasedAutoScalingCallable(const SetTimeBasedAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTimeBasedAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTimeBasedAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientSetTimeBasedAutoScalingAsyncHelper(OpsWorksClient const * const clientThis, const SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetTimeBasedAutoScaling(request), context);
}

void OpsWorksClient::SetTimeBasedAutoScalingAsync(const SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientSetTimeBasedAutoScalingAsyncHelper( this, request, handler, context ); } );
}

StartInstanceOutcome OpsWorksClient::StartInstance(const StartInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartInstanceOutcomeCallable OpsWorksClient::StartInstanceCallable(const StartInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientStartInstanceAsyncHelper(OpsWorksClient const * const clientThis, const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartInstance(request), context);
}

void OpsWorksClient::StartInstanceAsync(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientStartInstanceAsyncHelper( this, request, handler, context ); } );
}

StartStackOutcome OpsWorksClient::StartStack(const StartStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartStackOutcomeCallable OpsWorksClient::StartStackCallable(const StartStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientStartStackAsyncHelper(OpsWorksClient const * const clientThis, const StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartStack(request), context);
}

void OpsWorksClient::StartStackAsync(const StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientStartStackAsyncHelper( this, request, handler, context ); } );
}

StopInstanceOutcome OpsWorksClient::StopInstance(const StopInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopInstanceOutcomeCallable OpsWorksClient::StopInstanceCallable(const StopInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientStopInstanceAsyncHelper(OpsWorksClient const * const clientThis, const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopInstance(request), context);
}

void OpsWorksClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientStopInstanceAsyncHelper( this, request, handler, context ); } );
}

StopStackOutcome OpsWorksClient::StopStack(const StopStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopStackOutcomeCallable OpsWorksClient::StopStackCallable(const StopStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientStopStackAsyncHelper(OpsWorksClient const * const clientThis, const StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopStack(request), context);
}

void OpsWorksClient::StopStackAsync(const StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientStopStackAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome OpsWorksClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable OpsWorksClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientTagResourceAsyncHelper(OpsWorksClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void OpsWorksClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UnassignInstanceOutcome OpsWorksClient::UnassignInstance(const UnassignInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UnassignInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnassignInstanceOutcomeCallable OpsWorksClient::UnassignInstanceCallable(const UnassignInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnassignInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnassignInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUnassignInstanceAsyncHelper(OpsWorksClient const * const clientThis, const UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnassignInstance(request), context);
}

void OpsWorksClient::UnassignInstanceAsync(const UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUnassignInstanceAsyncHelper( this, request, handler, context ); } );
}

UnassignVolumeOutcome OpsWorksClient::UnassignVolume(const UnassignVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UnassignVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnassignVolumeOutcomeCallable OpsWorksClient::UnassignVolumeCallable(const UnassignVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnassignVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnassignVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUnassignVolumeAsyncHelper(OpsWorksClient const * const clientThis, const UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnassignVolume(request), context);
}

void OpsWorksClient::UnassignVolumeAsync(const UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUnassignVolumeAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome OpsWorksClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable OpsWorksClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUntagResourceAsyncHelper(OpsWorksClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void OpsWorksClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAppOutcome OpsWorksClient::UpdateApp(const UpdateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppOutcomeCallable OpsWorksClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateAppAsyncHelper(OpsWorksClient const * const clientThis, const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApp(request), context);
}

void OpsWorksClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateAppAsyncHelper( this, request, handler, context ); } );
}

UpdateElasticIpOutcome OpsWorksClient::UpdateElasticIp(const UpdateElasticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateElasticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateElasticIpOutcomeCallable OpsWorksClient::UpdateElasticIpCallable(const UpdateElasticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateElasticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateElasticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateElasticIpAsyncHelper(OpsWorksClient const * const clientThis, const UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateElasticIp(request), context);
}

void OpsWorksClient::UpdateElasticIpAsync(const UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateElasticIpAsyncHelper( this, request, handler, context ); } );
}

UpdateInstanceOutcome OpsWorksClient::UpdateInstance(const UpdateInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceOutcomeCallable OpsWorksClient::UpdateInstanceCallable(const UpdateInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateInstanceAsyncHelper(OpsWorksClient const * const clientThis, const UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInstance(request), context);
}

void OpsWorksClient::UpdateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateInstanceAsyncHelper( this, request, handler, context ); } );
}

UpdateLayerOutcome OpsWorksClient::UpdateLayer(const UpdateLayerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLayerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLayerOutcomeCallable OpsWorksClient::UpdateLayerCallable(const UpdateLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateLayerAsyncHelper(OpsWorksClient const * const clientThis, const UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLayer(request), context);
}

void OpsWorksClient::UpdateLayerAsync(const UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateLayerAsyncHelper( this, request, handler, context ); } );
}

UpdateMyUserProfileOutcome OpsWorksClient::UpdateMyUserProfile(const UpdateMyUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMyUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMyUserProfileOutcomeCallable OpsWorksClient::UpdateMyUserProfileCallable(const UpdateMyUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMyUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMyUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateMyUserProfileAsyncHelper(OpsWorksClient const * const clientThis, const UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMyUserProfile(request), context);
}

void OpsWorksClient::UpdateMyUserProfileAsync(const UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateMyUserProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateRdsDbInstanceOutcome OpsWorksClient::UpdateRdsDbInstance(const UpdateRdsDbInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRdsDbInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRdsDbInstanceOutcomeCallable OpsWorksClient::UpdateRdsDbInstanceCallable(const UpdateRdsDbInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRdsDbInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRdsDbInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateRdsDbInstanceAsyncHelper(OpsWorksClient const * const clientThis, const UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRdsDbInstance(request), context);
}

void OpsWorksClient::UpdateRdsDbInstanceAsync(const UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateRdsDbInstanceAsyncHelper( this, request, handler, context ); } );
}

UpdateStackOutcome OpsWorksClient::UpdateStack(const UpdateStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStackOutcomeCallable OpsWorksClient::UpdateStackCallable(const UpdateStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateStackAsyncHelper(OpsWorksClient const * const clientThis, const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStack(request), context);
}

void OpsWorksClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateStackAsyncHelper( this, request, handler, context ); } );
}

UpdateUserProfileOutcome OpsWorksClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserProfileOutcomeCallable OpsWorksClient::UpdateUserProfileCallable(const UpdateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateUserProfileAsyncHelper(OpsWorksClient const * const clientThis, const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserProfile(request), context);
}

void OpsWorksClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateUserProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateVolumeOutcome OpsWorksClient::UpdateVolume(const UpdateVolumeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateVolumeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVolumeOutcomeCallable OpsWorksClient::UpdateVolumeCallable(const UpdateVolumeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVolumeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVolume(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OpsWorksClientUpdateVolumeAsyncHelper(OpsWorksClient const * const clientThis, const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVolume(request), context);
}

void OpsWorksClient::UpdateVolumeAsync(const UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ OpsWorksClientUpdateVolumeAsyncHelper( this, request, handler, context ); } );
}

