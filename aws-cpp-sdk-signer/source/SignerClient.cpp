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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::SignerClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::SignerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SignerClient::~SignerClient()
{
}

void SignerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("signer");
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
  uri.AddPathSegments("/signing-profiles/");
  uri.AddPathSegment(request.GetProfileName());
  uri.AddPathSegments("/permissions");
  return AddProfilePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddProfilePermissionOutcomeCallable SignerClient::AddProfilePermissionCallable(const AddProfilePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddProfilePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddProfilePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientAddProfilePermissionAsyncHelper(SignerClient const * const clientThis, const AddProfilePermissionRequest& request, const AddProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddProfilePermission(request), context);
}

void SignerClient::AddProfilePermissionAsync(const AddProfilePermissionRequest& request, const AddProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientAddProfilePermissionAsyncHelper( this, request, handler, context ); } );
}

CancelSigningProfileOutcome SignerClient::CancelSigningProfile(const CancelSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelSigningProfile", "Required field: ProfileName, is not set");
    return CancelSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-profiles/");
  uri.AddPathSegment(request.GetProfileName());
  return CancelSigningProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelSigningProfileOutcomeCallable SignerClient::CancelSigningProfileCallable(const CancelSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientCancelSigningProfileAsyncHelper(SignerClient const * const clientThis, const CancelSigningProfileRequest& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelSigningProfile(request), context);
}

void SignerClient::CancelSigningProfileAsync(const CancelSigningProfileRequest& request, const CancelSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientCancelSigningProfileAsyncHelper( this, request, handler, context ); } );
}

DescribeSigningJobOutcome SignerClient::DescribeSigningJob(const DescribeSigningJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSigningJob", "Required field: JobId, is not set");
    return DescribeSigningJobOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DescribeSigningJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSigningJobOutcomeCallable SignerClient::DescribeSigningJobCallable(const DescribeSigningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSigningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSigningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientDescribeSigningJobAsyncHelper(SignerClient const * const clientThis, const DescribeSigningJobRequest& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSigningJob(request), context);
}

void SignerClient::DescribeSigningJobAsync(const DescribeSigningJobRequest& request, const DescribeSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientDescribeSigningJobAsyncHelper( this, request, handler, context ); } );
}

GetSigningPlatformOutcome SignerClient::GetSigningPlatform(const GetSigningPlatformRequest& request) const
{
  if (!request.PlatformIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSigningPlatform", "Required field: PlatformId, is not set");
    return GetSigningPlatformOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlatformId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-platforms/");
  uri.AddPathSegment(request.GetPlatformId());
  return GetSigningPlatformOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSigningPlatformOutcomeCallable SignerClient::GetSigningPlatformCallable(const GetSigningPlatformRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSigningPlatformOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSigningPlatform(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientGetSigningPlatformAsyncHelper(SignerClient const * const clientThis, const GetSigningPlatformRequest& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSigningPlatform(request), context);
}

void SignerClient::GetSigningPlatformAsync(const GetSigningPlatformRequest& request, const GetSigningPlatformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientGetSigningPlatformAsyncHelper( this, request, handler, context ); } );
}

GetSigningProfileOutcome SignerClient::GetSigningProfile(const GetSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSigningProfile", "Required field: ProfileName, is not set");
    return GetSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-profiles/");
  uri.AddPathSegment(request.GetProfileName());
  return GetSigningProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSigningProfileOutcomeCallable SignerClient::GetSigningProfileCallable(const GetSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientGetSigningProfileAsyncHelper(SignerClient const * const clientThis, const GetSigningProfileRequest& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSigningProfile(request), context);
}

void SignerClient::GetSigningProfileAsync(const GetSigningProfileRequest& request, const GetSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientGetSigningProfileAsyncHelper( this, request, handler, context ); } );
}

ListProfilePermissionsOutcome SignerClient::ListProfilePermissions(const ListProfilePermissionsRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfilePermissions", "Required field: ProfileName, is not set");
    return ListProfilePermissionsOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-profiles/");
  uri.AddPathSegment(request.GetProfileName());
  uri.AddPathSegments("/permissions");
  return ListProfilePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfilePermissionsOutcomeCallable SignerClient::ListProfilePermissionsCallable(const ListProfilePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfilePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfilePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientListProfilePermissionsAsyncHelper(SignerClient const * const clientThis, const ListProfilePermissionsRequest& request, const ListProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProfilePermissions(request), context);
}

void SignerClient::ListProfilePermissionsAsync(const ListProfilePermissionsRequest& request, const ListProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientListProfilePermissionsAsyncHelper( this, request, handler, context ); } );
}

ListSigningJobsOutcome SignerClient::ListSigningJobs(const ListSigningJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-jobs");
  return ListSigningJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningJobsOutcomeCallable SignerClient::ListSigningJobsCallable(const ListSigningJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientListSigningJobsAsyncHelper(SignerClient const * const clientThis, const ListSigningJobsRequest& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSigningJobs(request), context);
}

void SignerClient::ListSigningJobsAsync(const ListSigningJobsRequest& request, const ListSigningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientListSigningJobsAsyncHelper( this, request, handler, context ); } );
}

