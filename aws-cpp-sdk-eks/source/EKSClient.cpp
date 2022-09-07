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

#include <aws/eks/EKSClient.h>
#include <aws/eks/EKSEndpoint.h>
#include <aws/eks/EKSErrorMarshaller.h>
#include <aws/eks/model/AssociateEncryptionConfigRequest.h>
#include <aws/eks/model/AssociateIdentityProviderConfigRequest.h>
#include <aws/eks/model/CreateAddonRequest.h>
#include <aws/eks/model/CreateClusterRequest.h>
#include <aws/eks/model/CreateFargateProfileRequest.h>
#include <aws/eks/model/CreateNodegroupRequest.h>
#include <aws/eks/model/DeleteAddonRequest.h>
#include <aws/eks/model/DeleteClusterRequest.h>
#include <aws/eks/model/DeleteFargateProfileRequest.h>
#include <aws/eks/model/DeleteNodegroupRequest.h>
#include <aws/eks/model/DeregisterClusterRequest.h>
#include <aws/eks/model/DescribeAddonRequest.h>
#include <aws/eks/model/DescribeAddonVersionsRequest.h>
#include <aws/eks/model/DescribeClusterRequest.h>
#include <aws/eks/model/DescribeFargateProfileRequest.h>
#include <aws/eks/model/DescribeIdentityProviderConfigRequest.h>
#include <aws/eks/model/DescribeNodegroupRequest.h>
#include <aws/eks/model/DescribeUpdateRequest.h>
#include <aws/eks/model/DisassociateIdentityProviderConfigRequest.h>
#include <aws/eks/model/ListAddonsRequest.h>
#include <aws/eks/model/ListClustersRequest.h>
#include <aws/eks/model/ListFargateProfilesRequest.h>
#include <aws/eks/model/ListIdentityProviderConfigsRequest.h>
#include <aws/eks/model/ListNodegroupsRequest.h>
#include <aws/eks/model/ListTagsForResourceRequest.h>
#include <aws/eks/model/ListUpdatesRequest.h>
#include <aws/eks/model/RegisterClusterRequest.h>
#include <aws/eks/model/TagResourceRequest.h>
#include <aws/eks/model/UntagResourceRequest.h>
#include <aws/eks/model/UpdateAddonRequest.h>
#include <aws/eks/model/UpdateClusterConfigRequest.h>
#include <aws/eks/model/UpdateClusterVersionRequest.h>
#include <aws/eks/model/UpdateNodegroupConfigRequest.h>
#include <aws/eks/model/UpdateNodegroupVersionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EKS;
using namespace Aws::EKS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "eks";
static const char* ALLOCATION_TAG = "EKSClient";

EKSClient::EKSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EKSClient::EKSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EKSClient::EKSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EKSClient::~EKSClient()
{
}

void EKSClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EKS");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EKSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void EKSClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateEncryptionConfigOutcome EKSClient::AssociateEncryptionConfig(const AssociateEncryptionConfigRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateEncryptionConfig", "Required field: ClusterName, is not set");
    return AssociateEncryptionConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/encryption-config/associate");
  return AssociateEncryptionConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateEncryptionConfigOutcomeCallable EKSClient::AssociateEncryptionConfigCallable(const AssociateEncryptionConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateEncryptionConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateEncryptionConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientAssociateEncryptionConfigAsyncHelper(EKSClient const * const clientThis, const AssociateEncryptionConfigRequest& request, const AssociateEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateEncryptionConfig(request), context);
}

void EKSClient::AssociateEncryptionConfigAsync(const AssociateEncryptionConfigRequest& request, const AssociateEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientAssociateEncryptionConfigAsyncHelper( this, request, handler, context ); } );
}

AssociateIdentityProviderConfigOutcome EKSClient::AssociateIdentityProviderConfig(const AssociateIdentityProviderConfigRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateIdentityProviderConfig", "Required field: ClusterName, is not set");
    return AssociateIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/identity-provider-configs/associate");
  return AssociateIdentityProviderConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateIdentityProviderConfigOutcomeCallable EKSClient::AssociateIdentityProviderConfigCallable(const AssociateIdentityProviderConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateIdentityProviderConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateIdentityProviderConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientAssociateIdentityProviderConfigAsyncHelper(EKSClient const * const clientThis, const AssociateIdentityProviderConfigRequest& request, const AssociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateIdentityProviderConfig(request), context);
}

void EKSClient::AssociateIdentityProviderConfigAsync(const AssociateIdentityProviderConfigRequest& request, const AssociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientAssociateIdentityProviderConfigAsyncHelper( this, request, handler, context ); } );
}

