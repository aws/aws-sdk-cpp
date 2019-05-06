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
#include <aws/elasticfilesystem/model/DescribeLifecycleConfigurationRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetSecurityGroupsRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsRequest.h>
#include <aws/elasticfilesystem/model/DescribeTagsRequest.h>
#include <aws/elasticfilesystem/model/ModifyMountTargetSecurityGroupsRequest.h>
#include <aws/elasticfilesystem/model/PutLifecycleConfigurationRequest.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemRequest.h>

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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EFSClient::EFSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EFSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EFSClient::EFSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EFSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void EFSClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateFileSystemOutcome EFSClient::CreateFileSystem(const CreateFileSystemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/file-systems";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::CreateFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFileSystemAsyncHelper( request, handler, context ); } );
}

void EFSClient::CreateFileSystemAsyncHelper(const CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFileSystem(request), context);
}

CreateMountTargetOutcome EFSClient::CreateMountTarget(const CreateMountTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/mount-targets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateMountTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMountTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::CreateMountTargetAsync(const CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMountTargetAsyncHelper( request, handler, context ); } );
}

void EFSClient::CreateMountTargetAsyncHelper(const CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMountTarget(request), context);
}

CreateTagsOutcome EFSClient::CreateTags(const CreateTagsRequest& request) const
{
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTags", "Required field: FileSystemId, is not set");
    return CreateTagsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/create-tags/";
  ss << request.GetFileSystemId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTagsAsyncHelper( request, handler, context ); } );
}

void EFSClient::CreateTagsAsyncHelper(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTags(request), context);
}

DeleteFileSystemOutcome EFSClient::DeleteFileSystem(const DeleteFileSystemRequest& request) const
{
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFileSystem", "Required field: FileSystemId, is not set");
    return DeleteFileSystemOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/file-systems/";
  ss << request.GetFileSystemId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DeleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFileSystemAsyncHelper( request, handler, context ); } );
}

void EFSClient::DeleteFileSystemAsyncHelper(const DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFileSystem(request), context);
}

DeleteMountTargetOutcome EFSClient::DeleteMountTarget(const DeleteMountTargetRequest& request) const
{
  if (!request.MountTargetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMountTarget", "Required field: MountTargetId, is not set");
    return DeleteMountTargetOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MountTargetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/mount-targets/";
  ss << request.GetMountTargetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteMountTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMountTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DeleteMountTargetAsync(const DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMountTargetAsyncHelper( request, handler, context ); } );
}

void EFSClient::DeleteMountTargetAsyncHelper(const DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMountTarget(request), context);
}

DeleteTagsOutcome EFSClient::DeleteTags(const DeleteTagsRequest& request) const
{
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: FileSystemId, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/delete-tags/";
  ss << request.GetFileSystemId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsAsyncHelper( request, handler, context ); } );
}

void EFSClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DescribeFileSystemsOutcome EFSClient::DescribeFileSystems(const DescribeFileSystemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/file-systems";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeFileSystemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFileSystems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFileSystemsAsyncHelper( request, handler, context ); } );
}

void EFSClient::DescribeFileSystemsAsyncHelper(const DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFileSystems(request), context);
}

DescribeLifecycleConfigurationOutcome EFSClient::DescribeLifecycleConfiguration(const DescribeLifecycleConfigurationRequest& request) const
{
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLifecycleConfiguration", "Required field: FileSystemId, is not set");
    return DescribeLifecycleConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/file-systems/";
  ss << request.GetFileSystemId();
  ss << "/lifecycle-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLifecycleConfigurationOutcome(DescribeLifecycleConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLifecycleConfigurationOutcome(outcome.GetError());
  }
}

DescribeLifecycleConfigurationOutcomeCallable EFSClient::DescribeLifecycleConfigurationCallable(const DescribeLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeLifecycleConfigurationAsync(const DescribeLifecycleConfigurationRequest& request, const DescribeLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLifecycleConfigurationAsyncHelper( request, handler, context ); } );
}

void EFSClient::DescribeLifecycleConfigurationAsyncHelper(const DescribeLifecycleConfigurationRequest& request, const DescribeLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLifecycleConfiguration(request), context);
}

