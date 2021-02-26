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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EKSClient::EKSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EKSClient::EKSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EKSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EKSClient::~EKSClient()
{
}

void EKSClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("EKS");
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/encryption-config/associate";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateEncryptionConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateEncryptionConfigOutcomeCallable EKSClient::AssociateEncryptionConfigCallable(const AssociateEncryptionConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateEncryptionConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateEncryptionConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::AssociateEncryptionConfigAsync(const AssociateEncryptionConfigRequest& request, const AssociateEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateEncryptionConfigAsyncHelper( request, handler, context ); } );
}

void EKSClient::AssociateEncryptionConfigAsyncHelper(const AssociateEncryptionConfigRequest& request, const AssociateEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateEncryptionConfig(request), context);
}

AssociateIdentityProviderConfigOutcome EKSClient::AssociateIdentityProviderConfig(const AssociateIdentityProviderConfigRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateIdentityProviderConfig", "Required field: ClusterName, is not set");
    return AssociateIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/identity-provider-configs/associate";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateIdentityProviderConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateIdentityProviderConfigOutcomeCallable EKSClient::AssociateIdentityProviderConfigCallable(const AssociateIdentityProviderConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateIdentityProviderConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateIdentityProviderConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::AssociateIdentityProviderConfigAsync(const AssociateIdentityProviderConfigRequest& request, const AssociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateIdentityProviderConfigAsyncHelper( request, handler, context ); } );
}

void EKSClient::AssociateIdentityProviderConfigAsyncHelper(const AssociateIdentityProviderConfigRequest& request, const AssociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateIdentityProviderConfig(request), context);
}

CreateAddonOutcome EKSClient::CreateAddon(const CreateAddonRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAddon", "Required field: ClusterName, is not set");
    return CreateAddonOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/addons";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAddonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAddonOutcomeCallable EKSClient::CreateAddonCallable(const CreateAddonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAddonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAddon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::CreateAddonAsync(const CreateAddonRequest& request, const CreateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAddonAsyncHelper( request, handler, context ); } );
}

void EKSClient::CreateAddonAsyncHelper(const CreateAddonRequest& request, const CreateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAddon(request), context);
}

CreateClusterOutcome EKSClient::CreateCluster(const CreateClusterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClusterOutcomeCallable EKSClient::CreateClusterCallable(const CreateClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateClusterAsyncHelper( request, handler, context ); } );
}

void EKSClient::CreateClusterAsyncHelper(const CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCluster(request), context);
}

CreateFargateProfileOutcome EKSClient::CreateFargateProfile(const CreateFargateProfileRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFargateProfile", "Required field: ClusterName, is not set");
    return CreateFargateProfileOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/fargate-profiles";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateFargateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFargateProfileOutcomeCallable EKSClient::CreateFargateProfileCallable(const CreateFargateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFargateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFargateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::CreateFargateProfileAsync(const CreateFargateProfileRequest& request, const CreateFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFargateProfileAsyncHelper( request, handler, context ); } );
}

void EKSClient::CreateFargateProfileAsyncHelper(const CreateFargateProfileRequest& request, const CreateFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFargateProfile(request), context);
}

CreateNodegroupOutcome EKSClient::CreateNodegroup(const CreateNodegroupRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNodegroup", "Required field: ClusterName, is not set");
    return CreateNodegroupOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/node-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateNodegroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNodegroupOutcomeCallable EKSClient::CreateNodegroupCallable(const CreateNodegroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNodegroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNodegroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::CreateNodegroupAsync(const CreateNodegroupRequest& request, const CreateNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNodegroupAsyncHelper( request, handler, context ); } );
}

void EKSClient::CreateNodegroupAsyncHelper(const CreateNodegroupRequest& request, const CreateNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNodegroup(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/addons/";
  ss << request.GetAddonName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAddonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAddonOutcomeCallable EKSClient::DeleteAddonCallable(const DeleteAddonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAddonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAddon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DeleteAddonAsync(const DeleteAddonRequest& request, const DeleteAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAddonAsyncHelper( request, handler, context ); } );
}

void EKSClient::DeleteAddonAsyncHelper(const DeleteAddonRequest& request, const DeleteAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAddon(request), context);
}

DeleteClusterOutcome EKSClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: Name, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteClusterOutcomeCallable EKSClient::DeleteClusterCallable(const DeleteClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteClusterAsyncHelper( request, handler, context ); } );
}

