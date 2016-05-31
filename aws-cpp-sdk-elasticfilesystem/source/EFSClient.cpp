/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticfilesystem/EFSClient.h>
#include <aws/elasticfilesystem/EFSEndpoint.h>
#include <aws/elasticfilesystem/EFSErrorMarshaller.h>
#include <aws/elasticfilesystem/model/CreateFileSystemRequest.h>
#include <aws/elasticfilesystem/model/CreateMountTargetRequest.h>
#include <aws/elasticfilesystem/model/CreateTagsRequest.h>
#include <aws/elasticfilesystem/model/DeleteFileSystemRequest.h>
#include <aws/elasticfilesystem/model/DeleteMountTargetRequest.h>
#include <aws/elasticfilesystem/model/DeleteTagsRequest.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetSecurityGroupsRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsRequest.h>
#include <aws/elasticfilesystem/model/DescribeTagsRequest.h>
#include <aws/elasticfilesystem/model/ModifyMountTargetSecurityGroupsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EFS;
using namespace Aws::EFS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "elasticfilesystem";
static const char* ALLOCATION_TAG = "EFSClient";

EFSClient::EFSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EFSClient::EFSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EFSClient::EFSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EFSClient::~EFSClient()
{
}

void EFSClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << EFSEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateFileSystemOutcome EFSClient::CreateFileSystem(const CreateFileSystemRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/file-systems";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFileSystemOutcome(CreateFileSystemResult(outcome.GetResult()));
  }
  else
  {
    return CreateFileSystemOutcome(outcome.GetError());
  }
}

CreateFileSystemOutcomeCallable EFSClient::CreateFileSystemCallable(const CreateFileSystemRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::CreateFileSystem, this, request);
}

void EFSClient::CreateFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::CreateFileSystemAsyncHelper, this, request, handler, context);
}

void EFSClient::CreateFileSystemAsyncHelper(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFileSystem(request), context);
}

CreateMountTargetOutcome EFSClient::CreateMountTarget(const CreateMountTargetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/mount-targets";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateMountTargetOutcome(CreateMountTargetResult(outcome.GetResult()));
  }
  else
  {
    return CreateMountTargetOutcome(outcome.GetError());
  }
}

CreateMountTargetOutcomeCallable EFSClient::CreateMountTargetCallable(const CreateMountTargetRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::CreateMountTarget, this, request);
}

void EFSClient::CreateMountTargetAsync(const CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::CreateMountTargetAsyncHelper, this, request, handler, context);
}

void EFSClient::CreateMountTargetAsyncHelper(const CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMountTarget(request), context);
}

CreateTagsOutcome EFSClient::CreateTags(const CreateTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/create-tags/";
  ss << request.GetFileSystemId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTagsOutcome(NoResult());
  }
  else
  {
    return CreateTagsOutcome(outcome.GetError());
  }
}

CreateTagsOutcomeCallable EFSClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::CreateTags, this, request);
}

void EFSClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::CreateTagsAsyncHelper, this, request, handler, context);
}

void EFSClient::CreateTagsAsyncHelper(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTags(request), context);
}

DeleteFileSystemOutcome EFSClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/file-systems/";
  ss << request.GetFileSystemId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFileSystemOutcome(NoResult());
  }
  else
  {
    return DeleteFileSystemOutcome(outcome.GetError());
  }
}

DeleteFileSystemOutcomeCallable EFSClient::DeleteFileSystemCallable(const DeleteFileSystemRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::DeleteFileSystem, this, request);
}

void EFSClient::DeleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::DeleteFileSystemAsyncHelper, this, request, handler, context);
}

void EFSClient::DeleteFileSystemAsyncHelper(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFileSystem(request), context);
}

DeleteMountTargetOutcome EFSClient::DeleteMountTarget(const DeleteMountTargetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/mount-targets/";
  ss << request.GetMountTargetId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteMountTargetOutcome(NoResult());
  }
  else
  {
    return DeleteMountTargetOutcome(outcome.GetError());
  }
}

DeleteMountTargetOutcomeCallable EFSClient::DeleteMountTargetCallable(const DeleteMountTargetRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::DeleteMountTarget, this, request);
}

