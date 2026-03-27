/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/macie2/Macie2Client.h>
#include <aws/macie2/Macie2EndpointProvider.h>
#include <aws/macie2/Macie2ErrorMarshaller.h>
#include <aws/macie2/model/AcceptInvitationRequest.h>
#include <aws/macie2/model/BatchGetCustomDataIdentifiersRequest.h>
#include <aws/macie2/model/BatchUpdateAutomatedDiscoveryAccountsRequest.h>
#include <aws/macie2/model/CreateAllowListRequest.h>
#include <aws/macie2/model/CreateClassificationJobRequest.h>
#include <aws/macie2/model/CreateCustomDataIdentifierRequest.h>
#include <aws/macie2/model/CreateFindingsFilterRequest.h>
#include <aws/macie2/model/CreateInvitationsRequest.h>
#include <aws/macie2/model/CreateMemberRequest.h>
#include <aws/macie2/model/CreateSampleFindingsRequest.h>
#include <aws/macie2/model/DeclineInvitationsRequest.h>
#include <aws/macie2/model/DeleteAllowListRequest.h>
#include <aws/macie2/model/DeleteCustomDataIdentifierRequest.h>
#include <aws/macie2/model/DeleteFindingsFilterRequest.h>
#include <aws/macie2/model/DeleteInvitationsRequest.h>
#include <aws/macie2/model/DeleteMemberRequest.h>
#include <aws/macie2/model/DescribeBucketsRequest.h>
#include <aws/macie2/model/DescribeClassificationJobRequest.h>
#include <aws/macie2/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/macie2/model/DisableMacieRequest.h>
#include <aws/macie2/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/macie2/model/DisassociateFromAdministratorAccountRequest.h>
#include <aws/macie2/model/DisassociateFromMasterAccountRequest.h>
#include <aws/macie2/model/DisassociateMemberRequest.h>
#include <aws/macie2/model/EnableMacieRequest.h>
#include <aws/macie2/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/macie2/model/GetAdministratorAccountRequest.h>
#include <aws/macie2/model/GetAllowListRequest.h>
#include <aws/macie2/model/GetAutomatedDiscoveryConfigurationRequest.h>
#include <aws/macie2/model/GetBucketStatisticsRequest.h>
#include <aws/macie2/model/GetClassificationExportConfigurationRequest.h>
#include <aws/macie2/model/GetClassificationScopeRequest.h>
#include <aws/macie2/model/GetCustomDataIdentifierRequest.h>
#include <aws/macie2/model/GetFindingStatisticsRequest.h>
#include <aws/macie2/model/GetFindingsFilterRequest.h>
#include <aws/macie2/model/GetFindingsPublicationConfigurationRequest.h>
#include <aws/macie2/model/GetFindingsRequest.h>
#include <aws/macie2/model/GetInvitationsCountRequest.h>
#include <aws/macie2/model/GetMacieSessionRequest.h>
#include <aws/macie2/model/GetMasterAccountRequest.h>
#include <aws/macie2/model/GetMemberRequest.h>
#include <aws/macie2/model/GetResourceProfileRequest.h>
#include <aws/macie2/model/GetRevealConfigurationRequest.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesAvailabilityRequest.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesRequest.h>
#include <aws/macie2/model/GetSensitivityInspectionTemplateRequest.h>
#include <aws/macie2/model/GetUsageStatisticsRequest.h>
#include <aws/macie2/model/GetUsageTotalsRequest.h>
#include <aws/macie2/model/ListAllowListsRequest.h>
#include <aws/macie2/model/ListAutomatedDiscoveryAccountsRequest.h>
#include <aws/macie2/model/ListClassificationJobsRequest.h>
#include <aws/macie2/model/ListClassificationScopesRequest.h>
#include <aws/macie2/model/ListCustomDataIdentifiersRequest.h>
#include <aws/macie2/model/ListFindingsFiltersRequest.h>
#include <aws/macie2/model/ListFindingsRequest.h>
#include <aws/macie2/model/ListInvitationsRequest.h>
#include <aws/macie2/model/ListManagedDataIdentifiersRequest.h>
#include <aws/macie2/model/ListMembersRequest.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/macie2/model/ListResourceProfileArtifactsRequest.h>
#include <aws/macie2/model/ListResourceProfileDetectionsRequest.h>
#include <aws/macie2/model/ListSensitivityInspectionTemplatesRequest.h>
#include <aws/macie2/model/ListTagsForResourceRequest.h>
#include <aws/macie2/model/PutClassificationExportConfigurationRequest.h>
#include <aws/macie2/model/PutFindingsPublicationConfigurationRequest.h>
#include <aws/macie2/model/SearchResourcesRequest.h>
#include <aws/macie2/model/TagResourceRequest.h>
#include <aws/macie2/model/TestCustomDataIdentifierRequest.h>
#include <aws/macie2/model/UntagResourceRequest.h>
#include <aws/macie2/model/UpdateAllowListRequest.h>
#include <aws/macie2/model/UpdateAutomatedDiscoveryConfigurationRequest.h>
#include <aws/macie2/model/UpdateClassificationJobRequest.h>
#include <aws/macie2/model/UpdateClassificationScopeRequest.h>
#include <aws/macie2/model/UpdateFindingsFilterRequest.h>
#include <aws/macie2/model/UpdateMacieSessionRequest.h>
#include <aws/macie2/model/UpdateMemberSessionRequest.h>
#include <aws/macie2/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/macie2/model/UpdateResourceProfileDetectionsRequest.h>
#include <aws/macie2/model/UpdateResourceProfileRequest.h>
#include <aws/macie2/model/UpdateRevealConfigurationRequest.h>
#include <aws/macie2/model/UpdateSensitivityInspectionTemplateRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Macie2;
using namespace Aws::Macie2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Macie2 {
const char SERVICE_NAME[] = "macie2";
const char ALLOCATION_TAG[] = "Macie2Client";
}  // namespace Macie2
}  // namespace Aws
const char* Macie2Client::GetServiceName() { return SERVICE_NAME; }
const char* Macie2Client::GetAllocationTag() { return ALLOCATION_TAG; }