CreateAddonOutcome EKSClient::CreateAddon(const CreateAddonRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAddon", "Required field: ClusterName, is not set");
    return CreateAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/addons");
  return CreateAddonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAddonOutcomeCallable EKSClient::CreateAddonCallable(const CreateAddonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAddonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAddon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientCreateAddonAsyncHelper(EKSClient const * const clientThis, const CreateAddonRequest& request, const CreateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAddon(request), context);
}

void EKSClient::CreateAddonAsync(const CreateAddonRequest& request, const CreateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientCreateAddonAsyncHelper( this, request, handler, context ); } );
}

CreateClusterOutcome EKSClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters");
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable EKSClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientCreateClusterAsyncHelper(EKSClient const * const clientThis, const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCluster(request), context);
}

void EKSClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientCreateClusterAsyncHelper( this, request, handler, context ); } );
}

CreateFargateProfileOutcome EKSClient::CreateFargateProfile(const CreateFargateProfileRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFargateProfile", "Required field: ClusterName, is not set");
    return CreateFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/fargate-profiles");
  return CreateFargateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFargateProfileOutcomeCallable EKSClient::CreateFargateProfileCallable(const CreateFargateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFargateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFargateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientCreateFargateProfileAsyncHelper(EKSClient const * const clientThis, const CreateFargateProfileRequest& request, const CreateFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFargateProfile(request), context);
}

void EKSClient::CreateFargateProfileAsync(const CreateFargateProfileRequest& request, const CreateFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientCreateFargateProfileAsyncHelper( this, request, handler, context ); } );
}

CreateNodegroupOutcome EKSClient::CreateNodegroup(const CreateNodegroupRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNodegroup", "Required field: ClusterName, is not set");
    return CreateNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/node-groups");
  return CreateNodegroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNodegroupOutcomeCallable EKSClient::CreateNodegroupCallable(const CreateNodegroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNodegroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNodegroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientCreateNodegroupAsyncHelper(EKSClient const * const clientThis, const CreateNodegroupRequest& request, const CreateNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNodegroup(request), context);
}

void EKSClient::CreateNodegroupAsync(const CreateNodegroupRequest& request, const CreateNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientCreateNodegroupAsyncHelper( this, request, handler, context ); } );
}

DeleteAddonOutcome EKSClient::DeleteAddon(const DeleteAddonRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAddon", "Required field: ClusterName, is not set");
    return DeleteAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAddon", "Required field: AddonName, is not set");
    return DeleteAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/addons/");
  uri.AddPathSegment(request.GetAddonName());
  return DeleteAddonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAddonOutcomeCallable EKSClient::DeleteAddonCallable(const DeleteAddonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAddonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAddon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDeleteAddonAsyncHelper(EKSClient const * const clientThis, const DeleteAddonRequest& request, const DeleteAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAddon(request), context);
}

void EKSClient::DeleteAddonAsync(const DeleteAddonRequest& request, const DeleteAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDeleteAddonAsyncHelper( this, request, handler, context ); } );
}

DeleteClusterOutcome EKSClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: Name, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetName());
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteClusterOutcomeCallable EKSClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDeleteClusterAsyncHelper(EKSClient const * const clientThis, const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCluster(request), context);
}

void EKSClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDeleteClusterAsyncHelper( this, request, handler, context ); } );
}

