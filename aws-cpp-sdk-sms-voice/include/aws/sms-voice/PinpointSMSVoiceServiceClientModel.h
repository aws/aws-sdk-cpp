/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sms-voice/PinpointSMSVoiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sms-voice/PinpointSMSVoiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PinpointSMSVoiceClient header */
#include <aws/sms-voice/model/CreateConfigurationSetResult.h>
#include <aws/sms-voice/model/CreateConfigurationSetEventDestinationResult.h>
#include <aws/sms-voice/model/DeleteConfigurationSetResult.h>
#include <aws/sms-voice/model/DeleteConfigurationSetEventDestinationResult.h>
#include <aws/sms-voice/model/GetConfigurationSetEventDestinationsResult.h>
#include <aws/sms-voice/model/ListConfigurationSetsResult.h>
#include <aws/sms-voice/model/SendVoiceMessageResult.h>
#include <aws/sms-voice/model/UpdateConfigurationSetEventDestinationResult.h>
/* End of service model headers required in PinpointSMSVoiceClient header */

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

  namespace PinpointSMSVoice
  {
    using PinpointSMSVoiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PinpointSMSVoiceEndpointProviderBase = Aws::PinpointSMSVoice::Endpoint::PinpointSMSVoiceEndpointProviderBase;
    using PinpointSMSVoiceEndpointProvider = Aws::PinpointSMSVoice::Endpoint::PinpointSMSVoiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PinpointSMSVoiceClient header */
      class CreateConfigurationSetRequest;
      class CreateConfigurationSetEventDestinationRequest;
      class DeleteConfigurationSetRequest;
      class DeleteConfigurationSetEventDestinationRequest;
      class GetConfigurationSetEventDestinationsRequest;
      class ListConfigurationSetsRequest;
      class SendVoiceMessageRequest;
      class UpdateConfigurationSetEventDestinationRequest;
      /* End of service model forward declarations required in PinpointSMSVoiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConfigurationSetResult, PinpointSMSVoiceError> CreateConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationSetEventDestinationResult, PinpointSMSVoiceError> CreateConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetResult, PinpointSMSVoiceError> DeleteConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetEventDestinationResult, PinpointSMSVoiceError> DeleteConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationSetEventDestinationsResult, PinpointSMSVoiceError> GetConfigurationSetEventDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationSetsResult, PinpointSMSVoiceError> ListConfigurationSetsOutcome;
      typedef Aws::Utils::Outcome<SendVoiceMessageResult, PinpointSMSVoiceError> SendVoiceMessageOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationSetEventDestinationResult, PinpointSMSVoiceError> UpdateConfigurationSetEventDestinationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateConfigurationSetOutcome> CreateConfigurationSetOutcomeCallable;
      typedef std::future<CreateConfigurationSetEventDestinationOutcome> CreateConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<DeleteConfigurationSetOutcome> DeleteConfigurationSetOutcomeCallable;
      typedef std::future<DeleteConfigurationSetEventDestinationOutcome> DeleteConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<GetConfigurationSetEventDestinationsOutcome> GetConfigurationSetEventDestinationsOutcomeCallable;
      typedef std::future<ListConfigurationSetsOutcome> ListConfigurationSetsOutcomeCallable;
      typedef std::future<SendVoiceMessageOutcome> SendVoiceMessageOutcomeCallable;
      typedef std::future<UpdateConfigurationSetEventDestinationOutcome> UpdateConfigurationSetEventDestinationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PinpointSMSVoiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PinpointSMSVoiceClient*, const Model::CreateConfigurationSetRequest&, const Model::CreateConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceClient*, const Model::CreateConfigurationSetEventDestinationRequest&, const Model::CreateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceClient*, const Model::DeleteConfigurationSetRequest&, const Model::DeleteConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceClient*, const Model::DeleteConfigurationSetEventDestinationRequest&, const Model::DeleteConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceClient*, const Model::GetConfigurationSetEventDestinationsRequest&, const Model::GetConfigurationSetEventDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationSetEventDestinationsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceClient*, const Model::ListConfigurationSetsRequest&, const Model::ListConfigurationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationSetsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceClient*, const Model::SendVoiceMessageRequest&, const Model::SendVoiceMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendVoiceMessageResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceClient*, const Model::UpdateConfigurationSetEventDestinationRequest&, const Model::UpdateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetEventDestinationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PinpointSMSVoice
} // namespace Aws