DescribeMountTargetSecurityGroupsOutcome EFSClient::DescribeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest& request) const
{
  if (!request.MountTargetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMountTargetSecurityGroups", "Required field: MountTargetId, is not set");
    return DescribeMountTargetSecurityGroupsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MountTargetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/mount-targets/";
  ss << request.GetMountTargetId();
  ss << "/security-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeMountTargetSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMountTargetSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeMountTargetSecurityGroupsAsync(const DescribeMountTargetSecurityGroupsRequest& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMountTargetSecurityGroupsAsyncHelper( request, handler, context ); } );
}

void EFSClient::DescribeMountTargetSecurityGroupsAsyncHelper(const DescribeMountTargetSecurityGroupsRequest& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMountTargetSecurityGroups(request), context);
}

DescribeMountTargetsOutcome EFSClient::DescribeMountTargets(const DescribeMountTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/mount-targets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeMountTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMountTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeMountTargetsAsync(const DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMountTargetsAsyncHelper( request, handler, context ); } );
}

void EFSClient::DescribeMountTargetsAsyncHelper(const DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMountTargets(request), context);
}

DescribeTagsOutcome EFSClient::DescribeTags(const DescribeTagsRequest& request) const
{
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTags", "Required field: FileSystemId, is not set");
    return DescribeTagsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/tags/";
  ss << request.GetFileSystemId();
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper( request, handler, context ); } );
}

void EFSClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

ModifyMountTargetSecurityGroupsOutcome EFSClient::ModifyMountTargetSecurityGroups(const ModifyMountTargetSecurityGroupsRequest& request) const
{
  if (!request.MountTargetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ModifyMountTargetSecurityGroups", "Required field: MountTargetId, is not set");
    return ModifyMountTargetSecurityGroupsOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MountTargetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/mount-targets/";
  ss << request.GetMountTargetId();
  ss << "/security-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ModifyMountTargetSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyMountTargetSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::ModifyMountTargetSecurityGroupsAsync(const ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyMountTargetSecurityGroupsAsyncHelper( request, handler, context ); } );
}

void EFSClient::ModifyMountTargetSecurityGroupsAsyncHelper(const ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyMountTargetSecurityGroups(request), context);
}

PutLifecycleConfigurationOutcome EFSClient::PutLifecycleConfiguration(const PutLifecycleConfigurationRequest& request) const
{
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutLifecycleConfiguration", "Required field: FileSystemId, is not set");
    return PutLifecycleConfigurationOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/file-systems/";
  ss << request.GetFileSystemId();
  ss << "/lifecycle-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutLifecycleConfigurationOutcome(PutLifecycleConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutLifecycleConfigurationOutcome(outcome.GetError());
  }
}

PutLifecycleConfigurationOutcomeCallable EFSClient::PutLifecycleConfigurationCallable(const PutLifecycleConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLifecycleConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecycleConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::PutLifecycleConfigurationAsync(const PutLifecycleConfigurationRequest& request, const PutLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutLifecycleConfigurationAsyncHelper( request, handler, context ); } );
}

void EFSClient::PutLifecycleConfigurationAsyncHelper(const PutLifecycleConfigurationRequest& request, const PutLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLifecycleConfiguration(request), context);
}

UpdateFileSystemOutcome EFSClient::UpdateFileSystem(const UpdateFileSystemRequest& request) const
{
  if (!request.FileSystemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFileSystem", "Required field: FileSystemId, is not set");
    return UpdateFileSystemOutcome(Aws::Client::AWSError<EFSErrors>(EFSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileSystemId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2015-02-01/file-systems/";
  ss << request.GetFileSystemId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFileSystemOutcome(UpdateFileSystemResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFileSystemOutcome(outcome.GetError());
  }
}

UpdateFileSystemOutcomeCallable EFSClient::UpdateFileSystemCallable(const UpdateFileSystemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFileSystemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFileSystem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EFSClient::UpdateFileSystemAsync(const UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFileSystemAsyncHelper( request, handler, context ); } );
}

void EFSClient::UpdateFileSystemAsyncHelper(const UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFileSystem(request), context);
}