DeleteFargateProfileOutcome EKSClient::DeleteFargateProfile(const DeleteFargateProfileRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFargateProfile", "Required field: ClusterName, is not set");
    return DeleteFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.FargateProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFargateProfile", "Required field: FargateProfileName, is not set");
    return DeleteFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FargateProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/fargate-profiles/");
  uri.AddPathSegment(request.GetFargateProfileName());
  return DeleteFargateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFargateProfileOutcomeCallable EKSClient::DeleteFargateProfileCallable(const DeleteFargateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFargateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFargateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDeleteFargateProfileAsyncHelper(EKSClient const * const clientThis, const DeleteFargateProfileRequest& request, const DeleteFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFargateProfile(request), context);
}

void EKSClient::DeleteFargateProfileAsync(const DeleteFargateProfileRequest& request, const DeleteFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDeleteFargateProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteNodegroupOutcome EKSClient::DeleteNodegroup(const DeleteNodegroupRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNodegroup", "Required field: ClusterName, is not set");
    return DeleteNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNodegroup", "Required field: NodegroupName, is not set");
    return DeleteNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodegroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/node-groups/");
  uri.AddPathSegment(request.GetNodegroupName());
  return DeleteNodegroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNodegroupOutcomeCallable EKSClient::DeleteNodegroupCallable(const DeleteNodegroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNodegroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNodegroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDeleteNodegroupAsyncHelper(EKSClient const * const clientThis, const DeleteNodegroupRequest& request, const DeleteNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNodegroup(request), context);
}

void EKSClient::DeleteNodegroupAsync(const DeleteNodegroupRequest& request, const DeleteNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDeleteNodegroupAsyncHelper( this, request, handler, context ); } );
}

DeregisterClusterOutcome EKSClient::DeregisterCluster(const DeregisterClusterRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterCluster", "Required field: Name, is not set");
    return DeregisterClusterOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cluster-registrations/");
  uri.AddPathSegment(request.GetName());
  return DeregisterClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeregisterClusterOutcomeCallable EKSClient::DeregisterClusterCallable(const DeregisterClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDeregisterClusterAsyncHelper(EKSClient const * const clientThis, const DeregisterClusterRequest& request, const DeregisterClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterCluster(request), context);
}

void EKSClient::DeregisterClusterAsync(const DeregisterClusterRequest& request, const DeregisterClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDeregisterClusterAsyncHelper( this, request, handler, context ); } );
}

DescribeAddonOutcome EKSClient::DescribeAddon(const DescribeAddonRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAddon", "Required field: ClusterName, is not set");
    return DescribeAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAddon", "Required field: AddonName, is not set");
    return DescribeAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/addons/");
  uri.AddPathSegment(request.GetAddonName());
  return DescribeAddonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAddonOutcomeCallable EKSClient::DescribeAddonCallable(const DescribeAddonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAddon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDescribeAddonAsyncHelper(EKSClient const * const clientThis, const DescribeAddonRequest& request, const DescribeAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAddon(request), context);
}

void EKSClient::DescribeAddonAsync(const DescribeAddonRequest& request, const DescribeAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDescribeAddonAsyncHelper( this, request, handler, context ); } );
}

DescribeAddonVersionsOutcome EKSClient::DescribeAddonVersions(const DescribeAddonVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/addons/supported-versions");
  return DescribeAddonVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAddonVersionsOutcomeCallable EKSClient::DescribeAddonVersionsCallable(const DescribeAddonVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddonVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAddonVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDescribeAddonVersionsAsyncHelper(EKSClient const * const clientThis, const DescribeAddonVersionsRequest& request, const DescribeAddonVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAddonVersions(request), context);
}

void EKSClient::DescribeAddonVersionsAsync(const DescribeAddonVersionsRequest& request, const DescribeAddonVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDescribeAddonVersionsAsyncHelper( this, request, handler, context ); } );
}

DescribeClusterOutcome EKSClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: Name, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetName());
  return DescribeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOutcomeCallable EKSClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDescribeClusterAsyncHelper(EKSClient const * const clientThis, const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCluster(request), context);
}

void EKSClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDescribeClusterAsyncHelper( this, request, handler, context ); } );
}

DescribeFargateProfileOutcome EKSClient::DescribeFargateProfile(const DescribeFargateProfileRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFargateProfile", "Required field: ClusterName, is not set");
    return DescribeFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.FargateProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFargateProfile", "Required field: FargateProfileName, is not set");
    return DescribeFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FargateProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/fargate-profiles/");
  uri.AddPathSegment(request.GetFargateProfileName());
  return DescribeFargateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFargateProfileOutcomeCallable EKSClient::DescribeFargateProfileCallable(const DescribeFargateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFargateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFargateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDescribeFargateProfileAsyncHelper(EKSClient const * const clientThis, const DescribeFargateProfileRequest& request, const DescribeFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFargateProfile(request), context);
}

void EKSClient::DescribeFargateProfileAsync(const DescribeFargateProfileRequest& request, const DescribeFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDescribeFargateProfileAsyncHelper( this, request, handler, context ); } );
}