void EKSClient::DeleteClusterAsyncHelper(const DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCluster(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/fargate-profiles/";
  ss << request.GetFargateProfileName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteFargateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFargateProfileOutcomeCallable EKSClient::DeleteFargateProfileCallable(const DeleteFargateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFargateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFargateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DeleteFargateProfileAsync(const DeleteFargateProfileRequest& request, const DeleteFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFargateProfileAsyncHelper( request, handler, context ); } );
}

void EKSClient::DeleteFargateProfileAsyncHelper(const DeleteFargateProfileRequest& request, const DeleteFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFargateProfile(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/node-groups/";
  ss << request.GetNodegroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteNodegroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNodegroupOutcomeCallable EKSClient::DeleteNodegroupCallable(const DeleteNodegroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNodegroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNodegroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DeleteNodegroupAsync(const DeleteNodegroupRequest& request, const DeleteNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNodegroupAsyncHelper( request, handler, context ); } );
}

void EKSClient::DeleteNodegroupAsyncHelper(const DeleteNodegroupRequest& request, const DeleteNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNodegroup(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/addons/";
  ss << request.GetAddonName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAddonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAddonOutcomeCallable EKSClient::DescribeAddonCallable(const DescribeAddonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAddon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DescribeAddonAsync(const DescribeAddonRequest& request, const DescribeAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAddonAsyncHelper( request, handler, context ); } );
}

void EKSClient::DescribeAddonAsyncHelper(const DescribeAddonRequest& request, const DescribeAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAddon(request), context);
}

DescribeAddonVersionsOutcome EKSClient::DescribeAddonVersions(const DescribeAddonVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/addons/supported-versions";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAddonVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAddonVersionsOutcomeCallable EKSClient::DescribeAddonVersionsCallable(const DescribeAddonVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddonVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAddonVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DescribeAddonVersionsAsync(const DescribeAddonVersionsRequest& request, const DescribeAddonVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAddonVersionsAsyncHelper( request, handler, context ); } );
}

void EKSClient::DescribeAddonVersionsAsyncHelper(const DescribeAddonVersionsRequest& request, const DescribeAddonVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAddonVersions(request), context);
}

DescribeClusterOutcome EKSClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: Name, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeClusterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeClusterOutcomeCallable EKSClient::DescribeClusterCallable(const DescribeClusterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClusterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCluster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DescribeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClusterAsyncHelper( request, handler, context ); } );
}

void EKSClient::DescribeClusterAsyncHelper(const DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCluster(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/fargate-profiles/";
  ss << request.GetFargateProfileName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeFargateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFargateProfileOutcomeCallable EKSClient::DescribeFargateProfileCallable(const DescribeFargateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFargateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFargateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DescribeFargateProfileAsync(const DescribeFargateProfileRequest& request, const DescribeFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFargateProfileAsyncHelper( request, handler, context ); } );
}

void EKSClient::DescribeFargateProfileAsyncHelper(const DescribeFargateProfileRequest& request, const DescribeFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFargateProfile(request), context);
}

DescribeIdentityProviderConfigOutcome EKSClient::DescribeIdentityProviderConfig(const DescribeIdentityProviderConfigRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIdentityProviderConfig", "Required field: ClusterName, is not set");
    return DescribeIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/identity-provider-configs/describe";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeIdentityProviderConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityProviderConfigOutcomeCallable EKSClient::DescribeIdentityProviderConfigCallable(const DescribeIdentityProviderConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityProviderConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityProviderConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DescribeIdentityProviderConfigAsync(const DescribeIdentityProviderConfigRequest& request, const DescribeIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIdentityProviderConfigAsyncHelper( request, handler, context ); } );
}

