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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/rolesanywhere/RolesAnywhereClient.h>
#include <aws/rolesanywhere/RolesAnywhereErrorMarshaller.h>
#include <aws/rolesanywhere/RolesAnywhereEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* RolesAnywhereClient::SERVICE_NAME = "rolesanywhere";
const char* RolesAnywhereClient::ALLOCATION_TAG = "RolesAnywhereClient";

RolesAnywhereClient::RolesAnywhereClient(const RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration,
                                         std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const AWSCredentials& credentials,
                                         std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider,
                                         const RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<RolesAnywhereEndpointProviderBase> endpointProvider,
                                         const RolesAnywhere::RolesAnywhereClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  RolesAnywhereClient::RolesAnywhereClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RolesAnywhereClient::RolesAnywhereClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RolesAnywhereErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RolesAnywhereEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
RolesAnywhereClient::~RolesAnywhereClient()
{
}

std::shared_ptr<RolesAnywhereEndpointProviderBase>& RolesAnywhereClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void RolesAnywhereClient::init(const RolesAnywhere::RolesAnywhereClientConfiguration& config)
{
  AWSClient::SetServiceClientName("RolesAnywhere");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void RolesAnywhereClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateProfileOutcome RolesAnywhereClient::CreateProfile(const CreateProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  return CreateProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProfile(request), context);
    } );
}

CreateTrustAnchorOutcome RolesAnywhereClient::CreateTrustAnchor(const CreateTrustAnchorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchors");
  return CreateTrustAnchorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTrustAnchor(request), context);
    } );
}

DeleteCrlOutcome RolesAnywhereClient::DeleteCrl(const DeleteCrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCrl", "Required field: CrlId, is not set");
    return DeleteCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
  return DeleteCrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCrl(request), context);
    } );
}

DeleteProfileOutcome RolesAnywhereClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: ProfileId, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  return DeleteProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProfile(request), context);
    } );
}

DeleteTrustAnchorOutcome RolesAnywhereClient::DeleteTrustAnchor(const DeleteTrustAnchorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrustAnchor", "Required field: TrustAnchorId, is not set");
    return DeleteTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
  return DeleteTrustAnchorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTrustAnchor(request), context);
    } );
}

DisableCrlOutcome RolesAnywhereClient::DisableCrl(const DisableCrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableCrl", "Required field: CrlId, is not set");
    return DisableCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  return DisableCrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableCrl(request), context);
    } );
}

DisableProfileOutcome RolesAnywhereClient::DisableProfile(const DisableProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableProfile", "Required field: ProfileId, is not set");
    return DisableProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  return DisableProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableProfile(request), context);
    } );
}

DisableTrustAnchorOutcome RolesAnywhereClient::DisableTrustAnchor(const DisableTrustAnchorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableTrustAnchor", "Required field: TrustAnchorId, is not set");
    return DisableTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disable");
  return DisableTrustAnchorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableTrustAnchor(request), context);
    } );
}

EnableCrlOutcome RolesAnywhereClient::EnableCrl(const EnableCrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableCrl", "Required field: CrlId, is not set");
    return EnableCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  return EnableCrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableCrl(request), context);
    } );
}

EnableProfileOutcome RolesAnywhereClient::EnableProfile(const EnableProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableProfile", "Required field: ProfileId, is not set");
    return EnableProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  return EnableProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableProfile(request), context);
    } );
}

EnableTrustAnchorOutcome RolesAnywhereClient::EnableTrustAnchor(const EnableTrustAnchorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableTrustAnchor", "Required field: TrustAnchorId, is not set");
    return EnableTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/enable");
  return EnableTrustAnchorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableTrustAnchor(request), context);
    } );
}

GetCrlOutcome RolesAnywhereClient::GetCrl(const GetCrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCrl", "Required field: CrlId, is not set");
    return GetCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
  return GetCrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCrl(request), context);
    } );
}

GetProfileOutcome RolesAnywhereClient::GetProfile(const GetProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfileId, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  return GetProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetProfile(request), context);
    } );
}

GetSubjectOutcome RolesAnywhereClient::GetSubject(const GetSubjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubjectIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubject", "Required field: SubjectId, is not set");
    return GetSubjectOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubjectId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subject/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubjectId());
  return GetSubjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSubject(request), context);
    } );
}

GetTrustAnchorOutcome RolesAnywhereClient::GetTrustAnchor(const GetTrustAnchorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustAnchor", "Required field: TrustAnchorId, is not set");
    return GetTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
  return GetTrustAnchorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTrustAnchor(request), context);
    } );
}

ImportCrlOutcome RolesAnywhereClient::ImportCrl(const ImportCrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crls");
  return ImportCrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportCrl(request), context);
    } );
}

ListCrlsOutcome RolesAnywhereClient::ListCrls(const ListCrlsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCrls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCrls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crls");
  return ListCrlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCrls(request), context);
    } );
}

ListProfilesOutcome RolesAnywhereClient::ListProfiles(const ListProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  return ListProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProfiles(request), context);
    } );
}

ListSubjectsOutcome RolesAnywhereClient::ListSubjects(const ListSubjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subjects");
  return ListSubjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSubjects(request), context);
    } );
}

ListTagsForResourceOutcome RolesAnywhereClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListTagsForResource");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTrustAnchorsOutcome RolesAnywhereClient::ListTrustAnchors(const ListTrustAnchorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrustAnchors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrustAnchors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchors");
  return ListTrustAnchorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTrustAnchors(request), context);
    } );
}

TagResourceOutcome RolesAnywhereClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome RolesAnywhereClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateCrlOutcome RolesAnywhereClient::UpdateCrl(const UpdateCrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrlIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCrl", "Required field: CrlId, is not set");
    return UpdateCrlOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrlId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crl/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrlId());
  return UpdateCrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCrl(request), context);
    } );
}

UpdateProfileOutcome RolesAnywhereClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfile", "Required field: ProfileId, is not set");
    return UpdateProfileOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  return UpdateProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProfile(request), context);
    } );
}

UpdateTrustAnchorOutcome RolesAnywhereClient::UpdateTrustAnchor(const UpdateTrustAnchorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustAnchorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrustAnchor", "Required field: TrustAnchorId, is not set");
    return UpdateTrustAnchorOutcome(Aws::Client::AWSError<RolesAnywhereErrors>(RolesAnywhereErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustAnchorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrustAnchor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustanchor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustAnchorId());
  return UpdateTrustAnchorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTrustAnchor(request), context);
    } );
}