DescribeIdentityProviderConfigOutcome EKSClient::DescribeIdentityProviderConfig(const DescribeIdentityProviderConfigRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityProviderConfig", "Required field: ClusterName, is not set");
    return DescribeIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/identity-provider-configs/describe");
  return DescribeIdentityProviderConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityProviderConfigOutcomeCallable EKSClient::DescribeIdentityProviderConfigCallable(const DescribeIdentityProviderConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityProviderConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityProviderConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDescribeIdentityProviderConfigAsyncHelper(EKSClient const * const clientThis, const DescribeIdentityProviderConfigRequest& request, const DescribeIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIdentityProviderConfig(request), context);
}

void EKSClient::DescribeIdentityProviderConfigAsync(const DescribeIdentityProviderConfigRequest& request, const DescribeIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDescribeIdentityProviderConfigAsyncHelper( this, request, handler, context ); } );
}

DescribeNodegroupOutcome EKSClient::DescribeNodegroup(const DescribeNodegroupRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNodegroup", "Required field: ClusterName, is not set");
    return DescribeNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNodegroup", "Required field: NodegroupName, is not set");
    return DescribeNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodegroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/node-groups/");
  uri.AddPathSegment(request.GetNodegroupName());
  return DescribeNodegroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNodegroupOutcomeCallable EKSClient::DescribeNodegroupCallable(const DescribeNodegroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNodegroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNodegroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDescribeNodegroupAsyncHelper(EKSClient const * const clientThis, const DescribeNodegroupRequest& request, const DescribeNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNodegroup(request), context);
}

void EKSClient::DescribeNodegroupAsync(const DescribeNodegroupRequest& request, const DescribeNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDescribeNodegroupAsyncHelper( this, request, handler, context ); } );
}

DescribeUpdateOutcome EKSClient::DescribeUpdate(const DescribeUpdateRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUpdate", "Required field: Name, is not set");
    return DescribeUpdateOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.UpdateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUpdate", "Required field: UpdateId, is not set");
    return DescribeUpdateOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UpdateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/updates/");
  uri.AddPathSegment(request.GetUpdateId());
  return DescribeUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUpdateOutcomeCallable EKSClient::DescribeUpdateCallable(const DescribeUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDescribeUpdateAsyncHelper(EKSClient const * const clientThis, const DescribeUpdateRequest& request, const DescribeUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUpdate(request), context);
}

void EKSClient::DescribeUpdateAsync(const DescribeUpdateRequest& request, const DescribeUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDescribeUpdateAsyncHelper( this, request, handler, context ); } );
}

DisassociateIdentityProviderConfigOutcome EKSClient::DisassociateIdentityProviderConfig(const DisassociateIdentityProviderConfigRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateIdentityProviderConfig", "Required field: ClusterName, is not set");
    return DisassociateIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/identity-provider-configs/disassociate");
  return DisassociateIdentityProviderConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateIdentityProviderConfigOutcomeCallable EKSClient::DisassociateIdentityProviderConfigCallable(const DisassociateIdentityProviderConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateIdentityProviderConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateIdentityProviderConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientDisassociateIdentityProviderConfigAsyncHelper(EKSClient const * const clientThis, const DisassociateIdentityProviderConfigRequest& request, const DisassociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateIdentityProviderConfig(request), context);
}

void EKSClient::DisassociateIdentityProviderConfigAsync(const DisassociateIdentityProviderConfigRequest& request, const DisassociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientDisassociateIdentityProviderConfigAsyncHelper( this, request, handler, context ); } );
}

ListAddonsOutcome EKSClient::ListAddons(const ListAddonsRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAddons", "Required field: ClusterName, is not set");
    return ListAddonsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/addons");
  return ListAddonsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAddonsOutcomeCallable EKSClient::ListAddonsCallable(const ListAddonsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAddonsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAddons(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientListAddonsAsyncHelper(EKSClient const * const clientThis, const ListAddonsRequest& request, const ListAddonsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAddons(request), context);
}

void EKSClient::ListAddonsAsync(const ListAddonsRequest& request, const ListAddonsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientListAddonsAsyncHelper( this, request, handler, context ); } );
}

