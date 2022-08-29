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

#include <aws/rolesanywhere/RolesAnywhereClient.h>
#include <aws/rolesanywhere/RolesAnywhereEndpoint.h>
#include <aws/rolesanywhere/RolesAnywhereErrorMarshaller.h>
#include <aws/rolesanywhere/model/CreateProfileRequest.h>
#include <aws/rolesanywhere/model/CreateTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/DeleteCrlRequest.h>
#include <aws/rolesanywhere/model/DeleteProfileRequest.h>
#include <aws/rolesanywhere/model/DeleteTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/DisableCrlRequest.h>
#include <aws/rolesanywhere/model/DisableProfileRequest.h>
#include <aws/rolesanywhere/model/DisableTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/EnableCrlRequest.h>
#include <aws/rolesanywhere/model/EnableProfileRequest.h>
#include <aws/rolesanywhere/model/EnableTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/GetCrlRequest.h>
#include <aws/rolesanywhere/model/GetProfileRequest.h>
#include <aws/rolesanywhere/model/GetSubjectRequest.h>
#include <aws/rolesanywhere/model/GetTrustAnchorRequest.h>
#include <aws/rolesanywhere/model/ImportCrlRequest.h>
#include <aws/rolesanywhere/model/ListCrlsRequest.h>
#include <aws/rolesanywhere/model/ListProfilesRequest.h>
#include <aws/rolesanywhere/model/ListSubjectsRequest.h>
#include <aws/rolesanywhere/model/ListTagsForResourceRequest.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsRequest.h>
#include <aws/rolesanywhere/model/TagResourceRequest.h>
#include <aws/rolesanywhere/model/UntagResourceRequest.h>
#include <aws/rolesanywhere/model/UpdateCrlRequest.h>
#include <aws/rolesanywhere/model/UpdateProfileRequest.h>
#include <aws/rolesanywhere/model/UpdateTrustAnchorRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RolesAnywhere;
using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "rolesanywhere";
static const char* ALLOCATION_TAG = "RolesAnywhereClient";

RolesAnywhereClient::RolesAnywhereClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RolesAnywhereClient::~RolesAnywhereClient()
{
}

void RolesAnywhereClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("RolesAnywhere");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RolesAnywhereEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RolesAnywhereClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateProfileOutcome RolesAnywhereClient::CreateProfile(const CreateProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profiles");
  return CreateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfileOutcomeCallable RolesAnywhereClient::CreateProfileCallable(const CreateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::CreateProfileAsync(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProfileAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::CreateProfileAsyncHelper(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProfile(request), context);
}

CreateTrustAnchorOutcome RolesAnywhereClient::CreateTrustAnchor(const CreateTrustAnchorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustanchors");
  return CreateTrustAnchorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrustAnchorOutcomeCallable RolesAnywhereClient::CreateTrustAnchorCallable(const CreateTrustAnchorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrustAnchorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrustAnchor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::CreateTrustAnchorAsync(const CreateTrustAnchorRequest& request, const CreateTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrustAnchorAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::CreateTrustAnchorAsyncHelper(const CreateTrustAnchorRequest& request, const CreateTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrustAnchor(request), context);
}

DeleteCrlOutcome RolesAnywhereClient::DeleteCrl(const DeleteCrlRequest& request) const
{
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCrl", "Required field: CrlId, is not set");
    return DeleteCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/crl/");
  uri.AddPathSegment(request.GetCrlId());
  return DeleteCrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCrlOutcomeCallable RolesAnywhereClient::DeleteCrlCallable(const DeleteCrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::DeleteCrlAsync(const DeleteCrlRequest& request, const DeleteCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCrlAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::DeleteCrlAsyncHelper(const DeleteCrlRequest& request, const DeleteCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCrl(request), context);
}

DeleteProfileOutcome RolesAnywhereClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: ProfileId, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profile/");
  uri.AddPathSegment(request.GetProfileId());
  return DeleteProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfileOutcomeCallable RolesAnywhereClient::DeleteProfileCallable(const DeleteProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::DeleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfileAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::DeleteProfileAsyncHelper(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfile(request), context);
}

DeleteTrustAnchorOutcome RolesAnywhereClient::DeleteTrustAnchor(const DeleteTrustAnchorRequest& request) const
{
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrustAnchor", "Required field: TrustAnchorId, is not set");
    return DeleteTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustanchor/");
  uri.AddPathSegment(request.GetTrustAnchorId());
  return DeleteTrustAnchorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrustAnchorOutcomeCallable RolesAnywhereClient::DeleteTrustAnchorCallable(const DeleteTrustAnchorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrustAnchorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrustAnchor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::DeleteTrustAnchorAsync(const DeleteTrustAnchorRequest& request, const DeleteTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrustAnchorAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::DeleteTrustAnchorAsyncHelper(const DeleteTrustAnchorRequest& request, const DeleteTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrustAnchor(request), context);
}

DisableCrlOutcome RolesAnywhereClient::DisableCrl(const DisableCrlRequest& request) const
{
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableCrl", "Required field: CrlId, is not set");
    return DisableCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/crl/");
  uri.AddPathSegment(request.GetCrlId());
  uri.AddPathSegments("/disable");
  return DisableCrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableCrlOutcomeCallable RolesAnywhereClient::DisableCrlCallable(const DisableCrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableCrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableCrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::DisableCrlAsync(const DisableCrlRequest& request, const DisableCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableCrlAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::DisableCrlAsyncHelper(const DisableCrlRequest& request, const DisableCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableCrl(request), context);
}

DisableProfileOutcome RolesAnywhereClient::DisableProfile(const DisableProfileRequest& request) const
{
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableProfile", "Required field: ProfileId, is not set");
    return DisableProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profile/");
  uri.AddPathSegment(request.GetProfileId());
  uri.AddPathSegments("/disable");
  return DisableProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableProfileOutcomeCallable RolesAnywhereClient::DisableProfileCallable(const DisableProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::DisableProfileAsync(const DisableProfileRequest& request, const DisableProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableProfileAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::DisableProfileAsyncHelper(const DisableProfileRequest& request, const DisableProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableProfile(request), context);
}

DisableTrustAnchorOutcome RolesAnywhereClient::DisableTrustAnchor(const DisableTrustAnchorRequest& request) const
{
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableTrustAnchor", "Required field: TrustAnchorId, is not set");
    return DisableTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustanchor/");
  uri.AddPathSegment(request.GetTrustAnchorId());
  uri.AddPathSegments("/disable");
  return DisableTrustAnchorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableTrustAnchorOutcomeCallable RolesAnywhereClient::DisableTrustAnchorCallable(const DisableTrustAnchorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableTrustAnchorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableTrustAnchor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::DisableTrustAnchorAsync(const DisableTrustAnchorRequest& request, const DisableTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableTrustAnchorAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::DisableTrustAnchorAsyncHelper(const DisableTrustAnchorRequest& request, const DisableTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableTrustAnchor(request), context);
}

EnableCrlOutcome RolesAnywhereClient::EnableCrl(const EnableCrlRequest& request) const
{
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableCrl", "Required field: CrlId, is not set");
    return EnableCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/crl/");
  uri.AddPathSegment(request.GetCrlId());
  uri.AddPathSegments("/enable");
  return EnableCrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableCrlOutcomeCallable RolesAnywhereClient::EnableCrlCallable(const EnableCrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableCrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableCrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::EnableCrlAsync(const EnableCrlRequest& request, const EnableCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableCrlAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::EnableCrlAsyncHelper(const EnableCrlRequest& request, const EnableCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableCrl(request), context);
}

EnableProfileOutcome RolesAnywhereClient::EnableProfile(const EnableProfileRequest& request) const
{
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableProfile", "Required field: ProfileId, is not set");
    return EnableProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profile/");
  uri.AddPathSegment(request.GetProfileId());
  uri.AddPathSegments("/enable");
  return EnableProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableProfileOutcomeCallable RolesAnywhereClient::EnableProfileCallable(const EnableProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::EnableProfileAsync(const EnableProfileRequest& request, const EnableProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableProfileAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::EnableProfileAsyncHelper(const EnableProfileRequest& request, const EnableProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableProfile(request), context);
}

EnableTrustAnchorOutcome RolesAnywhereClient::EnableTrustAnchor(const EnableTrustAnchorRequest& request) const
{
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableTrustAnchor", "Required field: TrustAnchorId, is not set");
    return EnableTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustanchor/");
  uri.AddPathSegment(request.GetTrustAnchorId());
  uri.AddPathSegments("/enable");
  return EnableTrustAnchorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableTrustAnchorOutcomeCallable RolesAnywhereClient::EnableTrustAnchorCallable(const EnableTrustAnchorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableTrustAnchorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableTrustAnchor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::EnableTrustAnchorAsync(const EnableTrustAnchorRequest& request, const EnableTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableTrustAnchorAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::EnableTrustAnchorAsyncHelper(const EnableTrustAnchorRequest& request, const EnableTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableTrustAnchor(request), context);
}

GetCrlOutcome RolesAnywhereClient::GetCrl(const GetCrlRequest& request) const
{
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCrl", "Required field: CrlId, is not set");
    return GetCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/crl/");
  uri.AddPathSegment(request.GetCrlId());
  return GetCrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCrlOutcomeCallable RolesAnywhereClient::GetCrlCallable(const GetCrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::GetCrlAsync(const GetCrlRequest& request, const GetCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCrlAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::GetCrlAsyncHelper(const GetCrlRequest& request, const GetCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCrl(request), context);
}

GetProfileOutcome RolesAnywhereClient::GetProfile(const GetProfileRequest& request) const
{
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfileId, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profile/");
  uri.AddPathSegment(request.GetProfileId());
  return GetProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProfileOutcomeCallable RolesAnywhereClient::GetProfileCallable(const GetProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::GetProfileAsync(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProfileAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::GetProfileAsyncHelper(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProfile(request), context);
}

GetSubjectOutcome RolesAnywhereClient::GetSubject(const GetSubjectRequest& request) const
{
  if (!request.SubjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubject", "Required field: SubjectId, is not set");
    return GetSubjectOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubjectId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/subject/");
  uri.AddPathSegment(request.GetSubjectId());
  return GetSubjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSubjectOutcomeCallable RolesAnywhereClient::GetSubjectCallable(const GetSubjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::GetSubjectAsync(const GetSubjectRequest& request, const GetSubjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSubjectAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::GetSubjectAsyncHelper(const GetSubjectRequest& request, const GetSubjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSubject(request), context);
}

GetTrustAnchorOutcome RolesAnywhereClient::GetTrustAnchor(const GetTrustAnchorRequest& request) const
{
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustAnchor", "Required field: TrustAnchorId, is not set");
    return GetTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustanchor/");
  uri.AddPathSegment(request.GetTrustAnchorId());
  return GetTrustAnchorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTrustAnchorOutcomeCallable RolesAnywhereClient::GetTrustAnchorCallable(const GetTrustAnchorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrustAnchorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrustAnchor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::GetTrustAnchorAsync(const GetTrustAnchorRequest& request, const GetTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTrustAnchorAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::GetTrustAnchorAsyncHelper(const GetTrustAnchorRequest& request, const GetTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrustAnchor(request), context);
}

ImportCrlOutcome RolesAnywhereClient::ImportCrl(const ImportCrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/crls");
  return ImportCrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportCrlOutcomeCallable RolesAnywhereClient::ImportCrlCallable(const ImportCrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportCrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportCrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::ImportCrlAsync(const ImportCrlRequest& request, const ImportCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportCrlAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::ImportCrlAsyncHelper(const ImportCrlRequest& request, const ImportCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportCrl(request), context);
}

ListCrlsOutcome RolesAnywhereClient::ListCrls(const ListCrlsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/crls");
  return ListCrlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCrlsOutcomeCallable RolesAnywhereClient::ListCrlsCallable(const ListCrlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCrlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCrls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::ListCrlsAsync(const ListCrlsRequest& request, const ListCrlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCrlsAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::ListCrlsAsyncHelper(const ListCrlsRequest& request, const ListCrlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCrls(request), context);
}

ListProfilesOutcome RolesAnywhereClient::ListProfiles(const ListProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profiles");
  return ListProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfilesOutcomeCallable RolesAnywhereClient::ListProfilesCallable(const ListProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::ListProfilesAsync(const ListProfilesRequest& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProfilesAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::ListProfilesAsyncHelper(const ListProfilesRequest& request, const ListProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProfiles(request), context);
}

ListSubjectsOutcome RolesAnywhereClient::ListSubjects(const ListSubjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/subjects");
  return ListSubjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSubjectsOutcomeCallable RolesAnywhereClient::ListSubjectsCallable(const ListSubjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::ListSubjectsAsync(const ListSubjectsRequest& request, const ListSubjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSubjectsAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::ListSubjectsAsyncHelper(const ListSubjectsRequest& request, const ListSubjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSubjects(request), context);
}

ListTagsForResourceOutcome RolesAnywhereClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListTagsForResource");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable RolesAnywhereClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTrustAnchorsOutcome RolesAnywhereClient::ListTrustAnchors(const ListTrustAnchorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustanchors");
  return ListTrustAnchorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTrustAnchorsOutcomeCallable RolesAnywhereClient::ListTrustAnchorsCallable(const ListTrustAnchorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrustAnchorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrustAnchors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::ListTrustAnchorsAsync(const ListTrustAnchorsRequest& request, const ListTrustAnchorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrustAnchorsAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::ListTrustAnchorsAsyncHelper(const ListTrustAnchorsRequest& request, const ListTrustAnchorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrustAnchors(request), context);
}

TagResourceOutcome RolesAnywhereClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TagResource");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable RolesAnywhereClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome RolesAnywhereClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UntagResource");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable RolesAnywhereClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateCrlOutcome RolesAnywhereClient::UpdateCrl(const UpdateCrlRequest& request) const
{
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCrl", "Required field: CrlId, is not set");
    return UpdateCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/crl/");
  uri.AddPathSegment(request.GetCrlId());
  return UpdateCrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateCrlOutcomeCallable RolesAnywhereClient::UpdateCrlCallable(const UpdateCrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::UpdateCrlAsync(const UpdateCrlRequest& request, const UpdateCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCrlAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::UpdateCrlAsyncHelper(const UpdateCrlRequest& request, const UpdateCrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCrl(request), context);
}

UpdateProfileOutcome RolesAnywhereClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfile", "Required field: ProfileId, is not set");
    return UpdateProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profile/");
  uri.AddPathSegment(request.GetProfileId());
  return UpdateProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfileOutcomeCallable RolesAnywhereClient::UpdateProfileCallable(const UpdateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::UpdateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProfileAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::UpdateProfileAsyncHelper(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProfile(request), context);
}

UpdateTrustAnchorOutcome RolesAnywhereClient::UpdateTrustAnchor(const UpdateTrustAnchorRequest& request) const
{
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrustAnchor", "Required field: TrustAnchorId, is not set");
    return UpdateTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/trustanchor/");
  uri.AddPathSegment(request.GetTrustAnchorId());
  return UpdateTrustAnchorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrustAnchorOutcomeCallable RolesAnywhereClient::UpdateTrustAnchorCallable(const UpdateTrustAnchorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrustAnchorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrustAnchor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RolesAnywhereClient::UpdateTrustAnchorAsync(const UpdateTrustAnchorRequest& request, const UpdateTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrustAnchorAsyncHelper( request, handler, context ); } );
}

void RolesAnywhereClient::UpdateTrustAnchorAsyncHelper(const UpdateTrustAnchorRequest& request, const UpdateTrustAnchorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrustAnchor(request), context);
}

