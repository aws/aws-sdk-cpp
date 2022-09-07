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

#include <aws/synthetics/SyntheticsClient.h>
#include <aws/synthetics/SyntheticsEndpoint.h>
#include <aws/synthetics/SyntheticsErrorMarshaller.h>
#include <aws/synthetics/model/AssociateResourceRequest.h>
#include <aws/synthetics/model/CreateCanaryRequest.h>
#include <aws/synthetics/model/CreateGroupRequest.h>
#include <aws/synthetics/model/DeleteCanaryRequest.h>
#include <aws/synthetics/model/DeleteGroupRequest.h>
#include <aws/synthetics/model/DescribeCanariesRequest.h>
#include <aws/synthetics/model/DescribeCanariesLastRunRequest.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsRequest.h>
#include <aws/synthetics/model/DisassociateResourceRequest.h>
#include <aws/synthetics/model/GetCanaryRequest.h>
#include <aws/synthetics/model/GetCanaryRunsRequest.h>
#include <aws/synthetics/model/GetGroupRequest.h>
#include <aws/synthetics/model/ListAssociatedGroupsRequest.h>
#include <aws/synthetics/model/ListGroupResourcesRequest.h>
#include <aws/synthetics/model/ListGroupsRequest.h>
#include <aws/synthetics/model/ListTagsForResourceRequest.h>
#include <aws/synthetics/model/StartCanaryRequest.h>
#include <aws/synthetics/model/StopCanaryRequest.h>
#include <aws/synthetics/model/TagResourceRequest.h>
#include <aws/synthetics/model/UntagResourceRequest.h>
#include <aws/synthetics/model/UpdateCanaryRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Synthetics;
using namespace Aws::Synthetics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "synthetics";
static const char* ALLOCATION_TAG = "SyntheticsClient";

SyntheticsClient::SyntheticsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SyntheticsClient::SyntheticsClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SyntheticsClient::SyntheticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SyntheticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SyntheticsClient::~SyntheticsClient()
{
}

void SyntheticsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("synthetics");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SyntheticsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SyntheticsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateResourceOutcome SyntheticsClient::AssociateResource(const AssociateResourceRequest& request) const
{
  if (!request.GroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: GroupIdentifier, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/group/");
  uri.AddPathSegment(request.GetGroupIdentifier());
  uri.AddPathSegments("/associate");
  return AssociateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

AssociateResourceOutcomeCallable SyntheticsClient::AssociateResourceCallable(const AssociateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientAssociateResourceAsyncHelper(SyntheticsClient const * const clientThis, const AssociateResourceRequest& request, const AssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateResource(request), context);
}

void SyntheticsClient::AssociateResourceAsync(const AssociateResourceRequest& request, const AssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientAssociateResourceAsyncHelper( this, request, handler, context ); } );
}

CreateCanaryOutcome SyntheticsClient::CreateCanary(const CreateCanaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canary");
  return CreateCanaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCanaryOutcomeCallable SyntheticsClient::CreateCanaryCallable(const CreateCanaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCanaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCanary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientCreateCanaryAsyncHelper(SyntheticsClient const * const clientThis, const CreateCanaryRequest& request, const CreateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCanary(request), context);
}

void SyntheticsClient::CreateCanaryAsync(const CreateCanaryRequest& request, const CreateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientCreateCanaryAsyncHelper( this, request, handler, context ); } );
}

CreateGroupOutcome SyntheticsClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/group");
  return CreateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable SyntheticsClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientCreateGroupAsyncHelper(SyntheticsClient const * const clientThis, const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroup(request), context);
}

void SyntheticsClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientCreateGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteCanaryOutcome SyntheticsClient::DeleteCanary(const DeleteCanaryRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCanary", "Required field: Name, is not set");
    return DeleteCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canary/");
  uri.AddPathSegment(request.GetName());
  return DeleteCanaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCanaryOutcomeCallable SyntheticsClient::DeleteCanaryCallable(const DeleteCanaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCanaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCanary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientDeleteCanaryAsyncHelper(SyntheticsClient const * const clientThis, const DeleteCanaryRequest& request, const DeleteCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCanary(request), context);
}

void SyntheticsClient::DeleteCanaryAsync(const DeleteCanaryRequest& request, const DeleteCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientDeleteCanaryAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupOutcome SyntheticsClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  if (!request.GroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupIdentifier, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/group/");
  uri.AddPathSegment(request.GetGroupIdentifier());
  return DeleteGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable SyntheticsClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientDeleteGroupAsyncHelper(SyntheticsClient const * const clientThis, const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroup(request), context);
}

void SyntheticsClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientDeleteGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeCanariesOutcome SyntheticsClient::DescribeCanaries(const DescribeCanariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canaries");
  return DescribeCanariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCanariesOutcomeCallable SyntheticsClient::DescribeCanariesCallable(const DescribeCanariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCanariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCanaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientDescribeCanariesAsyncHelper(SyntheticsClient const * const clientThis, const DescribeCanariesRequest& request, const DescribeCanariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCanaries(request), context);
}

void SyntheticsClient::DescribeCanariesAsync(const DescribeCanariesRequest& request, const DescribeCanariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientDescribeCanariesAsyncHelper( this, request, handler, context ); } );
}

DescribeCanariesLastRunOutcome SyntheticsClient::DescribeCanariesLastRun(const DescribeCanariesLastRunRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canaries/last-run");
  return DescribeCanariesLastRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCanariesLastRunOutcomeCallable SyntheticsClient::DescribeCanariesLastRunCallable(const DescribeCanariesLastRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCanariesLastRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCanariesLastRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientDescribeCanariesLastRunAsyncHelper(SyntheticsClient const * const clientThis, const DescribeCanariesLastRunRequest& request, const DescribeCanariesLastRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCanariesLastRun(request), context);
}

void SyntheticsClient::DescribeCanariesLastRunAsync(const DescribeCanariesLastRunRequest& request, const DescribeCanariesLastRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientDescribeCanariesLastRunAsyncHelper( this, request, handler, context ); } );
}

DescribeRuntimeVersionsOutcome SyntheticsClient::DescribeRuntimeVersions(const DescribeRuntimeVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/runtime-versions");
  return DescribeRuntimeVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuntimeVersionsOutcomeCallable SyntheticsClient::DescribeRuntimeVersionsCallable(const DescribeRuntimeVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuntimeVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuntimeVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientDescribeRuntimeVersionsAsyncHelper(SyntheticsClient const * const clientThis, const DescribeRuntimeVersionsRequest& request, const DescribeRuntimeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRuntimeVersions(request), context);
}

void SyntheticsClient::DescribeRuntimeVersionsAsync(const DescribeRuntimeVersionsRequest& request, const DescribeRuntimeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientDescribeRuntimeVersionsAsyncHelper( this, request, handler, context ); } );
}

DisassociateResourceOutcome SyntheticsClient::DisassociateResource(const DisassociateResourceRequest& request) const
{
  if (!request.GroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: GroupIdentifier, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/group/");
  uri.AddPathSegment(request.GetGroupIdentifier());
  uri.AddPathSegments("/disassociate");
  return DisassociateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

DisassociateResourceOutcomeCallable SyntheticsClient::DisassociateResourceCallable(const DisassociateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientDisassociateResourceAsyncHelper(SyntheticsClient const * const clientThis, const DisassociateResourceRequest& request, const DisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateResource(request), context);
}

void SyntheticsClient::DisassociateResourceAsync(const DisassociateResourceRequest& request, const DisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientDisassociateResourceAsyncHelper( this, request, handler, context ); } );
}

GetCanaryOutcome SyntheticsClient::GetCanary(const GetCanaryRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCanary", "Required field: Name, is not set");
    return GetCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canary/");
  uri.AddPathSegment(request.GetName());
  return GetCanaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCanaryOutcomeCallable SyntheticsClient::GetCanaryCallable(const GetCanaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCanaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCanary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientGetCanaryAsyncHelper(SyntheticsClient const * const clientThis, const GetCanaryRequest& request, const GetCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCanary(request), context);
}

void SyntheticsClient::GetCanaryAsync(const GetCanaryRequest& request, const GetCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientGetCanaryAsyncHelper( this, request, handler, context ); } );
}

GetCanaryRunsOutcome SyntheticsClient::GetCanaryRuns(const GetCanaryRunsRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCanaryRuns", "Required field: Name, is not set");
    return GetCanaryRunsOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canary/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/runs");
  return GetCanaryRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCanaryRunsOutcomeCallable SyntheticsClient::GetCanaryRunsCallable(const GetCanaryRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCanaryRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCanaryRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientGetCanaryRunsAsyncHelper(SyntheticsClient const * const clientThis, const GetCanaryRunsRequest& request, const GetCanaryRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCanaryRuns(request), context);
}

void SyntheticsClient::GetCanaryRunsAsync(const GetCanaryRunsRequest& request, const GetCanaryRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientGetCanaryRunsAsyncHelper( this, request, handler, context ); } );
}