ListClustersOutcome EKSClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters");
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable EKSClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientListClustersAsyncHelper(EKSClient const * const clientThis, const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClusters(request), context);
}

void EKSClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientListClustersAsyncHelper( this, request, handler, context ); } );
}

ListFargateProfilesOutcome EKSClient::ListFargateProfiles(const ListFargateProfilesRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFargateProfiles", "Required field: ClusterName, is not set");
    return ListFargateProfilesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/fargate-profiles");
  return ListFargateProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFargateProfilesOutcomeCallable EKSClient::ListFargateProfilesCallable(const ListFargateProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFargateProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFargateProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientListFargateProfilesAsyncHelper(EKSClient const * const clientThis, const ListFargateProfilesRequest& request, const ListFargateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFargateProfiles(request), context);
}

void EKSClient::ListFargateProfilesAsync(const ListFargateProfilesRequest& request, const ListFargateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientListFargateProfilesAsyncHelper( this, request, handler, context ); } );
}

ListIdentityProviderConfigsOutcome EKSClient::ListIdentityProviderConfigs(const ListIdentityProviderConfigsRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityProviderConfigs", "Required field: ClusterName, is not set");
    return ListIdentityProviderConfigsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/identity-provider-configs");
  return ListIdentityProviderConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityProviderConfigsOutcomeCallable EKSClient::ListIdentityProviderConfigsCallable(const ListIdentityProviderConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityProviderConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityProviderConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientListIdentityProviderConfigsAsyncHelper(EKSClient const * const clientThis, const ListIdentityProviderConfigsRequest& request, const ListIdentityProviderConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIdentityProviderConfigs(request), context);
}

void EKSClient::ListIdentityProviderConfigsAsync(const ListIdentityProviderConfigsRequest& request, const ListIdentityProviderConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientListIdentityProviderConfigsAsyncHelper( this, request, handler, context ); } );
}

