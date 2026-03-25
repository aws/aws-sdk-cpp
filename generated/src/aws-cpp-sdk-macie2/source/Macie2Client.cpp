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

  return AcceptInvitationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetCustomDataIdentifiersOutcome Macie2Client::BatchGetCustomDataIdentifiers(
    const BatchGetCustomDataIdentifiersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/get");
  };

  return BatchGetCustomDataIdentifiersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateAutomatedDiscoveryAccountsOutcome Macie2Client::BatchUpdateAutomatedDiscoveryAccounts(
    const BatchUpdateAutomatedDiscoveryAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/accounts");
  };

  return BatchUpdateAutomatedDiscoveryAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

CreateAllowListOutcome Macie2Client::CreateAllowList(const CreateAllowListRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists");
  };

  return CreateAllowListOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClassificationJobOutcome Macie2Client::CreateClassificationJob(const CreateClassificationJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return CreateClassificationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomDataIdentifierOutcome Macie2Client::CreateCustomDataIdentifier(const CreateCustomDataIdentifierRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers");
  };

  return CreateCustomDataIdentifierOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFindingsFilterOutcome Macie2Client::CreateFindingsFilter(const CreateFindingsFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters");
  };

  return CreateFindingsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInvitationsOutcome Macie2Client::CreateInvitations(const CreateInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  };

  return CreateInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMemberOutcome Macie2Client::CreateMember(const CreateMemberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  return CreateMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSampleFindingsOutcome Macie2Client::CreateSampleFindings(const CreateSampleFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/sample");
  };

  return CreateSampleFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeclineInvitationsOutcome Macie2Client::DeclineInvitations(const DeclineInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/decline");
  };

  return DeclineInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteAllowListOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteCustomDataIdentifierOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteFindingsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInvitationsOutcome Macie2Client::DeleteInvitations(const DeleteInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/delete");
  };

  return DeleteInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeBucketsOutcome Macie2Client::DescribeBuckets(const DescribeBucketsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/s3");
  };

  return DescribeBucketsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DescribeClassificationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeOrganizationConfigurationOutcome Macie2Client::DescribeOrganizationConfiguration(
    const DescribeOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin/configuration");
  };

  return DescribeOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisableMacieOutcome Macie2Client::DisableMacie(const DisableMacieRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  };

  return DisableMacieOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DisableOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateFromAdministratorAccountOutcome Macie2Client::DisassociateFromAdministratorAccount(
    const DisassociateFromAdministratorAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator/disassociate");
  };

  return DisassociateFromAdministratorAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFromMasterAccountOutcome Macie2Client::DisassociateFromMasterAccount(
    const DisassociateFromMasterAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/master/disassociate");
  };

  return DisassociateFromMasterAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DisassociateMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableMacieOutcome Macie2Client::EnableMacie(const EnableMacieRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  };

  return EnableMacieOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableOrganizationAdminAccountOutcome Macie2Client::EnableOrganizationAdminAccount(
    const EnableOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  };

  return EnableOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAdministratorAccountOutcome Macie2Client::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  };

  return GetAdministratorAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAllowListOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAutomatedDiscoveryConfigurationOutcome Macie2Client::GetAutomatedDiscoveryConfiguration(
    const GetAutomatedDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/configuration");
  };

  return GetAutomatedDiscoveryConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBucketStatisticsOutcome Macie2Client::GetBucketStatistics(const GetBucketStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/s3/statistics");
  };

  return GetBucketStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetClassificationExportConfigurationOutcome Macie2Client::GetClassificationExportConfiguration(
    const GetClassificationExportConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/classification-export-configuration");
  };

  return GetClassificationExportConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetClassificationScopeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetCustomDataIdentifierOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingStatisticsOutcome Macie2Client::GetFindingStatistics(const GetFindingStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/statistics");
  };

  return GetFindingStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFindingsOutcome Macie2Client::GetFindings(const GetFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/describe");
  };

  return GetFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetFindingsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingsPublicationConfigurationOutcome Macie2Client::GetFindingsPublicationConfiguration(
    const GetFindingsPublicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings-publication-configuration");
  };

  return GetFindingsPublicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInvitationsCountOutcome Macie2Client::GetInvitationsCount(const GetInvitationsCountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations/count");
  };

  return GetInvitationsCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMacieSessionOutcome Macie2Client::GetMacieSession(const GetMacieSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  };

  return GetMacieSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMasterAccountOutcome Macie2Client::GetMasterAccount(const GetMasterAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/master");
  };

  return GetMasterAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetResourceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRevealConfigurationOutcome Macie2Client::GetRevealConfiguration(const GetRevealConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reveal-configuration");
  };

  return GetRevealConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSensitiveDataOccurrencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSensitiveDataOccurrencesAvailabilityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSensitivityInspectionTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUsageStatisticsOutcome Macie2Client::GetUsageStatistics(const GetUsageStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage/statistics");
  };

  return GetUsageStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUsageTotalsOutcome Macie2Client::GetUsageTotals(const GetUsageTotalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage");
  };

  return GetUsageTotalsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAllowListsOutcome Macie2Client::ListAllowLists(const ListAllowListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/allow-lists");
  };

  return ListAllowListsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAutomatedDiscoveryAccountsOutcome Macie2Client::ListAutomatedDiscoveryAccounts(
    const ListAutomatedDiscoveryAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/accounts");
  };

  return ListAutomatedDiscoveryAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClassificationJobsOutcome Macie2Client::ListClassificationJobs(const ListClassificationJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/list");
  };

  return ListClassificationJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClassificationScopesOutcome Macie2Client::ListClassificationScopes(const ListClassificationScopesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/classification-scopes");
  };

  return ListClassificationScopesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCustomDataIdentifiersOutcome Macie2Client::ListCustomDataIdentifiers(const ListCustomDataIdentifiersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/list");
  };

  return ListCustomDataIdentifiersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFindingsOutcome Macie2Client::ListFindings(const ListFindingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  };

  return ListFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFindingsFiltersOutcome Macie2Client::ListFindingsFilters(const ListFindingsFiltersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findingsfilters");
  };

  return ListFindingsFiltersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInvitationsOutcome Macie2Client::ListInvitations(const ListInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitations");
  };

  return ListInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListManagedDataIdentifiersOutcome Macie2Client::ListManagedDataIdentifiers(const ListManagedDataIdentifiersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managed-data-identifiers/list");
  };

  return ListManagedDataIdentifiersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMembersOutcome Macie2Client::ListMembers(const ListMembersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  return ListMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOrganizationAdminAccountsOutcome Macie2Client::ListOrganizationAdminAccounts(
    const ListOrganizationAdminAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  };

  return ListOrganizationAdminAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListResourceProfileArtifactsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListResourceProfileDetectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSensitivityInspectionTemplatesOutcome Macie2Client::ListSensitivityInspectionTemplates(
    const ListSensitivityInspectionTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/sensitivity-inspections");
  };

  return ListSensitivityInspectionTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutClassificationExportConfigurationOutcome Macie2Client::PutClassificationExportConfiguration(
    const PutClassificationExportConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/classification-export-configuration");
  };

  return PutClassificationExportConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutFindingsPublicationConfigurationOutcome Macie2Client::PutFindingsPublicationConfiguration(
    const PutFindingsPublicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings-publication-configuration");
  };

  return PutFindingsPublicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SearchResourcesOutcome Macie2Client::SearchResources(const SearchResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/search-resources");
  };

  return SearchResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TestCustomDataIdentifierOutcome Macie2Client::TestCustomDataIdentifier(const TestCustomDataIdentifierRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-data-identifiers/test");
  };

  return TestCustomDataIdentifierOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateAllowListOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAutomatedDiscoveryConfigurationOutcome Macie2Client::UpdateAutomatedDiscoveryConfiguration(
    const UpdateAutomatedDiscoveryConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/automated-discovery/configuration");
  };

  return UpdateAutomatedDiscoveryConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateClassificationJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateClassificationScopeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateFindingsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateMacieSessionOutcome Macie2Client::UpdateMacieSession(const UpdateMacieSessionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/macie");
  };

  return UpdateMacieSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateMemberSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateOrganizationConfigurationOutcome Macie2Client::UpdateOrganizationConfiguration(
    const UpdateOrganizationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin/configuration");
  };

  return UpdateOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateResourceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateResourceProfileDetectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRevealConfigurationOutcome Macie2Client::UpdateRevealConfiguration(const UpdateRevealConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reveal-configuration");
  };

  return UpdateRevealConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateSensitivityInspectionTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