Macie2Client::Macie2Client(const Macie2::Macie2ClientConfiguration& clientConfiguration,
                           std::shared_ptr<Macie2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Macie2Client::Macie2Client(const AWSCredentials& credentials, std::shared_ptr<Macie2EndpointProviderBase> endpointProvider,
                           const Macie2::Macie2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Macie2Client::Macie2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<Macie2EndpointProviderBase> endpointProvider,
                           const Macie2::Macie2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Macie2Client::Macie2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Macie2Client::Macie2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Macie2Client::Macie2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Macie2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Macie2Client::~Macie2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Macie2EndpointProviderBase>& Macie2Client::accessEndpointProvider() { return m_endpointProvider; }

void Macie2Client::init(const Macie2::Macie2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Macie2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "macie2");
}

void Macie2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Macie2Client::InvokeOperationOutcome Macie2Client::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AcceptInvitationOutcome Macie2Client::AcceptInvitation(const AcceptInvitationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/accept");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptInvitationOutcome(result.GetResultWithOwnership())
                            : AcceptInvitationOutcome(std::move(result.GetError()));
}

BatchGetCustomDataIdentifiersOutcome Macie2Client::BatchGetCustomDataIdentifiers(
    const BatchGetCustomDataIdentifiersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetCustomDataIdentifiersOutcome(result.GetResultWithOwnership())
                            : BatchGetCustomDataIdentifiersOutcome(std::move(result.GetError()));
}

BatchUpdateAutomatedDiscoveryAccountsOutcome Macie2Client::BatchUpdateAutomatedDiscoveryAccounts(
    const BatchUpdateAutomatedDiscoveryAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/accounts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? BatchUpdateAutomatedDiscoveryAccountsOutcome(result.GetResultWithOwnership())
                            : BatchUpdateAutomatedDiscoveryAccountsOutcome(std::move(result.GetError()));
}

CreateAllowListOutcome Macie2Client::CreateAllowList(const CreateAllowListRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAllowListOutcome(result.GetResultWithOwnership())
                            : CreateAllowListOutcome(std::move(result.GetError()));
}

CreateClassificationJobOutcome Macie2Client::CreateClassificationJob(const CreateClassificationJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClassificationJobOutcome(result.GetResultWithOwnership())
                            : CreateClassificationJobOutcome(std::move(result.GetError()));
}

CreateCustomDataIdentifierOutcome Macie2Client::CreateCustomDataIdentifier(const CreateCustomDataIdentifierRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomDataIdentifierOutcome(result.GetResultWithOwnership())
                            : CreateCustomDataIdentifierOutcome(std::move(result.GetError()));
}

CreateFindingsFilterOutcome Macie2Client::CreateFindingsFilter(const CreateFindingsFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFindingsFilterOutcome(result.GetResultWithOwnership())
                            : CreateFindingsFilterOutcome(std::move(result.GetError()));
}

CreateInvitationsOutcome Macie2Client::CreateInvitations(const CreateInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInvitationsOutcome(result.GetResultWithOwnership())
                            : CreateInvitationsOutcome(std::move(result.GetError()));
}

CreateMemberOutcome Macie2Client::CreateMember(const CreateMemberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMemberOutcome(result.GetResultWithOwnership()) : CreateMemberOutcome(std::move(result.GetError()));
}

CreateSampleFindingsOutcome Macie2Client::CreateSampleFindings(const CreateSampleFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/sample");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSampleFindingsOutcome(result.GetResultWithOwnership())
                            : CreateSampleFindingsOutcome(std::move(result.GetError()));
}

DeclineInvitationsOutcome Macie2Client::DeclineInvitations(const DeclineInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/decline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeclineInvitationsOutcome(result.GetResultWithOwnership())
                            : DeclineInvitationsOutcome(std::move(result.GetError()));
}

DeleteAllowListOutcome Macie2Client::DeleteAllowList(const DeleteAllowListRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAllowList", "Required field: Id, is not set");
    return DeleteAllowListOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAllowListOutcome(result.GetResultWithOwnership())
                            : DeleteAllowListOutcome(std::move(result.GetError()));
}

DeleteCustomDataIdentifierOutcome Macie2Client::DeleteCustomDataIdentifier(const DeleteCustomDataIdentifierRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomDataIdentifier", "Required field: Id, is not set");
    return DeleteCustomDataIdentifierOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCustomDataIdentifierOutcome(result.GetResultWithOwnership())
                            : DeleteCustomDataIdentifierOutcome(std::move(result.GetError()));
}

DeleteFindingsFilterOutcome Macie2Client::DeleteFindingsFilter(const DeleteFindingsFilterRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFindingsFilter", "Required field: Id, is not set");
    return DeleteFindingsFilterOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFindingsFilterOutcome(result.GetResultWithOwnership())
                            : DeleteFindingsFilterOutcome(std::move(result.GetError()));
}

DeleteInvitationsOutcome Macie2Client::DeleteInvitations(const DeleteInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInvitationsOutcome(result.GetResultWithOwnership())
                            : DeleteInvitationsOutcome(std::move(result.GetError()));
}

DeleteMemberOutcome Macie2Client::DeleteMember(const DeleteMemberRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: Id, is not set");
    return DeleteMemberOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMemberOutcome(result.GetResultWithOwnership()) : DeleteMemberOutcome(std::move(result.GetError()));
}

DescribeBucketsOutcome Macie2Client::DescribeBuckets(const DescribeBucketsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/s3");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBucketsOutcome(result.GetResultWithOwnership())
                            : DescribeBucketsOutcome(std::move(result.GetError()));
}

DescribeClassificationJobOutcome Macie2Client::DescribeClassificationJob(const DescribeClassificationJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeClassificationJob", "Required field: JobId, is not set");
    return DescribeClassificationJobOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeClassificationJobOutcome(result.GetResultWithOwnership())
                            : DescribeClassificationJobOutcome(std::move(result.GetError()));
}

DescribeOrganizationConfigurationOutcome Macie2Client::DescribeOrganizationConfiguration(
    const DescribeOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeOrganizationConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationConfigurationOutcome(std::move(result.GetError()));
}

DisableMacieOutcome Macie2Client::DisableMacie(const DisableMacieRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisableMacieOutcome(result.GetResultWithOwnership()) : DisableMacieOutcome(std::move(result.GetError()));
}

DisableOrganizationAdminAccountOutcome Macie2Client::DisableOrganizationAdminAccount(
    const DisableOrganizationAdminAccountRequest& request) const {
  if (!request.AdminAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableOrganizationAdminAccount", "Required field: AdminAccountId, is not set");
    return DisableOrganizationAdminAccountOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [AdminAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisableOrganizationAdminAccountOutcome(result.GetResultWithOwnership())
                            : DisableOrganizationAdminAccountOutcome(std::move(result.GetError()));
}

DisassociateFromAdministratorAccountOutcome Macie2Client::DisassociateFromAdministratorAccount(
    const DisassociateFromAdministratorAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator/disassociate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateFromAdministratorAccountOutcome(result.GetResultWithOwnership())
                            : DisassociateFromAdministratorAccountOutcome(std::move(result.GetError()));
}

DisassociateFromMasterAccountOutcome Macie2Client::DisassociateFromMasterAccount(
    const DisassociateFromMasterAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/master/disassociate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateFromMasterAccountOutcome(result.GetResultWithOwnership())
                            : DisassociateFromMasterAccountOutcome(std::move(result.GetError()));
}

DisassociateMemberOutcome Macie2Client::DisassociateMember(const DisassociateMemberRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMember", "Required field: Id, is not set");
    return DisassociateMemberOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/disassociate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateMemberOutcome(result.GetResultWithOwnership())
                            : DisassociateMemberOutcome(std::move(result.GetError()));
}

EnableMacieOutcome Macie2Client::EnableMacie(const EnableMacieRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableMacieOutcome(result.GetResultWithOwnership()) : EnableMacieOutcome(std::move(result.GetError()));
}

EnableOrganizationAdminAccountOutcome Macie2Client::EnableOrganizationAdminAccount(
    const EnableOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableOrganizationAdminAccountOutcome(result.GetResultWithOwnership())
                            : EnableOrganizationAdminAccountOutcome(std::move(result.GetError()));
}

GetAdministratorAccountOutcome Macie2Client::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAdministratorAccountOutcome(result.GetResultWithOwnership())
                            : GetAdministratorAccountOutcome(std::move(result.GetError()));
}

GetAllowListOutcome Macie2Client::GetAllowList(const GetAllowListRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAllowList", "Required field: Id, is not set");
    return GetAllowListOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAllowListOutcome(result.GetResultWithOwnership()) : GetAllowListOutcome(std::move(result.GetError()));
}

GetAutomatedDiscoveryConfigurationOutcome Macie2Client::GetAutomatedDiscoveryConfiguration(
    const GetAutomatedDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAutomatedDiscoveryConfigurationOutcome(result.GetResultWithOwnership())
                            : GetAutomatedDiscoveryConfigurationOutcome(std::move(result.GetError()));
}

GetBucketStatisticsOutcome Macie2Client::GetBucketStatistics(const GetBucketStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/s3/statistics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBucketStatisticsOutcome(result.GetResultWithOwnership())
                            : GetBucketStatisticsOutcome(std::move(result.GetError()));
}

GetClassificationExportConfigurationOutcome Macie2Client::GetClassificationExportConfiguration(
    const GetClassificationExportConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/classification-export-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetClassificationExportConfigurationOutcome(result.GetResultWithOwnership())
                            : GetClassificationExportConfigurationOutcome(std::move(result.GetError()));
}

GetClassificationScopeOutcome Macie2Client::GetClassificationScope(const GetClassificationScopeRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetClassificationScope", "Required field: Id, is not set");
    return GetClassificationScopeOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/classification-scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetClassificationScopeOutcome(result.GetResultWithOwnership())
                            : GetClassificationScopeOutcome(std::move(result.GetError()));
}

GetCustomDataIdentifierOutcome Macie2Client::GetCustomDataIdentifier(const GetCustomDataIdentifierRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCustomDataIdentifier", "Required field: Id, is not set");
    return GetCustomDataIdentifierOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCustomDataIdentifierOutcome(result.GetResultWithOwnership())
                            : GetCustomDataIdentifierOutcome(std::move(result.GetError()));
}

GetFindingStatisticsOutcome Macie2Client::GetFindingStatistics(const GetFindingStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/statistics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetFindingStatisticsOutcome(result.GetResultWithOwnership())
                            : GetFindingStatisticsOutcome(std::move(result.GetError()));
}

GetFindingsOutcome Macie2Client::GetFindings(const GetFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/describe");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetFindingsOutcome(result.GetResultWithOwnership()) : GetFindingsOutcome(std::move(result.GetError()));
}

GetFindingsFilterOutcome Macie2Client::GetFindingsFilter(const GetFindingsFilterRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFindingsFilter", "Required field: Id, is not set");
    return GetFindingsFilterOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFindingsFilterOutcome(result.GetResultWithOwnership())
                            : GetFindingsFilterOutcome(std::move(result.GetError()));
}

GetFindingsPublicationConfigurationOutcome Macie2Client::GetFindingsPublicationConfiguration(
    const GetFindingsPublicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings-publication-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFindingsPublicationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetFindingsPublicationConfigurationOutcome(std::move(result.GetError()));
}

GetInvitationsCountOutcome Macie2Client::GetInvitationsCount(const GetInvitationsCountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/count");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInvitationsCountOutcome(result.GetResultWithOwnership())
                            : GetInvitationsCountOutcome(std::move(result.GetError()));
}

GetMacieSessionOutcome Macie2Client::GetMacieSession(const GetMacieSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMacieSessionOutcome(result.GetResultWithOwnership())
                            : GetMacieSessionOutcome(std::move(result.GetError()));
}

GetMasterAccountOutcome Macie2Client::GetMasterAccount(const GetMasterAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/master");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMasterAccountOutcome(result.GetResultWithOwnership())
                            : GetMasterAccountOutcome(std::move(result.GetError()));
}

GetMemberOutcome Macie2Client::GetMember(const GetMemberRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: Id, is not set");
    return GetMemberOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMemberOutcome(result.GetResultWithOwnership()) : GetMemberOutcome(std::move(result.GetError()));
}

GetResourceProfileOutcome Macie2Client::GetResourceProfile(const GetResourceProfileRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceProfile", "Required field: ResourceArn, is not set");
    return GetResourceProfileOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourceProfileOutcome(result.GetResultWithOwnership())
                            : GetResourceProfileOutcome(std::move(result.GetError()));
}

GetRevealConfigurationOutcome Macie2Client::GetRevealConfiguration(const GetRevealConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reveal-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRevealConfigurationOutcome(result.GetResultWithOwnership())
                            : GetRevealConfigurationOutcome(std::move(result.GetError()));
}

GetSensitiveDataOccurrencesOutcome Macie2Client::GetSensitiveDataOccurrences(const GetSensitiveDataOccurrencesRequest& request) const {
  if (!request.FindingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSensitiveDataOccurrences", "Required field: FindingId, is not set");
    return GetSensitiveDataOccurrencesOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FindingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFindingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reveal");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSensitiveDataOccurrencesOutcome(result.GetResultWithOwnership())
                            : GetSensitiveDataOccurrencesOutcome(std::move(result.GetError()));
}

GetSensitiveDataOccurrencesAvailabilityOutcome Macie2Client::GetSensitiveDataOccurrencesAvailability(
    const GetSensitiveDataOccurrencesAvailabilityRequest& request) const {
  if (!request.FindingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSensitiveDataOccurrencesAvailability", "Required field: FindingId, is not set");
    return GetSensitiveDataOccurrencesAvailabilityOutcome(Aws::Client::AWSError<Macie2Errors>(
        Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFindingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reveal/availability");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSensitiveDataOccurrencesAvailabilityOutcome(result.GetResultWithOwnership())
                            : GetSensitiveDataOccurrencesAvailabilityOutcome(std::move(result.GetError()));
}

GetSensitivityInspectionTemplateOutcome Macie2Client::GetSensitivityInspectionTemplate(
    const GetSensitivityInspectionTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSensitivityInspectionTemplate", "Required field: Id, is not set");
    return GetSensitivityInspectionTemplateOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/sensitivity-inspections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSensitivityInspectionTemplateOutcome(result.GetResultWithOwnership())
                            : GetSensitivityInspectionTemplateOutcome(std::move(result.GetError()));
}

GetUsageStatisticsOutcome Macie2Client::GetUsageStatistics(const GetUsageStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage/statistics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUsageStatisticsOutcome(result.GetResultWithOwnership())
                            : GetUsageStatisticsOutcome(std::move(result.GetError()));
}

GetUsageTotalsOutcome Macie2Client::GetUsageTotals(const GetUsageTotalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUsageTotalsOutcome(result.GetResultWithOwnership()) : GetUsageTotalsOutcome(std::move(result.GetError()));
}

ListAllowListsOutcome Macie2Client::ListAllowLists(const ListAllowListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAllowListsOutcome(result.GetResultWithOwnership()) : ListAllowListsOutcome(std::move(result.GetError()));
}

ListAutomatedDiscoveryAccountsOutcome Macie2Client::ListAutomatedDiscoveryAccounts(
    const ListAutomatedDiscoveryAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/accounts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAutomatedDiscoveryAccountsOutcome(result.GetResultWithOwnership())
                            : ListAutomatedDiscoveryAccountsOutcome(std::move(result.GetError()));
}

ListClassificationJobsOutcome Macie2Client::ListClassificationJobs(const ListClassificationJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListClassificationJobsOutcome(result.GetResultWithOwnership())
                            : ListClassificationJobsOutcome(std::move(result.GetError()));
}

ListClassificationScopesOutcome Macie2Client::ListClassificationScopes(const ListClassificationScopesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/classification-scopes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListClassificationScopesOutcome(result.GetResultWithOwnership())
                            : ListClassificationScopesOutcome(std::move(result.GetError()));
}

ListCustomDataIdentifiersOutcome Macie2Client::ListCustomDataIdentifiers(const ListCustomDataIdentifiersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCustomDataIdentifiersOutcome(result.GetResultWithOwnership())
                            : ListCustomDataIdentifiersOutcome(std::move(result.GetError()));
}

ListFindingsOutcome Macie2Client::ListFindings(const ListFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFindingsOutcome(result.GetResultWithOwnership()) : ListFindingsOutcome(std::move(result.GetError()));
}

ListFindingsFiltersOutcome Macie2Client::ListFindingsFilters(const ListFindingsFiltersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFindingsFiltersOutcome(result.GetResultWithOwnership())
                            : ListFindingsFiltersOutcome(std::move(result.GetError()));
}

ListInvitationsOutcome Macie2Client::ListInvitations(const ListInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInvitationsOutcome(result.GetResultWithOwnership())
                            : ListInvitationsOutcome(std::move(result.GetError()));
}

ListManagedDataIdentifiersOutcome Macie2Client::ListManagedDataIdentifiers(const ListManagedDataIdentifiersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-data-identifiers/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListManagedDataIdentifiersOutcome(result.GetResultWithOwnership())
                            : ListManagedDataIdentifiersOutcome(std::move(result.GetError()));
}

ListMembersOutcome Macie2Client::ListMembers(const ListMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMembersOutcome(result.GetResultWithOwnership()) : ListMembersOutcome(std::move(result.GetError()));
}

ListOrganizationAdminAccountsOutcome Macie2Client::ListOrganizationAdminAccounts(
    const ListOrganizationAdminAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOrganizationAdminAccountsOutcome(result.GetResultWithOwnership())
                            : ListOrganizationAdminAccountsOutcome(std::move(result.GetError()));
}

ListResourceProfileArtifactsOutcome Macie2Client::ListResourceProfileArtifacts(const ListResourceProfileArtifactsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResourceProfileArtifacts", "Required field: ResourceArn, is not set");
    return ListResourceProfileArtifactsOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles/artifacts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListResourceProfileArtifactsOutcome(result.GetResultWithOwnership())
                            : ListResourceProfileArtifactsOutcome(std::move(result.GetError()));
}

ListResourceProfileDetectionsOutcome Macie2Client::ListResourceProfileDetections(
    const ListResourceProfileDetectionsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResourceProfileDetections", "Required field: ResourceArn, is not set");
    return ListResourceProfileDetectionsOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles/detections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListResourceProfileDetectionsOutcome(result.GetResultWithOwnership())
                            : ListResourceProfileDetectionsOutcome(std::move(result.GetError()));
}

ListSensitivityInspectionTemplatesOutcome Macie2Client::ListSensitivityInspectionTemplates(
    const ListSensitivityInspectionTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/sensitivity-inspections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSensitivityInspectionTemplatesOutcome(result.GetResultWithOwnership())
                            : ListSensitivityInspectionTemplatesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome Macie2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutClassificationExportConfigurationOutcome Macie2Client::PutClassificationExportConfiguration(
    const PutClassificationExportConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/classification-export-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutClassificationExportConfigurationOutcome(result.GetResultWithOwnership())
                            : PutClassificationExportConfigurationOutcome(std::move(result.GetError()));
}

PutFindingsPublicationConfigurationOutcome Macie2Client::PutFindingsPublicationConfiguration(
    const PutFindingsPublicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings-publication-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFindingsPublicationConfigurationOutcome(result.GetResultWithOwnership())
                            : PutFindingsPublicationConfigurationOutcome(std::move(result.GetError()));
}

SearchResourcesOutcome Macie2Client::SearchResources(const SearchResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/search-resources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchResourcesOutcome(result.GetResultWithOwnership())
                            : SearchResourcesOutcome(std::move(result.GetError()));
}

TagResourceOutcome Macie2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestCustomDataIdentifierOutcome Macie2Client::TestCustomDataIdentifier(const TestCustomDataIdentifierRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/test");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestCustomDataIdentifierOutcome(result.GetResultWithOwnership())
                            : TestCustomDataIdentifierOutcome(std::move(result.GetError()));
}

UntagResourceOutcome Macie2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAllowListOutcome Macie2Client::UpdateAllowList(const UpdateAllowListRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAllowList", "Required field: Id, is not set");
    return UpdateAllowListOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAllowListOutcome(result.GetResultWithOwnership())
                            : UpdateAllowListOutcome(std::move(result.GetError()));
}

UpdateAutomatedDiscoveryConfigurationOutcome Macie2Client::UpdateAutomatedDiscoveryConfiguration(
    const UpdateAutomatedDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAutomatedDiscoveryConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateAutomatedDiscoveryConfigurationOutcome(std::move(result.GetError()));
}

UpdateClassificationJobOutcome Macie2Client::UpdateClassificationJob(const UpdateClassificationJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateClassificationJob", "Required field: JobId, is not set");
    return UpdateClassificationJobOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateClassificationJobOutcome(result.GetResultWithOwnership())
                            : UpdateClassificationJobOutcome(std::move(result.GetError()));
}

UpdateClassificationScopeOutcome Macie2Client::UpdateClassificationScope(const UpdateClassificationScopeRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateClassificationScope", "Required field: Id, is not set");
    return UpdateClassificationScopeOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/classification-scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateClassificationScopeOutcome(result.GetResultWithOwnership())
                            : UpdateClassificationScopeOutcome(std::move(result.GetError()));
}

UpdateFindingsFilterOutcome Macie2Client::UpdateFindingsFilter(const UpdateFindingsFilterRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFindingsFilter", "Required field: Id, is not set");
    return UpdateFindingsFilterOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateFindingsFilterOutcome(result.GetResultWithOwnership())
                            : UpdateFindingsFilterOutcome(std::move(result.GetError()));
}

UpdateMacieSessionOutcome Macie2Client::UpdateMacieSession(const UpdateMacieSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMacieSessionOutcome(result.GetResultWithOwnership())
                            : UpdateMacieSessionOutcome(std::move(result.GetError()));
}

UpdateMemberSessionOutcome Macie2Client::UpdateMemberSession(const UpdateMemberSessionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMemberSession", "Required field: Id, is not set");
    return UpdateMemberSessionOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMemberSessionOutcome(result.GetResultWithOwnership())
                            : UpdateMemberSessionOutcome(std::move(result.GetError()));
}

UpdateOrganizationConfigurationOutcome Macie2Client::UpdateOrganizationConfiguration(
    const UpdateOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateOrganizationConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateOrganizationConfigurationOutcome(std::move(result.GetError()));
}

UpdateResourceProfileOutcome Macie2Client::UpdateResourceProfile(const UpdateResourceProfileRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourceProfile", "Required field: ResourceArn, is not set");
    return UpdateResourceProfileOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateResourceProfileOutcome(result.GetResultWithOwnership())
                            : UpdateResourceProfileOutcome(std::move(result.GetError()));
}

UpdateResourceProfileDetectionsOutcome Macie2Client::UpdateResourceProfileDetections(
    const UpdateResourceProfileDetectionsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourceProfileDetections", "Required field: ResourceArn, is not set");
    return UpdateResourceProfileDetectionsOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-profiles/detections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateResourceProfileDetectionsOutcome(result.GetResultWithOwnership())
                            : UpdateResourceProfileDetectionsOutcome(std::move(result.GetError()));
}

UpdateRevealConfigurationOutcome Macie2Client::UpdateRevealConfiguration(const UpdateRevealConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reveal-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRevealConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateRevealConfigurationOutcome(std::move(result.GetError()));
}

UpdateSensitivityInspectionTemplateOutcome Macie2Client::UpdateSensitivityInspectionTemplate(
    const UpdateSensitivityInspectionTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSensitivityInspectionTemplate", "Required field: Id, is not set");
    return UpdateSensitivityInspectionTemplateOutcome(
        Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/sensitivity-inspections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSensitivityInspectionTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateSensitivityInspectionTemplateOutcome(std::move(result.GetError()));
}