ListNodegroupsOutcome EKSClient::ListNodegroups(const ListNodegroupsRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNodegroups", "Required field: ClusterName, is not set");
    return ListNodegroupsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/node-groups");
  return ListNodegroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNodegroupsOutcomeCallable EKSClient::ListNodegroupsCallable(const ListNodegroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNodegroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNodegroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientListNodegroupsAsyncHelper(EKSClient const * const clientThis, const ListNodegroupsRequest& request, const ListNodegroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNodegroups(request), context);
}

void EKSClient::ListNodegroupsAsync(const ListNodegroupsRequest& request, const ListNodegroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientListNodegroupsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome EKSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable EKSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientListTagsForResourceAsyncHelper(EKSClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void EKSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListUpdatesOutcome EKSClient::ListUpdates(const ListUpdatesRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUpdates", "Required field: Name, is not set");
    return ListUpdatesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/updates");
  return ListUpdatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUpdatesOutcomeCallable EKSClient::ListUpdatesCallable(const ListUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientListUpdatesAsyncHelper(EKSClient const * const clientThis, const ListUpdatesRequest& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUpdates(request), context);
}

void EKSClient::ListUpdatesAsync(const ListUpdatesRequest& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientListUpdatesAsyncHelper( this, request, handler, context ); } );
}

RegisterClusterOutcome EKSClient::RegisterCluster(const RegisterClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/cluster-registrations");
  return RegisterClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterClusterOutcomeCallable EKSClient::RegisterClusterCallable(const RegisterClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientRegisterClusterAsyncHelper(EKSClient const * const clientThis, const RegisterClusterRequest& request, const RegisterClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterCluster(request), context);
}

void EKSClient::RegisterClusterAsync(const RegisterClusterRequest& request, const RegisterClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientRegisterClusterAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome EKSClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable EKSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientTagResourceAsyncHelper(EKSClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void EKSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome EKSClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable EKSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientUntagResourceAsyncHelper(EKSClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void EKSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAddonOutcome EKSClient::UpdateAddon(const UpdateAddonRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAddon", "Required field: ClusterName, is not set");
    return UpdateAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.AddonNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAddon", "Required field: AddonName, is not set");
    return UpdateAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddonName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/addons/");
  uri.AddPathSegment(request.GetAddonName());
  uri.AddPathSegments("/update");
  return UpdateAddonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAddonOutcomeCallable EKSClient::UpdateAddonCallable(const UpdateAddonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAddonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAddon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientUpdateAddonAsyncHelper(EKSClient const * const clientThis, const UpdateAddonRequest& request, const UpdateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAddon(request), context);
}

void EKSClient::UpdateAddonAsync(const UpdateAddonRequest& request, const UpdateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientUpdateAddonAsyncHelper( this, request, handler, context ); } );
}

UpdateClusterConfigOutcome EKSClient::UpdateClusterConfig(const UpdateClusterConfigRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClusterConfig", "Required field: Name, is not set");
    return UpdateClusterConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/update-config");
  return UpdateClusterConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterConfigOutcomeCallable EKSClient::UpdateClusterConfigCallable(const UpdateClusterConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClusterConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientUpdateClusterConfigAsyncHelper(EKSClient const * const clientThis, const UpdateClusterConfigRequest& request, const UpdateClusterConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateClusterConfig(request), context);
}

void EKSClient::UpdateClusterConfigAsync(const UpdateClusterConfigRequest& request, const UpdateClusterConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientUpdateClusterConfigAsyncHelper( this, request, handler, context ); } );
}

UpdateClusterVersionOutcome EKSClient::UpdateClusterVersion(const UpdateClusterVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClusterVersion", "Required field: Name, is not set");
    return UpdateClusterVersionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/updates");
  return UpdateClusterVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterVersionOutcomeCallable EKSClient::UpdateClusterVersionCallable(const UpdateClusterVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClusterVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientUpdateClusterVersionAsyncHelper(EKSClient const * const clientThis, const UpdateClusterVersionRequest& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateClusterVersion(request), context);
}

void EKSClient::UpdateClusterVersionAsync(const UpdateClusterVersionRequest& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientUpdateClusterVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateNodegroupConfigOutcome EKSClient::UpdateNodegroupConfig(const UpdateNodegroupConfigRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupConfig", "Required field: ClusterName, is not set");
    return UpdateNodegroupConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupConfig", "Required field: NodegroupName, is not set");
    return UpdateNodegroupConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodegroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/node-groups/");
  uri.AddPathSegment(request.GetNodegroupName());
  uri.AddPathSegments("/update-config");
  return UpdateNodegroupConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNodegroupConfigOutcomeCallable EKSClient::UpdateNodegroupConfigCallable(const UpdateNodegroupConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNodegroupConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNodegroupConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientUpdateNodegroupConfigAsyncHelper(EKSClient const * const clientThis, const UpdateNodegroupConfigRequest& request, const UpdateNodegroupConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNodegroupConfig(request), context);
}

void EKSClient::UpdateNodegroupConfigAsync(const UpdateNodegroupConfigRequest& request, const UpdateNodegroupConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientUpdateNodegroupConfigAsyncHelper( this, request, handler, context ); } );
}

UpdateNodegroupVersionOutcome EKSClient::UpdateNodegroupVersion(const UpdateNodegroupVersionRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupVersion", "Required field: ClusterName, is not set");
    return UpdateNodegroupVersionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  if (!request.NodegroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodegroupVersion", "Required field: NodegroupName, is not set");
    return UpdateNodegroupVersionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodegroupName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clusters/");
  uri.AddPathSegment(request.GetClusterName());
  uri.AddPathSegments("/node-groups/");
  uri.AddPathSegment(request.GetNodegroupName());
  uri.AddPathSegments("/update-version");
  return UpdateNodegroupVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNodegroupVersionOutcomeCallable EKSClient::UpdateNodegroupVersionCallable(const UpdateNodegroupVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNodegroupVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNodegroupVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClientUpdateNodegroupVersionAsyncHelper(EKSClient const * const clientThis, const UpdateNodegroupVersionRequest& request, const UpdateNodegroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNodegroupVersion(request), context);
}

void EKSClient::UpdateNodegroupVersionAsync(const UpdateNodegroupVersionRequest& request, const UpdateNodegroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EKSClientUpdateNodegroupVersionAsyncHelper( this, request, handler, context ); } );
}