void EFSClient::DeleteMountTargetAsync(const DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::DeleteMountTargetAsyncHelper, this, request, handler, context);
}

void EFSClient::DeleteMountTargetAsyncHelper(const DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMountTarget(request), context);
}

DeleteTagsOutcome EFSClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/delete-tags/";
  ss << request.GetFileSystemId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(NoResult());
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable EFSClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::DeleteTags, this, request);
}

void EFSClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::DeleteTagsAsyncHelper, this, request, handler, context);
}

void EFSClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DescribeFileSystemsOutcome EFSClient::DescribeFileSystems(const DescribeFileSystemsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/file-systems";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeFileSystemsOutcome(DescribeFileSystemsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFileSystemsOutcome(outcome.GetError());
  }
}

DescribeFileSystemsOutcomeCallable EFSClient::DescribeFileSystemsCallable(const DescribeFileSystemsRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::DescribeFileSystems, this, request);
}

void EFSClient::DescribeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::DescribeFileSystemsAsyncHelper, this, request, handler, context);
}

void EFSClient::DescribeFileSystemsAsyncHelper(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFileSystems(request), context);
}

DescribeMountTargetSecurityGroupsOutcome EFSClient::DescribeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/mount-targets/";
  ss << request.GetMountTargetId();
  ss << "/security-groups";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeMountTargetSecurityGroupsOutcome(DescribeMountTargetSecurityGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMountTargetSecurityGroupsOutcome(outcome.GetError());
  }
}

DescribeMountTargetSecurityGroupsOutcomeCallable EFSClient::DescribeMountTargetSecurityGroupsCallable(const DescribeMountTargetSecurityGroupsRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::DescribeMountTargetSecurityGroups, this, request);
}

void EFSClient::DescribeMountTargetSecurityGroupsAsync(const DescribeMountTargetSecurityGroupsRequest& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::DescribeMountTargetSecurityGroupsAsyncHelper, this, request, handler, context);
}

void EFSClient::DescribeMountTargetSecurityGroupsAsyncHelper(const DescribeMountTargetSecurityGroupsRequest& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMountTargetSecurityGroups(request), context);
}

DescribeMountTargetsOutcome EFSClient::DescribeMountTargets(const DescribeMountTargetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/mount-targets";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeMountTargetsOutcome(DescribeMountTargetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMountTargetsOutcome(outcome.GetError());
  }
}

DescribeMountTargetsOutcomeCallable EFSClient::DescribeMountTargetsCallable(const DescribeMountTargetsRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::DescribeMountTargets, this, request);
}

void EFSClient::DescribeMountTargetsAsync(const DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::DescribeMountTargetsAsyncHelper, this, request, handler, context);
}

void EFSClient::DescribeMountTargetsAsyncHelper(const DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMountTargets(request), context);
}

DescribeTagsOutcome EFSClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/tags/";
  ss << request.GetFileSystemId();
  ss << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable EFSClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::DescribeTags, this, request);
}

void EFSClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::DescribeTagsAsyncHelper, this, request, handler, context);
}

void EFSClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

ModifyMountTargetSecurityGroupsOutcome EFSClient::ModifyMountTargetSecurityGroups(const ModifyMountTargetSecurityGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-02-01/mount-targets/";
  ss << request.GetMountTargetId();
  ss << "/security-groups";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return ModifyMountTargetSecurityGroupsOutcome(NoResult());
  }
  else
  {
    return ModifyMountTargetSecurityGroupsOutcome(outcome.GetError());
  }
}

ModifyMountTargetSecurityGroupsOutcomeCallable EFSClient::ModifyMountTargetSecurityGroupsCallable(const ModifyMountTargetSecurityGroupsRequest& request) const
{
  return std::async(std::launch::async, &EFSClient::ModifyMountTargetSecurityGroups, this, request);
}

void EFSClient::ModifyMountTargetSecurityGroupsAsync(const ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&EFSClient::ModifyMountTargetSecurityGroupsAsyncHelper, this, request, handler, context);
}

void EFSClient::ModifyMountTargetSecurityGroupsAsyncHelper(const ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyMountTargetSecurityGroups(request), context);
}

