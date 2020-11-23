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

#include <aws/signer/SignerClient.h>
#include <aws/signer/SignerEndpoint.h>
#include <aws/signer/SignerErrorMarshaller.h>
#include <aws/signer/model/AddProfilePermissionRequest.h>
#include <aws/signer/model/CancelSigningProfileRequest.h>
#include <aws/signer/model/DescribeSigningJobRequest.h>
#include <aws/signer/model/GetSigningPlatformRequest.h>
#include <aws/signer/model/GetSigningProfileRequest.h>
#include <aws/signer/model/ListProfilePermissionsRequest.h>
#include <aws/signer/model/ListSigningJobsRequest.h>
#include <aws/signer/model/ListSigningPlatformsRequest.h>
#include <aws/signer/model/ListSigningProfilesRequest.h>
#include <aws/signer/model/ListTagsForResourceRequest.h>
#include <aws/signer/model/PutSigningProfileRequest.h>
#include <aws/signer/model/RemoveProfilePermissionRequest.h>
#include <aws/signer/model/RevokeSignatureRequest.h>
#include <aws/signer/model/RevokeSigningProfileRequest.h>
#include <aws/signer/model/StartSigningJobRequest.h>
#include <aws/signer/model/TagResourceRequest.h>
#include <aws/signer/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::signer;
using namespace Aws::signer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "signer";
static const char* ALLOCATION_TAG = "SignerClient";


SignerClient::SignerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::SignerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::SignerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::~SignerClient()
{
}

void SignerClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("signer");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SignerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SignerClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddProfilePermissionOutcome SignerClient::AddProfilePermission(const AddProfilePermissionRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddProfilePermission", "Required field: ProfileName, is not set");
    return AddProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  ss << "/permissions";
  uri.SetPath(uri.GetPath() + ss.str());
  return AddProfilePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddProfilePermissionOutcomeCallable SignerClient::AddProfilePermissionCallable(const AddProfilePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddProfilePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddProfilePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::AddProfilePermissionAsync(const AddProfilePermissionRequest& request, const AddProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddProfilePermissionAsyncHelper( request, handler, context ); } );
}

void SignerClient::AddProfilePermissionAsyncHelper(const AddProfilePermissionRequest& request, const AddProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddProfilePermission(request), context);
}

CancelSigningProfileOutcome SignerClient::CancelSigningProfile(const CancelSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelSigningProfile", "Required field: ProfileName, is not set");
    return CancelSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelSigningProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelSigningProfileOutcomeCallable SignerClient::CancelSigningProfileCallable(const CancelSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::CancelSigningProfileAsync(const CancelSigningProfileRequest& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelSigningProfileAsyncHelper( request, handler, context ); } );
}

void SignerClient::CancelSigningProfileAsyncHelper(const CancelSigningProfileRequest& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelSigningProfile(request), context);
}

DescribeSigningJobOutcome SignerClient::DescribeSigningJob(const DescribeSigningJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSigningJob", "Required field: JobId, is not set");
    return DescribeSigningJobOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeSigningJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSigningJobOutcomeCallable SignerClient::DescribeSigningJobCallable(const DescribeSigningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSigningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSigningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::DescribeSigningJobAsync(const DescribeSigningJobRequest& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSigningJobAsyncHelper( request, handler, context ); } );
}

void SignerClient::DescribeSigningJobAsyncHelper(const DescribeSigningJobRequest& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSigningJob(request), context);
}

GetSigningPlatformOutcome SignerClient::GetSigningPlatform(const GetSigningPlatformRequest& request) const
{
  if (!request.PlatformIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSigningPlatform", "Required field: PlatformId, is not set");
    return GetSigningPlatformOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlatformId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-platforms/";
  ss << request.GetPlatformId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSigningPlatformOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSigningPlatformOutcomeCallable SignerClient::GetSigningPlatformCallable(const GetSigningPlatformRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSigningPlatformOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSigningPlatform(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::GetSigningPlatformAsync(const GetSigningPlatformRequest& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSigningPlatformAsyncHelper( request, handler, context ); } );
}

void SignerClient::GetSigningPlatformAsyncHelper(const GetSigningPlatformRequest& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSigningPlatform(request), context);
}

GetSigningProfileOutcome SignerClient::GetSigningProfile(const GetSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSigningProfile", "Required field: ProfileName, is not set");
    return GetSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSigningProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSigningProfileOutcomeCallable SignerClient::GetSigningProfileCallable(const GetSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::GetSigningProfileAsync(const GetSigningProfileRequest& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSigningProfileAsyncHelper( request, handler, context ); } );
}

void SignerClient::GetSigningProfileAsyncHelper(const GetSigningProfileRequest& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSigningProfile(request), context);
}

ListProfilePermissionsOutcome SignerClient::ListProfilePermissions(const ListProfilePermissionsRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfilePermissions", "Required field: ProfileName, is not set");
    return ListProfilePermissionsOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  ss << "/permissions";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProfilePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfilePermissionsOutcomeCallable SignerClient::ListProfilePermissionsCallable(const ListProfilePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfilePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfilePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::ListProfilePermissionsAsync(const ListProfilePermissionsRequest& request, const ListProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProfilePermissionsAsyncHelper( request, handler, context ); } );
}

