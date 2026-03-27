/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront/CloudFrontEndpointProvider.h>
#include <aws/cloudfront/CloudFrontErrorMarshaller.h>
#include <aws/cloudfront/model/AssociateAlias2020_05_31Request.h>
#include <aws/cloudfront/model/AssociateDistributionTenantWebACL2020_05_31Request.h>
#include <aws/cloudfront/model/AssociateDistributionWebACL2020_05_31Request.h>
#include <aws/cloudfront/model/CopyDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/CreateAnycastIpList2020_05_31Request.h>
#include <aws/cloudfront/model/CreateCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/CreateConnectionFunction2020_05_31Request.h>
#include <aws/cloudfront/model/CreateConnectionGroup2020_05_31Request.h>
#include <aws/cloudfront/model/CreateContinuousDeploymentPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/CreateDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/CreateDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2020_05_31Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2020_05_31Request.h>
#include <aws/cloudfront/model/CreateFunction2020_05_31Request.h>
#include <aws/cloudfront/model/CreateInvalidation2020_05_31Request.h>
#include <aws/cloudfront/model/CreateInvalidationForDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/CreateKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/CreateKeyValueStore2020_05_31Request.h>
#include <aws/cloudfront/model/CreateMonitoringSubscription2020_05_31Request.h>
#include <aws/cloudfront/model/CreateOriginAccessControl2020_05_31Request.h>
#include <aws/cloudfront/model/CreateOriginRequestPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/CreatePublicKey2020_05_31Request.h>
#include <aws/cloudfront/model/CreateRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/CreateResponseHeadersPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2020_05_31Request.h>
#include <aws/cloudfront/model/CreateTrustStore2020_05_31Request.h>
#include <aws/cloudfront/model/CreateVpcOrigin2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteAnycastIpList2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteConnectionFunction2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteConnectionGroup2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteContinuousDeploymentPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionProfile2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteFunction2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteKeyValueStore2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteMonitoringSubscription2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteOriginAccessControl2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteOriginRequestPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/DeletePublicKey2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteResourcePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteResponseHeadersPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteTrustStore2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteVpcOrigin2020_05_31Request.h>
#include <aws/cloudfront/model/DescribeConnectionFunction2020_05_31Request.h>
#include <aws/cloudfront/model/DescribeFunction2020_05_31Request.h>
#include <aws/cloudfront/model/DescribeKeyValueStore2020_05_31Request.h>
#include <aws/cloudfront/model/DisassociateDistributionTenantWebACL2020_05_31Request.h>
#include <aws/cloudfront/model/DisassociateDistributionWebACL2020_05_31Request.h>
#include <aws/cloudfront/model/GetAnycastIpList2020_05_31Request.h>
#include <aws/cloudfront/model/GetCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetCachePolicyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetConnectionFunction2020_05_31Request.h>
#include <aws/cloudfront/model/GetConnectionGroup2020_05_31Request.h>
#include <aws/cloudfront/model/GetConnectionGroupByRoutingEndpoint2020_05_31Request.h>
#include <aws/cloudfront/model/GetContinuousDeploymentPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetContinuousDeploymentPolicyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/GetDistributionTenantByDomain2020_05_31Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2020_05_31Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2020_05_31Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetFunction2020_05_31Request.h>
#include <aws/cloudfront/model/GetInvalidation2020_05_31Request.h>
#include <aws/cloudfront/model/GetInvalidationForDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/GetKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/GetKeyGroupConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetManagedCertificateDetails2020_05_31Request.h>
#include <aws/cloudfront/model/GetMonitoringSubscription2020_05_31Request.h>
#include <aws/cloudfront/model/GetOriginAccessControl2020_05_31Request.h>
#include <aws/cloudfront/model/GetOriginAccessControlConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetOriginRequestPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetOriginRequestPolicyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetPublicKey2020_05_31Request.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetResourcePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetResponseHeadersPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetResponseHeadersPolicyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetTrustStore2020_05_31Request.h>
#include <aws/cloudfront/model/GetVpcOrigin2020_05_31Request.h>
#include <aws/cloudfront/model/ListAnycastIpLists2020_05_31Request.h>
#include <aws/cloudfront/model/ListCachePolicies2020_05_31Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2020_05_31Request.h>
#include <aws/cloudfront/model/ListConflictingAliases2020_05_31Request.h>
#include <aws/cloudfront/model/ListConnectionFunctions2020_05_31Request.h>
#include <aws/cloudfront/model/ListConnectionGroups2020_05_31Request.h>
#include <aws/cloudfront/model/ListContinuousDeploymentPolicies2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionTenants2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionTenantsByCustomization2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributions2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByAnycastIpListId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByCachePolicyId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByConnectionFunction2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByConnectionMode2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByOriginRequestPolicyId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByOwnedResource2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByResponseHeadersPolicyId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByTrustStore2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByVpcOriginId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDomainConflicts2020_05_31Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2020_05_31Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2020_05_31Request.h>
#include <aws/cloudfront/model/ListFunctions2020_05_31Request.h>
#include <aws/cloudfront/model/ListInvalidations2020_05_31Request.h>
#include <aws/cloudfront/model/ListInvalidationsForDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/ListKeyGroups2020_05_31Request.h>
#include <aws/cloudfront/model/ListKeyValueStores2020_05_31Request.h>
#include <aws/cloudfront/model/ListOriginAccessControls2020_05_31Request.h>
#include <aws/cloudfront/model/ListOriginRequestPolicies2020_05_31Request.h>
#include <aws/cloudfront/model/ListPublicKeys2020_05_31Request.h>
#include <aws/cloudfront/model/ListRealtimeLogConfigs2020_05_31Request.h>
#include <aws/cloudfront/model/ListResponseHeadersPolicies2020_05_31Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2020_05_31Request.h>
#include <aws/cloudfront/model/ListTagsForResource2020_05_31Request.h>
#include <aws/cloudfront/model/ListTrustStores2020_05_31Request.h>
#include <aws/cloudfront/model/ListVpcOrigins2020_05_31Request.h>
#include <aws/cloudfront/model/PublishConnectionFunction2020_05_31Request.h>
#include <aws/cloudfront/model/PublishFunction2020_05_31Request.h>
#include <aws/cloudfront/model/PutResourcePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/TagResource2020_05_31Request.h>
#include <aws/cloudfront/model/TestConnectionFunction2020_05_31Request.h>
#include <aws/cloudfront/model/TestFunction2020_05_31Request.h>
#include <aws/cloudfront/model/UntagResource2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateAnycastIpList2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateConnectionFunction2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateConnectionGroup2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateContinuousDeploymentPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateDistributionWithStagingConfig2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateDomainAssociation2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateFunction2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateKeyValueStore2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateOriginAccessControl2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateOriginRequestPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/UpdatePublicKey2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateResponseHeadersPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateTrustStore2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateVpcOrigin2020_05_31Request.h>
#include <aws/cloudfront/model/VerifyDnsConfiguration2020_05_31Request.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudFront;
using namespace Aws::CloudFront::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudFront {
const char SERVICE_NAME[] = "cloudfront";
const char ALLOCATION_TAG[] = "CloudFrontClient";
}  // namespace CloudFront
}  // namespace Aws
const char* CloudFrontClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudFrontClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudFrontClient::CloudFrontClient(const CloudFront::CloudFrontClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const AWSCredentials& credentials, std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider,
                                   const CloudFront::CloudFrontClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider,
                                   const CloudFront::CloudFrontClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudFrontClient::CloudFrontClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudFrontClient::~CloudFrontClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudFrontEndpointProviderBase>& CloudFrontClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudFrontClient::init(const CloudFront::CloudFrontClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudFront");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloudfront");
}

void CloudFrontClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CloudFrontClient::InvokeOperationOutcome CloudFrontClient::InvokeServiceOperation(
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
AssociateAlias2020_05_31Outcome CloudFrontClient::AssociateAlias2020_05_31(const AssociateAlias2020_05_31Request& request) const {
  if (!request.TargetDistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAlias2020_05_31", "Required field: TargetDistributionId, is not set");
    return AssociateAlias2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TargetDistributionId]", false));
  }
  if (!request.AliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAlias2020_05_31", "Required field: Alias, is not set");
    return AssociateAlias2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Alias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetDistributionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-alias");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateAlias2020_05_31Outcome(result.GetResultWithOwnership())
                            : AssociateAlias2020_05_31Outcome(std::move(result.GetError()));
}

AssociateDistributionTenantWebACL2020_05_31Outcome CloudFrontClient::AssociateDistributionTenantWebACL2020_05_31(
    const AssociateDistributionTenantWebACL2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateDistributionTenantWebACL2020_05_31", "Required field: Id, is not set");
    return AssociateDistributionTenantWebACL2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-web-acl");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateDistributionTenantWebACL2020_05_31Outcome(result.GetResultWithOwnership())
                            : AssociateDistributionTenantWebACL2020_05_31Outcome(std::move(result.GetError()));
}

AssociateDistributionWebACL2020_05_31Outcome CloudFrontClient::AssociateDistributionWebACL2020_05_31(
    const AssociateDistributionWebACL2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateDistributionWebACL2020_05_31", "Required field: Id, is not set");
    return AssociateDistributionWebACL2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-web-acl");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateDistributionWebACL2020_05_31Outcome(result.GetResultWithOwnership())
                            : AssociateDistributionWebACL2020_05_31Outcome(std::move(result.GetError()));
}

CopyDistribution2020_05_31Outcome CloudFrontClient::CopyDistribution2020_05_31(const CopyDistribution2020_05_31Request& request) const {
  if (!request.PrimaryDistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyDistribution2020_05_31", "Required field: PrimaryDistributionId, is not set");
    return CopyDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrimaryDistributionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrimaryDistributionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/copy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : CopyDistribution2020_05_31Outcome(std::move(result.GetError()));
}

CreateAnycastIpList2020_05_31Outcome CloudFrontClient::CreateAnycastIpList2020_05_31(
    const CreateAnycastIpList2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/anycast-ip-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAnycastIpList2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateAnycastIpList2020_05_31Outcome(std::move(result.GetError()));
}

CreateCachePolicy2020_05_31Outcome CloudFrontClient::CreateCachePolicy2020_05_31(const CreateCachePolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCachePolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateCachePolicy2020_05_31Outcome(std::move(result.GetError()));
}

CreateCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31(
    const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCloudFrontOriginAccessIdentity2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateCloudFrontOriginAccessIdentity2020_05_31Outcome(std::move(result.GetError()));
}

CreateConnectionFunction2020_05_31Outcome CloudFrontClient::CreateConnectionFunction2020_05_31(
    const CreateConnectionFunction2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-function");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateConnectionFunction2020_05_31Outcome(std::move(result.GetError()));
}

CreateConnectionGroup2020_05_31Outcome CloudFrontClient::CreateConnectionGroup2020_05_31(
    const CreateConnectionGroup2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-group");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateConnectionGroup2020_05_31Outcome(std::move(result.GetError()));
}

CreateContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::CreateContinuousDeploymentPolicy2020_05_31(
    const CreateContinuousDeploymentPolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContinuousDeploymentPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateContinuousDeploymentPolicy2020_05_31Outcome(std::move(result.GetError()));
}

CreateDistribution2020_05_31Outcome CloudFrontClient::CreateDistribution2020_05_31(
    const CreateDistribution2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateDistribution2020_05_31Outcome(std::move(result.GetError()));
}

CreateDistributionTenant2020_05_31Outcome CloudFrontClient::CreateDistributionTenant2020_05_31(
    const CreateDistributionTenant2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDistributionTenant2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateDistributionTenant2020_05_31Outcome(std::move(result.GetError()));
}

CreateDistributionWithTags2020_05_31Outcome CloudFrontClient::CreateDistributionWithTags2020_05_31(
    const CreateDistributionWithTags2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
    ss.str("?WithTags");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDistributionWithTags2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateDistributionWithTags2020_05_31Outcome(std::move(result.GetError()));
}

CreateFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31(
    const CreateFieldLevelEncryptionConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFieldLevelEncryptionConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateFieldLevelEncryptionConfig2020_05_31Outcome(std::move(result.GetError()));
}

CreateFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31(
    const CreateFieldLevelEncryptionProfile2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFieldLevelEncryptionProfile2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateFieldLevelEncryptionProfile2020_05_31Outcome(std::move(result.GetError()));
}

CreateFunction2020_05_31Outcome CloudFrontClient::CreateFunction2020_05_31(const CreateFunction2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateFunction2020_05_31Outcome(std::move(result.GetError()));
}

CreateInvalidation2020_05_31Outcome CloudFrontClient::CreateInvalidation2020_05_31(
    const CreateInvalidation2020_05_31Request& request) const {
  if (!request.DistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateInvalidation2020_05_31", "Required field: DistributionId, is not set");
    return CreateInvalidation2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInvalidation2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateInvalidation2020_05_31Outcome(std::move(result.GetError()));
}

CreateInvalidationForDistributionTenant2020_05_31Outcome CloudFrontClient::CreateInvalidationForDistributionTenant2020_05_31(
    const CreateInvalidationForDistributionTenant2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateInvalidationForDistributionTenant2020_05_31", "Required field: Id, is not set");
    return CreateInvalidationForDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInvalidationForDistributionTenant2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateInvalidationForDistributionTenant2020_05_31Outcome(std::move(result.GetError()));
}

CreateKeyGroup2020_05_31Outcome CloudFrontClient::CreateKeyGroup2020_05_31(const CreateKeyGroup2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateKeyGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateKeyGroup2020_05_31Outcome(std::move(result.GetError()));
}

CreateKeyValueStore2020_05_31Outcome CloudFrontClient::CreateKeyValueStore2020_05_31(
    const CreateKeyValueStore2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-value-store");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateKeyValueStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateKeyValueStore2020_05_31Outcome(std::move(result.GetError()));
}

CreateMonitoringSubscription2020_05_31Outcome CloudFrontClient::CreateMonitoringSubscription2020_05_31(
    const CreateMonitoringSubscription2020_05_31Request& request) const {
  if (!request.DistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return CreateMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitoring-subscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMonitoringSubscription2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateMonitoringSubscription2020_05_31Outcome(std::move(result.GetError()));
}

CreateOriginAccessControl2020_05_31Outcome CloudFrontClient::CreateOriginAccessControl2020_05_31(
    const CreateOriginAccessControl2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOriginAccessControl2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateOriginAccessControl2020_05_31Outcome(std::move(result.GetError()));
}

CreateOriginRequestPolicy2020_05_31Outcome CloudFrontClient::CreateOriginRequestPolicy2020_05_31(
    const CreateOriginRequestPolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOriginRequestPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateOriginRequestPolicy2020_05_31Outcome(std::move(result.GetError()));
}

CreatePublicKey2020_05_31Outcome CloudFrontClient::CreatePublicKey2020_05_31(const CreatePublicKey2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePublicKey2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreatePublicKey2020_05_31Outcome(std::move(result.GetError()));
}

CreateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::CreateRealtimeLogConfig2020_05_31(
    const CreateRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRealtimeLogConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateRealtimeLogConfig2020_05_31Outcome(std::move(result.GetError()));
}

CreateResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::CreateResponseHeadersPolicy2020_05_31(
    const CreateResponseHeadersPolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResponseHeadersPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateResponseHeadersPolicy2020_05_31Outcome(std::move(result.GetError()));
}

CreateStreamingDistribution2020_05_31Outcome CloudFrontClient::CreateStreamingDistribution2020_05_31(
    const CreateStreamingDistribution2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStreamingDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateStreamingDistribution2020_05_31Outcome(std::move(result.GetError()));
}

CreateStreamingDistributionWithTags2020_05_31Outcome CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31(
    const CreateStreamingDistributionWithTags2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
    ss.str("?WithTags");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStreamingDistributionWithTags2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateStreamingDistributionWithTags2020_05_31Outcome(std::move(result.GetError()));
}

CreateTrustStore2020_05_31Outcome CloudFrontClient::CreateTrustStore2020_05_31(const CreateTrustStore2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/trust-store");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrustStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateTrustStore2020_05_31Outcome(std::move(result.GetError()));
}

CreateVpcOrigin2020_05_31Outcome CloudFrontClient::CreateVpcOrigin2020_05_31(const CreateVpcOrigin2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/vpc-origin");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcOrigin2020_05_31Outcome(result.GetResultWithOwnership())
                            : CreateVpcOrigin2020_05_31Outcome(std::move(result.GetError()));
}

DeleteAnycastIpList2020_05_31Outcome CloudFrontClient::DeleteAnycastIpList2020_05_31(
    const DeleteAnycastIpList2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnycastIpList2020_05_31", "Required field: Id, is not set");
    return DeleteAnycastIpList2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnycastIpList2020_05_31", "Required field: IfMatch, is not set");
    return DeleteAnycastIpList2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/anycast-ip-list/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAnycastIpList2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteAnycastIpList2020_05_31Outcome(std::move(result.GetError()));
}

DeleteCachePolicy2020_05_31Outcome CloudFrontClient::DeleteCachePolicy2020_05_31(const DeleteCachePolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCachePolicy2020_05_31", "Required field: Id, is not set");
    return DeleteCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCachePolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteCachePolicy2020_05_31Outcome(std::move(result.GetError()));
}

DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31(
    const DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome(std::move(result.GetError()));
}

DeleteConnectionFunction2020_05_31Outcome CloudFrontClient::DeleteConnectionFunction2020_05_31(
    const DeleteConnectionFunction2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectionFunction2020_05_31", "Required field: Id, is not set");
    return DeleteConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectionFunction2020_05_31", "Required field: IfMatch, is not set");
    return DeleteConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConnectionFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteConnectionFunction2020_05_31Outcome(std::move(result.GetError()));
}

DeleteConnectionGroup2020_05_31Outcome CloudFrontClient::DeleteConnectionGroup2020_05_31(
    const DeleteConnectionGroup2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectionGroup2020_05_31", "Required field: Id, is not set");
    return DeleteConnectionGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectionGroup2020_05_31", "Required field: IfMatch, is not set");
    return DeleteConnectionGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConnectionGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteConnectionGroup2020_05_31Outcome(std::move(result.GetError()));
}

DeleteContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::DeleteContinuousDeploymentPolicy2020_05_31(
    const DeleteContinuousDeploymentPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContinuousDeploymentPolicy2020_05_31", "Required field: Id, is not set");
    return DeleteContinuousDeploymentPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteContinuousDeploymentPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteContinuousDeploymentPolicy2020_05_31Outcome(std::move(result.GetError()));
}

DeleteDistribution2020_05_31Outcome CloudFrontClient::DeleteDistribution2020_05_31(
    const DeleteDistribution2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDistribution2020_05_31", "Required field: Id, is not set");
    return DeleteDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteDistribution2020_05_31Outcome(std::move(result.GetError()));
}

DeleteDistributionTenant2020_05_31Outcome CloudFrontClient::DeleteDistributionTenant2020_05_31(
    const DeleteDistributionTenant2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDistributionTenant2020_05_31", "Required field: Id, is not set");
    return DeleteDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDistributionTenant2020_05_31", "Required field: IfMatch, is not set");
    return DeleteDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDistributionTenant2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteDistributionTenant2020_05_31Outcome(std::move(result.GetError()));
}

DeleteFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31(
    const DeleteFieldLevelEncryptionConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return DeleteFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFieldLevelEncryptionConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteFieldLevelEncryptionConfig2020_05_31Outcome(std::move(result.GetError()));
}

DeleteFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31(
    const DeleteFieldLevelEncryptionProfile2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return DeleteFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFieldLevelEncryptionProfile2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteFieldLevelEncryptionProfile2020_05_31Outcome(std::move(result.GetError()));
}

DeleteFunction2020_05_31Outcome CloudFrontClient::DeleteFunction2020_05_31(const DeleteFunction2020_05_31Request& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunction2020_05_31", "Required field: Name, is not set");
    return DeleteFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFunction2020_05_31", "Required field: IfMatch, is not set");
    return DeleteFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteFunction2020_05_31Outcome(std::move(result.GetError()));
}

DeleteKeyGroup2020_05_31Outcome CloudFrontClient::DeleteKeyGroup2020_05_31(const DeleteKeyGroup2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKeyGroup2020_05_31", "Required field: Id, is not set");
    return DeleteKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteKeyGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteKeyGroup2020_05_31Outcome(std::move(result.GetError()));
}

DeleteKeyValueStore2020_05_31Outcome CloudFrontClient::DeleteKeyValueStore2020_05_31(
    const DeleteKeyValueStore2020_05_31Request& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKeyValueStore2020_05_31", "Required field: Name, is not set");
    return DeleteKeyValueStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKeyValueStore2020_05_31", "Required field: IfMatch, is not set");
    return DeleteKeyValueStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-value-store/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteKeyValueStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteKeyValueStore2020_05_31Outcome(std::move(result.GetError()));
}

DeleteMonitoringSubscription2020_05_31Outcome CloudFrontClient::DeleteMonitoringSubscription2020_05_31(
    const DeleteMonitoringSubscription2020_05_31Request& request) const {
  if (!request.DistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return DeleteMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitoring-subscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMonitoringSubscription2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteMonitoringSubscription2020_05_31Outcome(std::move(result.GetError()));
}

DeleteOriginAccessControl2020_05_31Outcome CloudFrontClient::DeleteOriginAccessControl2020_05_31(
    const DeleteOriginAccessControl2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginAccessControl2020_05_31", "Required field: Id, is not set");
    return DeleteOriginAccessControl2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOriginAccessControl2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteOriginAccessControl2020_05_31Outcome(std::move(result.GetError()));
}

DeleteOriginRequestPolicy2020_05_31Outcome CloudFrontClient::DeleteOriginRequestPolicy2020_05_31(
    const DeleteOriginRequestPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return DeleteOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOriginRequestPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteOriginRequestPolicy2020_05_31Outcome(std::move(result.GetError()));
}

DeletePublicKey2020_05_31Outcome CloudFrontClient::DeletePublicKey2020_05_31(const DeletePublicKey2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePublicKey2020_05_31", "Required field: Id, is not set");
    return DeletePublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePublicKey2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeletePublicKey2020_05_31Outcome(std::move(result.GetError()));
}

DeleteRealtimeLogConfig2020_05_31Outcome CloudFrontClient::DeleteRealtimeLogConfig2020_05_31(
    const DeleteRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/delete-realtime-log-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRealtimeLogConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteRealtimeLogConfig2020_05_31Outcome(std::move(result.GetError()));
}

DeleteResourcePolicy2020_05_31Outcome CloudFrontClient::DeleteResourcePolicy2020_05_31(
    const DeleteResourcePolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/delete-resource-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicy2020_05_31Outcome(std::move(result.GetError()));
}

DeleteResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31(
    const DeleteResponseHeadersPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return DeleteResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteResponseHeadersPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteResponseHeadersPolicy2020_05_31Outcome(std::move(result.GetError()));
}

DeleteStreamingDistribution2020_05_31Outcome CloudFrontClient::DeleteStreamingDistribution2020_05_31(
    const DeleteStreamingDistribution2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return DeleteStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteStreamingDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteStreamingDistribution2020_05_31Outcome(std::move(result.GetError()));
}

DeleteTrustStore2020_05_31Outcome CloudFrontClient::DeleteTrustStore2020_05_31(const DeleteTrustStore2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrustStore2020_05_31", "Required field: Id, is not set");
    return DeleteTrustStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrustStore2020_05_31", "Required field: IfMatch, is not set");
    return DeleteTrustStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/trust-store/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTrustStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteTrustStore2020_05_31Outcome(std::move(result.GetError()));
}

DeleteVpcOrigin2020_05_31Outcome CloudFrontClient::DeleteVpcOrigin2020_05_31(const DeleteVpcOrigin2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVpcOrigin2020_05_31", "Required field: Id, is not set");
    return DeleteVpcOrigin2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVpcOrigin2020_05_31", "Required field: IfMatch, is not set");
    return DeleteVpcOrigin2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/vpc-origin/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteVpcOrigin2020_05_31Outcome(result.GetResultWithOwnership())
                            : DeleteVpcOrigin2020_05_31Outcome(std::move(result.GetError()));
}

DescribeConnectionFunction2020_05_31Outcome CloudFrontClient::DescribeConnectionFunction2020_05_31(
    const DescribeConnectionFunction2020_05_31Request& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConnectionFunction2020_05_31", "Required field: Identifier, is not set");
    return DescribeConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeConnectionFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : DescribeConnectionFunction2020_05_31Outcome(std::move(result.GetError()));
}

DescribeFunction2020_05_31Outcome CloudFrontClient::DescribeFunction2020_05_31(const DescribeFunction2020_05_31Request& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFunction2020_05_31", "Required field: Name, is not set");
    return DescribeFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : DescribeFunction2020_05_31Outcome(std::move(result.GetError()));
}

DescribeKeyValueStore2020_05_31Outcome CloudFrontClient::DescribeKeyValueStore2020_05_31(
    const DescribeKeyValueStore2020_05_31Request& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeKeyValueStore2020_05_31", "Required field: Name, is not set");
    return DescribeKeyValueStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-value-store/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeKeyValueStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : DescribeKeyValueStore2020_05_31Outcome(std::move(result.GetError()));
}

DisassociateDistributionTenantWebACL2020_05_31Outcome CloudFrontClient::DisassociateDistributionTenantWebACL2020_05_31(
    const DisassociateDistributionTenantWebACL2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateDistributionTenantWebACL2020_05_31", "Required field: Id, is not set");
    return DisassociateDistributionTenantWebACL2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-web-acl");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? DisassociateDistributionTenantWebACL2020_05_31Outcome(result.GetResultWithOwnership())
                            : DisassociateDistributionTenantWebACL2020_05_31Outcome(std::move(result.GetError()));
}

DisassociateDistributionWebACL2020_05_31Outcome CloudFrontClient::DisassociateDistributionWebACL2020_05_31(
    const DisassociateDistributionWebACL2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateDistributionWebACL2020_05_31", "Required field: Id, is not set");
    return DisassociateDistributionWebACL2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-web-acl");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? DisassociateDistributionWebACL2020_05_31Outcome(result.GetResultWithOwnership())
                            : DisassociateDistributionWebACL2020_05_31Outcome(std::move(result.GetError()));
}

GetAnycastIpList2020_05_31Outcome CloudFrontClient::GetAnycastIpList2020_05_31(const GetAnycastIpList2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnycastIpList2020_05_31", "Required field: Id, is not set");
    return GetAnycastIpList2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/anycast-ip-list/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAnycastIpList2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetAnycastIpList2020_05_31Outcome(std::move(result.GetError()));
}

GetCachePolicy2020_05_31Outcome CloudFrontClient::GetCachePolicy2020_05_31(const GetCachePolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCachePolicy2020_05_31", "Required field: Id, is not set");
    return GetCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCachePolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetCachePolicy2020_05_31Outcome(std::move(result.GetError()));
}

GetCachePolicyConfig2020_05_31Outcome CloudFrontClient::GetCachePolicyConfig2020_05_31(
    const GetCachePolicyConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCachePolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetCachePolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCachePolicyConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetCachePolicyConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31(
    const GetCloudFrontOriginAccessIdentity2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return GetCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCloudFrontOriginAccessIdentity2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetCloudFrontOriginAccessIdentity2020_05_31Outcome(std::move(result.GetError()));
}

GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31(
    const GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCloudFrontOriginAccessIdentityConfig2020_05_31", "Required field: Id, is not set");
    return GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetConnectionFunction2020_05_31Outcome CloudFrontClient::GetConnectionFunction2020_05_31(
    const GetConnectionFunction2020_05_31Request& request) const {
  AWS_OPERATION_GUARD(GetConnectionFunction2020_05_31);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnectionFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectionFunction2020_05_31", "Required field: Identifier, is not set");
    return GetConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetConnectionFunction2020_05_31, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConnectionFunction2020_05_31, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConnectionFunction2020_05_31Outcome>(
      [&]() -> GetConnectionFunction2020_05_31Outcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConnectionFunction2020_05_31, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-function/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetConnectionFunction2020_05_31Outcome(result.GetResultWithOwnership())
                                  : GetConnectionFunction2020_05_31Outcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConnectionGroup2020_05_31Outcome CloudFrontClient::GetConnectionGroup2020_05_31(
    const GetConnectionGroup2020_05_31Request& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectionGroup2020_05_31", "Required field: Identifier, is not set");
    return GetConnectionGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConnectionGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetConnectionGroup2020_05_31Outcome(std::move(result.GetError()));
}

GetConnectionGroupByRoutingEndpoint2020_05_31Outcome CloudFrontClient::GetConnectionGroupByRoutingEndpoint2020_05_31(
    const GetConnectionGroupByRoutingEndpoint2020_05_31Request& request) const {
  if (!request.RoutingEndpointHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectionGroupByRoutingEndpoint2020_05_31", "Required field: RoutingEndpoint, is not set");
    return GetConnectionGroupByRoutingEndpoint2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingEndpoint]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-group");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConnectionGroupByRoutingEndpoint2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetConnectionGroupByRoutingEndpoint2020_05_31Outcome(std::move(result.GetError()));
}

GetContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::GetContinuousDeploymentPolicy2020_05_31(
    const GetContinuousDeploymentPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContinuousDeploymentPolicy2020_05_31", "Required field: Id, is not set");
    return GetContinuousDeploymentPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetContinuousDeploymentPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetContinuousDeploymentPolicy2020_05_31Outcome(std::move(result.GetError()));
}

GetContinuousDeploymentPolicyConfig2020_05_31Outcome CloudFrontClient::GetContinuousDeploymentPolicyConfig2020_05_31(
    const GetContinuousDeploymentPolicyConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContinuousDeploymentPolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetContinuousDeploymentPolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetContinuousDeploymentPolicyConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetContinuousDeploymentPolicyConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetDistribution2020_05_31Outcome CloudFrontClient::GetDistribution2020_05_31(const GetDistribution2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDistribution2020_05_31", "Required field: Id, is not set");
    return GetDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetDistribution2020_05_31Outcome(std::move(result.GetError()));
}

GetDistributionConfig2020_05_31Outcome CloudFrontClient::GetDistributionConfig2020_05_31(
    const GetDistributionConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDistributionConfig2020_05_31", "Required field: Id, is not set");
    return GetDistributionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDistributionConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetDistributionConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetDistributionTenant2020_05_31Outcome CloudFrontClient::GetDistributionTenant2020_05_31(
    const GetDistributionTenant2020_05_31Request& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDistributionTenant2020_05_31", "Required field: Identifier, is not set");
    return GetDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDistributionTenant2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetDistributionTenant2020_05_31Outcome(std::move(result.GetError()));
}

GetDistributionTenantByDomain2020_05_31Outcome CloudFrontClient::GetDistributionTenantByDomain2020_05_31(
    const GetDistributionTenantByDomain2020_05_31Request& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDistributionTenantByDomain2020_05_31", "Required field: Domain, is not set");
    return GetDistributionTenantByDomain2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDistributionTenantByDomain2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetDistributionTenantByDomain2020_05_31Outcome(std::move(result.GetError()));
}

GetFieldLevelEncryption2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryption2020_05_31(
    const GetFieldLevelEncryption2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryption2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryption2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFieldLevelEncryption2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetFieldLevelEncryption2020_05_31Outcome(std::move(result.GetError()));
}

GetFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31(
    const GetFieldLevelEncryptionConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFieldLevelEncryptionConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetFieldLevelEncryptionConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31(
    const GetFieldLevelEncryptionProfile2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFieldLevelEncryptionProfile2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetFieldLevelEncryptionProfile2020_05_31Outcome(std::move(result.GetError()));
}

GetFieldLevelEncryptionProfileConfig2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31(
    const GetFieldLevelEncryptionProfileConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionProfileConfig2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionProfileConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFieldLevelEncryptionProfileConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetFieldLevelEncryptionProfileConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetFunction2020_05_31Outcome CloudFrontClient::GetFunction2020_05_31(const GetFunction2020_05_31Request& request) const {
  AWS_OPERATION_GUARD(GetFunction2020_05_31);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFunction2020_05_31", "Required field: Name, is not set");
    return GetFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetFunction2020_05_31, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFunction2020_05_31, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFunction2020_05_31Outcome>(
      [&]() -> GetFunction2020_05_31Outcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetFunction2020_05_31Outcome(result.GetResultWithOwnership())
                                  : GetFunction2020_05_31Outcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInvalidation2020_05_31Outcome CloudFrontClient::GetInvalidation2020_05_31(const GetInvalidation2020_05_31Request& request) const {
  if (!request.DistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInvalidation2020_05_31", "Required field: DistributionId, is not set");
    return GetInvalidation2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInvalidation2020_05_31", "Required field: Id, is not set");
    return GetInvalidation2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInvalidation2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetInvalidation2020_05_31Outcome(std::move(result.GetError()));
}

GetInvalidationForDistributionTenant2020_05_31Outcome CloudFrontClient::GetInvalidationForDistributionTenant2020_05_31(
    const GetInvalidationForDistributionTenant2020_05_31Request& request) const {
  if (!request.DistributionTenantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInvalidationForDistributionTenant2020_05_31", "Required field: DistributionTenantId, is not set");
    return GetInvalidationForDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionTenantId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInvalidationForDistributionTenant2020_05_31", "Required field: Id, is not set");
    return GetInvalidationForDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionTenantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInvalidationForDistributionTenant2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetInvalidationForDistributionTenant2020_05_31Outcome(std::move(result.GetError()));
}

GetKeyGroup2020_05_31Outcome CloudFrontClient::GetKeyGroup2020_05_31(const GetKeyGroup2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKeyGroup2020_05_31", "Required field: Id, is not set");
    return GetKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetKeyGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetKeyGroup2020_05_31Outcome(std::move(result.GetError()));
}

GetKeyGroupConfig2020_05_31Outcome CloudFrontClient::GetKeyGroupConfig2020_05_31(const GetKeyGroupConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKeyGroupConfig2020_05_31", "Required field: Id, is not set");
    return GetKeyGroupConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetKeyGroupConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetKeyGroupConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetManagedCertificateDetails2020_05_31Outcome CloudFrontClient::GetManagedCertificateDetails2020_05_31(
    const GetManagedCertificateDetails2020_05_31Request& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedCertificateDetails2020_05_31", "Required field: Identifier, is not set");
    return GetManagedCertificateDetails2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/managed-certificate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetManagedCertificateDetails2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetManagedCertificateDetails2020_05_31Outcome(std::move(result.GetError()));
}

GetMonitoringSubscription2020_05_31Outcome CloudFrontClient::GetMonitoringSubscription2020_05_31(
    const GetMonitoringSubscription2020_05_31Request& request) const {
  if (!request.DistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return GetMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitoring-subscription");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMonitoringSubscription2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetMonitoringSubscription2020_05_31Outcome(std::move(result.GetError()));
}

GetOriginAccessControl2020_05_31Outcome CloudFrontClient::GetOriginAccessControl2020_05_31(
    const GetOriginAccessControl2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginAccessControl2020_05_31", "Required field: Id, is not set");
    return GetOriginAccessControl2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOriginAccessControl2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetOriginAccessControl2020_05_31Outcome(std::move(result.GetError()));
}

GetOriginAccessControlConfig2020_05_31Outcome CloudFrontClient::GetOriginAccessControlConfig2020_05_31(
    const GetOriginAccessControlConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginAccessControlConfig2020_05_31", "Required field: Id, is not set");
    return GetOriginAccessControlConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOriginAccessControlConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetOriginAccessControlConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetOriginRequestPolicy2020_05_31Outcome CloudFrontClient::GetOriginRequestPolicy2020_05_31(
    const GetOriginRequestPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return GetOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOriginRequestPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetOriginRequestPolicy2020_05_31Outcome(std::move(result.GetError()));
}

GetOriginRequestPolicyConfig2020_05_31Outcome CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31(
    const GetOriginRequestPolicyConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginRequestPolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetOriginRequestPolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOriginRequestPolicyConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetOriginRequestPolicyConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetPublicKey2020_05_31Outcome CloudFrontClient::GetPublicKey2020_05_31(const GetPublicKey2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPublicKey2020_05_31", "Required field: Id, is not set");
    return GetPublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPublicKey2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetPublicKey2020_05_31Outcome(std::move(result.GetError()));
}

GetPublicKeyConfig2020_05_31Outcome CloudFrontClient::GetPublicKeyConfig2020_05_31(
    const GetPublicKeyConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPublicKeyConfig2020_05_31", "Required field: Id, is not set");
    return GetPublicKeyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPublicKeyConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetPublicKeyConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetRealtimeLogConfig2020_05_31Outcome CloudFrontClient::GetRealtimeLogConfig2020_05_31(
    const GetRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/get-realtime-log-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRealtimeLogConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetRealtimeLogConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetResourcePolicy2020_05_31Outcome CloudFrontClient::GetResourcePolicy2020_05_31(const GetResourcePolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/get-resource-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetResourcePolicy2020_05_31Outcome(std::move(result.GetError()));
}

GetResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::GetResponseHeadersPolicy2020_05_31(
    const GetResponseHeadersPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return GetResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResponseHeadersPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetResponseHeadersPolicy2020_05_31Outcome(std::move(result.GetError()));
}

GetResponseHeadersPolicyConfig2020_05_31Outcome CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31(
    const GetResponseHeadersPolicyConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResponseHeadersPolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetResponseHeadersPolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResponseHeadersPolicyConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetResponseHeadersPolicyConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetStreamingDistribution2020_05_31Outcome CloudFrontClient::GetStreamingDistribution2020_05_31(
    const GetStreamingDistribution2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return GetStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetStreamingDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetStreamingDistribution2020_05_31Outcome(std::move(result.GetError()));
}

GetStreamingDistributionConfig2020_05_31Outcome CloudFrontClient::GetStreamingDistributionConfig2020_05_31(
    const GetStreamingDistributionConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStreamingDistributionConfig2020_05_31", "Required field: Id, is not set");
    return GetStreamingDistributionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetStreamingDistributionConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetStreamingDistributionConfig2020_05_31Outcome(std::move(result.GetError()));
}

GetTrustStore2020_05_31Outcome CloudFrontClient::GetTrustStore2020_05_31(const GetTrustStore2020_05_31Request& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrustStore2020_05_31", "Required field: Identifier, is not set");
    return GetTrustStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/trust-store/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTrustStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetTrustStore2020_05_31Outcome(std::move(result.GetError()));
}

GetVpcOrigin2020_05_31Outcome CloudFrontClient::GetVpcOrigin2020_05_31(const GetVpcOrigin2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVpcOrigin2020_05_31", "Required field: Id, is not set");
    return GetVpcOrigin2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/vpc-origin/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetVpcOrigin2020_05_31Outcome(result.GetResultWithOwnership())
                            : GetVpcOrigin2020_05_31Outcome(std::move(result.GetError()));
}

ListAnycastIpLists2020_05_31Outcome CloudFrontClient::ListAnycastIpLists2020_05_31(
    const ListAnycastIpLists2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/anycast-ip-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAnycastIpLists2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListAnycastIpLists2020_05_31Outcome(std::move(result.GetError()));
}

ListCachePolicies2020_05_31Outcome CloudFrontClient::ListCachePolicies2020_05_31(const ListCachePolicies2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCachePolicies2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListCachePolicies2020_05_31Outcome(std::move(result.GetError()));
}

ListCloudFrontOriginAccessIdentities2020_05_31Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31(
    const ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCloudFrontOriginAccessIdentities2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListCloudFrontOriginAccessIdentities2020_05_31Outcome(std::move(result.GetError()));
}

ListConflictingAliases2020_05_31Outcome CloudFrontClient::ListConflictingAliases2020_05_31(
    const ListConflictingAliases2020_05_31Request& request) const {
  if (!request.DistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConflictingAliases2020_05_31", "Required field: DistributionId, is not set");
    return ListConflictingAliases2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  if (!request.AliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConflictingAliases2020_05_31", "Required field: Alias, is not set");
    return ListConflictingAliases2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Alias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/conflicting-alias");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConflictingAliases2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListConflictingAliases2020_05_31Outcome(std::move(result.GetError()));
}

ListConnectionFunctions2020_05_31Outcome CloudFrontClient::ListConnectionFunctions2020_05_31(
    const ListConnectionFunctions2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-functions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectionFunctions2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListConnectionFunctions2020_05_31Outcome(std::move(result.GetError()));
}

ListConnectionGroups2020_05_31Outcome CloudFrontClient::ListConnectionGroups2020_05_31(
    const ListConnectionGroups2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectionGroups2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListConnectionGroups2020_05_31Outcome(std::move(result.GetError()));
}

ListContinuousDeploymentPolicies2020_05_31Outcome CloudFrontClient::ListContinuousDeploymentPolicies2020_05_31(
    const ListContinuousDeploymentPolicies2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListContinuousDeploymentPolicies2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListContinuousDeploymentPolicies2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionTenants2020_05_31Outcome CloudFrontClient::ListDistributionTenants2020_05_31(
    const ListDistributionTenants2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDistributionTenants2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionTenants2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionTenantsByCustomization2020_05_31Outcome CloudFrontClient::ListDistributionTenantsByCustomization2020_05_31(
    const ListDistributionTenantsByCustomization2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenants-by-customization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDistributionTenantsByCustomization2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionTenantsByCustomization2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributions2020_05_31Outcome CloudFrontClient::ListDistributions2020_05_31(const ListDistributions2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributions2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributions2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByAnycastIpListId2020_05_31Outcome CloudFrontClient::ListDistributionsByAnycastIpListId2020_05_31(
    const ListDistributionsByAnycastIpListId2020_05_31Request& request) const {
  if (!request.AnycastIpListIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByAnycastIpListId2020_05_31", "Required field: AnycastIpListId, is not set");
    return ListDistributionsByAnycastIpListId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnycastIpListId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByAnycastIpListId/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnycastIpListId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByAnycastIpListId2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByAnycastIpListId2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByCachePolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31(
    const ListDistributionsByCachePolicyId2020_05_31Request& request) const {
  if (!request.CachePolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByCachePolicyId2020_05_31", "Required field: CachePolicyId, is not set");
    return ListDistributionsByCachePolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CachePolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByCachePolicyId/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCachePolicyId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByCachePolicyId2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByCachePolicyId2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByConnectionFunction2020_05_31Outcome CloudFrontClient::ListDistributionsByConnectionFunction2020_05_31(
    const ListDistributionsByConnectionFunction2020_05_31Request& request) const {
  if (!request.ConnectionFunctionIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByConnectionFunction2020_05_31", "Required field: ConnectionFunctionIdentifier, is not set");
    return ListDistributionsByConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionFunctionIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByConnectionFunction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByConnectionFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByConnectionFunction2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByConnectionMode2020_05_31Outcome CloudFrontClient::ListDistributionsByConnectionMode2020_05_31(
    const ListDistributionsByConnectionMode2020_05_31Request& request) const {
  if (!request.ConnectionModeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByConnectionMode2020_05_31", "Required field: ConnectionMode, is not set");
    return ListDistributionsByConnectionMode2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionMode]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByConnectionMode/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ConnectionModeMapper::GetNameForConnectionMode(request.GetConnectionMode()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByConnectionMode2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByConnectionMode2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByKeyGroup2020_05_31Outcome CloudFrontClient::ListDistributionsByKeyGroup2020_05_31(
    const ListDistributionsByKeyGroup2020_05_31Request& request) const {
  if (!request.KeyGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByKeyGroup2020_05_31", "Required field: KeyGroupId, is not set");
    return ListDistributionsByKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByKeyGroupId/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyGroupId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByKeyGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByKeyGroup2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByOriginRequestPolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31(
    const ListDistributionsByOriginRequestPolicyId2020_05_31Request& request) const {
  if (!request.OriginRequestPolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByOriginRequestPolicyId2020_05_31", "Required field: OriginRequestPolicyId, is not set");
    return ListDistributionsByOriginRequestPolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginRequestPolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByOriginRequestPolicyId/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginRequestPolicyId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByOriginRequestPolicyId2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByOriginRequestPolicyId2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByOwnedResource2020_05_31Outcome CloudFrontClient::ListDistributionsByOwnedResource2020_05_31(
    const ListDistributionsByOwnedResource2020_05_31Request& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByOwnedResource2020_05_31", "Required field: ResourceArn, is not set");
    return ListDistributionsByOwnedResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByOwnedResource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByOwnedResource2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByOwnedResource2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByRealtimeLogConfig2020_05_31Outcome CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31(
    const ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByRealtimeLogConfig");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDistributionsByRealtimeLogConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByRealtimeLogConfig2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31(
    const ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request) const {
  if (!request.ResponseHeadersPolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByResponseHeadersPolicyId2020_05_31", "Required field: ResponseHeadersPolicyId, is not set");
    return ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseHeadersPolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByResponseHeadersPolicyId/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResponseHeadersPolicyId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByTrustStore2020_05_31Outcome CloudFrontClient::ListDistributionsByTrustStore2020_05_31(
    const ListDistributionsByTrustStore2020_05_31Request& request) const {
  if (!request.TrustStoreIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByTrustStore2020_05_31", "Required field: TrustStoreIdentifier, is not set");
    return ListDistributionsByTrustStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByTrustStore");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByTrustStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByTrustStore2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByVpcOriginId2020_05_31Outcome CloudFrontClient::ListDistributionsByVpcOriginId2020_05_31(
    const ListDistributionsByVpcOriginId2020_05_31Request& request) const {
  if (!request.VpcOriginIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByVpcOriginId2020_05_31", "Required field: VpcOriginId, is not set");
    return ListDistributionsByVpcOriginId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcOriginId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByVpcOriginId/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcOriginId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByVpcOriginId2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByVpcOriginId2020_05_31Outcome(std::move(result.GetError()));
}

ListDistributionsByWebACLId2020_05_31Outcome CloudFrontClient::ListDistributionsByWebACLId2020_05_31(
    const ListDistributionsByWebACLId2020_05_31Request& request) const {
  if (!request.WebACLIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDistributionsByWebACLId2020_05_31", "Required field: WebACLId, is not set");
    return ListDistributionsByWebACLId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebACLId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByWebACLId/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebACLId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDistributionsByWebACLId2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDistributionsByWebACLId2020_05_31Outcome(std::move(result.GetError()));
}

ListDomainConflicts2020_05_31Outcome CloudFrontClient::ListDomainConflicts2020_05_31(
    const ListDomainConflicts2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/domain-conflicts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDomainConflicts2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListDomainConflicts2020_05_31Outcome(std::move(result.GetError()));
}

ListFieldLevelEncryptionConfigs2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31(
    const ListFieldLevelEncryptionConfigs2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFieldLevelEncryptionConfigs2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListFieldLevelEncryptionConfigs2020_05_31Outcome(std::move(result.GetError()));
}

ListFieldLevelEncryptionProfiles2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31(
    const ListFieldLevelEncryptionProfiles2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFieldLevelEncryptionProfiles2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListFieldLevelEncryptionProfiles2020_05_31Outcome(std::move(result.GetError()));
}

ListFunctions2020_05_31Outcome CloudFrontClient::ListFunctions2020_05_31(const ListFunctions2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFunctions2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListFunctions2020_05_31Outcome(std::move(result.GetError()));
}

ListInvalidations2020_05_31Outcome CloudFrontClient::ListInvalidations2020_05_31(const ListInvalidations2020_05_31Request& request) const {
  if (!request.DistributionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInvalidations2020_05_31", "Required field: DistributionId, is not set");
    return ListInvalidations2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInvalidations2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListInvalidations2020_05_31Outcome(std::move(result.GetError()));
}

ListInvalidationsForDistributionTenant2020_05_31Outcome CloudFrontClient::ListInvalidationsForDistributionTenant2020_05_31(
    const ListInvalidationsForDistributionTenant2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInvalidationsForDistributionTenant2020_05_31", "Required field: Id, is not set");
    return ListInvalidationsForDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInvalidationsForDistributionTenant2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListInvalidationsForDistributionTenant2020_05_31Outcome(std::move(result.GetError()));
}

ListKeyGroups2020_05_31Outcome CloudFrontClient::ListKeyGroups2020_05_31(const ListKeyGroups2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListKeyGroups2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListKeyGroups2020_05_31Outcome(std::move(result.GetError()));
}

ListKeyValueStores2020_05_31Outcome CloudFrontClient::ListKeyValueStores2020_05_31(
    const ListKeyValueStores2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-value-store");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListKeyValueStores2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListKeyValueStores2020_05_31Outcome(std::move(result.GetError()));
}

ListOriginAccessControls2020_05_31Outcome CloudFrontClient::ListOriginAccessControls2020_05_31(
    const ListOriginAccessControls2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOriginAccessControls2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListOriginAccessControls2020_05_31Outcome(std::move(result.GetError()));
}

ListOriginRequestPolicies2020_05_31Outcome CloudFrontClient::ListOriginRequestPolicies2020_05_31(
    const ListOriginRequestPolicies2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOriginRequestPolicies2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListOriginRequestPolicies2020_05_31Outcome(std::move(result.GetError()));
}

ListPublicKeys2020_05_31Outcome CloudFrontClient::ListPublicKeys2020_05_31(const ListPublicKeys2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPublicKeys2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListPublicKeys2020_05_31Outcome(std::move(result.GetError()));
}

ListRealtimeLogConfigs2020_05_31Outcome CloudFrontClient::ListRealtimeLogConfigs2020_05_31(
    const ListRealtimeLogConfigs2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRealtimeLogConfigs2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListRealtimeLogConfigs2020_05_31Outcome(std::move(result.GetError()));
}

ListResponseHeadersPolicies2020_05_31Outcome CloudFrontClient::ListResponseHeadersPolicies2020_05_31(
    const ListResponseHeadersPolicies2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListResponseHeadersPolicies2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListResponseHeadersPolicies2020_05_31Outcome(std::move(result.GetError()));
}

ListStreamingDistributions2020_05_31Outcome CloudFrontClient::ListStreamingDistributions2020_05_31(
    const ListStreamingDistributions2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStreamingDistributions2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListStreamingDistributions2020_05_31Outcome(std::move(result.GetError()));
}

ListTagsForResource2020_05_31Outcome CloudFrontClient::ListTagsForResource2020_05_31(
    const ListTagsForResource2020_05_31Request& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource2020_05_31", "Required field: Resource, is not set");
    return ListTagsForResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/tagging");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResource2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListTagsForResource2020_05_31Outcome(std::move(result.GetError()));
}

ListTrustStores2020_05_31Outcome CloudFrontClient::ListTrustStores2020_05_31(const ListTrustStores2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/trust-stores");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTrustStores2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListTrustStores2020_05_31Outcome(std::move(result.GetError()));
}

ListVpcOrigins2020_05_31Outcome CloudFrontClient::ListVpcOrigins2020_05_31(const ListVpcOrigins2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/vpc-origin");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVpcOrigins2020_05_31Outcome(result.GetResultWithOwnership())
                            : ListVpcOrigins2020_05_31Outcome(std::move(result.GetError()));
}

PublishConnectionFunction2020_05_31Outcome CloudFrontClient::PublishConnectionFunction2020_05_31(
    const PublishConnectionFunction2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishConnectionFunction2020_05_31", "Required field: Id, is not set");
    return PublishConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishConnectionFunction2020_05_31", "Required field: IfMatch, is not set");
    return PublishConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publish");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PublishConnectionFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : PublishConnectionFunction2020_05_31Outcome(std::move(result.GetError()));
}

PublishFunction2020_05_31Outcome CloudFrontClient::PublishFunction2020_05_31(const PublishFunction2020_05_31Request& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishFunction2020_05_31", "Required field: Name, is not set");
    return PublishFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishFunction2020_05_31", "Required field: IfMatch, is not set");
    return PublishFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publish");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PublishFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : PublishFunction2020_05_31Outcome(std::move(result.GetError()));
}

PutResourcePolicy2020_05_31Outcome CloudFrontClient::PutResourcePolicy2020_05_31(const PutResourcePolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/put-resource-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : PutResourcePolicy2020_05_31Outcome(std::move(result.GetError()));
}

TagResource2020_05_31Outcome CloudFrontClient::TagResource2020_05_31(const TagResource2020_05_31Request& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource2020_05_31", "Required field: Resource, is not set");
    return TagResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/tagging");
    ss.str("?Operation=Tag");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResource2020_05_31Outcome(result.GetResultWithOwnership())
                            : TagResource2020_05_31Outcome(std::move(result.GetError()));
}

TestConnectionFunction2020_05_31Outcome CloudFrontClient::TestConnectionFunction2020_05_31(
    const TestConnectionFunction2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestConnectionFunction2020_05_31", "Required field: Id, is not set");
    return TestConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestConnectionFunction2020_05_31", "Required field: IfMatch, is not set");
    return TestConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/test");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestConnectionFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : TestConnectionFunction2020_05_31Outcome(std::move(result.GetError()));
}

TestFunction2020_05_31Outcome CloudFrontClient::TestFunction2020_05_31(const TestFunction2020_05_31Request& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestFunction2020_05_31", "Required field: Name, is not set");
    return TestFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestFunction2020_05_31", "Required field: IfMatch, is not set");
    return TestFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/test");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : TestFunction2020_05_31Outcome(std::move(result.GetError()));
}

UntagResource2020_05_31Outcome CloudFrontClient::UntagResource2020_05_31(const UntagResource2020_05_31Request& request) const {
  if (!request.ResourceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource2020_05_31", "Required field: Resource, is not set");
    return UntagResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Resource]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/tagging");
    ss.str("?Operation=Untag");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResource2020_05_31Outcome(result.GetResultWithOwnership())
                            : UntagResource2020_05_31Outcome(std::move(result.GetError()));
}

UpdateAnycastIpList2020_05_31Outcome CloudFrontClient::UpdateAnycastIpList2020_05_31(
    const UpdateAnycastIpList2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnycastIpList2020_05_31", "Required field: Id, is not set");
    return UpdateAnycastIpList2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnycastIpList2020_05_31", "Required field: IfMatch, is not set");
    return UpdateAnycastIpList2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/anycast-ip-list/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAnycastIpList2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateAnycastIpList2020_05_31Outcome(std::move(result.GetError()));
}

UpdateCachePolicy2020_05_31Outcome CloudFrontClient::UpdateCachePolicy2020_05_31(const UpdateCachePolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCachePolicy2020_05_31", "Required field: Id, is not set");
    return UpdateCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCachePolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateCachePolicy2020_05_31Outcome(std::move(result.GetError()));
}

UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31(
    const UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome(std::move(result.GetError()));
}

UpdateConnectionFunction2020_05_31Outcome CloudFrontClient::UpdateConnectionFunction2020_05_31(
    const UpdateConnectionFunction2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectionFunction2020_05_31", "Required field: Id, is not set");
    return UpdateConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectionFunction2020_05_31", "Required field: IfMatch, is not set");
    return UpdateConnectionFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateConnectionFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateConnectionFunction2020_05_31Outcome(std::move(result.GetError()));
}

UpdateConnectionGroup2020_05_31Outcome CloudFrontClient::UpdateConnectionGroup2020_05_31(
    const UpdateConnectionGroup2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectionGroup2020_05_31", "Required field: Id, is not set");
    return UpdateConnectionGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectionGroup2020_05_31", "Required field: IfMatch, is not set");
    return UpdateConnectionGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateConnectionGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateConnectionGroup2020_05_31Outcome(std::move(result.GetError()));
}

UpdateContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::UpdateContinuousDeploymentPolicy2020_05_31(
    const UpdateContinuousDeploymentPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContinuousDeploymentPolicy2020_05_31", "Required field: Id, is not set");
    return UpdateContinuousDeploymentPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateContinuousDeploymentPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateContinuousDeploymentPolicy2020_05_31Outcome(std::move(result.GetError()));
}

UpdateDistribution2020_05_31Outcome CloudFrontClient::UpdateDistribution2020_05_31(
    const UpdateDistribution2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDistribution2020_05_31", "Required field: Id, is not set");
    return UpdateDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateDistribution2020_05_31Outcome(std::move(result.GetError()));
}

UpdateDistributionTenant2020_05_31Outcome CloudFrontClient::UpdateDistributionTenant2020_05_31(
    const UpdateDistributionTenant2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDistributionTenant2020_05_31", "Required field: Id, is not set");
    return UpdateDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDistributionTenant2020_05_31", "Required field: IfMatch, is not set");
    return UpdateDistributionTenant2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDistributionTenant2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateDistributionTenant2020_05_31Outcome(std::move(result.GetError()));
}

UpdateDistributionWithStagingConfig2020_05_31Outcome CloudFrontClient::UpdateDistributionWithStagingConfig2020_05_31(
    const UpdateDistributionWithStagingConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDistributionWithStagingConfig2020_05_31", "Required field: Id, is not set");
    return UpdateDistributionWithStagingConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/promote-staging-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDistributionWithStagingConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateDistributionWithStagingConfig2020_05_31Outcome(std::move(result.GetError()));
}

UpdateDomainAssociation2020_05_31Outcome CloudFrontClient::UpdateDomainAssociation2020_05_31(
    const UpdateDomainAssociation2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/domain-association");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDomainAssociation2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateDomainAssociation2020_05_31Outcome(std::move(result.GetError()));
}

UpdateFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31(
    const UpdateFieldLevelEncryptionConfig2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return UpdateFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFieldLevelEncryptionConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateFieldLevelEncryptionConfig2020_05_31Outcome(std::move(result.GetError()));
}

UpdateFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31(
    const UpdateFieldLevelEncryptionProfile2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return UpdateFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFieldLevelEncryptionProfile2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateFieldLevelEncryptionProfile2020_05_31Outcome(std::move(result.GetError()));
}

UpdateFunction2020_05_31Outcome CloudFrontClient::UpdateFunction2020_05_31(const UpdateFunction2020_05_31Request& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunction2020_05_31", "Required field: Name, is not set");
    return UpdateFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFunction2020_05_31", "Required field: IfMatch, is not set");
    return UpdateFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFunction2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateFunction2020_05_31Outcome(std::move(result.GetError()));
}

UpdateKeyGroup2020_05_31Outcome CloudFrontClient::UpdateKeyGroup2020_05_31(const UpdateKeyGroup2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKeyGroup2020_05_31", "Required field: Id, is not set");
    return UpdateKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateKeyGroup2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateKeyGroup2020_05_31Outcome(std::move(result.GetError()));
}

UpdateKeyValueStore2020_05_31Outcome CloudFrontClient::UpdateKeyValueStore2020_05_31(
    const UpdateKeyValueStore2020_05_31Request& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKeyValueStore2020_05_31", "Required field: Name, is not set");
    return UpdateKeyValueStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKeyValueStore2020_05_31", "Required field: IfMatch, is not set");
    return UpdateKeyValueStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-value-store/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateKeyValueStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateKeyValueStore2020_05_31Outcome(std::move(result.GetError()));
}

UpdateOriginAccessControl2020_05_31Outcome CloudFrontClient::UpdateOriginAccessControl2020_05_31(
    const UpdateOriginAccessControl2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOriginAccessControl2020_05_31", "Required field: Id, is not set");
    return UpdateOriginAccessControl2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateOriginAccessControl2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateOriginAccessControl2020_05_31Outcome(std::move(result.GetError()));
}

UpdateOriginRequestPolicy2020_05_31Outcome CloudFrontClient::UpdateOriginRequestPolicy2020_05_31(
    const UpdateOriginRequestPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return UpdateOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateOriginRequestPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateOriginRequestPolicy2020_05_31Outcome(std::move(result.GetError()));
}

UpdatePublicKey2020_05_31Outcome CloudFrontClient::UpdatePublicKey2020_05_31(const UpdatePublicKey2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePublicKey2020_05_31", "Required field: Id, is not set");
    return UpdatePublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdatePublicKey2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdatePublicKey2020_05_31Outcome(std::move(result.GetError()));
}

UpdateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::UpdateRealtimeLogConfig2020_05_31(
    const UpdateRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRealtimeLogConfig2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateRealtimeLogConfig2020_05_31Outcome(std::move(result.GetError()));
}

UpdateResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31(
    const UpdateResponseHeadersPolicy2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return UpdateResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateResponseHeadersPolicy2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateResponseHeadersPolicy2020_05_31Outcome(std::move(result.GetError()));
}

UpdateStreamingDistribution2020_05_31Outcome CloudFrontClient::UpdateStreamingDistribution2020_05_31(
    const UpdateStreamingDistribution2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return UpdateStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateStreamingDistribution2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateStreamingDistribution2020_05_31Outcome(std::move(result.GetError()));
}

UpdateTrustStore2020_05_31Outcome CloudFrontClient::UpdateTrustStore2020_05_31(const UpdateTrustStore2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrustStore2020_05_31", "Required field: Id, is not set");
    return UpdateTrustStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrustStore2020_05_31", "Required field: IfMatch, is not set");
    return UpdateTrustStore2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/trust-store/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTrustStore2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateTrustStore2020_05_31Outcome(std::move(result.GetError()));
}

UpdateVpcOrigin2020_05_31Outcome CloudFrontClient::UpdateVpcOrigin2020_05_31(const UpdateVpcOrigin2020_05_31Request& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVpcOrigin2020_05_31", "Required field: Id, is not set");
    return UpdateVpcOrigin2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVpcOrigin2020_05_31", "Required field: IfMatch, is not set");
    return UpdateVpcOrigin2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(
        CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/vpc-origin/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateVpcOrigin2020_05_31Outcome(result.GetResultWithOwnership())
                            : UpdateVpcOrigin2020_05_31Outcome(std::move(result.GetError()));
}

VerifyDnsConfiguration2020_05_31Outcome CloudFrontClient::VerifyDnsConfiguration2020_05_31(
    const VerifyDnsConfiguration2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/verify-dns-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? VerifyDnsConfiguration2020_05_31Outcome(result.GetResultWithOwnership())
                            : VerifyDnsConfiguration2020_05_31Outcome(std::move(result.GetError()));
}