ListSigningPlatformsOutcome SignerClient::ListSigningPlatforms(const ListSigningPlatformsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-platforms");
  return ListSigningPlatformsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningPlatformsOutcomeCallable SignerClient::ListSigningPlatformsCallable(const ListSigningPlatformsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningPlatformsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningPlatforms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientListSigningPlatformsAsyncHelper(SignerClient const * const clientThis, const ListSigningPlatformsRequest& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSigningPlatforms(request), context);
}

void SignerClient::ListSigningPlatformsAsync(const ListSigningPlatformsRequest& request, const ListSigningPlatformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientListSigningPlatformsAsyncHelper( this, request, handler, context ); } );
}

ListSigningProfilesOutcome SignerClient::ListSigningProfiles(const ListSigningProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-profiles");
  return ListSigningProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningProfilesOutcomeCallable SignerClient::ListSigningProfilesCallable(const ListSigningProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSigningProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSigningProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientListSigningProfilesAsyncHelper(SignerClient const * const clientThis, const ListSigningProfilesRequest& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSigningProfiles(request), context);
}

void SignerClient::ListSigningProfilesAsync(const ListSigningProfilesRequest& request, const ListSigningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientListSigningProfilesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome SignerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SignerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientListTagsForResourceAsyncHelper(SignerClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SignerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutSigningProfileOutcome SignerClient::PutSigningProfile(const PutSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSigningProfile", "Required field: ProfileName, is not set");
    return PutSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-profiles/");
  uri.AddPathSegment(request.GetProfileName());
  return PutSigningProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSigningProfileOutcomeCallable SignerClient::PutSigningProfileCallable(const PutSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientPutSigningProfileAsyncHelper(SignerClient const * const clientThis, const PutSigningProfileRequest& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutSigningProfile(request), context);
}

void SignerClient::PutSigningProfileAsync(const PutSigningProfileRequest& request, const PutSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientPutSigningProfileAsyncHelper( this, request, handler, context ); } );
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
  uri.AddPathSegments("/signing-profiles/");
  uri.AddPathSegment(request.GetProfileName());
  uri.AddPathSegments("/permissions/");
  uri.AddPathSegment(request.GetStatementId());
  return RemoveProfilePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveProfilePermissionOutcomeCallable SignerClient::RemoveProfilePermissionCallable(const RemoveProfilePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveProfilePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveProfilePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientRemoveProfilePermissionAsyncHelper(SignerClient const * const clientThis, const RemoveProfilePermissionRequest& request, const RemoveProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveProfilePermission(request), context);
}

void SignerClient::RemoveProfilePermissionAsync(const RemoveProfilePermissionRequest& request, const RemoveProfilePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientRemoveProfilePermissionAsyncHelper( this, request, handler, context ); } );
}

RevokeSignatureOutcome SignerClient::RevokeSignature(const RevokeSignatureRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeSignature", "Required field: JobId, is not set");
    return RevokeSignatureOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-jobs/");
  uri.AddPathSegment(request.GetJobId());
  uri.AddPathSegments("/revoke");
  return RevokeSignatureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RevokeSignatureOutcomeCallable SignerClient::RevokeSignatureCallable(const RevokeSignatureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeSignatureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeSignature(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientRevokeSignatureAsyncHelper(SignerClient const * const clientThis, const RevokeSignatureRequest& request, const RevokeSignatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokeSignature(request), context);
}

void SignerClient::RevokeSignatureAsync(const RevokeSignatureRequest& request, const RevokeSignatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientRevokeSignatureAsyncHelper( this, request, handler, context ); } );
}

RevokeSigningProfileOutcome SignerClient::RevokeSigningProfile(const RevokeSigningProfileRequest& request) const
{
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeSigningProfile", "Required field: ProfileName, is not set");
    return RevokeSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-profiles/");
  uri.AddPathSegment(request.GetProfileName());
  uri.AddPathSegments("/revoke");
  return RevokeSigningProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RevokeSigningProfileOutcomeCallable SignerClient::RevokeSigningProfileCallable(const RevokeSigningProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeSigningProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeSigningProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientRevokeSigningProfileAsyncHelper(SignerClient const * const clientThis, const RevokeSigningProfileRequest& request, const RevokeSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokeSigningProfile(request), context);
}

void SignerClient::RevokeSigningProfileAsync(const RevokeSigningProfileRequest& request, const RevokeSigningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientRevokeSigningProfileAsyncHelper( this, request, handler, context ); } );
}

StartSigningJobOutcome SignerClient::StartSigningJob(const StartSigningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/signing-jobs");
  return StartSigningJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSigningJobOutcomeCallable SignerClient::StartSigningJobCallable(const StartSigningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSigningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSigningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientStartSigningJobAsyncHelper(SignerClient const * const clientThis, const StartSigningJobRequest& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartSigningJob(request), context);
}

void SignerClient::StartSigningJobAsync(const StartSigningJobRequest& request, const StartSigningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientStartSigningJobAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome SignerClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SignerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientTagResourceAsyncHelper(SignerClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SignerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientTagResourceAsyncHelper( this, request, handler, context ); } );
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
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SignerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SignerClientUntagResourceAsyncHelper(SignerClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SignerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SignerClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

