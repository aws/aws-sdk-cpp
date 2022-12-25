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
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorCallable(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for AssociatePhoneNumbersWithVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumbersWithVoiceConnectorAsync(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcome AssociatePhoneNumbersWithVoiceConnectorGroup(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociatePhoneNumbersWithVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorGroupCallable(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for AssociatePhoneNumbersWithVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumbersWithVoiceConnectorGroupAsync(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::BatchDeletePhoneNumberOutcome BatchDeletePhoneNumber(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for BatchDeletePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeletePhoneNumberOutcomeCallable BatchDeletePhoneNumberCallable(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for BatchDeletePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeletePhoneNumberAsync(const Model::BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::BatchUpdatePhoneNumberOutcome BatchUpdatePhoneNumber(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdatePhoneNumberOutcomeCallable BatchUpdatePhoneNumberCallable(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for BatchUpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdatePhoneNumberAsync(const Model::BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::CreatePhoneNumberOrderOutcome CreatePhoneNumberOrder(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * A Callable wrapper for CreatePhoneNumberOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePhoneNumberOrderOutcomeCallable CreatePhoneNumberOrderCallable(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * An Async wrapper for CreatePhoneNumberOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePhoneNumberOrderAsync(const Model::CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::CreateProxySessionOutcome CreateProxySession(const Model::CreateProxySessionRequest& request) const;

        /**
         * A Callable wrapper for CreateProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProxySessionOutcomeCallable CreateProxySessionCallable(const Model::CreateProxySessionRequest& request) const;

        /**
         * An Async wrapper for CreateProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProxySessionAsync(const Model::CreateProxySessionRequest& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::CreateSipMediaApplicationOutcome CreateSipMediaApplication(const Model::CreateSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSipMediaApplicationOutcomeCallable CreateSipMediaApplicationCallable(const Model::CreateSipMediaApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipMediaApplicationAsync(const Model::CreateSipMediaApplicationRequest& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::CreateSipMediaApplicationCallOutcome CreateSipMediaApplicationCall(const Model::CreateSipMediaApplicationCallRequest& request) const;

        /**
         * A Callable wrapper for CreateSipMediaApplicationCall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSipMediaApplicationCallOutcomeCallable CreateSipMediaApplicationCallCallable(const Model::CreateSipMediaApplicationCallRequest& request) const;

        /**
         * An Async wrapper for CreateSipMediaApplicationCall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipMediaApplicationCallAsync(const Model::CreateSipMediaApplicationCallRequest& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::CreateSipRuleOutcome CreateSipRule(const Model::CreateSipRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSipRuleOutcomeCallable CreateSipRuleCallable(const Model::CreateSipRuleRequest& request) const;

        /**
         * An Async wrapper for CreateSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipRuleAsync(const Model::CreateSipRuleRequest& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::CreateVoiceConnectorOutcome CreateVoiceConnector(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVoiceConnectorOutcomeCallable CreateVoiceConnectorCallable(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for CreateVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVoiceConnectorAsync(const Model::CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::CreateVoiceConnectorGroupOutcome CreateVoiceConnectorGroup(const Model::CreateVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVoiceConnectorGroupOutcomeCallable CreateVoiceConnectorGroupCallable(const Model::CreateVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for CreateVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVoiceConnectorGroupAsync(const Model::CreateVoiceConnectorGroupRequest& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeletePhoneNumberOutcome DeletePhoneNumber(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for DeletePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePhoneNumberOutcomeCallable DeletePhoneNumberCallable(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for DeletePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePhoneNumberAsync(const Model::DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteProxySessionOutcome DeleteProxySession(const Model::DeleteProxySessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProxySessionOutcomeCallable DeleteProxySessionCallable(const Model::DeleteProxySessionRequest& request) const;

        /**
         * An Async wrapper for DeleteProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProxySessionAsync(const Model::DeleteProxySessionRequest& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteSipMediaApplicationOutcome DeleteSipMediaApplication(const Model::DeleteSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSipMediaApplicationOutcomeCallable DeleteSipMediaApplicationCallable(const Model::DeleteSipMediaApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSipMediaApplicationAsync(const Model::DeleteSipMediaApplicationRequest& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteSipRuleOutcome DeleteSipRule(const Model::DeleteSipRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSipRuleOutcomeCallable DeleteSipRuleCallable(const Model::DeleteSipRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSipRuleAsync(const Model::DeleteSipRuleRequest& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteVoiceConnectorOutcome DeleteVoiceConnector(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorOutcomeCallable DeleteVoiceConnectorCallable(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorAsync(const Model::DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcome DeleteVoiceConnectorEmergencyCallingConfiguration(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable DeleteVoiceConnectorEmergencyCallingConfigurationCallable(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorEmergencyCallingConfigurationAsync(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteVoiceConnectorGroupOutcome DeleteVoiceConnectorGroup(const Model::DeleteVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorGroupOutcomeCallable DeleteVoiceConnectorGroupCallable(const Model::DeleteVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorGroupAsync(const Model::DeleteVoiceConnectorGroupRequest& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteVoiceConnectorOriginationOutcome DeleteVoiceConnectorOrigination(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorOriginationOutcomeCallable DeleteVoiceConnectorOriginationCallable(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorOriginationAsync(const Model::DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteVoiceConnectorProxyOutcome DeleteVoiceConnectorProxy(const Model::DeleteVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorProxyOutcomeCallable DeleteVoiceConnectorProxyCallable(const Model::DeleteVoiceConnectorProxyRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorProxyAsync(const Model::DeleteVoiceConnectorProxyRequest& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteVoiceConnectorStreamingConfigurationOutcome DeleteVoiceConnectorStreamingConfiguration(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorStreamingConfigurationOutcomeCallable DeleteVoiceConnectorStreamingConfigurationCallable(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorStreamingConfigurationAsync(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteVoiceConnectorTerminationOutcome DeleteVoiceConnectorTermination(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorTerminationOutcomeCallable DeleteVoiceConnectorTerminationCallable(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorTerminationAsync(const Model::DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcome DeleteVoiceConnectorTerminationCredentials(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcomeCallable DeleteVoiceConnectorTerminationCredentialsCallable(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorTerminationCredentialsAsync(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcome DisassociatePhoneNumbersFromVoiceConnector(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumbersFromVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorCallable(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for DisassociatePhoneNumbersFromVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumbersFromVoiceConnectorAsync(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome DisassociatePhoneNumbersFromVoiceConnectorGroup(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumbersFromVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorGroupCallable(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociatePhoneNumbersFromVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumbersFromVoiceConnectorGroupAsync(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetGlobalSettingsOutcome GetGlobalSettings() const;

        /**
         * A Callable wrapper for GetGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGlobalSettingsOutcomeCallable GetGlobalSettingsCallable() const;

        /**
         * An Async wrapper for GetGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * 
         */
        virtual Model::GetPhoneNumberOutcome GetPhoneNumber(const Model::GetPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for GetPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPhoneNumberOutcomeCallable GetPhoneNumberCallable(const Model::GetPhoneNumberRequest& request) const;

        /**
         * An Async wrapper for GetPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberAsync(const Model::GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetPhoneNumberOrderOutcome GetPhoneNumberOrder(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * A Callable wrapper for GetPhoneNumberOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPhoneNumberOrderOutcomeCallable GetPhoneNumberOrderCallable(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * An Async wrapper for GetPhoneNumberOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberOrderAsync(const Model::GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetPhoneNumberSettingsOutcome GetPhoneNumberSettings() const;

        /**
         * A Callable wrapper for GetPhoneNumberSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPhoneNumberSettingsOutcomeCallable GetPhoneNumberSettingsCallable() const;

        /**
         * An Async wrapper for GetPhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * 
         */
        virtual Model::GetProxySessionOutcome GetProxySession(const Model::GetProxySessionRequest& request) const;

        /**
         * A Callable wrapper for GetProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProxySessionOutcomeCallable GetProxySessionCallable(const Model::GetProxySessionRequest& request) const;

        /**
         * An Async wrapper for GetProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProxySessionAsync(const Model::GetProxySessionRequest& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetSipMediaApplicationOutcome GetSipMediaApplication(const Model::GetSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSipMediaApplicationOutcomeCallable GetSipMediaApplicationCallable(const Model::GetSipMediaApplicationRequest& request) const;

        /**
         * An Async wrapper for GetSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipMediaApplicationAsync(const Model::GetSipMediaApplicationRequest& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetSipMediaApplicationAlexaSkillConfigurationOutcome GetSipMediaApplicationAlexaSkillConfiguration(const Model::GetSipMediaApplicationAlexaSkillConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetSipMediaApplicationAlexaSkillConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSipMediaApplicationAlexaSkillConfigurationOutcomeCallable GetSipMediaApplicationAlexaSkillConfigurationCallable(const Model::GetSipMediaApplicationAlexaSkillConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetSipMediaApplicationAlexaSkillConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipMediaApplicationAlexaSkillConfigurationAsync(const Model::GetSipMediaApplicationAlexaSkillConfigurationRequest& request, const GetSipMediaApplicationAlexaSkillConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetSipMediaApplicationLoggingConfigurationOutcome GetSipMediaApplicationLoggingConfiguration(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetSipMediaApplicationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSipMediaApplicationLoggingConfigurationOutcomeCallable GetSipMediaApplicationLoggingConfigurationCallable(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetSipMediaApplicationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipMediaApplicationLoggingConfigurationAsync(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetSipRuleOutcome GetSipRule(const Model::GetSipRuleRequest& request) const;

        /**
         * A Callable wrapper for GetSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSipRuleOutcomeCallable GetSipRuleCallable(const Model::GetSipRuleRequest& request) const;

        /**
         * An Async wrapper for GetSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipRuleAsync(const Model::GetSipRuleRequest& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorOutcome GetVoiceConnector(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorOutcomeCallable GetVoiceConnectorCallable(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorAsync(const Model::GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorEmergencyCallingConfigurationOutcome GetVoiceConnectorEmergencyCallingConfiguration(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable GetVoiceConnectorEmergencyCallingConfigurationCallable(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorEmergencyCallingConfigurationAsync(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorGroupOutcome GetVoiceConnectorGroup(const Model::GetVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorGroupOutcomeCallable GetVoiceConnectorGroupCallable(const Model::GetVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorGroupAsync(const Model::GetVoiceConnectorGroupRequest& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorLoggingConfigurationOutcome GetVoiceConnectorLoggingConfiguration(const Model::GetVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorLoggingConfigurationOutcomeCallable GetVoiceConnectorLoggingConfigurationCallable(const Model::GetVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorLoggingConfigurationAsync(const Model::GetVoiceConnectorLoggingConfigurationRequest& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorOriginationOutcome GetVoiceConnectorOrigination(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorOriginationOutcomeCallable GetVoiceConnectorOriginationCallable(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorOriginationAsync(const Model::GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorProxyOutcome GetVoiceConnectorProxy(const Model::GetVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorProxyOutcomeCallable GetVoiceConnectorProxyCallable(const Model::GetVoiceConnectorProxyRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorProxyAsync(const Model::GetVoiceConnectorProxyRequest& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorStreamingConfigurationOutcome GetVoiceConnectorStreamingConfiguration(const Model::GetVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorStreamingConfigurationOutcomeCallable GetVoiceConnectorStreamingConfigurationCallable(const Model::GetVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorStreamingConfigurationAsync(const Model::GetVoiceConnectorStreamingConfigurationRequest& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorTerminationOutcome GetVoiceConnectorTermination(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorTerminationOutcomeCallable GetVoiceConnectorTerminationCallable(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorTerminationAsync(const Model::GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetVoiceConnectorTerminationHealthOutcome GetVoiceConnectorTerminationHealth(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceConnectorTerminationHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorTerminationHealthOutcomeCallable GetVoiceConnectorTerminationHealthCallable(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * An Async wrapper for GetVoiceConnectorTerminationHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorTerminationHealthAsync(const Model::GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListAvailableVoiceConnectorRegionsOutcome ListAvailableVoiceConnectorRegions() const;

        /**
         * A Callable wrapper for ListAvailableVoiceConnectorRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableVoiceConnectorRegionsOutcomeCallable ListAvailableVoiceConnectorRegionsCallable() const;

        /**
         * An Async wrapper for ListAvailableVoiceConnectorRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableVoiceConnectorRegionsAsync(const ListAvailableVoiceConnectorRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * 
         */
        virtual Model::ListPhoneNumberOrdersOutcome ListPhoneNumberOrders(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumberOrders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumberOrdersOutcomeCallable ListPhoneNumberOrdersCallable(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * An Async wrapper for ListPhoneNumberOrders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumberOrdersAsync(const Model::ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * An Async wrapper for ListPhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListProxySessionsOutcome ListProxySessions(const Model::ListProxySessionsRequest& request) const;

        /**
         * A Callable wrapper for ListProxySessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProxySessionsOutcomeCallable ListProxySessionsCallable(const Model::ListProxySessionsRequest& request) const;

        /**
         * An Async wrapper for ListProxySessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProxySessionsAsync(const Model::ListProxySessionsRequest& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListSipMediaApplicationsOutcome ListSipMediaApplications(const Model::ListSipMediaApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListSipMediaApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSipMediaApplicationsOutcomeCallable ListSipMediaApplicationsCallable(const Model::ListSipMediaApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListSipMediaApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSipMediaApplicationsAsync(const Model::ListSipMediaApplicationsRequest& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListSipRulesOutcome ListSipRules(const Model::ListSipRulesRequest& request) const;

        /**
         * A Callable wrapper for ListSipRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSipRulesOutcomeCallable ListSipRulesCallable(const Model::ListSipRulesRequest& request) const;

        /**
         * An Async wrapper for ListSipRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSipRulesAsync(const Model::ListSipRulesRequest& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListSupportedPhoneNumberCountriesOutcome ListSupportedPhoneNumberCountries(const Model::ListSupportedPhoneNumberCountriesRequest& request) const;

        /**
         * A Callable wrapper for ListSupportedPhoneNumberCountries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSupportedPhoneNumberCountriesOutcomeCallable ListSupportedPhoneNumberCountriesCallable(const Model::ListSupportedPhoneNumberCountriesRequest& request) const;

        /**
         * An Async wrapper for ListSupportedPhoneNumberCountries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSupportedPhoneNumberCountriesAsync(const Model::ListSupportedPhoneNumberCountriesRequest& request, const ListSupportedPhoneNumberCountriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListVoiceConnectorGroupsOutcome ListVoiceConnectorGroups(const Model::ListVoiceConnectorGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectorGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVoiceConnectorGroupsOutcomeCallable ListVoiceConnectorGroupsCallable(const Model::ListVoiceConnectorGroupsRequest& request) const;

        /**
         * An Async wrapper for ListVoiceConnectorGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorGroupsAsync(const Model::ListVoiceConnectorGroupsRequest& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcome ListVoiceConnectorTerminationCredentials(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcomeCallable ListVoiceConnectorTerminationCredentialsCallable(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * An Async wrapper for ListVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorTerminationCredentialsAsync(const Model::ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListVoiceConnectorsOutcome ListVoiceConnectors(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListVoiceConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVoiceConnectorsOutcomeCallable ListVoiceConnectorsCallable(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * An Async wrapper for ListVoiceConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorsAsync(const Model::ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutSipMediaApplicationAlexaSkillConfigurationOutcome PutSipMediaApplicationAlexaSkillConfiguration(const Model::PutSipMediaApplicationAlexaSkillConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutSipMediaApplicationAlexaSkillConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSipMediaApplicationAlexaSkillConfigurationOutcomeCallable PutSipMediaApplicationAlexaSkillConfigurationCallable(const Model::PutSipMediaApplicationAlexaSkillConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutSipMediaApplicationAlexaSkillConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSipMediaApplicationAlexaSkillConfigurationAsync(const Model::PutSipMediaApplicationAlexaSkillConfigurationRequest& request, const PutSipMediaApplicationAlexaSkillConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutSipMediaApplicationLoggingConfigurationOutcome PutSipMediaApplicationLoggingConfiguration(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutSipMediaApplicationLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSipMediaApplicationLoggingConfigurationOutcomeCallable PutSipMediaApplicationLoggingConfigurationCallable(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutSipMediaApplicationLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSipMediaApplicationLoggingConfigurationAsync(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutVoiceConnectorEmergencyCallingConfigurationOutcome PutVoiceConnectorEmergencyCallingConfiguration(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorEmergencyCallingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable PutVoiceConnectorEmergencyCallingConfigurationCallable(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorEmergencyCallingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorEmergencyCallingConfigurationAsync(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutVoiceConnectorLoggingConfigurationOutcome PutVoiceConnectorLoggingConfiguration(const Model::PutVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorLoggingConfigurationOutcomeCallable PutVoiceConnectorLoggingConfigurationCallable(const Model::PutVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorLoggingConfigurationAsync(const Model::PutVoiceConnectorLoggingConfigurationRequest& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutVoiceConnectorOriginationOutcome PutVoiceConnectorOrigination(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorOrigination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorOriginationOutcomeCallable PutVoiceConnectorOriginationCallable(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorOrigination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorOriginationAsync(const Model::PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutVoiceConnectorProxyOutcome PutVoiceConnectorProxy(const Model::PutVoiceConnectorProxyRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorProxy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorProxyOutcomeCallable PutVoiceConnectorProxyCallable(const Model::PutVoiceConnectorProxyRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorProxy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorProxyAsync(const Model::PutVoiceConnectorProxyRequest& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutVoiceConnectorStreamingConfigurationOutcome PutVoiceConnectorStreamingConfiguration(const Model::PutVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorStreamingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorStreamingConfigurationOutcomeCallable PutVoiceConnectorStreamingConfigurationCallable(const Model::PutVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorStreamingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorStreamingConfigurationAsync(const Model::PutVoiceConnectorStreamingConfigurationRequest& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutVoiceConnectorTerminationOutcome PutVoiceConnectorTermination(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorTermination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorTerminationOutcomeCallable PutVoiceConnectorTerminationCallable(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorTermination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorTerminationAsync(const Model::PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcome PutVoiceConnectorTerminationCredentials(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * A Callable wrapper for PutVoiceConnectorTerminationCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcomeCallable PutVoiceConnectorTerminationCredentialsCallable(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * An Async wrapper for PutVoiceConnectorTerminationCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorTerminationCredentialsAsync(const Model::PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::RestorePhoneNumberOutcome RestorePhoneNumber(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for RestorePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestorePhoneNumberOutcomeCallable RestorePhoneNumberCallable(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for RestorePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestorePhoneNumberAsync(const Model::RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::SearchAvailablePhoneNumbersOutcome SearchAvailablePhoneNumbers(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for SearchAvailablePhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchAvailablePhoneNumbersOutcomeCallable SearchAvailablePhoneNumbersCallable(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * An Async wrapper for SearchAvailablePhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAvailablePhoneNumbersAsync(const Model::SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateGlobalSettingsOutcome UpdateGlobalSettings(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateGlobalSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateGlobalSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalSettingsAsync(const Model::UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * An Async wrapper for UpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberAsync(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdatePhoneNumberSettingsOutcome UpdatePhoneNumberSettings(const Model::UpdatePhoneNumberSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumberSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePhoneNumberSettingsOutcomeCallable UpdatePhoneNumberSettingsCallable(const Model::UpdatePhoneNumberSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdatePhoneNumberSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberSettingsAsync(const Model::UpdatePhoneNumberSettingsRequest& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateProxySessionOutcome UpdateProxySession(const Model::UpdateProxySessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateProxySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProxySessionOutcomeCallable UpdateProxySessionCallable(const Model::UpdateProxySessionRequest& request) const;

        /**
         * An Async wrapper for UpdateProxySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProxySessionAsync(const Model::UpdateProxySessionRequest& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateSipMediaApplicationOutcome UpdateSipMediaApplication(const Model::UpdateSipMediaApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipMediaApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSipMediaApplicationOutcomeCallable UpdateSipMediaApplicationCallable(const Model::UpdateSipMediaApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateSipMediaApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSipMediaApplicationAsync(const Model::UpdateSipMediaApplicationRequest& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateSipMediaApplicationCallOutcome UpdateSipMediaApplicationCall(const Model::UpdateSipMediaApplicationCallRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipMediaApplicationCall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSipMediaApplicationCallOutcomeCallable UpdateSipMediaApplicationCallCallable(const Model::UpdateSipMediaApplicationCallRequest& request) const;

        /**
         * An Async wrapper for UpdateSipMediaApplicationCall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSipMediaApplicationCallAsync(const Model::UpdateSipMediaApplicationCallRequest& request, const UpdateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateSipRuleOutcome UpdateSipRule(const Model::UpdateSipRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateSipRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSipRuleOutcomeCallable UpdateSipRuleCallable(const Model::UpdateSipRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateSipRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSipRuleAsync(const Model::UpdateSipRuleRequest& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateVoiceConnectorOutcome UpdateVoiceConnector(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVoiceConnectorOutcomeCallable UpdateVoiceConnectorCallable(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * An Async wrapper for UpdateVoiceConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceConnectorAsync(const Model::UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UpdateVoiceConnectorGroupOutcome UpdateVoiceConnectorGroup(const Model::UpdateVoiceConnectorGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceConnectorGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVoiceConnectorGroupOutcomeCallable UpdateVoiceConnectorGroupCallable(const Model::UpdateVoiceConnectorGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateVoiceConnectorGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceConnectorGroupAsync(const Model::UpdateVoiceConnectorGroupRequest& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ValidateE911AddressOutcome ValidateE911Address(const Model::ValidateE911AddressRequest& request) const;

        /**
         * A Callable wrapper for ValidateE911Address that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateE911AddressOutcomeCallable ValidateE911AddressCallable(const Model::ValidateE911AddressRequest& request) const;

        /**
         * An Async wrapper for ValidateE911Address that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateE911AddressAsync(const Model::ValidateE911AddressRequest& request, const ValidateE911AddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
