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

namespace Aws
{
namespace ChimeSDKVoice
{
  class AWS_CHIMESDKVOICE_API ChimeSDKVoiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKVoiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKVoiceClient(const Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration = Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration(),
                            std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKVoiceClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG),
                            const Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration& clientConfiguration = Aws::ChimeSDKVoice::ChimeSDKVoiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKVoiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ChimeSDKVoiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ChimeSDKVoiceEndpointProvider>(ALLOCATION_TAG),
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
         */
        virtual Model::GetGlobalSettingsOutcome GetGlobalSettings() const;

        /**
         * A Callable wrapper for GetGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename = void>
        Model::GetGlobalSettingsOutcomeCallable GetGlobalSettingsCallable() const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetGlobalSettings);
        }

        /**
         * An Async wrapper for GetGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename = void>
        void GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetGlobalSettings, handler, context);
        }
        /**
         * 
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
         * 
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
         * 
         */
        virtual Model::GetPhoneNumberSettingsOutcome GetPhoneNumberSettings() const;

        /**
         * A Callable wrapper for GetPhoneNumberSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename = void>
        Model::GetPhoneNumberSettingsOutcomeCallable GetPhoneNumberSettingsCallable() const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::GetPhoneNumberSettings);
        }

        /**
         * An Async wrapper for GetPhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename = void>
        void GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::GetPhoneNumberSettings, handler, context);
        }
        /**
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
         */
        virtual Model::ListAvailableVoiceConnectorRegionsOutcome ListAvailableVoiceConnectorRegions() const;

        /**
         * A Callable wrapper for ListAvailableVoiceConnectorRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename = void>
        Model::ListAvailableVoiceConnectorRegionsOutcomeCallable ListAvailableVoiceConnectorRegionsCallable() const
        {
            return SubmitCallable(&ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegions);
        }

        /**
         * An Async wrapper for ListAvailableVoiceConnectorRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename = void>
        void ListAvailableVoiceConnectorRegionsAsync(const ListAvailableVoiceConnectorRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKVoiceClient::ListAvailableVoiceConnectorRegions, handler, context);
        }
        /**
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
         * 
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
