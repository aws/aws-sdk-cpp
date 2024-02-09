/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceServiceClientModel.h>
#include <aws/chime-sdk-voice/model/GetPhoneNumberSettingsRequest.h>
#include <aws/chime-sdk-voice/model/ListAvailableVoiceConnectorRegionsRequest.h>
#include <aws/chime-sdk-voice/model/GetGlobalSettingsRequest.h>

namespace Aws
{
namespace ChimeSDKVoice
{
  /**
   * <p>The Amazon Chime SDK telephony APIs in this section enable developers to
   * create PSTN calling solutions that use Amazon Chime SDK Voice Connectors, and
   * Amazon Chime SDK SIP media applications. Developers can also order and manage
   * phone numbers, create and manage Voice Connectors and SIP media applications,
   * and run voice analytics.</p>
   */
  class AWS_CHIMESDKVOICE_API ChimeSDKVoiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKVoiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ChimeSDKVoiceClientConfiguration ClientConfigurationType;
      typedef ChimeSDKVoiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKVoiceClient(const Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration = Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration(),
                            std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKVoiceClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration = Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKVoiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration = Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKVoiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKVoiceClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKVoiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ChimeSDKVoiceClient();

        /**
         * <p>Associates phone numbers with the specified Amazon Chime SDK Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/AssociatePhoneNumbersWithVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorOutcome AssociatePhoneNumbersWithVoiceConnector(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for AssociatePhoneNumbersWithVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePhoneNumbersWithVoiceConnectorRequestT = Model::AssociatePhoneNumbersWithVoiceConnectorRequest>
        Model::AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorCallable(const AssociatePhoneNumbersWithVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnector, request);
        }

        /**
         * An Async wrapper for AssociatePhoneNumbersWithVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePhoneNumbersWithVoiceConnectorRequestT = Model::AssociatePhoneNumbersWithVoiceConnectorRequest>
        void AssociatePhoneNumbersWithVoiceConnectorAsync(const AssociatePhoneNumbersWithVoiceConnectorRequestT& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnector, request, handler, context);
        }

        /**
         * <p>Associates phone numbers with the specified Amazon Chime SDK Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/AssociatePhoneNumbersWithVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcome AssociatePhoneNumbersWithVoiceConnectorGroup(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociatePhoneNumbersWithVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePhoneNumbersWithVoiceConnectorGroupRequestT = Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest>
        Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorGroupCallable(const AssociatePhoneNumbersWithVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for AssociatePhoneNumbersWithVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePhoneNumbersWithVoiceConnectorGroupRequestT = Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest>
        void AssociatePhoneNumbersWithVoiceConnectorGroupAsync(const AssociatePhoneNumbersWithVoiceConnectorGroupRequestT& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::AssociatePhoneNumbersWithVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p> Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be
         * disassociated from any users or Amazon Chime SDK Voice Connectors before they
         * can be deleted. </p> <p> Phone numbers remain in the <b>Deletion queue</b> for 7
         * days before they are deleted permanently. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/BatchDeletePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeletePhoneNumberOutcome BatchDeletePhoneNumber(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for BatchDeletePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeletePhoneNumberRequestT = Model::BatchDeletePhoneNumberRequest>
        Model::BatchDeletePhoneNumberOutcomeCallable BatchDeletePhoneNumberCallable(const BatchDeletePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::BatchDeletePhoneNumber, request);
        }

        /**
         * An Async wrapper for BatchDeletePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeletePhoneNumberRequestT = Model::BatchDeletePhoneNumberRequest>
        void BatchDeletePhoneNumberAsync(const BatchDeletePhoneNumberRequestT& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::BatchDeletePhoneNumber, request, handler, context);
        }

        /**
         * <p>Updates one or more phone numbers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/BatchUpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdatePhoneNumberOutcome BatchUpdatePhoneNumber(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdatePhoneNumberRequestT = Model::BatchUpdatePhoneNumberRequest>
        Model::BatchUpdatePhoneNumberOutcomeCallable BatchUpdatePhoneNumberCallable(const BatchUpdatePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::BatchUpdatePhoneNumber, request);
        }

        /**
         * An Async wrapper for BatchUpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdatePhoneNumberRequestT = Model::BatchUpdatePhoneNumberRequest>
        void BatchUpdatePhoneNumberAsync(const BatchUpdatePhoneNumberRequestT& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::BatchUpdatePhoneNumber, request, handler, context);
        }

        /**
         * <p>Creates an order for phone numbers to be provisioned. For numbers outside the
         * U.S., you must use the Amazon Chime SDK SIP media application dial-in product
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreatePhoneNumberOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePhoneNumberOrderOutcome CreatePhoneNumberOrder(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * A Callable wrapper for CreatePhoneNumberOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePhoneNumberOrderRequestT = Model::CreatePhoneNumberOrderRequest>
        Model::CreatePhoneNumberOrderOutcomeCallable CreatePhoneNumberOrderCallable(const CreatePhoneNumberOrderRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreatePhoneNumberOrder, request);
        }

        /**
         * An Async wrapper for CreatePhoneNumberOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePhoneNumberOrderRequestT = Model::CreatePhoneNumberOrderRequest>
        void CreatePhoneNumberOrderAsync(const CreatePhoneNumberOrderRequestT& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreatePhoneNumberOrder, request, handler, context);
        }

        /**
         * <p>Creates a proxy session for the specified Amazon Chime SDK Voice Connector
         * for the specified participant phone numbers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreateProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProxySessionOutcome CreateProxySession(const Model::CreateProxySessionRequest& request) const;

        /**
         * A Callable wrapper for CreateProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProxySessionRequestT = Model::CreateProxySessionRequest>
        Model::CreateProxySessionOutcomeCallable CreateProxySessionCallable(const CreateProxySessionRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreateProxySession, request);
        }

        /**
         * An Async wrapper for CreateProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProxySessionRequestT = Model::CreateProxySessionRequest>
        void CreateProxySessionAsync(const CreateProxySessionRequestT& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreateProxySession, request, handler, context);
        }

        /**
         * <p>Creates a SIP media application. For more information about SIP media
         * applications, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/ag/manage-sip-applications.html">Managing
         * SIP media applications and rules</a> in the <i>Amazon Chime SDK Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreateSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipMediaApplicationOutcome CreateSipMediaApplication(const Model::CreateSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSipMediaApplicationRequestT = Model::CreateSipMediaApplicationRequest>
        Model::CreateSipMediaApplicationOutcomeCallable CreateSipMediaApplicationCallable(const CreateSipMediaApplicationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreateSipMediaApplication, request);
        }

        /**
         * An Async wrapper for CreateSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSipMediaApplicationRequestT = Model::CreateSipMediaApplicationRequest>
        void CreateSipMediaApplicationAsync(const CreateSipMediaApplicationRequestT& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreateSipMediaApplication, request, handler, context);
        }

        /**
         * <p>Creates an outbound call to a phone number from the phone number specified in
         * the request, and it invokes the endpoint of the specified
         * <code>sipMediaApplicationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreateSipMediaApplicationCall">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipMediaApplicationCallOutcome CreateSipMediaApplicationCall(const Model::CreateSipMediaApplicationCallRequest& request) const;

        /**
         * A Callable wrapper for CreateSipMediaApplicationCall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSipMediaApplicationCallRequestT = Model::CreateSipMediaApplicationCallRequest>
        Model::CreateSipMediaApplicationCallOutcomeCallable CreateSipMediaApplicationCallCallable(const CreateSipMediaApplicationCallRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreateSipMediaApplicationCall, request);
        }

        /**
         * An Async wrapper for CreateSipMediaApplicationCall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSipMediaApplicationCallRequestT = Model::CreateSipMediaApplicationCallRequest>
        void CreateSipMediaApplicationCallAsync(const CreateSipMediaApplicationCallRequestT& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreateSipMediaApplicationCall, request, handler, context);
        }

        /**
         * <p>Creates a SIP rule, which can be used to run a SIP media application as a
         * target for a specific trigger type. For more information about SIP rules, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/ag/manage-sip-applications.html">Managing
         * SIP media applications and rules</a> in the <i>Amazon Chime SDK Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreateSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipRuleOutcome CreateSipRule(const Model::CreateSipRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSipRuleRequestT = Model::CreateSipRuleRequest>
        Model::CreateSipRuleOutcomeCallable CreateSipRuleCallable(const CreateSipRuleRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreateSipRule, request);
        }

        /**
         * An Async wrapper for CreateSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSipRuleRequestT = Model::CreateSipRuleRequest>
        void CreateSipRuleAsync(const CreateSipRuleRequestT& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreateSipRule, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Chime SDK Voice Connector. For more information about Voice
         * Connectors, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/ag/voice-connector-groups.html">Managing
         * Amazon Chime SDK Voice Connector groups</a> in the <i>Amazon Chime SDK
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreateVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceConnectorOutcome CreateVoiceConnector(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVoiceConnectorRequestT = Model::CreateVoiceConnectorRequest>
        Model::CreateVoiceConnectorOutcomeCallable CreateVoiceConnectorCallable(const CreateVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreateVoiceConnector, request);
        }

        /**
         * An Async wrapper for CreateVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVoiceConnectorRequestT = Model::CreateVoiceConnectorRequest>
        void CreateVoiceConnectorAsync(const CreateVoiceConnectorRequestT& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreateVoiceConnector, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Chime SDK Voice Connector group under the administrator's
         * AWS account. You can associate Amazon Chime SDK Voice Connectors with the Voice
         * Connector group by including <code>VoiceConnectorItems</code> in the request.
         * </p> <p>You can include Voice Connectors from different AWS Regions in your
         * group. This creates a fault tolerant mechanism for fallback in case of
         * availability events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceConnectorGroupOutcome CreateVoiceConnectorGroup(const Model::CreateVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVoiceConnectorGroupRequestT = Model::CreateVoiceConnectorGroupRequest>
        Model::CreateVoiceConnectorGroupOutcomeCallable CreateVoiceConnectorGroupCallable(const CreateVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreateVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for CreateVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVoiceConnectorGroupRequestT = Model::CreateVoiceConnectorGroupRequest>
        void CreateVoiceConnectorGroupAsync(const CreateVoiceConnectorGroupRequestT& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreateVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p>Creates a voice profile, which consists of an enrolled user and their latest
         * voice print.</p>  <p>Before creating any voice profiles, you must
         * provide all notices and obtain all consents from the speaker as required under
         * applicable privacy and biometrics laws, and as required under the <a
         * href="https://aws.amazon.com/service-terms/">AWS service terms</a> for the
         * Amazon Chime SDK.</p>  <p>For more information about voice profiles
         * and voice analytics, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/pstn-voice-analytics.html">Using
         * Amazon Chime SDK Voice Analytics</a> in the <i>Amazon Chime SDK Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreateVoiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceProfileOutcome CreateVoiceProfile(const Model::CreateVoiceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVoiceProfileRequestT = Model::CreateVoiceProfileRequest>
        Model::CreateVoiceProfileOutcomeCallable CreateVoiceProfileCallable(const CreateVoiceProfileRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreateVoiceProfile, request);
        }

        /**
         * An Async wrapper for CreateVoiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVoiceProfileRequestT = Model::CreateVoiceProfileRequest>
        void CreateVoiceProfileAsync(const CreateVoiceProfileRequestT& request, const CreateVoiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreateVoiceProfile, request, handler, context);
        }

        /**
         * <p>Creates a voice profile domain, a collection of voice profiles, their voice
         * prints, and encrypted enrollment audio.</p>  <p>Before creating any
         * voice profiles, you must provide all notices and obtain all consents from the
         * speaker as required under applicable privacy and biometrics laws, and as
         * required under the <a href="https://aws.amazon.com/service-terms/">AWS service
         * terms</a> for the Amazon Chime SDK.</p>  <p>For more information
         * about voice profile domains, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/pstn-voice-analytics.html">Using
         * Amazon Chime SDK Voice Analytics</a> in the <i>Amazon Chime SDK Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/CreateVoiceProfileDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceProfileDomainOutcome CreateVoiceProfileDomain(const Model::CreateVoiceProfileDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceProfileDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVoiceProfileDomainRequestT = Model::CreateVoiceProfileDomainRequest>
        Model::CreateVoiceProfileDomainOutcomeCallable CreateVoiceProfileDomainCallable(const CreateVoiceProfileDomainRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::CreateVoiceProfileDomain, request);
        }

        /**
         * An Async wrapper for CreateVoiceProfileDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVoiceProfileDomainRequestT = Model::CreateVoiceProfileDomainRequest>
        void CreateVoiceProfileDomainAsync(const CreateVoiceProfileDomainRequestT& request, const CreateVoiceProfileDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::CreateVoiceProfileDomain, request, handler, context);
        }

        /**
         * <p>Moves the specified phone number into the <b>Deletion queue</b>. A phone
         * number must be disassociated from any users or Amazon Chime SDK Voice Connectors
         * before it can be deleted.</p> <p>Deleted phone numbers remain in the <b>Deletion
         * queue</b> queue for 7 days before they are deleted permanently.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeletePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePhoneNumberOutcome DeletePhoneNumber(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for DeletePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePhoneNumberRequestT = Model::DeletePhoneNumberRequest>
        Model::DeletePhoneNumberOutcomeCallable DeletePhoneNumberCallable(const DeletePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeletePhoneNumber, request);
        }

        /**
         * An Async wrapper for DeletePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePhoneNumberRequestT = Model::DeletePhoneNumberRequest>
        void DeletePhoneNumberAsync(const DeletePhoneNumberRequestT& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeletePhoneNumber, request, handler, context);
        }

        /**
         * <p>Deletes the specified proxy session from the specified Amazon Chime SDK Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProxySessionOutcome DeleteProxySession(const Model::DeleteProxySessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProxySessionRequestT = Model::DeleteProxySessionRequest>
        Model::DeleteProxySessionOutcomeCallable DeleteProxySessionCallable(const DeleteProxySessionRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteProxySession, request);
        }

        /**
         * An Async wrapper for DeleteProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProxySessionRequestT = Model::DeleteProxySessionRequest>
        void DeleteProxySessionAsync(const DeleteProxySessionRequestT& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteProxySession, request, handler, context);
        }

        /**
         * <p>Deletes a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSipMediaApplicationOutcome DeleteSipMediaApplication(const Model::DeleteSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSipMediaApplicationRequestT = Model::DeleteSipMediaApplicationRequest>
        Model::DeleteSipMediaApplicationOutcomeCallable DeleteSipMediaApplicationCallable(const DeleteSipMediaApplicationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteSipMediaApplication, request);
        }

        /**
         * An Async wrapper for DeleteSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSipMediaApplicationRequestT = Model::DeleteSipMediaApplicationRequest>
        void DeleteSipMediaApplicationAsync(const DeleteSipMediaApplicationRequestT& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteSipMediaApplication, request, handler, context);
        }

        /**
         * <p>Deletes a SIP rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSipRuleOutcome DeleteSipRule(const Model::DeleteSipRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSipRuleRequestT = Model::DeleteSipRuleRequest>
        Model::DeleteSipRuleOutcomeCallable DeleteSipRuleCallable(const DeleteSipRuleRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteSipRule, request);
        }

        /**
         * An Async wrapper for DeleteSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSipRuleRequestT = Model::DeleteSipRuleRequest>
        void DeleteSipRuleAsync(const DeleteSipRuleRequestT& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteSipRule, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Chime SDK Voice Connector. Any phone numbers associated
         * with the Amazon Chime SDK Voice Connector must be disassociated from it before
         * it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorOutcome DeleteVoiceConnector(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorRequestT = Model::DeleteVoiceConnectorRequest>
        Model::DeleteVoiceConnectorOutcomeCallable DeleteVoiceConnectorCallable(const DeleteVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceConnector, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorRequestT = Model::DeleteVoiceConnectorRequest>
        void DeleteVoiceConnectorAsync(const DeleteVoiceConnectorRequestT& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceConnector, request, handler, context);
        }

        /**
         * <p>Deletes the emergency calling details from the specified Amazon Chime SDK
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcome DeleteVoiceConnectorEmergencyCallingConfiguration(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorEmergencyCallingConfigurationRequestT = Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest>
        Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable DeleteVoiceConnectorEmergencyCallingConfigurationCallable(const DeleteVoiceConnectorEmergencyCallingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceConnectorEmergencyCallingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorEmergencyCallingConfigurationRequestT = Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest>
        void DeleteVoiceConnectorEmergencyCallingConfigurationAsync(const DeleteVoiceConnectorEmergencyCallingConfigurationRequestT& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceConnectorEmergencyCallingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Chime SDK Voice Connector group. Any
         * <code>VoiceConnectorItems</code> and phone numbers associated with the group
         * must be removed before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorGroupOutcome DeleteVoiceConnectorGroup(const Model::DeleteVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorGroupRequestT = Model::DeleteVoiceConnectorGroupRequest>
        Model::DeleteVoiceConnectorGroupOutcomeCallable DeleteVoiceConnectorGroupCallable(const DeleteVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorGroupRequestT = Model::DeleteVoiceConnectorGroupRequest>
        void DeleteVoiceConnectorGroupAsync(const DeleteVoiceConnectorGroupRequestT& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p>Deletes the origination settings for the specified Amazon Chime SDK Voice
         * Connector. </p>  <p>If emergency calling is configured for the Voice
         * Connector, it must be deleted prior to deleting the origination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorOriginationOutcome DeleteVoiceConnectorOrigination(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorOriginationRequestT = Model::DeleteVoiceConnectorOriginationRequest>
        Model::DeleteVoiceConnectorOriginationOutcomeCallable DeleteVoiceConnectorOriginationCallable(const DeleteVoiceConnectorOriginationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceConnectorOrigination, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorOriginationRequestT = Model::DeleteVoiceConnectorOriginationRequest>
        void DeleteVoiceConnectorOriginationAsync(const DeleteVoiceConnectorOriginationRequestT& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceConnectorOrigination, request, handler, context);
        }

        /**
         * <p>Deletes the proxy configuration from the specified Amazon Chime SDK Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorProxyOutcome DeleteVoiceConnectorProxy(const Model::DeleteVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorProxyRequestT = Model::DeleteVoiceConnectorProxyRequest>
        Model::DeleteVoiceConnectorProxyOutcomeCallable DeleteVoiceConnectorProxyCallable(const DeleteVoiceConnectorProxyRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceConnectorProxy, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorProxyRequestT = Model::DeleteVoiceConnectorProxyRequest>
        void DeleteVoiceConnectorProxyAsync(const DeleteVoiceConnectorProxyRequestT& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceConnectorProxy, request, handler, context);
        }

        /**
         * <p>Deletes a Voice Connector's streaming configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorStreamingConfigurationOutcome DeleteVoiceConnectorStreamingConfiguration(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorStreamingConfigurationRequestT = Model::DeleteVoiceConnectorStreamingConfigurationRequest>
        Model::DeleteVoiceConnectorStreamingConfigurationOutcomeCallable DeleteVoiceConnectorStreamingConfigurationCallable(const DeleteVoiceConnectorStreamingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceConnectorStreamingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorStreamingConfigurationRequestT = Model::DeleteVoiceConnectorStreamingConfigurationRequest>
        void DeleteVoiceConnectorStreamingConfigurationAsync(const DeleteVoiceConnectorStreamingConfigurationRequestT& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceConnectorStreamingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the termination settings for the specified Amazon Chime SDK Voice
         * Connector.</p>  <p>If emergency calling is configured for the Voice
         * Connector, it must be deleted prior to deleting the termination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorTerminationOutcome DeleteVoiceConnectorTermination(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorTerminationRequestT = Model::DeleteVoiceConnectorTerminationRequest>
        Model::DeleteVoiceConnectorTerminationOutcomeCallable DeleteVoiceConnectorTerminationCallable(const DeleteVoiceConnectorTerminationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceConnectorTermination, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorTerminationRequestT = Model::DeleteVoiceConnectorTerminationRequest>
        void DeleteVoiceConnectorTerminationAsync(const DeleteVoiceConnectorTerminationRequestT& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceConnectorTermination, request, handler, context);
        }

        /**
         * <p>Deletes the specified SIP credentials used by your equipment to authenticate
         * during call termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcome DeleteVoiceConnectorTerminationCredentials(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceConnectorTerminationCredentialsRequestT = Model::DeleteVoiceConnectorTerminationCredentialsRequest>
        Model::DeleteVoiceConnectorTerminationCredentialsOutcomeCallable DeleteVoiceConnectorTerminationCredentialsCallable(const DeleteVoiceConnectorTerminationCredentialsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationCredentials, request);
        }

        /**
         * An Async wrapper for DeleteVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceConnectorTerminationCredentialsRequestT = Model::DeleteVoiceConnectorTerminationCredentialsRequest>
        void DeleteVoiceConnectorTerminationCredentialsAsync(const DeleteVoiceConnectorTerminationCredentialsRequestT& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceConnectorTerminationCredentials, request, handler, context);
        }

        /**
         * <p>Deletes a voice profile, including its voice print and enrollment data.
         * WARNING: This action is not reversible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceProfileOutcome DeleteVoiceProfile(const Model::DeleteVoiceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceProfileRequestT = Model::DeleteVoiceProfileRequest>
        Model::DeleteVoiceProfileOutcomeCallable DeleteVoiceProfileCallable(const DeleteVoiceProfileRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceProfile, request);
        }

        /**
         * An Async wrapper for DeleteVoiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceProfileRequestT = Model::DeleteVoiceProfileRequest>
        void DeleteVoiceProfileAsync(const DeleteVoiceProfileRequestT& request, const DeleteVoiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceProfile, request, handler, context);
        }

        /**
         * <p>Deletes all voice profiles in the domain. WARNING: This action is not
         * reversible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DeleteVoiceProfileDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceProfileDomainOutcome DeleteVoiceProfileDomain(const Model::DeleteVoiceProfileDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceProfileDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceProfileDomainRequestT = Model::DeleteVoiceProfileDomainRequest>
        Model::DeleteVoiceProfileDomainOutcomeCallable DeleteVoiceProfileDomainCallable(const DeleteVoiceProfileDomainRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DeleteVoiceProfileDomain, request);
        }

        /**
         * An Async wrapper for DeleteVoiceProfileDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceProfileDomainRequestT = Model::DeleteVoiceProfileDomainRequest>
        void DeleteVoiceProfileDomainAsync(const DeleteVoiceProfileDomainRequestT& request, const DeleteVoiceProfileDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DeleteVoiceProfileDomain, request, handler, context);
        }

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime SDK
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DisassociatePhoneNumbersFromVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcome DisassociatePhoneNumbersFromVoiceConnector(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumbersFromVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociatePhoneNumbersFromVoiceConnectorRequestT = Model::DisassociatePhoneNumbersFromVoiceConnectorRequest>
        Model::DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorCallable(const DisassociatePhoneNumbersFromVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnector, request);
        }

        /**
         * An Async wrapper for DisassociatePhoneNumbersFromVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePhoneNumbersFromVoiceConnectorRequestT = Model::DisassociatePhoneNumbersFromVoiceConnectorRequest>
        void DisassociatePhoneNumbersFromVoiceConnectorAsync(const DisassociatePhoneNumbersFromVoiceConnectorRequestT& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnector, request, handler, context);
        }

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime SDK
         * Voice Connector group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/DisassociatePhoneNumbersFromVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome DisassociatePhoneNumbersFromVoiceConnectorGroup(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumbersFromVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociatePhoneNumbersFromVoiceConnectorGroupRequestT = Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest>
        Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorGroupCallable(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for DisassociatePhoneNumbersFromVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePhoneNumbersFromVoiceConnectorGroupRequestT = Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest>
        void DisassociatePhoneNumbersFromVoiceConnectorGroupAsync(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequestT& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::DisassociatePhoneNumbersFromVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p>Retrieves the global settings for the Amazon Chime SDK Voice Connectors in an
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGlobalSettingsOutcome GetGlobalSettings(const Model::GetGlobalSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGlobalSettingsRequestT = Model::GetGlobalSettingsRequest>
        Model::GetGlobalSettingsOutcomeCallable GetGlobalSettingsCallable(const GetGlobalSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetGlobalSettings, request);
        }

        /**
         * An Async wrapper for GetGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGlobalSettingsRequestT = Model::GetGlobalSettingsRequest>
        void GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetGlobalSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetGlobalSettings, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified phone number ID, such as associations,
         * capabilities, and product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberOutcome GetPhoneNumber(const Model::GetPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for GetPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPhoneNumberRequestT = Model::GetPhoneNumberRequest>
        Model::GetPhoneNumberOutcomeCallable GetPhoneNumberCallable(const GetPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetPhoneNumber, request);
        }

        /**
         * An Async wrapper for GetPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPhoneNumberRequestT = Model::GetPhoneNumberRequest>
        void GetPhoneNumberAsync(const GetPhoneNumberRequestT& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetPhoneNumber, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified phone number order, such as the order
         * creation timestamp, phone numbers in E.164 format, product type, and order
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetPhoneNumberOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberOrderOutcome GetPhoneNumberOrder(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * A Callable wrapper for GetPhoneNumberOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPhoneNumberOrderRequestT = Model::GetPhoneNumberOrderRequest>
        Model::GetPhoneNumberOrderOutcomeCallable GetPhoneNumberOrderCallable(const GetPhoneNumberOrderRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetPhoneNumberOrder, request);
        }

        /**
         * An Async wrapper for GetPhoneNumberOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPhoneNumberOrderRequestT = Model::GetPhoneNumberOrderRequest>
        void GetPhoneNumberOrderAsync(const GetPhoneNumberOrderRequestT& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetPhoneNumberOrder, request, handler, context);
        }

        /**
         * <p>Retrieves the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetPhoneNumberSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberSettingsOutcome GetPhoneNumberSettings(const Model::GetPhoneNumberSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetPhoneNumberSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPhoneNumberSettingsRequestT = Model::GetPhoneNumberSettingsRequest>
        Model::GetPhoneNumberSettingsOutcomeCallable GetPhoneNumberSettingsCallable(const GetPhoneNumberSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetPhoneNumberSettings, request);
        }

        /**
         * An Async wrapper for GetPhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPhoneNumberSettingsRequestT = Model::GetPhoneNumberSettingsRequest>
        void GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetPhoneNumberSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetPhoneNumberSettings, request, handler, context);
        }

        /**
         * <p>Retrieves the specified proxy session details for the specified Amazon Chime
         * SDK Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProxySessionOutcome GetProxySession(const Model::GetProxySessionRequest& request) const;

        /**
         * A Callable wrapper for GetProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProxySessionRequestT = Model::GetProxySessionRequest>
        Model::GetProxySessionOutcomeCallable GetProxySessionCallable(const GetProxySessionRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetProxySession, request);
        }

        /**
         * An Async wrapper for GetProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProxySessionRequestT = Model::GetProxySessionRequest>
        void GetProxySessionAsync(const GetProxySessionRequestT& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetProxySession, request, handler, context);
        }

        /**
         * <p>Retrieves the information for a SIP media application, including name, AWS
         * Region, and endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipMediaApplicationOutcome GetSipMediaApplication(const Model::GetSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSipMediaApplicationRequestT = Model::GetSipMediaApplicationRequest>
        Model::GetSipMediaApplicationOutcomeCallable GetSipMediaApplicationCallable(const GetSipMediaApplicationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetSipMediaApplication, request);
        }

        /**
         * An Async wrapper for GetSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSipMediaApplicationRequestT = Model::GetSipMediaApplicationRequest>
        void GetSipMediaApplicationAsync(const GetSipMediaApplicationRequestT& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetSipMediaApplication, request, handler, context);
        }

        /**
         * <p>Gets the Alexa Skill configuration for the SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetSipMediaApplicationAlexaSkillConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipMediaApplicationAlexaSkillConfigurationOutcome GetSipMediaApplicationAlexaSkillConfiguration(const Model::GetSipMediaApplicationAlexaSkillConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetSipMediaApplicationAlexaSkillConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSipMediaApplicationAlexaSkillConfigurationRequestT = Model::GetSipMediaApplicationAlexaSkillConfigurationRequest>
        Model::GetSipMediaApplicationAlexaSkillConfigurationOutcomeCallable GetSipMediaApplicationAlexaSkillConfigurationCallable(const GetSipMediaApplicationAlexaSkillConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetSipMediaApplicationAlexaSkillConfiguration, request);
        }

        /**
         * An Async wrapper for GetSipMediaApplicationAlexaSkillConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSipMediaApplicationAlexaSkillConfigurationRequestT = Model::GetSipMediaApplicationAlexaSkillConfigurationRequest>
        void GetSipMediaApplicationAlexaSkillConfigurationAsync(const GetSipMediaApplicationAlexaSkillConfigurationRequestT& request, const GetSipMediaApplicationAlexaSkillConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetSipMediaApplicationAlexaSkillConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipMediaApplicationLoggingConfigurationOutcome GetSipMediaApplicationLoggingConfiguration(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetSipMediaApplicationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSipMediaApplicationLoggingConfigurationRequestT = Model::GetSipMediaApplicationLoggingConfigurationRequest>
        Model::GetSipMediaApplicationLoggingConfigurationOutcomeCallable GetSipMediaApplicationLoggingConfigurationCallable(const GetSipMediaApplicationLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetSipMediaApplicationLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for GetSipMediaApplicationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSipMediaApplicationLoggingConfigurationRequestT = Model::GetSipMediaApplicationLoggingConfigurationRequest>
        void GetSipMediaApplicationLoggingConfigurationAsync(const GetSipMediaApplicationLoggingConfigurationRequestT& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetSipMediaApplicationLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a SIP rule, such as the rule ID, name, triggers, and
         * target endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipRuleOutcome GetSipRule(const Model::GetSipRuleRequest& request) const;

        /**
         * A Callable wrapper for GetSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSipRuleRequestT = Model::GetSipRuleRequest>
        Model::GetSipRuleOutcomeCallable GetSipRuleCallable(const GetSipRuleRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetSipRule, request);
        }

        /**
         * An Async wrapper for GetSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSipRuleRequestT = Model::GetSipRuleRequest>
        void GetSipRuleAsync(const GetSipRuleRequestT& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetSipRule, request, handler, context);
        }

        /**
         * <p>Retrieves the details of the specified speaker search task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetSpeakerSearchTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSpeakerSearchTaskOutcome GetSpeakerSearchTask(const Model::GetSpeakerSearchTaskRequest& request) const;

        /**
         * A Callable wrapper for GetSpeakerSearchTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSpeakerSearchTaskRequestT = Model::GetSpeakerSearchTaskRequest>
        Model::GetSpeakerSearchTaskOutcomeCallable GetSpeakerSearchTaskCallable(const GetSpeakerSearchTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetSpeakerSearchTask, request);
        }

        /**
         * An Async wrapper for GetSpeakerSearchTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSpeakerSearchTaskRequestT = Model::GetSpeakerSearchTaskRequest>
        void GetSpeakerSearchTaskAsync(const GetSpeakerSearchTaskRequestT& request, const GetSpeakerSearchTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetSpeakerSearchTask, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified Amazon Chime SDK Voice Connector, such as
         * timestamps,name, outbound host, and encryption requirements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorOutcome GetVoiceConnector(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorRequestT = Model::GetVoiceConnectorRequest>
        Model::GetVoiceConnectorOutcomeCallable GetVoiceConnectorCallable(const GetVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnector, request);
        }

        /**
         * An Async wrapper for GetVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorRequestT = Model::GetVoiceConnectorRequest>
        void GetVoiceConnectorAsync(const GetVoiceConnectorRequestT& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnector, request, handler, context);
        }

        /**
         * <p>Retrieves the emergency calling configuration details for the specified Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorEmergencyCallingConfigurationOutcome GetVoiceConnectorEmergencyCallingConfiguration(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorEmergencyCallingConfigurationRequestT = Model::GetVoiceConnectorEmergencyCallingConfigurationRequest>
        Model::GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable GetVoiceConnectorEmergencyCallingConfigurationCallable(const GetVoiceConnectorEmergencyCallingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnectorEmergencyCallingConfiguration, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorEmergencyCallingConfigurationRequestT = Model::GetVoiceConnectorEmergencyCallingConfigurationRequest>
        void GetVoiceConnectorEmergencyCallingConfigurationAsync(const GetVoiceConnectorEmergencyCallingConfigurationRequestT& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnectorEmergencyCallingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves details for the specified Amazon Chime SDK Voice Connector group,
         * such as timestamps,name, and associated
         * <code>VoiceConnectorItems</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorGroupOutcome GetVoiceConnectorGroup(const Model::GetVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorGroupRequestT = Model::GetVoiceConnectorGroupRequest>
        Model::GetVoiceConnectorGroupOutcomeCallable GetVoiceConnectorGroupCallable(const GetVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorGroupRequestT = Model::GetVoiceConnectorGroupRequest>
        void GetVoiceConnectorGroupAsync(const GetVoiceConnectorGroupRequestT& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p>Retrieves the logging configuration settings for the specified Voice
         * Connector. Shows whether SIP message logs are enabled for sending to Amazon
         * CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorLoggingConfigurationOutcome GetVoiceConnectorLoggingConfiguration(const Model::GetVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorLoggingConfigurationRequestT = Model::GetVoiceConnectorLoggingConfigurationRequest>
        Model::GetVoiceConnectorLoggingConfigurationOutcomeCallable GetVoiceConnectorLoggingConfigurationCallable(const GetVoiceConnectorLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnectorLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorLoggingConfigurationRequestT = Model::GetVoiceConnectorLoggingConfigurationRequest>
        void GetVoiceConnectorLoggingConfigurationAsync(const GetVoiceConnectorLoggingConfigurationRequestT& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnectorLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the origination settings for the specified Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorOriginationOutcome GetVoiceConnectorOrigination(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorOriginationRequestT = Model::GetVoiceConnectorOriginationRequest>
        Model::GetVoiceConnectorOriginationOutcomeCallable GetVoiceConnectorOriginationCallable(const GetVoiceConnectorOriginationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnectorOrigination, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorOriginationRequestT = Model::GetVoiceConnectorOriginationRequest>
        void GetVoiceConnectorOriginationAsync(const GetVoiceConnectorOriginationRequestT& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnectorOrigination, request, handler, context);
        }

        /**
         * <p>Retrieves the proxy configuration details for the specified Amazon Chime SDK
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorProxyOutcome GetVoiceConnectorProxy(const Model::GetVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorProxyRequestT = Model::GetVoiceConnectorProxyRequest>
        Model::GetVoiceConnectorProxyOutcomeCallable GetVoiceConnectorProxyCallable(const GetVoiceConnectorProxyRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnectorProxy, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorProxyRequestT = Model::GetVoiceConnectorProxyRequest>
        void GetVoiceConnectorProxyAsync(const GetVoiceConnectorProxyRequestT& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnectorProxy, request, handler, context);
        }

        /**
         * <p>Retrieves the streaming configuration details for the specified Amazon Chime
         * SDK Voice Connector. Shows whether media streaming is enabled for sending to
         * Amazon Kinesis. It also shows the retention period, in hours, for the Amazon
         * Kinesis data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorStreamingConfigurationOutcome GetVoiceConnectorStreamingConfiguration(const Model::GetVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorStreamingConfigurationRequestT = Model::GetVoiceConnectorStreamingConfigurationRequest>
        Model::GetVoiceConnectorStreamingConfigurationOutcomeCallable GetVoiceConnectorStreamingConfigurationCallable(const GetVoiceConnectorStreamingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnectorStreamingConfiguration, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorStreamingConfigurationRequestT = Model::GetVoiceConnectorStreamingConfigurationRequest>
        void GetVoiceConnectorStreamingConfigurationAsync(const GetVoiceConnectorStreamingConfigurationRequestT& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnectorStreamingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the termination setting details for the specified Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorTerminationOutcome GetVoiceConnectorTermination(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorTerminationRequestT = Model::GetVoiceConnectorTerminationRequest>
        Model::GetVoiceConnectorTerminationOutcomeCallable GetVoiceConnectorTerminationCallable(const GetVoiceConnectorTerminationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnectorTermination, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorTerminationRequestT = Model::GetVoiceConnectorTerminationRequest>
        void GetVoiceConnectorTerminationAsync(const GetVoiceConnectorTerminationRequestT& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnectorTermination, request, handler, context);
        }

        /**
         * <p>Retrieves information about the last time a <code>SIP OPTIONS</code> ping was
         * received from your SIP infrastructure for the specified Amazon Chime SDK Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceConnectorTerminationHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorTerminationHealthOutcome GetVoiceConnectorTerminationHealth(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorTerminationHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceConnectorTerminationHealthRequestT = Model::GetVoiceConnectorTerminationHealthRequest>
        Model::GetVoiceConnectorTerminationHealthOutcomeCallable GetVoiceConnectorTerminationHealthCallable(const GetVoiceConnectorTerminationHealthRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceConnectorTerminationHealth, request);
        }

        /**
         * An Async wrapper for GetVoiceConnectorTerminationHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceConnectorTerminationHealthRequestT = Model::GetVoiceConnectorTerminationHealthRequest>
        void GetVoiceConnectorTerminationHealthAsync(const GetVoiceConnectorTerminationHealthRequestT& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceConnectorTerminationHealth, request, handler, context);
        }

        /**
         * <p>Retrieves the details of the specified voice profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceProfileOutcome GetVoiceProfile(const Model::GetVoiceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceProfileRequestT = Model::GetVoiceProfileRequest>
        Model::GetVoiceProfileOutcomeCallable GetVoiceProfileCallable(const GetVoiceProfileRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceProfile, request);
        }

        /**
         * An Async wrapper for GetVoiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceProfileRequestT = Model::GetVoiceProfileRequest>
        void GetVoiceProfileAsync(const GetVoiceProfileRequestT& request, const GetVoiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceProfile, request, handler, context);
        }

        /**
         * <p>Retrieves the details of the specified voice profile domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceProfileDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceProfileDomainOutcome GetVoiceProfileDomain(const Model::GetVoiceProfileDomainRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceProfileDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceProfileDomainRequestT = Model::GetVoiceProfileDomainRequest>
        Model::GetVoiceProfileDomainOutcomeCallable GetVoiceProfileDomainCallable(const GetVoiceProfileDomainRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceProfileDomain, request);
        }

        /**
         * An Async wrapper for GetVoiceProfileDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceProfileDomainRequestT = Model::GetVoiceProfileDomainRequest>
        void GetVoiceProfileDomainAsync(const GetVoiceProfileDomainRequestT& request, const GetVoiceProfileDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceProfileDomain, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a voice tone analysis task.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/GetVoiceToneAnalysisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceToneAnalysisTaskOutcome GetVoiceToneAnalysisTask(const Model::GetVoiceToneAnalysisTaskRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceToneAnalysisTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVoiceToneAnalysisTaskRequestT = Model::GetVoiceToneAnalysisTaskRequest>
        Model::GetVoiceToneAnalysisTaskOutcomeCallable GetVoiceToneAnalysisTaskCallable(const GetVoiceToneAnalysisTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetVoiceToneAnalysisTask, request);
        }

        /**
         * An Async wrapper for GetVoiceToneAnalysisTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVoiceToneAnalysisTaskRequestT = Model::GetVoiceToneAnalysisTaskRequest>
        void GetVoiceToneAnalysisTaskAsync(const GetVoiceToneAnalysisTaskRequestT& request, const GetVoiceToneAnalysisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetVoiceToneAnalysisTask, request, handler, context);
        }

        /**
         * <p>Lists the available AWS Regions in which you can create an Amazon Chime SDK
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListAvailableVoiceConnectorRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableVoiceConnectorRegionsOutcome ListAvailableVoiceConnectorRegions(const Model::ListAvailableVoiceConnectorRegionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAvailableVoiceConnectorRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAvailableVoiceConnectorRegionsRequestT = Model::ListAvailableVoiceConnectorRegionsRequest>
        Model::ListAvailableVoiceConnectorRegionsOutcomeCallable ListAvailableVoiceConnectorRegionsCallable(const ListAvailableVoiceConnectorRegionsRequestT& request = {}) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegions, request);
        }

        /**
         * An Async wrapper for ListAvailableVoiceConnectorRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAvailableVoiceConnectorRegionsRequestT = Model::ListAvailableVoiceConnectorRegionsRequest>
        void ListAvailableVoiceConnectorRegionsAsync(const ListAvailableVoiceConnectorRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAvailableVoiceConnectorRegionsRequestT& request = {}) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegions, request, handler, context);
        }

        /**
         * <p>Lists the phone numbers for an administrator's Amazon Chime SDK
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListPhoneNumberOrders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumberOrdersOutcome ListPhoneNumberOrders(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumberOrders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPhoneNumberOrdersRequestT = Model::ListPhoneNumberOrdersRequest>
        Model::ListPhoneNumberOrdersOutcomeCallable ListPhoneNumberOrdersCallable(const ListPhoneNumberOrdersRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListPhoneNumberOrders, request);
        }

        /**
         * An Async wrapper for ListPhoneNumberOrders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPhoneNumberOrdersRequestT = Model::ListPhoneNumberOrdersRequest>
        void ListPhoneNumberOrdersAsync(const ListPhoneNumberOrdersRequestT& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListPhoneNumberOrders, request, handler, context);
        }

        /**
         * <p>Lists the phone numbers for the specified Amazon Chime SDK account, Amazon
         * Chime SDK user, Amazon Chime SDK Voice Connector, or Amazon Chime SDK Voice
         * Connector group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPhoneNumbersRequestT = Model::ListPhoneNumbersRequest>
        Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const ListPhoneNumbersRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListPhoneNumbers, request);
        }

        /**
         * An Async wrapper for ListPhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPhoneNumbersRequestT = Model::ListPhoneNumbersRequest>
        void ListPhoneNumbersAsync(const ListPhoneNumbersRequestT& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListPhoneNumbers, request, handler, context);
        }

        /**
         * <p>Lists the proxy sessions for the specified Amazon Chime SDK Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListProxySessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProxySessionsOutcome ListProxySessions(const Model::ListProxySessionsRequest& request) const;

        /**
         * A Callable wrapper for ListProxySessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProxySessionsRequestT = Model::ListProxySessionsRequest>
        Model::ListProxySessionsOutcomeCallable ListProxySessionsCallable(const ListProxySessionsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListProxySessions, request);
        }

        /**
         * An Async wrapper for ListProxySessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProxySessionsRequestT = Model::ListProxySessionsRequest>
        void ListProxySessionsAsync(const ListProxySessionsRequestT& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListProxySessions, request, handler, context);
        }

        /**
         * <p>Lists the SIP media applications under the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListSipMediaApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSipMediaApplicationsOutcome ListSipMediaApplications(const Model::ListSipMediaApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListSipMediaApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSipMediaApplicationsRequestT = Model::ListSipMediaApplicationsRequest>
        Model::ListSipMediaApplicationsOutcomeCallable ListSipMediaApplicationsCallable(const ListSipMediaApplicationsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListSipMediaApplications, request);
        }

        /**
         * An Async wrapper for ListSipMediaApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSipMediaApplicationsRequestT = Model::ListSipMediaApplicationsRequest>
        void ListSipMediaApplicationsAsync(const ListSipMediaApplicationsRequestT& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListSipMediaApplications, request, handler, context);
        }

        /**
         * <p>Lists the SIP rules under the administrator's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListSipRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSipRulesOutcome ListSipRules(const Model::ListSipRulesRequest& request) const;

        /**
         * A Callable wrapper for ListSipRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSipRulesRequestT = Model::ListSipRulesRequest>
        Model::ListSipRulesOutcomeCallable ListSipRulesCallable(const ListSipRulesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListSipRules, request);
        }

        /**
         * An Async wrapper for ListSipRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSipRulesRequestT = Model::ListSipRulesRequest>
        void ListSipRulesAsync(const ListSipRulesRequestT& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListSipRules, request, handler, context);
        }

        /**
         * <p>Lists the countries that you can order phone numbers from.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListSupportedPhoneNumberCountries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSupportedPhoneNumberCountriesOutcome ListSupportedPhoneNumberCountries(const Model::ListSupportedPhoneNumberCountriesRequest& request) const;

        /**
         * A Callable wrapper for ListSupportedPhoneNumberCountries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSupportedPhoneNumberCountriesRequestT = Model::ListSupportedPhoneNumberCountriesRequest>
        Model::ListSupportedPhoneNumberCountriesOutcomeCallable ListSupportedPhoneNumberCountriesCallable(const ListSupportedPhoneNumberCountriesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListSupportedPhoneNumberCountries, request);
        }

        /**
         * An Async wrapper for ListSupportedPhoneNumberCountries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSupportedPhoneNumberCountriesRequestT = Model::ListSupportedPhoneNumberCountriesRequest>
        void ListSupportedPhoneNumberCountriesAsync(const ListSupportedPhoneNumberCountriesRequestT& request, const ListSupportedPhoneNumberCountriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListSupportedPhoneNumberCountries, request, handler, context);
        }

        /**
         * <p>Returns a list of the tags in a given resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Chime SDK Voice Connector groups in the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListVoiceConnectorGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorGroupsOutcome ListVoiceConnectorGroups(const Model::ListVoiceConnectorGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectorGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVoiceConnectorGroupsRequestT = Model::ListVoiceConnectorGroupsRequest>
        Model::ListVoiceConnectorGroupsOutcomeCallable ListVoiceConnectorGroupsCallable(const ListVoiceConnectorGroupsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListVoiceConnectorGroups, request);
        }

        /**
         * An Async wrapper for ListVoiceConnectorGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVoiceConnectorGroupsRequestT = Model::ListVoiceConnectorGroupsRequest>
        void ListVoiceConnectorGroupsAsync(const ListVoiceConnectorGroupsRequestT& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListVoiceConnectorGroups, request, handler, context);
        }

        /**
         * <p>Lists the SIP credentials for the specified Amazon Chime SDK Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcome ListVoiceConnectorTerminationCredentials(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVoiceConnectorTerminationCredentialsRequestT = Model::ListVoiceConnectorTerminationCredentialsRequest>
        Model::ListVoiceConnectorTerminationCredentialsOutcomeCallable ListVoiceConnectorTerminationCredentialsCallable(const ListVoiceConnectorTerminationCredentialsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListVoiceConnectorTerminationCredentials, request);
        }

        /**
         * An Async wrapper for ListVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVoiceConnectorTerminationCredentialsRequestT = Model::ListVoiceConnectorTerminationCredentialsRequest>
        void ListVoiceConnectorTerminationCredentialsAsync(const ListVoiceConnectorTerminationCredentialsRequestT& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListVoiceConnectorTerminationCredentials, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Chime SDK Voice Connectors in the administrators AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListVoiceConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorsOutcome ListVoiceConnectors(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVoiceConnectorsRequestT = Model::ListVoiceConnectorsRequest>
        Model::ListVoiceConnectorsOutcomeCallable ListVoiceConnectorsCallable(const ListVoiceConnectorsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListVoiceConnectors, request);
        }

        /**
         * An Async wrapper for ListVoiceConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVoiceConnectorsRequestT = Model::ListVoiceConnectorsRequest>
        void ListVoiceConnectorsAsync(const ListVoiceConnectorsRequestT& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListVoiceConnectors, request, handler, context);
        }

        /**
         * <p>Lists the specified voice profile domains in the administrator's AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListVoiceProfileDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceProfileDomainsOutcome ListVoiceProfileDomains(const Model::ListVoiceProfileDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceProfileDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVoiceProfileDomainsRequestT = Model::ListVoiceProfileDomainsRequest>
        Model::ListVoiceProfileDomainsOutcomeCallable ListVoiceProfileDomainsCallable(const ListVoiceProfileDomainsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListVoiceProfileDomains, request);
        }

        /**
         * An Async wrapper for ListVoiceProfileDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVoiceProfileDomainsRequestT = Model::ListVoiceProfileDomainsRequest>
        void ListVoiceProfileDomainsAsync(const ListVoiceProfileDomainsRequestT& request, const ListVoiceProfileDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListVoiceProfileDomains, request, handler, context);
        }

        /**
         * <p>Lists the voice profiles in a voice profile domain.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ListVoiceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceProfilesOutcome ListVoiceProfiles(const Model::ListVoiceProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVoiceProfilesRequestT = Model::ListVoiceProfilesRequest>
        Model::ListVoiceProfilesOutcomeCallable ListVoiceProfilesCallable(const ListVoiceProfilesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListVoiceProfiles, request);
        }

        /**
         * An Async wrapper for ListVoiceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVoiceProfilesRequestT = Model::ListVoiceProfilesRequest>
        void ListVoiceProfilesAsync(const ListVoiceProfilesRequestT& request, const ListVoiceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListVoiceProfiles, request, handler, context);
        }

        /**
         * <p>Updates the Alexa Skill configuration for the SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutSipMediaApplicationAlexaSkillConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSipMediaApplicationAlexaSkillConfigurationOutcome PutSipMediaApplicationAlexaSkillConfiguration(const Model::PutSipMediaApplicationAlexaSkillConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutSipMediaApplicationAlexaSkillConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSipMediaApplicationAlexaSkillConfigurationRequestT = Model::PutSipMediaApplicationAlexaSkillConfigurationRequest>
        Model::PutSipMediaApplicationAlexaSkillConfigurationOutcomeCallable PutSipMediaApplicationAlexaSkillConfigurationCallable(const PutSipMediaApplicationAlexaSkillConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutSipMediaApplicationAlexaSkillConfiguration, request);
        }

        /**
         * An Async wrapper for PutSipMediaApplicationAlexaSkillConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSipMediaApplicationAlexaSkillConfigurationRequestT = Model::PutSipMediaApplicationAlexaSkillConfigurationRequest>
        void PutSipMediaApplicationAlexaSkillConfigurationAsync(const PutSipMediaApplicationAlexaSkillConfigurationRequestT& request, const PutSipMediaApplicationAlexaSkillConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutSipMediaApplicationAlexaSkillConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSipMediaApplicationLoggingConfigurationOutcome PutSipMediaApplicationLoggingConfiguration(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutSipMediaApplicationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSipMediaApplicationLoggingConfigurationRequestT = Model::PutSipMediaApplicationLoggingConfigurationRequest>
        Model::PutSipMediaApplicationLoggingConfigurationOutcomeCallable PutSipMediaApplicationLoggingConfigurationCallable(const PutSipMediaApplicationLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutSipMediaApplicationLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for PutSipMediaApplicationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSipMediaApplicationLoggingConfigurationRequestT = Model::PutSipMediaApplicationLoggingConfigurationRequest>
        void PutSipMediaApplicationLoggingConfigurationAsync(const PutSipMediaApplicationLoggingConfigurationRequestT& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutSipMediaApplicationLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates a Voice Connector's emergency calling configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorEmergencyCallingConfigurationOutcome PutVoiceConnectorEmergencyCallingConfiguration(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorEmergencyCallingConfigurationRequestT = Model::PutVoiceConnectorEmergencyCallingConfigurationRequest>
        Model::PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable PutVoiceConnectorEmergencyCallingConfigurationCallable(const PutVoiceConnectorEmergencyCallingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutVoiceConnectorEmergencyCallingConfiguration, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorEmergencyCallingConfigurationRequestT = Model::PutVoiceConnectorEmergencyCallingConfigurationRequest>
        void PutVoiceConnectorEmergencyCallingConfigurationAsync(const PutVoiceConnectorEmergencyCallingConfigurationRequestT& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutVoiceConnectorEmergencyCallingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates a Voice Connector's logging configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorLoggingConfigurationOutcome PutVoiceConnectorLoggingConfiguration(const Model::PutVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorLoggingConfigurationRequestT = Model::PutVoiceConnectorLoggingConfigurationRequest>
        Model::PutVoiceConnectorLoggingConfigurationOutcomeCallable PutVoiceConnectorLoggingConfigurationCallable(const PutVoiceConnectorLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutVoiceConnectorLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorLoggingConfigurationRequestT = Model::PutVoiceConnectorLoggingConfigurationRequest>
        void PutVoiceConnectorLoggingConfigurationAsync(const PutVoiceConnectorLoggingConfigurationRequestT& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutVoiceConnectorLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates a Voice Connector's origination settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorOriginationOutcome PutVoiceConnectorOrigination(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorOriginationRequestT = Model::PutVoiceConnectorOriginationRequest>
        Model::PutVoiceConnectorOriginationOutcomeCallable PutVoiceConnectorOriginationCallable(const PutVoiceConnectorOriginationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutVoiceConnectorOrigination, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorOriginationRequestT = Model::PutVoiceConnectorOriginationRequest>
        void PutVoiceConnectorOriginationAsync(const PutVoiceConnectorOriginationRequestT& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutVoiceConnectorOrigination, request, handler, context);
        }

        /**
         * <p>Puts the specified proxy configuration to the specified Amazon Chime SDK
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorProxyOutcome PutVoiceConnectorProxy(const Model::PutVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorProxyRequestT = Model::PutVoiceConnectorProxyRequest>
        Model::PutVoiceConnectorProxyOutcomeCallable PutVoiceConnectorProxyCallable(const PutVoiceConnectorProxyRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutVoiceConnectorProxy, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorProxyRequestT = Model::PutVoiceConnectorProxyRequest>
        void PutVoiceConnectorProxyAsync(const PutVoiceConnectorProxyRequestT& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutVoiceConnectorProxy, request, handler, context);
        }

        /**
         * <p>Updates a Voice Connector's streaming configuration settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorStreamingConfigurationOutcome PutVoiceConnectorStreamingConfiguration(const Model::PutVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorStreamingConfigurationRequestT = Model::PutVoiceConnectorStreamingConfigurationRequest>
        Model::PutVoiceConnectorStreamingConfigurationOutcomeCallable PutVoiceConnectorStreamingConfigurationCallable(const PutVoiceConnectorStreamingConfigurationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutVoiceConnectorStreamingConfiguration, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorStreamingConfigurationRequestT = Model::PutVoiceConnectorStreamingConfigurationRequest>
        void PutVoiceConnectorStreamingConfigurationAsync(const PutVoiceConnectorStreamingConfigurationRequestT& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutVoiceConnectorStreamingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates a Voice Connector's termination settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorTerminationOutcome PutVoiceConnectorTermination(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorTerminationRequestT = Model::PutVoiceConnectorTerminationRequest>
        Model::PutVoiceConnectorTerminationOutcomeCallable PutVoiceConnectorTerminationCallable(const PutVoiceConnectorTerminationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutVoiceConnectorTermination, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorTerminationRequestT = Model::PutVoiceConnectorTerminationRequest>
        void PutVoiceConnectorTerminationAsync(const PutVoiceConnectorTerminationRequestT& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutVoiceConnectorTermination, request, handler, context);
        }

        /**
         * <p>Updates a Voice Connector's termination credentials.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/PutVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcome PutVoiceConnectorTerminationCredentials(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutVoiceConnectorTerminationCredentialsRequestT = Model::PutVoiceConnectorTerminationCredentialsRequest>
        Model::PutVoiceConnectorTerminationCredentialsOutcomeCallable PutVoiceConnectorTerminationCredentialsCallable(const PutVoiceConnectorTerminationCredentialsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::PutVoiceConnectorTerminationCredentials, request);
        }

        /**
         * An Async wrapper for PutVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVoiceConnectorTerminationCredentialsRequestT = Model::PutVoiceConnectorTerminationCredentialsRequest>
        void PutVoiceConnectorTerminationCredentialsAsync(const PutVoiceConnectorTerminationCredentialsRequestT& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::PutVoiceConnectorTerminationCredentials, request, handler, context);
        }

        /**
         * <p>Restores a deleted phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/RestorePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::RestorePhoneNumberOutcome RestorePhoneNumber(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for RestorePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestorePhoneNumberRequestT = Model::RestorePhoneNumberRequest>
        Model::RestorePhoneNumberOutcomeCallable RestorePhoneNumberCallable(const RestorePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::RestorePhoneNumber, request);
        }

        /**
         * An Async wrapper for RestorePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestorePhoneNumberRequestT = Model::RestorePhoneNumberRequest>
        void RestorePhoneNumberAsync(const RestorePhoneNumberRequestT& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::RestorePhoneNumber, request, handler, context);
        }

        /**
         * <p>Searches the provisioned phone numbers in an organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAvailablePhoneNumbersOutcome SearchAvailablePhoneNumbers(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for SearchAvailablePhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchAvailablePhoneNumbersRequestT = Model::SearchAvailablePhoneNumbersRequest>
        Model::SearchAvailablePhoneNumbersOutcomeCallable SearchAvailablePhoneNumbersCallable(const SearchAvailablePhoneNumbersRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::SearchAvailablePhoneNumbers, request);
        }

        /**
         * An Async wrapper for SearchAvailablePhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchAvailablePhoneNumbersRequestT = Model::SearchAvailablePhoneNumbersRequest>
        void SearchAvailablePhoneNumbersAsync(const SearchAvailablePhoneNumbersRequestT& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::SearchAvailablePhoneNumbers, request, handler, context);
        }

        /**
         * <p>Starts a speaker search task.</p>  <p>Before starting any speaker
         * search tasks, you must provide all notices and obtain all consents from the
         * speaker as required under applicable privacy and biometrics laws, and as
         * required under the <a href="https://aws.amazon.com/service-terms/">AWS service
         * terms</a> for the Amazon Chime SDK.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/StartSpeakerSearchTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSpeakerSearchTaskOutcome StartSpeakerSearchTask(const Model::StartSpeakerSearchTaskRequest& request) const;

        /**
         * A Callable wrapper for StartSpeakerSearchTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSpeakerSearchTaskRequestT = Model::StartSpeakerSearchTaskRequest>
        Model::StartSpeakerSearchTaskOutcomeCallable StartSpeakerSearchTaskCallable(const StartSpeakerSearchTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::StartSpeakerSearchTask, request);
        }

        /**
         * An Async wrapper for StartSpeakerSearchTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSpeakerSearchTaskRequestT = Model::StartSpeakerSearchTaskRequest>
        void StartSpeakerSearchTaskAsync(const StartSpeakerSearchTaskRequestT& request, const StartSpeakerSearchTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::StartSpeakerSearchTask, request, handler, context);
        }

        /**
         * <p>Starts a voice tone analysis task. For more information about voice tone
         * analysis, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/pstn-voice-analytics.html">Using
         * Amazon Chime SDK voice analytics</a> in the <i>Amazon Chime SDK Developer
         * Guide</i>.</p>  <p>Before starting any voice tone analysis tasks, you
         * must provide all notices and obtain all consents from the speaker as required
         * under applicable privacy and biometrics laws, and as required under the <a
         * href="https://aws.amazon.com/service-terms/">AWS service terms</a> for the
         * Amazon Chime SDK.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/StartVoiceToneAnalysisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartVoiceToneAnalysisTaskOutcome StartVoiceToneAnalysisTask(const Model::StartVoiceToneAnalysisTaskRequest& request) const;

        /**
         * A Callable wrapper for StartVoiceToneAnalysisTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartVoiceToneAnalysisTaskRequestT = Model::StartVoiceToneAnalysisTaskRequest>
        Model::StartVoiceToneAnalysisTaskOutcomeCallable StartVoiceToneAnalysisTaskCallable(const StartVoiceToneAnalysisTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::StartVoiceToneAnalysisTask, request);
        }

        /**
         * An Async wrapper for StartVoiceToneAnalysisTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartVoiceToneAnalysisTaskRequestT = Model::StartVoiceToneAnalysisTaskRequest>
        void StartVoiceToneAnalysisTaskAsync(const StartVoiceToneAnalysisTaskRequestT& request, const StartVoiceToneAnalysisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::StartVoiceToneAnalysisTask, request, handler, context);
        }

        /**
         * <p>Stops a speaker search task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/StopSpeakerSearchTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSpeakerSearchTaskOutcome StopSpeakerSearchTask(const Model::StopSpeakerSearchTaskRequest& request) const;

        /**
         * A Callable wrapper for StopSpeakerSearchTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopSpeakerSearchTaskRequestT = Model::StopSpeakerSearchTaskRequest>
        Model::StopSpeakerSearchTaskOutcomeCallable StopSpeakerSearchTaskCallable(const StopSpeakerSearchTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::StopSpeakerSearchTask, request);
        }

        /**
         * An Async wrapper for StopSpeakerSearchTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSpeakerSearchTaskRequestT = Model::StopSpeakerSearchTaskRequest>
        void StopSpeakerSearchTaskAsync(const StopSpeakerSearchTaskRequestT& request, const StopSpeakerSearchTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::StopSpeakerSearchTask, request, handler, context);
        }

        /**
         * <p>Stops a voice tone analysis task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/StopVoiceToneAnalysisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopVoiceToneAnalysisTaskOutcome StopVoiceToneAnalysisTask(const Model::StopVoiceToneAnalysisTaskRequest& request) const;

        /**
         * A Callable wrapper for StopVoiceToneAnalysisTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopVoiceToneAnalysisTaskRequestT = Model::StopVoiceToneAnalysisTaskRequest>
        Model::StopVoiceToneAnalysisTaskOutcomeCallable StopVoiceToneAnalysisTaskCallable(const StopVoiceToneAnalysisTaskRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::StopVoiceToneAnalysisTask, request);
        }

        /**
         * An Async wrapper for StopVoiceToneAnalysisTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopVoiceToneAnalysisTaskRequestT = Model::StopVoiceToneAnalysisTaskRequest>
        void StopVoiceToneAnalysisTaskAsync(const StopVoiceToneAnalysisTaskRequestT& request, const StopVoiceToneAnalysisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::StopVoiceToneAnalysisTask, request, handler, context);
        }

        /**
         * <p>Adds a tag to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates global settings for the Amazon Chime SDK Voice Connectors in an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalSettingsOutcome UpdateGlobalSettings(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGlobalSettingsRequestT = Model::UpdateGlobalSettingsRequest>
        Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateGlobalSettings, request);
        }

        /**
         * An Async wrapper for UpdateGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGlobalSettingsRequestT = Model::UpdateGlobalSettingsRequest>
        void UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequestT& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateGlobalSettings, request, handler, context);
        }

        /**
         * <p>Updates phone number details, such as product type or calling name, for the
         * specified phone number ID. You can update one phone number detail at a time. For
         * example, you can update either the product type or the calling name in one
         * action.</p> <p>For numbers outside the U.S., you must use the Amazon Chime SDK
         * SIP Media Application Dial-In product type.</p> <p>Updates to outbound calling
         * names can take 72 hours to complete. Pending updates to outbound calling names
         * must be complete before you can request another update.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePhoneNumberRequestT = Model::UpdatePhoneNumberRequest>
        Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const UpdatePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdatePhoneNumber, request);
        }

        /**
         * An Async wrapper for UpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePhoneNumberRequestT = Model::UpdatePhoneNumberRequest>
        void UpdatePhoneNumberAsync(const UpdatePhoneNumberRequestT& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdatePhoneNumber, request, handler, context);
        }

        /**
         * <p>Updates the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name. You can update the default outbound
         * calling name once every seven days. Outbound calling names can take up to 72
         * hours to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdatePhoneNumberSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberSettingsOutcome UpdatePhoneNumberSettings(const Model::UpdatePhoneNumberSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumberSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePhoneNumberSettingsRequestT = Model::UpdatePhoneNumberSettingsRequest>
        Model::UpdatePhoneNumberSettingsOutcomeCallable UpdatePhoneNumberSettingsCallable(const UpdatePhoneNumberSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdatePhoneNumberSettings, request);
        }

        /**
         * An Async wrapper for UpdatePhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePhoneNumberSettingsRequestT = Model::UpdatePhoneNumberSettingsRequest>
        void UpdatePhoneNumberSettingsAsync(const UpdatePhoneNumberSettingsRequestT& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdatePhoneNumberSettings, request, handler, context);
        }

        /**
         * <p>Updates the specified proxy session details, such as voice or SMS
         * capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProxySessionOutcome UpdateProxySession(const Model::UpdateProxySessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProxySessionRequestT = Model::UpdateProxySessionRequest>
        Model::UpdateProxySessionOutcomeCallable UpdateProxySessionCallable(const UpdateProxySessionRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateProxySession, request);
        }

        /**
         * An Async wrapper for UpdateProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProxySessionRequestT = Model::UpdateProxySessionRequest>
        void UpdateProxySessionAsync(const UpdateProxySessionRequestT& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateProxySession, request, handler, context);
        }

        /**
         * <p>Updates the details of the specified SIP media application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipMediaApplicationOutcome UpdateSipMediaApplication(const Model::UpdateSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSipMediaApplicationRequestT = Model::UpdateSipMediaApplicationRequest>
        Model::UpdateSipMediaApplicationOutcomeCallable UpdateSipMediaApplicationCallable(const UpdateSipMediaApplicationRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateSipMediaApplication, request);
        }

        /**
         * An Async wrapper for UpdateSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSipMediaApplicationRequestT = Model::UpdateSipMediaApplicationRequest>
        void UpdateSipMediaApplicationAsync(const UpdateSipMediaApplicationRequestT& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateSipMediaApplication, request, handler, context);
        }

        /**
         * <p>Invokes the AWS Lambda function associated with the SIP media application and
         * transaction ID in an update request. The Lambda function can then return a new
         * set of actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateSipMediaApplicationCall">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipMediaApplicationCallOutcome UpdateSipMediaApplicationCall(const Model::UpdateSipMediaApplicationCallRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipMediaApplicationCall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSipMediaApplicationCallRequestT = Model::UpdateSipMediaApplicationCallRequest>
        Model::UpdateSipMediaApplicationCallOutcomeCallable UpdateSipMediaApplicationCallCallable(const UpdateSipMediaApplicationCallRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateSipMediaApplicationCall, request);
        }

        /**
         * An Async wrapper for UpdateSipMediaApplicationCall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSipMediaApplicationCallRequestT = Model::UpdateSipMediaApplicationCallRequest>
        void UpdateSipMediaApplicationCallAsync(const UpdateSipMediaApplicationCallRequestT& request, const UpdateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateSipMediaApplicationCall, request, handler, context);
        }

        /**
         * <p>Updates the details of the specified SIP rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipRuleOutcome UpdateSipRule(const Model::UpdateSipRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSipRuleRequestT = Model::UpdateSipRuleRequest>
        Model::UpdateSipRuleOutcomeCallable UpdateSipRuleCallable(const UpdateSipRuleRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateSipRule, request);
        }

        /**
         * An Async wrapper for UpdateSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSipRuleRequestT = Model::UpdateSipRuleRequest>
        void UpdateSipRuleAsync(const UpdateSipRuleRequestT& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateSipRule, request, handler, context);
        }

        /**
         * <p>Updates the details for the specified Amazon Chime SDK Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceConnectorOutcome UpdateVoiceConnector(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVoiceConnectorRequestT = Model::UpdateVoiceConnectorRequest>
        Model::UpdateVoiceConnectorOutcomeCallable UpdateVoiceConnectorCallable(const UpdateVoiceConnectorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateVoiceConnector, request);
        }

        /**
         * An Async wrapper for UpdateVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVoiceConnectorRequestT = Model::UpdateVoiceConnectorRequest>
        void UpdateVoiceConnectorAsync(const UpdateVoiceConnectorRequestT& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateVoiceConnector, request, handler, context);
        }

        /**
         * <p>Updates the settings for the specified Amazon Chime SDK Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceConnectorGroupOutcome UpdateVoiceConnectorGroup(const Model::UpdateVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVoiceConnectorGroupRequestT = Model::UpdateVoiceConnectorGroupRequest>
        Model::UpdateVoiceConnectorGroupOutcomeCallable UpdateVoiceConnectorGroupCallable(const UpdateVoiceConnectorGroupRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateVoiceConnectorGroup, request);
        }

        /**
         * An Async wrapper for UpdateVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVoiceConnectorGroupRequestT = Model::UpdateVoiceConnectorGroupRequest>
        void UpdateVoiceConnectorGroupAsync(const UpdateVoiceConnectorGroupRequestT& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateVoiceConnectorGroup, request, handler, context);
        }

        /**
         * <p>Updates the specified voice profile’s voice print and refreshes its
         * expiration timestamp.</p>  <p>As a condition of using this feature,
         * you acknowledge that the collection, use, storage, and retention of your
         * caller’s biometric identifiers and biometric information (“biometric data”) in
         * the form of a digital voiceprint requires the caller’s informed consent via a
         * written release. Such consent is required under various state laws, including
         * biometrics laws in Illinois, Texas, Washington and other state privacy laws.</p>
         * <p>You must provide a written release to each caller through a process that
         * clearly reflects each caller��s informed consent before using Amazon Chime SDK
         * Voice Insights service, as required under the terms of your agreement with AWS
         * governing your use of the service.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateVoiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceProfileOutcome UpdateVoiceProfile(const Model::UpdateVoiceProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVoiceProfileRequestT = Model::UpdateVoiceProfileRequest>
        Model::UpdateVoiceProfileOutcomeCallable UpdateVoiceProfileCallable(const UpdateVoiceProfileRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateVoiceProfile, request);
        }

        /**
         * An Async wrapper for UpdateVoiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVoiceProfileRequestT = Model::UpdateVoiceProfileRequest>
        void UpdateVoiceProfileAsync(const UpdateVoiceProfileRequestT& request, const UpdateVoiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateVoiceProfile, request, handler, context);
        }

        /**
         * <p>Updates the settings for the specified voice profile domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/UpdateVoiceProfileDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceProfileDomainOutcome UpdateVoiceProfileDomain(const Model::UpdateVoiceProfileDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceProfileDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVoiceProfileDomainRequestT = Model::UpdateVoiceProfileDomainRequest>
        Model::UpdateVoiceProfileDomainOutcomeCallable UpdateVoiceProfileDomainCallable(const UpdateVoiceProfileDomainRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::UpdateVoiceProfileDomain, request);
        }

        /**
         * An Async wrapper for UpdateVoiceProfileDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVoiceProfileDomainRequestT = Model::UpdateVoiceProfileDomainRequest>
        void UpdateVoiceProfileDomainAsync(const UpdateVoiceProfileDomainRequestT& request, const UpdateVoiceProfileDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::UpdateVoiceProfileDomain, request, handler, context);
        }

        /**
         * <p>Validates an address to be used for 911 calls made with Amazon Chime SDK
         * Voice Connectors. You can use validated addresses in a Presence Information Data
         * Format Location Object file that you include in SIP requests. That helps ensure
         * that addresses are routed to the appropriate Public Safety Answering
         * Point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/ValidateE911Address">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateE911AddressOutcome ValidateE911Address(const Model::ValidateE911AddressRequest& request) const;

        /**
         * A Callable wrapper for ValidateE911Address that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidateE911AddressRequestT = Model::ValidateE911AddressRequest>
        Model::ValidateE911AddressOutcomeCallable ValidateE911AddressCallable(const ValidateE911AddressRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ValidateE911Address, request);
        }

        /**
         * An Async wrapper for ValidateE911Address that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateE911AddressRequestT = Model::ValidateE911AddressRequest>
        void ValidateE911AddressAsync(const ValidateE911AddressRequestT& request, const ValidateE911AddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ValidateE911Address, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ChimeSDKVoiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKVoiceClient>;
      void init(const ChimeSDKVoiceClientConfiguration& clientConfiguration);

      ChimeSDKVoiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ChimeSDKVoice
} // namespace Aws