void EKSClient::DescribeIdentityProviderConfigAsyncHelper(const DescribeIdentityProviderConfigRequest& request, const DescribeIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdentityProviderConfig(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/node-groups/";
  ss << request.GetNodegroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeNodegroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNodegroupOutcomeCallable EKSClient::DescribeNodegroupCallable(const DescribeNodegroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNodegroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNodegroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DescribeNodegroupAsync(const DescribeNodegroupRequest& request, const DescribeNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNodegroupAsyncHelper( request, handler, context ); } );
}

void EKSClient::DescribeNodegroupAsyncHelper(const DescribeNodegroupRequest& request, const DescribeNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNodegroup(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetName();
  ss << "/updates/";
  ss << request.GetUpdateId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeUpdateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUpdateOutcomeCallable EKSClient::DescribeUpdateCallable(const DescribeUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DescribeUpdateAsync(const DescribeUpdateRequest& request, const DescribeUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUpdateAsyncHelper( request, handler, context ); } );
}

void EKSClient::DescribeUpdateAsyncHelper(const DescribeUpdateRequest& request, const DescribeUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUpdate(request), context);
}

DisassociateIdentityProviderConfigOutcome EKSClient::DisassociateIdentityProviderConfig(const DisassociateIdentityProviderConfigRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateIdentityProviderConfig", "Required field: ClusterName, is not set");
    return DisassociateIdentityProviderConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/identity-provider-configs/disassociate";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateIdentityProviderConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateIdentityProviderConfigOutcomeCallable EKSClient::DisassociateIdentityProviderConfigCallable(const DisassociateIdentityProviderConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateIdentityProviderConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateIdentityProviderConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::DisassociateIdentityProviderConfigAsync(const DisassociateIdentityProviderConfigRequest& request, const DisassociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateIdentityProviderConfigAsyncHelper( request, handler, context ); } );
}

void EKSClient::DisassociateIdentityProviderConfigAsyncHelper(const DisassociateIdentityProviderConfigRequest& request, const DisassociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateIdentityProviderConfig(request), context);
}

ListAddonsOutcome EKSClient::ListAddons(const ListAddonsRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAddons", "Required field: ClusterName, is not set");
    return ListAddonsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/addons";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAddonsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAddonsOutcomeCallable EKSClient::ListAddonsCallable(const ListAddonsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAddonsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAddons(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::ListAddonsAsync(const ListAddonsRequest& request, const ListAddonsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAddonsAsyncHelper( request, handler, context ); } );
}

void EKSClient::ListAddonsAsyncHelper(const ListAddonsRequest& request, const ListAddonsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAddons(request), context);
}

ListClustersOutcome EKSClient::ListClusters(const ListClustersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListClustersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListClustersOutcomeCallable EKSClient::ListClustersCallable(const ListClustersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClustersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClusters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::ListClustersAsync(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListClustersAsyncHelper( request, handler, context ); } );
}

void EKSClient::ListClustersAsyncHelper(const ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListClusters(request), context);
}

ListFargateProfilesOutcome EKSClient::ListFargateProfiles(const ListFargateProfilesRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFargateProfiles", "Required field: ClusterName, is not set");
    return ListFargateProfilesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/fargate-profiles";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListFargateProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFargateProfilesOutcomeCallable EKSClient::ListFargateProfilesCallable(const ListFargateProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFargateProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFargateProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::ListFargateProfilesAsync(const ListFargateProfilesRequest& request, const ListFargateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFargateProfilesAsyncHelper( request, handler, context ); } );
}

void EKSClient::ListFargateProfilesAsyncHelper(const ListFargateProfilesRequest& request, const ListFargateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFargateProfiles(request), context);
}

ListIdentityProviderConfigsOutcome EKSClient::ListIdentityProviderConfigs(const ListIdentityProviderConfigsRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityProviderConfigs", "Required field: ClusterName, is not set");
    return ListIdentityProviderConfigsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/identity-provider-configs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListIdentityProviderConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityProviderConfigsOutcomeCallable EKSClient::ListIdentityProviderConfigsCallable(const ListIdentityProviderConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityProviderConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityProviderConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::ListIdentityProviderConfigsAsync(const ListIdentityProviderConfigsRequest& request, const ListIdentityProviderConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIdentityProviderConfigsAsyncHelper( request, handler, context ); } );
}

void EKSClient::ListIdentityProviderConfigsAsyncHelper(const ListIdentityProviderConfigsRequest& request, const ListIdentityProviderConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIdentityProviderConfigs(request), context);
}

ListNodegroupsOutcome EKSClient::ListNodegroups(const ListNodegroupsRequest& request) const
{
  if (!request.ClusterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNodegroups", "Required field: ClusterName, is not set");
    return ListNodegroupsOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/node-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListNodegroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNodegroupsOutcomeCallable EKSClient::ListNodegroupsCallable(const ListNodegroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNodegroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNodegroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::ListNodegroupsAsync(const ListNodegroupsRequest& request, const ListNodegroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNodegroupsAsyncHelper( request, handler, context ); } );
}

void EKSClient::ListNodegroupsAsyncHelper(const ListNodegroupsRequest& request, const ListNodegroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNodegroups(request), context);
}

