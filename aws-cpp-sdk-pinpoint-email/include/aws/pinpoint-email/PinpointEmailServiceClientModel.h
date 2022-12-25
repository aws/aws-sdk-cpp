/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pinpoint-email/PinpointEmailErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pinpoint-email/PinpointEmailEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PinpointEmailClient header */
#include <aws/pinpoint-email/model/CreateConfigurationSetResult.h>
#include <aws/pinpoint-email/model/CreateConfigurationSetEventDestinationResult.h>
#include <aws/pinpoint-email/model/CreateDedicatedIpPoolResult.h>
#include <aws/pinpoint-email/model/CreateDeliverabilityTestReportResult.h>
#include <aws/pinpoint-email/model/CreateEmailIdentityResult.h>
#include <aws/pinpoint-email/model/DeleteConfigurationSetResult.h>
#include <aws/pinpoint-email/model/DeleteConfigurationSetEventDestinationResult.h>
#include <aws/pinpoint-email/model/DeleteDedicatedIpPoolResult.h>
#include <aws/pinpoint-email/model/DeleteEmailIdentityResult.h>
#include <aws/pinpoint-email/model/GetAccountResult.h>
#include <aws/pinpoint-email/model/GetBlacklistReportsResult.h>
#include <aws/pinpoint-email/model/GetConfigurationSetResult.h>
#include <aws/pinpoint-email/model/GetConfigurationSetEventDestinationsResult.h>
#include <aws/pinpoint-email/model/GetDedicatedIpResult.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsResult.h>
#include <aws/pinpoint-email/model/GetDeliverabilityDashboardOptionsResult.h>
#include <aws/pinpoint-email/model/GetDeliverabilityTestReportResult.h>
#include <aws/pinpoint-email/model/GetDomainDeliverabilityCampaignResult.h>
#include <aws/pinpoint-email/model/GetDomainStatisticsReportResult.h>
#include <aws/pinpoint-email/model/GetEmailIdentityResult.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsResult.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsResult.h>
#include <aws/pinpoint-email/model/ListDeliverabilityTestReportsResult.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsResult.h>
#include <aws/pinpoint-email/model/ListEmailIdentitiesResult.h>
#include <aws/pinpoint-email/model/ListTagsForResourceResult.h>
#include <aws/pinpoint-email/model/PutAccountDedicatedIpWarmupAttributesResult.h>
#include <aws/pinpoint-email/model/PutAccountSendingAttributesResult.h>
#include <aws/pinpoint-email/model/PutConfigurationSetDeliveryOptionsResult.h>
#include <aws/pinpoint-email/model/PutConfigurationSetReputationOptionsResult.h>
#include <aws/pinpoint-email/model/PutConfigurationSetSendingOptionsResult.h>
#include <aws/pinpoint-email/model/PutConfigurationSetTrackingOptionsResult.h>
#include <aws/pinpoint-email/model/PutDedicatedIpInPoolResult.h>
#include <aws/pinpoint-email/model/PutDedicatedIpWarmupAttributesResult.h>
#include <aws/pinpoint-email/model/PutDeliverabilityDashboardOptionResult.h>
#include <aws/pinpoint-email/model/PutEmailIdentityDkimAttributesResult.h>
#include <aws/pinpoint-email/model/PutEmailIdentityFeedbackAttributesResult.h>
#include <aws/pinpoint-email/model/PutEmailIdentityMailFromAttributesResult.h>
#include <aws/pinpoint-email/model/SendEmailResult.h>
#include <aws/pinpoint-email/model/TagResourceResult.h>
#include <aws/pinpoint-email/model/UntagResourceResult.h>
#include <aws/pinpoint-email/model/UpdateConfigurationSetEventDestinationResult.h>
/* End of service model headers required in PinpointEmailClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace PinpointEmail
  {
    using PinpointEmailClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PinpointEmailEndpointProviderBase = Aws::PinpointEmail::Endpoint::PinpointEmailEndpointProviderBase;
    using PinpointEmailEndpointProvider = Aws::PinpointEmail::Endpoint::PinpointEmailEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PinpointEmailClient header */
      class CreateConfigurationSetRequest;
      class CreateConfigurationSetEventDestinationRequest;
      class CreateDedicatedIpPoolRequest;
      class CreateDeliverabilityTestReportRequest;
      class CreateEmailIdentityRequest;
      class DeleteConfigurationSetRequest;
      class DeleteConfigurationSetEventDestinationRequest;
      class DeleteDedicatedIpPoolRequest;
      class DeleteEmailIdentityRequest;
      class GetAccountRequest;
      class GetBlacklistReportsRequest;
      class GetConfigurationSetRequest;
      class GetConfigurationSetEventDestinationsRequest;
      class GetDedicatedIpRequest;
      class GetDedicatedIpsRequest;
      class GetDeliverabilityDashboardOptionsRequest;
      class GetDeliverabilityTestReportRequest;
      class GetDomainDeliverabilityCampaignRequest;
      class GetDomainStatisticsReportRequest;
      class GetEmailIdentityRequest;
      class ListConfigurationSetsRequest;
      class ListDedicatedIpPoolsRequest;
      class ListDeliverabilityTestReportsRequest;
      class ListDomainDeliverabilityCampaignsRequest;
      class ListEmailIdentitiesRequest;
      class ListTagsForResourceRequest;
      class PutAccountDedicatedIpWarmupAttributesRequest;
      class PutAccountSendingAttributesRequest;
      class PutConfigurationSetDeliveryOptionsRequest;
      class PutConfigurationSetReputationOptionsRequest;
      class PutConfigurationSetSendingOptionsRequest;
      class PutConfigurationSetTrackingOptionsRequest;
      class PutDedicatedIpInPoolRequest;
      class PutDedicatedIpWarmupAttributesRequest;
      class PutDeliverabilityDashboardOptionRequest;
      class PutEmailIdentityDkimAttributesRequest;
      class PutEmailIdentityFeedbackAttributesRequest;
      class PutEmailIdentityMailFromAttributesRequest;
      class SendEmailRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConfigurationSetEventDestinationRequest;
      /* End of service model forward declarations required in PinpointEmailClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConfigurationSetResult, PinpointEmailError> CreateConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationSetEventDestinationResult, PinpointEmailError> CreateConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateDedicatedIpPoolResult, PinpointEmailError> CreateDedicatedIpPoolOutcome;
      typedef Aws::Utils::Outcome<CreateDeliverabilityTestReportResult, PinpointEmailError> CreateDeliverabilityTestReportOutcome;
      typedef Aws::Utils::Outcome<CreateEmailIdentityResult, PinpointEmailError> CreateEmailIdentityOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetResult, PinpointEmailError> DeleteConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetEventDestinationResult, PinpointEmailError> DeleteConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteDedicatedIpPoolResult, PinpointEmailError> DeleteDedicatedIpPoolOutcome;
      typedef Aws::Utils::Outcome<DeleteEmailIdentityResult, PinpointEmailError> DeleteEmailIdentityOutcome;
      typedef Aws::Utils::Outcome<GetAccountResult, PinpointEmailError> GetAccountOutcome;
      typedef Aws::Utils::Outcome<GetBlacklistReportsResult, PinpointEmailError> GetBlacklistReportsOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationSetResult, PinpointEmailError> GetConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationSetEventDestinationsResult, PinpointEmailError> GetConfigurationSetEventDestinationsOutcome;
      typedef Aws::Utils::Outcome<GetDedicatedIpResult, PinpointEmailError> GetDedicatedIpOutcome;
      typedef Aws::Utils::Outcome<GetDedicatedIpsResult, PinpointEmailError> GetDedicatedIpsOutcome;
      typedef Aws::Utils::Outcome<GetDeliverabilityDashboardOptionsResult, PinpointEmailError> GetDeliverabilityDashboardOptionsOutcome;
      typedef Aws::Utils::Outcome<GetDeliverabilityTestReportResult, PinpointEmailError> GetDeliverabilityTestReportOutcome;
      typedef Aws::Utils::Outcome<GetDomainDeliverabilityCampaignResult, PinpointEmailError> GetDomainDeliverabilityCampaignOutcome;
      typedef Aws::Utils::Outcome<GetDomainStatisticsReportResult, PinpointEmailError> GetDomainStatisticsReportOutcome;
      typedef Aws::Utils::Outcome<GetEmailIdentityResult, PinpointEmailError> GetEmailIdentityOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationSetsResult, PinpointEmailError> ListConfigurationSetsOutcome;
      typedef Aws::Utils::Outcome<ListDedicatedIpPoolsResult, PinpointEmailError> ListDedicatedIpPoolsOutcome;
      typedef Aws::Utils::Outcome<ListDeliverabilityTestReportsResult, PinpointEmailError> ListDeliverabilityTestReportsOutcome;
      typedef Aws::Utils::Outcome<ListDomainDeliverabilityCampaignsResult, PinpointEmailError> ListDomainDeliverabilityCampaignsOutcome;
      typedef Aws::Utils::Outcome<ListEmailIdentitiesResult, PinpointEmailError> ListEmailIdentitiesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PinpointEmailError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutAccountDedicatedIpWarmupAttributesResult, PinpointEmailError> PutAccountDedicatedIpWarmupAttributesOutcome;
      typedef Aws::Utils::Outcome<PutAccountSendingAttributesResult, PinpointEmailError> PutAccountSendingAttributesOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetDeliveryOptionsResult, PinpointEmailError> PutConfigurationSetDeliveryOptionsOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetReputationOptionsResult, PinpointEmailError> PutConfigurationSetReputationOptionsOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetSendingOptionsResult, PinpointEmailError> PutConfigurationSetSendingOptionsOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetTrackingOptionsResult, PinpointEmailError> PutConfigurationSetTrackingOptionsOutcome;
      typedef Aws::Utils::Outcome<PutDedicatedIpInPoolResult, PinpointEmailError> PutDedicatedIpInPoolOutcome;
      typedef Aws::Utils::Outcome<PutDedicatedIpWarmupAttributesResult, PinpointEmailError> PutDedicatedIpWarmupAttributesOutcome;
      typedef Aws::Utils::Outcome<PutDeliverabilityDashboardOptionResult, PinpointEmailError> PutDeliverabilityDashboardOptionOutcome;
      typedef Aws::Utils::Outcome<PutEmailIdentityDkimAttributesResult, PinpointEmailError> PutEmailIdentityDkimAttributesOutcome;
      typedef Aws::Utils::Outcome<PutEmailIdentityFeedbackAttributesResult, PinpointEmailError> PutEmailIdentityFeedbackAttributesOutcome;
      typedef Aws::Utils::Outcome<PutEmailIdentityMailFromAttributesResult, PinpointEmailError> PutEmailIdentityMailFromAttributesOutcome;
      typedef Aws::Utils::Outcome<SendEmailResult, PinpointEmailError> SendEmailOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PinpointEmailError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PinpointEmailError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationSetEventDestinationResult, PinpointEmailError> UpdateConfigurationSetEventDestinationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateConfigurationSetOutcome> CreateConfigurationSetOutcomeCallable;
      typedef std::future<CreateConfigurationSetEventDestinationOutcome> CreateConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<CreateDedicatedIpPoolOutcome> CreateDedicatedIpPoolOutcomeCallable;
      typedef std::future<CreateDeliverabilityTestReportOutcome> CreateDeliverabilityTestReportOutcomeCallable;
      typedef std::future<CreateEmailIdentityOutcome> CreateEmailIdentityOutcomeCallable;
      typedef std::future<DeleteConfigurationSetOutcome> DeleteConfigurationSetOutcomeCallable;
      typedef std::future<DeleteConfigurationSetEventDestinationOutcome> DeleteConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<DeleteDedicatedIpPoolOutcome> DeleteDedicatedIpPoolOutcomeCallable;
      typedef std::future<DeleteEmailIdentityOutcome> DeleteEmailIdentityOutcomeCallable;
      typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
      typedef std::future<GetBlacklistReportsOutcome> GetBlacklistReportsOutcomeCallable;
      typedef std::future<GetConfigurationSetOutcome> GetConfigurationSetOutcomeCallable;
      typedef std::future<GetConfigurationSetEventDestinationsOutcome> GetConfigurationSetEventDestinationsOutcomeCallable;
      typedef std::future<GetDedicatedIpOutcome> GetDedicatedIpOutcomeCallable;
      typedef std::future<GetDedicatedIpsOutcome> GetDedicatedIpsOutcomeCallable;
      typedef std::future<GetDeliverabilityDashboardOptionsOutcome> GetDeliverabilityDashboardOptionsOutcomeCallable;
      typedef std::future<GetDeliverabilityTestReportOutcome> GetDeliverabilityTestReportOutcomeCallable;
      typedef std::future<GetDomainDeliverabilityCampaignOutcome> GetDomainDeliverabilityCampaignOutcomeCallable;
      typedef std::future<GetDomainStatisticsReportOutcome> GetDomainStatisticsReportOutcomeCallable;
      typedef std::future<GetEmailIdentityOutcome> GetEmailIdentityOutcomeCallable;
      typedef std::future<ListConfigurationSetsOutcome> ListConfigurationSetsOutcomeCallable;
      typedef std::future<ListDedicatedIpPoolsOutcome> ListDedicatedIpPoolsOutcomeCallable;
      typedef std::future<ListDeliverabilityTestReportsOutcome> ListDeliverabilityTestReportsOutcomeCallable;
      typedef std::future<ListDomainDeliverabilityCampaignsOutcome> ListDomainDeliverabilityCampaignsOutcomeCallable;
      typedef std::future<ListEmailIdentitiesOutcome> ListEmailIdentitiesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutAccountDedicatedIpWarmupAttributesOutcome> PutAccountDedicatedIpWarmupAttributesOutcomeCallable;
      typedef std::future<PutAccountSendingAttributesOutcome> PutAccountSendingAttributesOutcomeCallable;
      typedef std::future<PutConfigurationSetDeliveryOptionsOutcome> PutConfigurationSetDeliveryOptionsOutcomeCallable;
      typedef std::future<PutConfigurationSetReputationOptionsOutcome> PutConfigurationSetReputationOptionsOutcomeCallable;
      typedef std::future<PutConfigurationSetSendingOptionsOutcome> PutConfigurationSetSendingOptionsOutcomeCallable;
      typedef std::future<PutConfigurationSetTrackingOptionsOutcome> PutConfigurationSetTrackingOptionsOutcomeCallable;
      typedef std::future<PutDedicatedIpInPoolOutcome> PutDedicatedIpInPoolOutcomeCallable;
      typedef std::future<PutDedicatedIpWarmupAttributesOutcome> PutDedicatedIpWarmupAttributesOutcomeCallable;
      typedef std::future<PutDeliverabilityDashboardOptionOutcome> PutDeliverabilityDashboardOptionOutcomeCallable;
      typedef std::future<PutEmailIdentityDkimAttributesOutcome> PutEmailIdentityDkimAttributesOutcomeCallable;
      typedef std::future<PutEmailIdentityFeedbackAttributesOutcome> PutEmailIdentityFeedbackAttributesOutcomeCallable;
      typedef std::future<PutEmailIdentityMailFromAttributesOutcome> PutEmailIdentityMailFromAttributesOutcomeCallable;
      typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConfigurationSetEventDestinationOutcome> UpdateConfigurationSetEventDestinationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PinpointEmailClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PinpointEmailClient*, const Model::CreateConfigurationSetRequest&, const Model::CreateConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::CreateConfigurationSetEventDestinationRequest&, const Model::CreateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::CreateDedicatedIpPoolRequest&, const Model::CreateDedicatedIpPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDedicatedIpPoolResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::CreateDeliverabilityTestReportRequest&, const Model::CreateDeliverabilityTestReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeliverabilityTestReportResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::CreateEmailIdentityRequest&, const Model::CreateEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::DeleteConfigurationSetRequest&, const Model::DeleteConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::DeleteConfigurationSetEventDestinationRequest&, const Model::DeleteConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::DeleteDedicatedIpPoolRequest&, const Model::DeleteDedicatedIpPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDedicatedIpPoolResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::DeleteEmailIdentityRequest&, const Model::DeleteEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetAccountRequest&, const Model::GetAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetBlacklistReportsRequest&, const Model::GetBlacklistReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlacklistReportsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetConfigurationSetRequest&, const Model::GetConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetConfigurationSetEventDestinationsRequest&, const Model::GetConfigurationSetEventDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationSetEventDestinationsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetDedicatedIpRequest&, const Model::GetDedicatedIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDedicatedIpResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetDedicatedIpsRequest&, const Model::GetDedicatedIpsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDedicatedIpsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetDeliverabilityDashboardOptionsRequest&, const Model::GetDeliverabilityDashboardOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliverabilityDashboardOptionsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetDeliverabilityTestReportRequest&, const Model::GetDeliverabilityTestReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliverabilityTestReportResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetDomainDeliverabilityCampaignRequest&, const Model::GetDomainDeliverabilityCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainDeliverabilityCampaignResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetDomainStatisticsReportRequest&, const Model::GetDomainStatisticsReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainStatisticsReportResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::GetEmailIdentityRequest&, const Model::GetEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::ListConfigurationSetsRequest&, const Model::ListConfigurationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationSetsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::ListDedicatedIpPoolsRequest&, const Model::ListDedicatedIpPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDedicatedIpPoolsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::ListDeliverabilityTestReportsRequest&, const Model::ListDeliverabilityTestReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeliverabilityTestReportsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::ListDomainDeliverabilityCampaignsRequest&, const Model::ListDomainDeliverabilityCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainDeliverabilityCampaignsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::ListEmailIdentitiesRequest&, const Model::ListEmailIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEmailIdentitiesResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutAccountDedicatedIpWarmupAttributesRequest&, const Model::PutAccountDedicatedIpWarmupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutAccountSendingAttributesRequest&, const Model::PutAccountSendingAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSendingAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutConfigurationSetDeliveryOptionsRequest&, const Model::PutConfigurationSetDeliveryOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetDeliveryOptionsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutConfigurationSetReputationOptionsRequest&, const Model::PutConfigurationSetReputationOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetReputationOptionsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutConfigurationSetSendingOptionsRequest&, const Model::PutConfigurationSetSendingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetSendingOptionsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutConfigurationSetTrackingOptionsRequest&, const Model::PutConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutDedicatedIpInPoolRequest&, const Model::PutDedicatedIpInPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDedicatedIpInPoolResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutDedicatedIpWarmupAttributesRequest&, const Model::PutDedicatedIpWarmupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDedicatedIpWarmupAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutDeliverabilityDashboardOptionRequest&, const Model::PutDeliverabilityDashboardOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliverabilityDashboardOptionResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutEmailIdentityDkimAttributesRequest&, const Model::PutEmailIdentityDkimAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityDkimAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutEmailIdentityFeedbackAttributesRequest&, const Model::PutEmailIdentityFeedbackAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityFeedbackAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::PutEmailIdentityMailFromAttributesRequest&, const Model::PutEmailIdentityMailFromAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityMailFromAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::SendEmailRequest&, const Model::SendEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEmailResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointEmailClient*, const Model::UpdateConfigurationSetEventDestinationRequest&, const Model::UpdateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetEventDestinationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PinpointEmail
} // namespace Aws
