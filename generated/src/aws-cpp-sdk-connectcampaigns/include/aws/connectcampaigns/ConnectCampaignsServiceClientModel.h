/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/connectcampaigns/ConnectCampaignsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/connectcampaigns/ConnectCampaignsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ConnectCampaignsClient header */
#include <aws/connectcampaigns/model/CreateCampaignResult.h>
#include <aws/connectcampaigns/model/DescribeCampaignResult.h>
#include <aws/connectcampaigns/model/GetCampaignStateResult.h>
#include <aws/connectcampaigns/model/GetCampaignStateBatchResult.h>
#include <aws/connectcampaigns/model/GetConnectInstanceConfigResult.h>
#include <aws/connectcampaigns/model/GetInstanceOnboardingJobStatusResult.h>
#include <aws/connectcampaigns/model/ListCampaignsResult.h>
#include <aws/connectcampaigns/model/ListTagsForResourceResult.h>
#include <aws/connectcampaigns/model/PutDialRequestBatchResult.h>
#include <aws/connectcampaigns/model/StartInstanceOnboardingJobResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ConnectCampaignsClient header */

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

  namespace ConnectCampaigns
  {
    using ConnectCampaignsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ConnectCampaignsEndpointProviderBase = Aws::ConnectCampaigns::Endpoint::ConnectCampaignsEndpointProviderBase;
    using ConnectCampaignsEndpointProvider = Aws::ConnectCampaigns::Endpoint::ConnectCampaignsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ConnectCampaignsClient header */
      class CreateCampaignRequest;
      class DeleteCampaignRequest;
      class DeleteConnectInstanceConfigRequest;
      class DeleteInstanceOnboardingJobRequest;
      class DescribeCampaignRequest;
      class GetCampaignStateRequest;
      class GetCampaignStateBatchRequest;
      class GetConnectInstanceConfigRequest;
      class GetInstanceOnboardingJobStatusRequest;
      class ListCampaignsRequest;
      class ListTagsForResourceRequest;
      class PauseCampaignRequest;
      class PutDialRequestBatchRequest;
      class ResumeCampaignRequest;
      class StartCampaignRequest;
      class StartInstanceOnboardingJobRequest;
      class StopCampaignRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCampaignDialerConfigRequest;
      class UpdateCampaignNameRequest;
      class UpdateCampaignOutboundCallConfigRequest;
      /* End of service model forward declarations required in ConnectCampaignsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCampaignResult, ConnectCampaignsError> CreateCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> DeleteCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> DeleteConnectInstanceConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> DeleteInstanceOnboardingJobOutcome;
      typedef Aws::Utils::Outcome<DescribeCampaignResult, ConnectCampaignsError> DescribeCampaignOutcome;
      typedef Aws::Utils::Outcome<GetCampaignStateResult, ConnectCampaignsError> GetCampaignStateOutcome;
      typedef Aws::Utils::Outcome<GetCampaignStateBatchResult, ConnectCampaignsError> GetCampaignStateBatchOutcome;
      typedef Aws::Utils::Outcome<GetConnectInstanceConfigResult, ConnectCampaignsError> GetConnectInstanceConfigOutcome;
      typedef Aws::Utils::Outcome<GetInstanceOnboardingJobStatusResult, ConnectCampaignsError> GetInstanceOnboardingJobStatusOutcome;
      typedef Aws::Utils::Outcome<ListCampaignsResult, ConnectCampaignsError> ListCampaignsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectCampaignsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> PauseCampaignOutcome;
      typedef Aws::Utils::Outcome<PutDialRequestBatchResult, ConnectCampaignsError> PutDialRequestBatchOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> ResumeCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> StartCampaignOutcome;
      typedef Aws::Utils::Outcome<StartInstanceOnboardingJobResult, ConnectCampaignsError> StartInstanceOnboardingJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> StopCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> UpdateCampaignDialerConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> UpdateCampaignNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsError> UpdateCampaignOutboundCallConfigOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
      typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
      typedef std::future<DeleteConnectInstanceConfigOutcome> DeleteConnectInstanceConfigOutcomeCallable;
      typedef std::future<DeleteInstanceOnboardingJobOutcome> DeleteInstanceOnboardingJobOutcomeCallable;
      typedef std::future<DescribeCampaignOutcome> DescribeCampaignOutcomeCallable;
      typedef std::future<GetCampaignStateOutcome> GetCampaignStateOutcomeCallable;
      typedef std::future<GetCampaignStateBatchOutcome> GetCampaignStateBatchOutcomeCallable;
      typedef std::future<GetConnectInstanceConfigOutcome> GetConnectInstanceConfigOutcomeCallable;
      typedef std::future<GetInstanceOnboardingJobStatusOutcome> GetInstanceOnboardingJobStatusOutcomeCallable;
      typedef std::future<ListCampaignsOutcome> ListCampaignsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PauseCampaignOutcome> PauseCampaignOutcomeCallable;
      typedef std::future<PutDialRequestBatchOutcome> PutDialRequestBatchOutcomeCallable;
      typedef std::future<ResumeCampaignOutcome> ResumeCampaignOutcomeCallable;
      typedef std::future<StartCampaignOutcome> StartCampaignOutcomeCallable;
      typedef std::future<StartInstanceOnboardingJobOutcome> StartInstanceOnboardingJobOutcomeCallable;
      typedef std::future<StopCampaignOutcome> StopCampaignOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCampaignDialerConfigOutcome> UpdateCampaignDialerConfigOutcomeCallable;
      typedef std::future<UpdateCampaignNameOutcome> UpdateCampaignNameOutcomeCallable;
      typedef std::future<UpdateCampaignOutboundCallConfigOutcome> UpdateCampaignOutboundCallConfigOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ConnectCampaignsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConnectCampaignsClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::DeleteConnectInstanceConfigRequest&, const Model::DeleteConnectInstanceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectInstanceConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::DeleteInstanceOnboardingJobRequest&, const Model::DeleteInstanceOnboardingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceOnboardingJobResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::DescribeCampaignRequest&, const Model::DescribeCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::GetCampaignStateRequest&, const Model::GetCampaignStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignStateResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::GetCampaignStateBatchRequest&, const Model::GetCampaignStateBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignStateBatchResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::GetConnectInstanceConfigRequest&, const Model::GetConnectInstanceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectInstanceConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::GetInstanceOnboardingJobStatusRequest&, const Model::GetInstanceOnboardingJobStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceOnboardingJobStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::ListCampaignsRequest&, const Model::ListCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCampaignsResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::PauseCampaignRequest&, const Model::PauseCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PauseCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::PutDialRequestBatchRequest&, const Model::PutDialRequestBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDialRequestBatchResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::ResumeCampaignRequest&, const Model::ResumeCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::StartCampaignRequest&, const Model::StartCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::StartInstanceOnboardingJobRequest&, const Model::StartInstanceOnboardingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceOnboardingJobResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::StopCampaignRequest&, const Model::StopCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::UpdateCampaignDialerConfigRequest&, const Model::UpdateCampaignDialerConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignDialerConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::UpdateCampaignNameRequest&, const Model::UpdateCampaignNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignNameResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsClient*, const Model::UpdateCampaignOutboundCallConfigRequest&, const Model::UpdateCampaignOutboundCallConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignOutboundCallConfigResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ConnectCampaigns
} // namespace Aws