ListTagsForResourceOutcome EKSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable EKSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void EKSClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListUpdatesOutcome EKSClient::ListUpdates(const ListUpdatesRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUpdates", "Required field: Name, is not set");
    return ListUpdatesOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetName();
  ss << "/updates";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListUpdatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUpdatesOutcomeCallable EKSClient::ListUpdatesCallable(const ListUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::ListUpdatesAsync(const ListUpdatesRequest& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUpdatesAsyncHelper( request, handler, context ); } );
}

void EKSClient::ListUpdatesAsyncHelper(const ListUpdatesRequest& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUpdates(request), context);
}

TagResourceOutcome EKSClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable EKSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void EKSClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable EKSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void EKSClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/addons/";
  ss << request.GetAddonName();
  ss << "/update";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAddonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAddonOutcomeCallable EKSClient::UpdateAddonCallable(const UpdateAddonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAddonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAddon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::UpdateAddonAsync(const UpdateAddonRequest& request, const UpdateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAddonAsyncHelper( request, handler, context ); } );
}

void EKSClient::UpdateAddonAsyncHelper(const UpdateAddonRequest& request, const UpdateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAddon(request), context);
}

UpdateClusterConfigOutcome EKSClient::UpdateClusterConfig(const UpdateClusterConfigRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClusterConfig", "Required field: Name, is not set");
    return UpdateClusterConfigOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetName();
  ss << "/update-config";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateClusterConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterConfigOutcomeCallable EKSClient::UpdateClusterConfigCallable(const UpdateClusterConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClusterConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::UpdateClusterConfigAsync(const UpdateClusterConfigRequest& request, const UpdateClusterConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateClusterConfigAsyncHelper( request, handler, context ); } );
}

void EKSClient::UpdateClusterConfigAsyncHelper(const UpdateClusterConfigRequest& request, const UpdateClusterConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateClusterConfig(request), context);
}

UpdateClusterVersionOutcome EKSClient::UpdateClusterVersion(const UpdateClusterVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClusterVersion", "Required field: Name, is not set");
    return UpdateClusterVersionOutcome(Aws::Client::AWSError<EKSErrors>(EKSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetName();
  ss << "/updates";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateClusterVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateClusterVersionOutcomeCallable EKSClient::UpdateClusterVersionCallable(const UpdateClusterVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClusterVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClusterVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::UpdateClusterVersionAsync(const UpdateClusterVersionRequest& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateClusterVersionAsyncHelper( request, handler, context ); } );
}

void EKSClient::UpdateClusterVersionAsyncHelper(const UpdateClusterVersionRequest& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateClusterVersion(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/node-groups/";
  ss << request.GetNodegroupName();
  ss << "/update-config";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateNodegroupConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNodegroupConfigOutcomeCallable EKSClient::UpdateNodegroupConfigCallable(const UpdateNodegroupConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNodegroupConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNodegroupConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::UpdateNodegroupConfigAsync(const UpdateNodegroupConfigRequest& request, const UpdateNodegroupConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNodegroupConfigAsyncHelper( request, handler, context ); } );
}

void EKSClient::UpdateNodegroupConfigAsyncHelper(const UpdateNodegroupConfigRequest& request, const UpdateNodegroupConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNodegroupConfig(request), context);
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
  Aws::StringStream ss;
  ss << "/clusters/";
  ss << request.GetClusterName();
  ss << "/node-groups/";
  ss << request.GetNodegroupName();
  ss << "/update-version";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateNodegroupVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNodegroupVersionOutcomeCallable EKSClient::UpdateNodegroupVersionCallable(const UpdateNodegroupVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNodegroupVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNodegroupVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EKSClient::UpdateNodegroupVersionAsync(const UpdateNodegroupVersionRequest& request, const UpdateNodegroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNodegroupVersionAsyncHelper( request, handler, context ); } );
}

void EKSClient::UpdateNodegroupVersionAsyncHelper(const UpdateNodegroupVersionRequest& request, const UpdateNodegroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNodegroupVersion(request), context);
}

