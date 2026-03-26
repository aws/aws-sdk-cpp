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
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/email/SESClient.h>
#include <aws/email/SESEndpointProvider.h>
#include <aws/email/SESErrorMarshaller.h>
#include <aws/email/model/CloneReceiptRuleSetRequest.h>
#include <aws/email/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/CreateConfigurationSetRequest.h>
#include <aws/email/model/CreateConfigurationSetTrackingOptionsRequest.h>
#include <aws/email/model/CreateCustomVerificationEmailTemplateRequest.h>
#include <aws/email/model/CreateReceiptFilterRequest.h>
#include <aws/email/model/CreateReceiptRuleRequest.h>
#include <aws/email/model/CreateReceiptRuleSetRequest.h>
#include <aws/email/model/CreateTemplateRequest.h>
#include <aws/email/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/DeleteConfigurationSetRequest.h>
#include <aws/email/model/DeleteConfigurationSetTrackingOptionsRequest.h>
#include <aws/email/model/DeleteCustomVerificationEmailTemplateRequest.h>
#include <aws/email/model/DeleteIdentityPolicyRequest.h>
#include <aws/email/model/DeleteIdentityRequest.h>
#include <aws/email/model/DeleteReceiptFilterRequest.h>
#include <aws/email/model/DeleteReceiptRuleRequest.h>
#include <aws/email/model/DeleteReceiptRuleSetRequest.h>
#include <aws/email/model/DeleteTemplateRequest.h>
#include <aws/email/model/DeleteVerifiedEmailAddressRequest.h>
#include <aws/email/model/DescribeActiveReceiptRuleSetRequest.h>
#include <aws/email/model/DescribeConfigurationSetRequest.h>
#include <aws/email/model/DescribeReceiptRuleRequest.h>
#include <aws/email/model/DescribeReceiptRuleSetRequest.h>
#include <aws/email/model/GetAccountSendingEnabledRequest.h>
#include <aws/email/model/GetCustomVerificationEmailTemplateRequest.h>
#include <aws/email/model/GetIdentityDkimAttributesRequest.h>
#include <aws/email/model/GetIdentityMailFromDomainAttributesRequest.h>
#include <aws/email/model/GetIdentityNotificationAttributesRequest.h>
#include <aws/email/model/GetIdentityPoliciesRequest.h>
#include <aws/email/model/GetIdentityVerificationAttributesRequest.h>
#include <aws/email/model/GetSendQuotaRequest.h>
#include <aws/email/model/GetSendStatisticsRequest.h>
#include <aws/email/model/GetTemplateRequest.h>
#include <aws/email/model/ListConfigurationSetsRequest.h>
#include <aws/email/model/ListCustomVerificationEmailTemplatesRequest.h>
#include <aws/email/model/ListIdentitiesRequest.h>
#include <aws/email/model/ListIdentityPoliciesRequest.h>
#include <aws/email/model/ListReceiptFiltersRequest.h>
#include <aws/email/model/ListReceiptRuleSetsRequest.h>
#include <aws/email/model/ListTemplatesRequest.h>
#include <aws/email/model/ListVerifiedEmailAddressesRequest.h>
#include <aws/email/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/email/model/PutIdentityPolicyRequest.h>
#include <aws/email/model/ReorderReceiptRuleSetRequest.h>
#include <aws/email/model/SendBounceRequest.h>
#include <aws/email/model/SendBulkTemplatedEmailRequest.h>
#include <aws/email/model/SendCustomVerificationEmailRequest.h>
#include <aws/email/model/SendEmailRequest.h>
#include <aws/email/model/SendRawEmailRequest.h>
#include <aws/email/model/SendTemplatedEmailRequest.h>
#include <aws/email/model/SetActiveReceiptRuleSetRequest.h>
#include <aws/email/model/SetIdentityDkimEnabledRequest.h>
#include <aws/email/model/SetIdentityFeedbackForwardingEnabledRequest.h>
#include <aws/email/model/SetIdentityHeadersInNotificationsEnabledRequest.h>
#include <aws/email/model/SetIdentityMailFromDomainRequest.h>
#include <aws/email/model/SetIdentityNotificationTopicRequest.h>
#include <aws/email/model/SetReceiptRulePositionRequest.h>
#include <aws/email/model/TestRenderTemplateRequest.h>
#include <aws/email/model/UpdateAccountSendingEnabledRequest.h>
#include <aws/email/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <aws/email/model/UpdateConfigurationSetReputationMetricsEnabledRequest.h>
#include <aws/email/model/UpdateConfigurationSetSendingEnabledRequest.h>
#include <aws/email/model/UpdateConfigurationSetTrackingOptionsRequest.h>
#include <aws/email/model/UpdateCustomVerificationEmailTemplateRequest.h>
#include <aws/email/model/UpdateReceiptRuleRequest.h>
#include <aws/email/model/UpdateTemplateRequest.h>
#include <aws/email/model/VerifyDomainDkimRequest.h>
#include <aws/email/model/VerifyDomainIdentityRequest.h>
#include <aws/email/model/VerifyEmailAddressRequest.h>
#include <aws/email/model/VerifyEmailIdentityRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SES;
using namespace Aws::SES::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SES {
const char SERVICE_NAME[] = "ses";
const char ALLOCATION_TAG[] = "SESClient";
}  // namespace SES
}  // namespace Aws
const char* SESClient::GetServiceName() { return SERVICE_NAME; }
const char* SESClient::GetAllocationTag() { return ALLOCATION_TAG; }