void SignerClient::ListProfilePermissionsAsyncHelper(const ListProfilePermissionsRequest& request, const ListProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProfilePermissions(request), context);
}

ListSigningJobsOutcome SignerClient::ListSigningJobs(const ListSigningJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSigningJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningJobsOutcomeCallable SignerClient::ListSigningJobsCallable(const ListSigningJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::ListSigningJobsAsync(const ListSigningJobsRequest& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSigningJobsAsyncHelper( request, handler, context ); } );
}

void SignerClient::ListSigningJobsAsyncHelper(const ListSigningJobsRequest& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSigningJobs(request), context);
}

ListSigningPlatformsOutcome SignerClient::ListSigningPlatforms(const ListSigningPlatformsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-platforms";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSigningPlatformsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningPlatformsOutcomeCallable SignerClient::ListSigningPlatformsCallable(const ListSigningPlatformsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningPlatformsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningPlatforms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::ListSigningPlatformsAsync(const ListSigningPlatformsRequest& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSigningPlatformsAsyncHelper( request, handler, context ); } );
}

void SignerClient::ListSigningPlatformsAsyncHelper(const ListSigningPlatformsRequest& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSigningPlatforms(request), context);
}

ListSigningProfilesOutcome SignerClient::ListSigningProfiles(const ListSigningProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSigningProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningProfilesOutcomeCallable SignerClient::ListSigningProfilesCallable(const ListSigningProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::ListSigningProfilesAsync(const ListSigningProfilesRequest& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSigningProfilesAsyncHelper( request, handler, context ); } );
}

void SignerClient::ListSigningProfilesAsyncHelper(const ListSigningProfilesRequest& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSigningProfiles(request), context);
}

ListTagsForResourceOutcome SignerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SignerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SignerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutSigningProfileOutcome SignerClient::PutSigningProfile(const PutSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSigningProfile", "Required field: ProfileName, is not set");
    return PutSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  uri.SetPath(uri.GetPath() + ss.str());
  return PutSigningProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSigningProfileOutcomeCallable SignerClient::PutSigningProfileCallable(const PutSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::PutSigningProfileAsync(const PutSigningProfileRequest& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutSigningProfileAsyncHelper( request, handler, context ); } );
}

void SignerClient::PutSigningProfileAsyncHelper(const PutSigningProfileRequest& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSigningProfile(request), context);
}

RemoveProfilePermissionOutcome SignerClient::RemoveProfilePermission(const RemoveProfilePermissionRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: ProfileName, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: RevisionId, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  if (!request.StatementIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: StatementId, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatementId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  ss << "/permissions/";
  ss << request.GetStatementId();
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveProfilePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveProfilePermissionOutcomeCallable SignerClient::RemoveProfilePermissionCallable(const RemoveProfilePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveProfilePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveProfilePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::RemoveProfilePermissionAsync(const RemoveProfilePermissionRequest& request, const RemoveProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveProfilePermissionAsyncHelper( request, handler, context ); } );
}

void SignerClient::RemoveProfilePermissionAsyncHelper(const RemoveProfilePermissionRequest& request, const RemoveProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveProfilePermission(request), context);
}

RevokeSignatureOutcome SignerClient::RevokeSignature(const RevokeSignatureRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeSignature", "Required field: JobId, is not set");
    return RevokeSignatureOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-jobs/";
  ss << request.GetJobId();
  ss << "/revoke";
  uri.SetPath(uri.GetPath() + ss.str());
  return RevokeSignatureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RevokeSignatureOutcomeCallable SignerClient::RevokeSignatureCallable(const RevokeSignatureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeSignatureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeSignature(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::RevokeSignatureAsync(const RevokeSignatureRequest& request, const RevokeSignatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeSignatureAsyncHelper( request, handler, context ); } );
}

void SignerClient::RevokeSignatureAsyncHelper(const RevokeSignatureRequest& request, const RevokeSignatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeSignature(request), context);
}

RevokeSigningProfileOutcome SignerClient::RevokeSigningProfile(const RevokeSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeSigningProfile", "Required field: ProfileName, is not set");
    return RevokeSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-profiles/";
  ss << request.GetProfileName();
  ss << "/revoke";
  uri.SetPath(uri.GetPath() + ss.str());
  return RevokeSigningProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RevokeSigningProfileOutcomeCallable SignerClient::RevokeSigningProfileCallable(const RevokeSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::RevokeSigningProfileAsync(const RevokeSigningProfileRequest& request, const RevokeSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeSigningProfileAsyncHelper( request, handler, context ); } );
}

void SignerClient::RevokeSigningProfileAsyncHelper(const RevokeSigningProfileRequest& request, const RevokeSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeSigningProfile(request), context);
}

StartSigningJobOutcome SignerClient::StartSigningJob(const StartSigningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/signing-jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartSigningJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSigningJobOutcomeCallable SignerClient::StartSigningJobCallable(const StartSigningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSigningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSigningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::StartSigningJobAsync(const StartSigningJobRequest& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSigningJobAsyncHelper( request, handler, context ); } );
}

void SignerClient::StartSigningJobAsyncHelper(const StartSigningJobRequest& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSigningJob(request), context);
}

TagResourceOutcome SignerClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SignerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SignerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SignerClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SignerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SignerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

