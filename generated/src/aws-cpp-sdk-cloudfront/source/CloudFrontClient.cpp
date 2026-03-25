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
}
}
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

  return AssociateAlias2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return AssociateDistributionTenantWebACL2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return AssociateDistributionWebACL2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return CopyDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAnycastIpList2020_05_31Outcome CloudFrontClient::CreateAnycastIpList2020_05_31(
    const CreateAnycastIpList2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/anycast-ip-list");
  };

  return CreateAnycastIpList2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCachePolicy2020_05_31Outcome CloudFrontClient::CreateCachePolicy2020_05_31(const CreateCachePolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy");
  };

  return CreateCachePolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31(
    const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  };

  return CreateCloudFrontOriginAccessIdentity2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConnectionFunction2020_05_31Outcome CloudFrontClient::CreateConnectionFunction2020_05_31(
    const CreateConnectionFunction2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-function");
  };

  return CreateConnectionFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConnectionGroup2020_05_31Outcome CloudFrontClient::CreateConnectionGroup2020_05_31(
    const CreateConnectionGroup2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-group");
  };

  return CreateConnectionGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::CreateContinuousDeploymentPolicy2020_05_31(
    const CreateContinuousDeploymentPolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy");
  };

  return CreateContinuousDeploymentPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDistribution2020_05_31Outcome CloudFrontClient::CreateDistribution2020_05_31(
    const CreateDistribution2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  };

  return CreateDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDistributionTenant2020_05_31Outcome CloudFrontClient::CreateDistributionTenant2020_05_31(
    const CreateDistributionTenant2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenant");
  };

  return CreateDistributionTenant2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return CreateDistributionWithTags2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31(
    const CreateFieldLevelEncryptionConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption");
  };

  return CreateFieldLevelEncryptionConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31(
    const CreateFieldLevelEncryptionProfile2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile");
  };

  return CreateFieldLevelEncryptionProfile2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFunction2020_05_31Outcome CloudFrontClient::CreateFunction2020_05_31(const CreateFunction2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function");
  };

  return CreateFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return CreateInvalidation2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return CreateInvalidationForDistributionTenant2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKeyGroup2020_05_31Outcome CloudFrontClient::CreateKeyGroup2020_05_31(const CreateKeyGroup2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group");
  };

  return CreateKeyGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKeyValueStore2020_05_31Outcome CloudFrontClient::CreateKeyValueStore2020_05_31(
    const CreateKeyValueStore2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-value-store");
  };

  return CreateKeyValueStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return CreateMonitoringSubscription2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateOriginAccessControl2020_05_31Outcome CloudFrontClient::CreateOriginAccessControl2020_05_31(
    const CreateOriginAccessControl2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control");
  };

  return CreateOriginAccessControl2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateOriginRequestPolicy2020_05_31Outcome CloudFrontClient::CreateOriginRequestPolicy2020_05_31(
    const CreateOriginRequestPolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy");
  };

  return CreateOriginRequestPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePublicKey2020_05_31Outcome CloudFrontClient::CreatePublicKey2020_05_31(const CreatePublicKey2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key");
  };

  return CreatePublicKey2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::CreateRealtimeLogConfig2020_05_31(
    const CreateRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  };

  return CreateRealtimeLogConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::CreateResponseHeadersPolicy2020_05_31(
    const CreateResponseHeadersPolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy");
  };

  return CreateResponseHeadersPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateStreamingDistribution2020_05_31Outcome CloudFrontClient::CreateStreamingDistribution2020_05_31(
    const CreateStreamingDistribution2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  };

  return CreateStreamingDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return CreateStreamingDistributionWithTags2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTrustStore2020_05_31Outcome CloudFrontClient::CreateTrustStore2020_05_31(const CreateTrustStore2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/trust-store");
  };

  return CreateTrustStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcOrigin2020_05_31Outcome CloudFrontClient::CreateVpcOrigin2020_05_31(const CreateVpcOrigin2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/vpc-origin");
  };

  return CreateVpcOrigin2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteAnycastIpList2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteCachePolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteConnectionFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteConnectionGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteContinuousDeploymentPolicy2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteDistributionTenant2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteFieldLevelEncryptionConfig2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteFieldLevelEncryptionProfile2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteKeyGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteKeyValueStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteMonitoringSubscription2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteOriginAccessControl2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteOriginRequestPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeletePublicKey2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRealtimeLogConfig2020_05_31Outcome CloudFrontClient::DeleteRealtimeLogConfig2020_05_31(
    const DeleteRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/delete-realtime-log-config");
  };

  return DeleteRealtimeLogConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteResourcePolicy2020_05_31Outcome CloudFrontClient::DeleteResourcePolicy2020_05_31(
    const DeleteResourcePolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/delete-resource-policy");
  };

  return DeleteResourcePolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteResponseHeadersPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteStreamingDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteTrustStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DeleteVpcOrigin2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DescribeConnectionFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DescribeFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DescribeKeyValueStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DisassociateDistributionTenantWebACL2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return DisassociateDistributionWebACL2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetAnycastIpList2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetCachePolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetCachePolicyConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetCloudFrontOriginAccessIdentity2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
        return result.IsSuccess()
                   ? GetConnectionFunction2020_05_31Outcome(GetConnectionFunction2020_05_31Result(result.GetResultWithOwnership()))
                   : GetConnectionFunction2020_05_31Outcome(result.GetError());
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

  return GetConnectionGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetConnectionGroupByRoutingEndpoint2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetContinuousDeploymentPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetContinuousDeploymentPolicyConfig2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetDistributionConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetDistributionTenant2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetDistributionTenantByDomain2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetFieldLevelEncryption2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetFieldLevelEncryptionConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetFieldLevelEncryptionProfile2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetFieldLevelEncryptionProfileConfig2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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
        return result.IsSuccess() ? GetFunction2020_05_31Outcome(GetFunction2020_05_31Result(result.GetResultWithOwnership()))
                                  : GetFunction2020_05_31Outcome(result.GetError());
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

  return GetInvalidation2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetInvalidationForDistributionTenant2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetKeyGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetKeyGroupConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetManagedCertificateDetails2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetMonitoringSubscription2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetOriginAccessControl2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetOriginAccessControlConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetOriginRequestPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetOriginRequestPolicyConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetPublicKey2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetPublicKeyConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRealtimeLogConfig2020_05_31Outcome CloudFrontClient::GetRealtimeLogConfig2020_05_31(
    const GetRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/get-realtime-log-config");
  };

  return GetRealtimeLogConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourcePolicy2020_05_31Outcome CloudFrontClient::GetResourcePolicy2020_05_31(const GetResourcePolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/get-resource-policy");
  };

  return GetResourcePolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetResponseHeadersPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetResponseHeadersPolicyConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetStreamingDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetStreamingDistributionConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetTrustStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return GetVpcOrigin2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAnycastIpLists2020_05_31Outcome CloudFrontClient::ListAnycastIpLists2020_05_31(
    const ListAnycastIpLists2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/anycast-ip-list");
  };

  return ListAnycastIpLists2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCachePolicies2020_05_31Outcome CloudFrontClient::ListCachePolicies2020_05_31(const ListCachePolicies2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy");
  };

  return ListCachePolicies2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCloudFrontOriginAccessIdentities2020_05_31Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31(
    const ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  };

  return ListCloudFrontOriginAccessIdentities2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListConflictingAliases2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConnectionFunctions2020_05_31Outcome CloudFrontClient::ListConnectionFunctions2020_05_31(
    const ListConnectionFunctions2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-functions");
  };

  return ListConnectionFunctions2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConnectionGroups2020_05_31Outcome CloudFrontClient::ListConnectionGroups2020_05_31(
    const ListConnectionGroups2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/connection-groups");
  };

  return ListConnectionGroups2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListContinuousDeploymentPolicies2020_05_31Outcome CloudFrontClient::ListContinuousDeploymentPolicies2020_05_31(
    const ListContinuousDeploymentPolicies2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy");
  };

  return ListContinuousDeploymentPolicies2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDistributionTenants2020_05_31Outcome CloudFrontClient::ListDistributionTenants2020_05_31(
    const ListDistributionTenants2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenants");
  };

  return ListDistributionTenants2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDistributionTenantsByCustomization2020_05_31Outcome CloudFrontClient::ListDistributionTenantsByCustomization2020_05_31(
    const ListDistributionTenantsByCustomization2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution-tenants-by-customization");
  };

  return ListDistributionTenantsByCustomization2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDistributions2020_05_31Outcome CloudFrontClient::ListDistributions2020_05_31(const ListDistributions2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  };

  return ListDistributions2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByAnycastIpListId2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByCachePolicyId2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByConnectionFunction2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByConnectionMode2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByKeyGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByOriginRequestPolicyId2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByOwnedResource2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDistributionsByRealtimeLogConfig2020_05_31Outcome CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31(
    const ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByRealtimeLogConfig");
  };

  return ListDistributionsByRealtimeLogConfig2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByTrustStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByVpcOriginId2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListDistributionsByWebACLId2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDomainConflicts2020_05_31Outcome CloudFrontClient::ListDomainConflicts2020_05_31(
    const ListDomainConflicts2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/domain-conflicts");
  };

  return ListDomainConflicts2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFieldLevelEncryptionConfigs2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31(
    const ListFieldLevelEncryptionConfigs2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption");
  };

  return ListFieldLevelEncryptionConfigs2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFieldLevelEncryptionProfiles2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31(
    const ListFieldLevelEncryptionProfiles2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile");
  };

  return ListFieldLevelEncryptionProfiles2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFunctions2020_05_31Outcome CloudFrontClient::ListFunctions2020_05_31(const ListFunctions2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function");
  };

  return ListFunctions2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListInvalidations2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListInvalidationsForDistributionTenant2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKeyGroups2020_05_31Outcome CloudFrontClient::ListKeyGroups2020_05_31(const ListKeyGroups2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group");
  };

  return ListKeyGroups2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKeyValueStores2020_05_31Outcome CloudFrontClient::ListKeyValueStores2020_05_31(
    const ListKeyValueStores2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-value-store");
  };

  return ListKeyValueStores2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOriginAccessControls2020_05_31Outcome CloudFrontClient::ListOriginAccessControls2020_05_31(
    const ListOriginAccessControls2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control");
  };

  return ListOriginAccessControls2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOriginRequestPolicies2020_05_31Outcome CloudFrontClient::ListOriginRequestPolicies2020_05_31(
    const ListOriginRequestPolicies2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy");
  };

  return ListOriginRequestPolicies2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPublicKeys2020_05_31Outcome CloudFrontClient::ListPublicKeys2020_05_31(const ListPublicKeys2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key");
  };

  return ListPublicKeys2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRealtimeLogConfigs2020_05_31Outcome CloudFrontClient::ListRealtimeLogConfigs2020_05_31(
    const ListRealtimeLogConfigs2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  };

  return ListRealtimeLogConfigs2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListResponseHeadersPolicies2020_05_31Outcome CloudFrontClient::ListResponseHeadersPolicies2020_05_31(
    const ListResponseHeadersPolicies2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy");
  };

  return ListResponseHeadersPolicies2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStreamingDistributions2020_05_31Outcome CloudFrontClient::ListStreamingDistributions2020_05_31(
    const ListStreamingDistributions2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  };

  return ListStreamingDistributions2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return ListTagsForResource2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTrustStores2020_05_31Outcome CloudFrontClient::ListTrustStores2020_05_31(const ListTrustStores2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/trust-stores");
  };

  return ListTrustStores2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVpcOrigins2020_05_31Outcome CloudFrontClient::ListVpcOrigins2020_05_31(const ListVpcOrigins2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/vpc-origin");
  };

  return ListVpcOrigins2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return PublishConnectionFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return PublishFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutResourcePolicy2020_05_31Outcome CloudFrontClient::PutResourcePolicy2020_05_31(const PutResourcePolicy2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/put-resource-policy");
  };

  return PutResourcePolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return TagResource2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return TestConnectionFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return TestFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UntagResource2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateAnycastIpList2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateCachePolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateConnectionFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateConnectionGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateContinuousDeploymentPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateDistributionTenant2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateDistributionWithStagingConfig2020_05_31Outcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDomainAssociation2020_05_31Outcome CloudFrontClient::UpdateDomainAssociation2020_05_31(
    const UpdateDomainAssociation2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/domain-association");
  };

  return UpdateDomainAssociation2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateFieldLevelEncryptionConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateFieldLevelEncryptionProfile2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateFunction2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateKeyGroup2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateKeyValueStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateOriginAccessControl2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateOriginRequestPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdatePublicKey2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::UpdateRealtimeLogConfig2020_05_31(
    const UpdateRealtimeLogConfig2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  };

  return UpdateRealtimeLogConfig2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateResponseHeadersPolicy2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateStreamingDistribution2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateTrustStore2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
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

  return UpdateVpcOrigin2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

VerifyDnsConfiguration2020_05_31Outcome CloudFrontClient::VerifyDnsConfiguration2020_05_31(
    const VerifyDnsConfiguration2020_05_31Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/verify-dns-configuration");
  };

  return VerifyDnsConfiguration2020_05_31Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