SESClient::SESClient(const SES::SESClientConfiguration& clientConfiguration, std::shared_ptr<SESEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SESEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SESClient::SESClient(const AWSCredentials& credentials, std::shared_ptr<SESEndpointProviderBase> endpointProvider,
                     const SES::SESClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SESEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SESClient::SESClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SESEndpointProviderBase> endpointProvider, const SES::SESClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SESEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SESClient::SESClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SESEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SESClient::SESClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SESEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SESClient::SESClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SESEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SESClient::~SESClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SESEndpointProviderBase>& SESClient::accessEndpointProvider() { return m_endpointProvider; }

void SESClient::init(const SES::SESClientConfiguration& config) {
  AWSClient::SetServiceClientName("SES");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ses");
}

void SESClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String SESClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

SESClient::InvokeOperationOutcome SESClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
CloneReceiptRuleSetOutcome SESClient::CloneReceiptRuleSet(const CloneReceiptRuleSetRequest& request) const {
  return CloneReceiptRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationSetOutcome SESClient::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const {
  return CreateConfigurationSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationSetEventDestinationOutcome SESClient::CreateConfigurationSetEventDestination(
    const CreateConfigurationSetEventDestinationRequest& request) const {
  return CreateConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationSetTrackingOptionsOutcome SESClient::CreateConfigurationSetTrackingOptions(
    const CreateConfigurationSetTrackingOptionsRequest& request) const {
  return CreateConfigurationSetTrackingOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomVerificationEmailTemplateOutcome SESClient::CreateCustomVerificationEmailTemplate(
    const CreateCustomVerificationEmailTemplateRequest& request) const {
  return CreateCustomVerificationEmailTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReceiptFilterOutcome SESClient::CreateReceiptFilter(const CreateReceiptFilterRequest& request) const {
  return CreateReceiptFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReceiptRuleOutcome SESClient::CreateReceiptRule(const CreateReceiptRuleRequest& request) const {
  return CreateReceiptRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReceiptRuleSetOutcome SESClient::CreateReceiptRuleSet(const CreateReceiptRuleSetRequest& request) const {
  return CreateReceiptRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTemplateOutcome SESClient::CreateTemplate(const CreateTemplateRequest& request) const {
  return CreateTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigurationSetOutcome SESClient::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const {
  return DeleteConfigurationSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigurationSetEventDestinationOutcome SESClient::DeleteConfigurationSetEventDestination(
    const DeleteConfigurationSetEventDestinationRequest& request) const {
  return DeleteConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigurationSetTrackingOptionsOutcome SESClient::DeleteConfigurationSetTrackingOptions(
    const DeleteConfigurationSetTrackingOptionsRequest& request) const {
  return DeleteConfigurationSetTrackingOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomVerificationEmailTemplateOutcome SESClient::DeleteCustomVerificationEmailTemplate(
    const DeleteCustomVerificationEmailTemplateRequest& request) const {
  return DeleteCustomVerificationEmailTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIdentityOutcome SESClient::DeleteIdentity(const DeleteIdentityRequest& request) const {
  return DeleteIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIdentityPolicyOutcome SESClient::DeleteIdentityPolicy(const DeleteIdentityPolicyRequest& request) const {
  return DeleteIdentityPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReceiptFilterOutcome SESClient::DeleteReceiptFilter(const DeleteReceiptFilterRequest& request) const {
  return DeleteReceiptFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReceiptRuleOutcome SESClient::DeleteReceiptRule(const DeleteReceiptRuleRequest& request) const {
  return DeleteReceiptRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReceiptRuleSetOutcome SESClient::DeleteReceiptRuleSet(const DeleteReceiptRuleSetRequest& request) const {
  return DeleteReceiptRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTemplateOutcome SESClient::DeleteTemplate(const DeleteTemplateRequest& request) const {
  return DeleteTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVerifiedEmailAddressOutcome SESClient::DeleteVerifiedEmailAddress(const DeleteVerifiedEmailAddressRequest& request) const {
  return DeleteVerifiedEmailAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeActiveReceiptRuleSetOutcome SESClient::DescribeActiveReceiptRuleSet(const DescribeActiveReceiptRuleSetRequest& request) const {
  return DescribeActiveReceiptRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigurationSetOutcome SESClient::DescribeConfigurationSet(const DescribeConfigurationSetRequest& request) const {
  return DescribeConfigurationSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReceiptRuleOutcome SESClient::DescribeReceiptRule(const DescribeReceiptRuleRequest& request) const {
  return DescribeReceiptRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReceiptRuleSetOutcome SESClient::DescribeReceiptRuleSet(const DescribeReceiptRuleSetRequest& request) const {
  return DescribeReceiptRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountSendingEnabledOutcome SESClient::GetAccountSendingEnabled(const GetAccountSendingEnabledRequest& request) const {
  return GetAccountSendingEnabledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCustomVerificationEmailTemplateOutcome SESClient::GetCustomVerificationEmailTemplate(
    const GetCustomVerificationEmailTemplateRequest& request) const {
  return GetCustomVerificationEmailTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentityDkimAttributesOutcome SESClient::GetIdentityDkimAttributes(const GetIdentityDkimAttributesRequest& request) const {
  return GetIdentityDkimAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentityMailFromDomainAttributesOutcome SESClient::GetIdentityMailFromDomainAttributes(
    const GetIdentityMailFromDomainAttributesRequest& request) const {
  return GetIdentityMailFromDomainAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentityNotificationAttributesOutcome SESClient::GetIdentityNotificationAttributes(
    const GetIdentityNotificationAttributesRequest& request) const {
  return GetIdentityNotificationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentityPoliciesOutcome SESClient::GetIdentityPolicies(const GetIdentityPoliciesRequest& request) const {
  return GetIdentityPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentityVerificationAttributesOutcome SESClient::GetIdentityVerificationAttributes(
    const GetIdentityVerificationAttributesRequest& request) const {
  return GetIdentityVerificationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSendQuotaOutcome SESClient::GetSendQuota(const GetSendQuotaRequest& request) const {
  return GetSendQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSendStatisticsOutcome SESClient::GetSendStatistics(const GetSendStatisticsRequest& request) const {
  return GetSendStatisticsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTemplateOutcome SESClient::GetTemplate(const GetTemplateRequest& request) const {
  return GetTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConfigurationSetsOutcome SESClient::ListConfigurationSets(const ListConfigurationSetsRequest& request) const {
  return ListConfigurationSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomVerificationEmailTemplatesOutcome SESClient::ListCustomVerificationEmailTemplates(
    const ListCustomVerificationEmailTemplatesRequest& request) const {
  return ListCustomVerificationEmailTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIdentitiesOutcome SESClient::ListIdentities(const ListIdentitiesRequest& request) const {
  return ListIdentitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIdentityPoliciesOutcome SESClient::ListIdentityPolicies(const ListIdentityPoliciesRequest& request) const {
  return ListIdentityPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReceiptFiltersOutcome SESClient::ListReceiptFilters(const ListReceiptFiltersRequest& request) const {
  return ListReceiptFiltersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReceiptRuleSetsOutcome SESClient::ListReceiptRuleSets(const ListReceiptRuleSetsRequest& request) const {
  return ListReceiptRuleSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTemplatesOutcome SESClient::ListTemplates(const ListTemplatesRequest& request) const {
  return ListTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVerifiedEmailAddressesOutcome SESClient::ListVerifiedEmailAddresses(const ListVerifiedEmailAddressesRequest& request) const {
  return ListVerifiedEmailAddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutConfigurationSetDeliveryOptionsOutcome SESClient::PutConfigurationSetDeliveryOptions(
    const PutConfigurationSetDeliveryOptionsRequest& request) const {
  return PutConfigurationSetDeliveryOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutIdentityPolicyOutcome SESClient::PutIdentityPolicy(const PutIdentityPolicyRequest& request) const {
  return PutIdentityPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReorderReceiptRuleSetOutcome SESClient::ReorderReceiptRuleSet(const ReorderReceiptRuleSetRequest& request) const {
  return ReorderReceiptRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendBounceOutcome SESClient::SendBounce(const SendBounceRequest& request) const {
  return SendBounceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendBulkTemplatedEmailOutcome SESClient::SendBulkTemplatedEmail(const SendBulkTemplatedEmailRequest& request) const {
  return SendBulkTemplatedEmailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendCustomVerificationEmailOutcome SESClient::SendCustomVerificationEmail(const SendCustomVerificationEmailRequest& request) const {
  return SendCustomVerificationEmailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendEmailOutcome SESClient::SendEmail(const SendEmailRequest& request) const {
  return SendEmailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendRawEmailOutcome SESClient::SendRawEmail(const SendRawEmailRequest& request) const {
  return SendRawEmailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendTemplatedEmailOutcome SESClient::SendTemplatedEmail(const SendTemplatedEmailRequest& request) const {
  return SendTemplatedEmailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetActiveReceiptRuleSetOutcome SESClient::SetActiveReceiptRuleSet(const SetActiveReceiptRuleSetRequest& request) const {
  return SetActiveReceiptRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIdentityDkimEnabledOutcome SESClient::SetIdentityDkimEnabled(const SetIdentityDkimEnabledRequest& request) const {
  return SetIdentityDkimEnabledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIdentityFeedbackForwardingEnabledOutcome SESClient::SetIdentityFeedbackForwardingEnabled(
    const SetIdentityFeedbackForwardingEnabledRequest& request) const {
  return SetIdentityFeedbackForwardingEnabledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIdentityHeadersInNotificationsEnabledOutcome SESClient::SetIdentityHeadersInNotificationsEnabled(
    const SetIdentityHeadersInNotificationsEnabledRequest& request) const {
  return SetIdentityHeadersInNotificationsEnabledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIdentityMailFromDomainOutcome SESClient::SetIdentityMailFromDomain(const SetIdentityMailFromDomainRequest& request) const {
  return SetIdentityMailFromDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIdentityNotificationTopicOutcome SESClient::SetIdentityNotificationTopic(const SetIdentityNotificationTopicRequest& request) const {
  return SetIdentityNotificationTopicOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetReceiptRulePositionOutcome SESClient::SetReceiptRulePosition(const SetReceiptRulePositionRequest& request) const {
  return SetReceiptRulePositionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestRenderTemplateOutcome SESClient::TestRenderTemplate(const TestRenderTemplateRequest& request) const {
  return TestRenderTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccountSendingEnabledOutcome SESClient::UpdateAccountSendingEnabled(const UpdateAccountSendingEnabledRequest& request) const {
  return UpdateAccountSendingEnabledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConfigurationSetEventDestinationOutcome SESClient::UpdateConfigurationSetEventDestination(
    const UpdateConfigurationSetEventDestinationRequest& request) const {
  return UpdateConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConfigurationSetReputationMetricsEnabledOutcome SESClient::UpdateConfigurationSetReputationMetricsEnabled(
    const UpdateConfigurationSetReputationMetricsEnabledRequest& request) const {
  return UpdateConfigurationSetReputationMetricsEnabledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConfigurationSetSendingEnabledOutcome SESClient::UpdateConfigurationSetSendingEnabled(
    const UpdateConfigurationSetSendingEnabledRequest& request) const {
  return UpdateConfigurationSetSendingEnabledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConfigurationSetTrackingOptionsOutcome SESClient::UpdateConfigurationSetTrackingOptions(
    const UpdateConfigurationSetTrackingOptionsRequest& request) const {
  return UpdateConfigurationSetTrackingOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCustomVerificationEmailTemplateOutcome SESClient::UpdateCustomVerificationEmailTemplate(
    const UpdateCustomVerificationEmailTemplateRequest& request) const {
  return UpdateCustomVerificationEmailTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateReceiptRuleOutcome SESClient::UpdateReceiptRule(const UpdateReceiptRuleRequest& request) const {
  return UpdateReceiptRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTemplateOutcome SESClient::UpdateTemplate(const UpdateTemplateRequest& request) const {
  return UpdateTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyDomainDkimOutcome SESClient::VerifyDomainDkim(const VerifyDomainDkimRequest& request) const {
  return VerifyDomainDkimOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyDomainIdentityOutcome SESClient::VerifyDomainIdentity(const VerifyDomainIdentityRequest& request) const {
  return VerifyDomainIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyEmailAddressOutcome SESClient::VerifyEmailAddress(const VerifyEmailAddressRequest& request) const {
  return VerifyEmailAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyEmailIdentityOutcome SESClient::VerifyEmailIdentity(const VerifyEmailIdentityRequest& request) const {
  return VerifyEmailIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