GetGroupOutcome SyntheticsClient::GetGroup(const GetGroupRequest& request) const
{
  if (!request.GroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: GroupIdentifier, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/group/");
  uri.AddPathSegment(request.GetGroupIdentifier());
  return GetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGroupOutcomeCallable SyntheticsClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientGetGroupAsyncHelper(SyntheticsClient const * const clientThis, const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroup(request), context);
}

void SyntheticsClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientGetGroupAsyncHelper( this, request, handler, context ); } );
}

ListAssociatedGroupsOutcome SyntheticsClient::ListAssociatedGroups(const ListAssociatedGroupsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedGroups", "Required field: ResourceArn, is not set");
    return ListAssociatedGroupsOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resource/");
  uri.AddPathSegment(request.GetResourceArn());
  uri.AddPathSegments("/groups");
  return ListAssociatedGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedGroupsOutcomeCallable SyntheticsClient::ListAssociatedGroupsCallable(const ListAssociatedGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociatedGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociatedGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientListAssociatedGroupsAsyncHelper(SyntheticsClient const * const clientThis, const ListAssociatedGroupsRequest& request, const ListAssociatedGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociatedGroups(request), context);
}

void SyntheticsClient::ListAssociatedGroupsAsync(const ListAssociatedGroupsRequest& request, const ListAssociatedGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientListAssociatedGroupsAsyncHelper( this, request, handler, context ); } );
}

ListGroupResourcesOutcome SyntheticsClient::ListGroupResources(const ListGroupResourcesRequest& request) const
{
  if (!request.GroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupResources", "Required field: GroupIdentifier, is not set");
    return ListGroupResourcesOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupIdentifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/group/");
  uri.AddPathSegment(request.GetGroupIdentifier());
  uri.AddPathSegments("/resources");
  return ListGroupResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupResourcesOutcomeCallable SyntheticsClient::ListGroupResourcesCallable(const ListGroupResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientListGroupResourcesAsyncHelper(SyntheticsClient const * const clientThis, const ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupResources(request), context);
}

void SyntheticsClient::ListGroupResourcesAsync(const ListGroupResourcesRequest& request, const ListGroupResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientListGroupResourcesAsyncHelper( this, request, handler, context ); } );
}

ListGroupsOutcome SyntheticsClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/groups");
  return ListGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable SyntheticsClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientListGroupsAsyncHelper(SyntheticsClient const * const clientThis, const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroups(request), context);
}

void SyntheticsClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientListGroupsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome SyntheticsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SyntheticsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientListTagsForResourceAsyncHelper(SyntheticsClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SyntheticsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

StartCanaryOutcome SyntheticsClient::StartCanary(const StartCanaryRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartCanary", "Required field: Name, is not set");
    return StartCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canary/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/start");
  return StartCanaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartCanaryOutcomeCallable SyntheticsClient::StartCanaryCallable(const StartCanaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCanaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCanary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientStartCanaryAsyncHelper(SyntheticsClient const * const clientThis, const StartCanaryRequest& request, const StartCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartCanary(request), context);
}

void SyntheticsClient::StartCanaryAsync(const StartCanaryRequest& request, const StartCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientStartCanaryAsyncHelper( this, request, handler, context ); } );
}

StopCanaryOutcome SyntheticsClient::StopCanary(const StopCanaryRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopCanary", "Required field: Name, is not set");
    return StopCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canary/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/stop");
  return StopCanaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopCanaryOutcomeCallable SyntheticsClient::StopCanaryCallable(const StopCanaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCanaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCanary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientStopCanaryAsyncHelper(SyntheticsClient const * const clientThis, const StopCanaryRequest& request, const StopCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopCanary(request), context);
}

void SyntheticsClient::StopCanaryAsync(const StopCanaryRequest& request, const StopCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientStopCanaryAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome SyntheticsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SyntheticsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientTagResourceAsyncHelper(SyntheticsClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SyntheticsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome SyntheticsClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SyntheticsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientUntagResourceAsyncHelper(SyntheticsClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SyntheticsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateCanaryOutcome SyntheticsClient::UpdateCanary(const UpdateCanaryRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCanary", "Required field: Name, is not set");
    return UpdateCanaryOutcome(Aws::Client::AWSError<SyntheticsErrors>(SyntheticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/canary/");
  uri.AddPathSegment(request.GetName());
  return UpdateCanaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateCanaryOutcomeCallable SyntheticsClient::UpdateCanaryCallable(const UpdateCanaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCanaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCanary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SyntheticsClientUpdateCanaryAsyncHelper(SyntheticsClient const * const clientThis, const UpdateCanaryRequest& request, const UpdateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCanary(request), context);
}

void SyntheticsClient::UpdateCanaryAsync(const UpdateCanaryRequest& request, const UpdateCanaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SyntheticsClientUpdateCanaryAsyncHelper( this, request, handler, context ); } );
}

