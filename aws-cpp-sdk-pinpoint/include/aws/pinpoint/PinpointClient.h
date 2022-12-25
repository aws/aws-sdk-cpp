/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint/PinpointServiceClientModel.h>

namespace Aws
{
namespace Pinpoint
{
  /**
   * <p>Doc Engage API - Amazon Pinpoint API</p>
   */
  class AWS_PINPOINT_API PinpointClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PinpointClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Pinpoint::PinpointClientConfiguration& clientConfiguration = Aws::Pinpoint::PinpointClientConfiguration(),
                       std::shared_ptr<PinpointEndpointProviderBase> endpointProvider = Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<PinpointEndpointProviderBase> endpointProvider = Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Pinpoint::PinpointClientConfiguration& clientConfiguration = Aws::Pinpoint::PinpointClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<PinpointEndpointProviderBase> endpointProvider = Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Pinpoint::PinpointClientConfiguration& clientConfiguration = Aws::Pinpoint::PinpointClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PinpointClient();

        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new campaign for an application or updates the settings of an
         * existing campaign for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

        /**
         * A Callable wrapper for CreateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const Model::CreateCampaignRequest& request) const;

        /**
         * An Async wrapper for CreateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a message template for messages that are sent through the email
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEmailTemplateOutcomeCallable CreateEmailTemplateCallable(const Model::CreateEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEmailTemplateAsync(const Model::CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an export job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportJobOutcome CreateExportJob(const Model::CreateExportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExportJobOutcomeCallable CreateExportJobCallable(const Model::CreateExportJobRequest& request) const;

        /**
         * An Async wrapper for CreateExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExportJobAsync(const Model::CreateExportJobRequest& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an import job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImportJobOutcomeCallable CreateImportJobCallable(const Model::CreateImportJobRequest& request) const;

        /**
         * An Async wrapper for CreateImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImportJobAsync(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new message template for messages using the in-app message
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInAppTemplateOutcome CreateInAppTemplate(const Model::CreateInAppTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateInAppTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInAppTemplateOutcomeCallable CreateInAppTemplateCallable(const Model::CreateInAppTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateInAppTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInAppTemplateAsync(const Model::CreateInAppTemplateRequest& request, const CreateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a journey for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJourneyOutcome CreateJourney(const Model::CreateJourneyRequest& request) const;

        /**
         * A Callable wrapper for CreateJourney that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJourneyOutcomeCallable CreateJourneyCallable(const Model::CreateJourneyRequest& request) const;

        /**
         * An Async wrapper for CreateJourney that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJourneyAsync(const Model::CreateJourneyRequest& request, const CreateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a message template for messages that are sent through a push
         * notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreatePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePushTemplateOutcome CreatePushTemplate(const Model::CreatePushTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreatePushTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePushTemplateOutcomeCallable CreatePushTemplateCallable(const Model::CreatePushTemplateRequest& request) const;

        /**
         * An Async wrapper for CreatePushTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePushTemplateAsync(const Model::CreatePushTemplateRequest& request, const CreatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecommenderConfigurationOutcome CreateRecommenderConfiguration(const Model::CreateRecommenderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateRecommenderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRecommenderConfigurationOutcomeCallable CreateRecommenderConfigurationCallable(const Model::CreateRecommenderConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateRecommenderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRecommenderConfigurationAsync(const Model::CreateRecommenderConfigurationRequest& request, const CreateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSegmentOutcome CreateSegment(const Model::CreateSegmentRequest& request) const;

        /**
         * A Callable wrapper for CreateSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSegmentOutcomeCallable CreateSegmentCallable(const Model::CreateSegmentRequest& request) const;

        /**
         * An Async wrapper for CreateSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSegmentAsync(const Model::CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a message template for messages that are sent through the SMS
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSmsTemplateOutcome CreateSmsTemplate(const Model::CreateSmsTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateSmsTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSmsTemplateOutcomeCallable CreateSmsTemplateCallable(const Model::CreateSmsTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateSmsTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSmsTemplateAsync(const Model::CreateSmsTemplateRequest& request, const CreateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a message template for messages that are sent through the voice
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceTemplateOutcome CreateVoiceTemplate(const Model::CreateVoiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateVoiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVoiceTemplateOutcomeCallable CreateVoiceTemplateCallable(const Model::CreateVoiceTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateVoiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVoiceTemplateAsync(const Model::CreateVoiceTemplateRequest& request, const CreateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the ADM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAdmChannelOutcome DeleteAdmChannel(const Model::DeleteAdmChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteAdmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAdmChannelOutcomeCallable DeleteAdmChannelCallable(const Model::DeleteAdmChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteAdmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAdmChannelAsync(const Model::DeleteAdmChannelRequest& request, const DeleteAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the APNs channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsChannelOutcome DeleteApnsChannel(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteApnsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsChannelOutcomeCallable DeleteApnsChannelCallable(const Model::DeleteApnsChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteApnsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsChannelAsync(const Model::DeleteApnsChannelRequest& request, const DeleteApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the APNs sandbox channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsSandboxChannelOutcome DeleteApnsSandboxChannel(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteApnsSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsSandboxChannelOutcomeCallable DeleteApnsSandboxChannelCallable(const Model::DeleteApnsSandboxChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteApnsSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsSandboxChannelAsync(const Model::DeleteApnsSandboxChannelRequest& request, const DeleteApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the APNs VoIP channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipChannelOutcome DeleteApnsVoipChannel(const Model::DeleteApnsVoipChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteApnsVoipChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsVoipChannelOutcomeCallable DeleteApnsVoipChannelCallable(const Model::DeleteApnsVoipChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteApnsVoipChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsVoipChannelAsync(const Model::DeleteApnsVoipChannelRequest& request, const DeleteApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the APNs VoIP sandbox channel for an application and deletes any
         * existing settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipSandboxChannelOutcome DeleteApnsVoipSandboxChannel(const Model::DeleteApnsVoipSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteApnsVoipSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApnsVoipSandboxChannelOutcomeCallable DeleteApnsVoipSandboxChannelCallable(const Model::DeleteApnsVoipSandboxChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteApnsVoipSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApnsVoipSandboxChannelAsync(const Model::DeleteApnsVoipSandboxChannelRequest& request, const DeleteApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the Baidu channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBaiduChannelOutcome DeleteBaiduChannel(const Model::DeleteBaiduChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteBaiduChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBaiduChannelOutcomeCallable DeleteBaiduChannelCallable(const Model::DeleteBaiduChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteBaiduChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBaiduChannelAsync(const Model::DeleteBaiduChannelRequest& request, const DeleteBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a campaign from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

        /**
         * A Callable wrapper for DeleteCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const Model::DeleteCampaignRequest& request) const;

        /**
         * An Async wrapper for DeleteCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCampaignAsync(const Model::DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the email channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailChannelOutcome DeleteEmailChannel(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailChannelOutcomeCallable DeleteEmailChannelCallable(const Model::DeleteEmailChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteEmailChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailChannelAsync(const Model::DeleteEmailChannelRequest& request, const DeleteEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a message template for messages that were sent through the email
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailTemplateOutcomeCallable DeleteEmailTemplateCallable(const Model::DeleteEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailTemplateAsync(const Model::DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an endpoint from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventStreamOutcome DeleteEventStream(const Model::DeleteEventStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventStreamOutcomeCallable DeleteEventStreamCallable(const Model::DeleteEventStreamRequest& request) const;

        /**
         * An Async wrapper for DeleteEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventStreamAsync(const Model::DeleteEventStreamRequest& request, const DeleteEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the GCM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGcmChannelOutcome DeleteGcmChannel(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteGcmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGcmChannelOutcomeCallable DeleteGcmChannelCallable(const Model::DeleteGcmChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteGcmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGcmChannelAsync(const Model::DeleteGcmChannelRequest& request, const DeleteGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a message template for messages sent using the in-app message
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInAppTemplateOutcome DeleteInAppTemplate(const Model::DeleteInAppTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteInAppTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInAppTemplateOutcomeCallable DeleteInAppTemplateCallable(const Model::DeleteInAppTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteInAppTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInAppTemplateAsync(const Model::DeleteInAppTemplateRequest& request, const DeleteInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a journey from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJourneyOutcome DeleteJourney(const Model::DeleteJourneyRequest& request) const;

        /**
         * A Callable wrapper for DeleteJourney that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJourneyOutcomeCallable DeleteJourneyCallable(const Model::DeleteJourneyRequest& request) const;

        /**
         * An Async wrapper for DeleteJourney that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJourneyAsync(const Model::DeleteJourneyRequest& request, const DeleteJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a message template for messages that were sent through a push
         * notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeletePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePushTemplateOutcome DeletePushTemplate(const Model::DeletePushTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeletePushTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePushTemplateOutcomeCallable DeletePushTemplateCallable(const Model::DeletePushTemplateRequest& request) const;

        /**
         * An Async wrapper for DeletePushTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePushTemplateAsync(const Model::DeletePushTemplateRequest& request, const DeletePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecommenderConfigurationOutcome DeleteRecommenderConfiguration(const Model::DeleteRecommenderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecommenderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecommenderConfigurationOutcomeCallable DeleteRecommenderConfigurationCallable(const Model::DeleteRecommenderConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteRecommenderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecommenderConfigurationAsync(const Model::DeleteRecommenderConfigurationRequest& request, const DeleteRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a segment from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSegmentOutcome DeleteSegment(const Model::DeleteSegmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSegmentOutcomeCallable DeleteSegmentCallable(const Model::DeleteSegmentRequest& request) const;

        /**
         * An Async wrapper for DeleteSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSegmentAsync(const Model::DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the SMS channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSmsChannelOutcome DeleteSmsChannel(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteSmsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSmsChannelOutcomeCallable DeleteSmsChannelCallable(const Model::DeleteSmsChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteSmsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSmsChannelAsync(const Model::DeleteSmsChannelRequest& request, const DeleteSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a message template for messages that were sent through the SMS
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSmsTemplateOutcome DeleteSmsTemplate(const Model::DeleteSmsTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteSmsTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSmsTemplateOutcomeCallable DeleteSmsTemplateCallable(const Model::DeleteSmsTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteSmsTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSmsTemplateAsync(const Model::DeleteSmsTemplateRequest& request, const DeleteSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all the endpoints that are associated with a specific user
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserEndpointsOutcome DeleteUserEndpoints(const Model::DeleteUserEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserEndpointsOutcomeCallable DeleteUserEndpointsCallable(const Model::DeleteUserEndpointsRequest& request) const;

        /**
         * An Async wrapper for DeleteUserEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserEndpointsAsync(const Model::DeleteUserEndpointsRequest& request, const DeleteUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the voice channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceChannelOutcome DeleteVoiceChannel(const Model::DeleteVoiceChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceChannelOutcomeCallable DeleteVoiceChannelCallable(const Model::DeleteVoiceChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceChannelAsync(const Model::DeleteVoiceChannelRequest& request, const DeleteVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a message template for messages that were sent through the voice
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceTemplateOutcome DeleteVoiceTemplate(const Model::DeleteVoiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceTemplateOutcomeCallable DeleteVoiceTemplateCallable(const Model::DeleteVoiceTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteVoiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceTemplateAsync(const Model::DeleteVoiceTemplateRequest& request, const DeleteVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the ADM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdmChannelOutcome GetAdmChannel(const Model::GetAdmChannelRequest& request) const;

        /**
         * A Callable wrapper for GetAdmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdmChannelOutcomeCallable GetAdmChannelCallable(const Model::GetAdmChannelRequest& request) const;

        /**
         * An Async wrapper for GetAdmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdmChannelAsync(const Model::GetAdmChannelRequest& request, const GetAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsChannelOutcome GetApnsChannel(const Model::GetApnsChannelRequest& request) const;

        /**
         * A Callable wrapper for GetApnsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsChannelOutcomeCallable GetApnsChannelCallable(const Model::GetApnsChannelRequest& request) const;

        /**
         * An Async wrapper for GetApnsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsChannelAsync(const Model::GetApnsChannelRequest& request, const GetApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsSandboxChannelOutcome GetApnsSandboxChannel(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for GetApnsSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsSandboxChannelOutcomeCallable GetApnsSandboxChannelCallable(const Model::GetApnsSandboxChannelRequest& request) const;

        /**
         * An Async wrapper for GetApnsSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsSandboxChannelAsync(const Model::GetApnsSandboxChannelRequest& request, const GetApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP channel
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipChannelOutcome GetApnsVoipChannel(const Model::GetApnsVoipChannelRequest& request) const;

        /**
         * A Callable wrapper for GetApnsVoipChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsVoipChannelOutcomeCallable GetApnsVoipChannelCallable(const Model::GetApnsVoipChannelRequest& request) const;

        /**
         * An Async wrapper for GetApnsVoipChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsVoipChannelAsync(const Model::GetApnsVoipChannelRequest& request, const GetApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipSandboxChannelOutcome GetApnsVoipSandboxChannel(const Model::GetApnsVoipSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for GetApnsVoipSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApnsVoipSandboxChannelOutcomeCallable GetApnsVoipSandboxChannelCallable(const Model::GetApnsVoipSandboxChannelRequest& request) const;

        /**
         * An Async wrapper for GetApnsVoipSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApnsVoipSandboxChannelAsync(const Model::GetApnsVoipSandboxChannelRequest& request, const GetApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * A Callable wrapper for GetApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppOutcomeCallable GetAppCallable(const Model::GetAppRequest& request) const;

        /**
         * An Async wrapper for GetApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppAsync(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard metric that applies to
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationDateRangeKpiOutcome GetApplicationDateRangeKpi(const Model::GetApplicationDateRangeKpiRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationDateRangeKpi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationDateRangeKpiOutcomeCallable GetApplicationDateRangeKpiCallable(const Model::GetApplicationDateRangeKpiRequest& request) const;

        /**
         * An Async wrapper for GetApplicationDateRangeKpi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationDateRangeKpiAsync(const Model::GetApplicationDateRangeKpiRequest& request, const GetApplicationDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationSettingsOutcome GetApplicationSettings(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationSettingsOutcomeCallable GetApplicationSettingsCallable(const Model::GetApplicationSettingsRequest& request) const;

        /**
         * An Async wrapper for GetApplicationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationSettingsAsync(const Model::GetApplicationSettingsRequest& request, const GetApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the applications that are associated with
         * your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppsOutcome GetApps(const Model::GetAppsRequest& request) const;

        /**
         * A Callable wrapper for GetApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppsOutcomeCallable GetAppsCallable(const Model::GetAppsRequest& request) const;

        /**
         * An Async wrapper for GetApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppsAsync(const Model::GetAppsRequest& request, const GetAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the Baidu channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBaiduChannelOutcome GetBaiduChannel(const Model::GetBaiduChannelRequest& request) const;

        /**
         * A Callable wrapper for GetBaiduChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBaiduChannelOutcomeCallable GetBaiduChannelCallable(const Model::GetBaiduChannelRequest& request) const;

        /**
         * An Async wrapper for GetBaiduChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBaiduChannelAsync(const Model::GetBaiduChannelRequest& request, const GetBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;

        /**
         * A Callable wrapper for GetCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignOutcomeCallable GetCampaignCallable(const Model::GetCampaignRequest& request) const;

        /**
         * An Async wrapper for GetCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignAsync(const Model::GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the activities for a campaign.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignActivitiesOutcome GetCampaignActivities(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignActivitiesOutcomeCallable GetCampaignActivitiesCallable(const Model::GetCampaignActivitiesRequest& request) const;

        /**
         * An Async wrapper for GetCampaignActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignActivitiesAsync(const Model::GetCampaignActivitiesRequest& request, const GetCampaignActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard metric that applies to
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignDateRangeKpiOutcome GetCampaignDateRangeKpi(const Model::GetCampaignDateRangeKpiRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignDateRangeKpi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignDateRangeKpiOutcomeCallable GetCampaignDateRangeKpiCallable(const Model::GetCampaignDateRangeKpiRequest& request) const;

        /**
         * An Async wrapper for GetCampaignDateRangeKpi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignDateRangeKpiAsync(const Model::GetCampaignDateRangeKpiRequest& request, const GetCampaignDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a specific version of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionOutcome GetCampaignVersion(const Model::GetCampaignVersionRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignVersionOutcomeCallable GetCampaignVersionCallable(const Model::GetCampaignVersionRequest& request) const;

        /**
         * An Async wrapper for GetCampaignVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignVersionAsync(const Model::GetCampaignVersionRequest& request, const GetCampaignVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all versions of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionsOutcome GetCampaignVersions(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetCampaignVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignVersionsOutcomeCallable GetCampaignVersionsCallable(const Model::GetCampaignVersionsRequest& request) const;

        /**
         * An Async wrapper for GetCampaignVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignVersionsAsync(const Model::GetCampaignVersionsRequest& request, const GetCampaignVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the campaigns that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignsOutcome GetCampaigns(const Model::GetCampaignsRequest& request) const;

        /**
         * A Callable wrapper for GetCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCampaignsOutcomeCallable GetCampaignsCallable(const Model::GetCampaignsRequest& request) const;

        /**
         * An Async wrapper for GetCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCampaignsAsync(const Model::GetCampaignsRequest& request, const GetCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the history and status of each channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelsOutcome GetChannels(const Model::GetChannelsRequest& request) const;

        /**
         * A Callable wrapper for GetChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelsOutcomeCallable GetChannelsCallable(const Model::GetChannelsRequest& request) const;

        /**
         * An Async wrapper for GetChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelsAsync(const Model::GetChannelsRequest& request, const GetChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the email channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailChannelOutcome GetEmailChannel(const Model::GetEmailChannelRequest& request) const;

        /**
         * A Callable wrapper for GetEmailChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailChannelOutcomeCallable GetEmailChannelCallable(const Model::GetEmailChannelRequest& request) const;

        /**
         * An Async wrapper for GetEmailChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailChannelAsync(const Model::GetEmailChannelRequest& request, const GetEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the email channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailTemplateOutcomeCallable GetEmailTemplateCallable(const Model::GetEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for GetEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailTemplateAsync(const Model::GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the settings and attributes of a specific
         * endpoint for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointOutcome GetEndpoint(const Model::GetEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEndpointOutcomeCallable GetEndpointCallable(const Model::GetEndpointRequest& request) const;

        /**
         * An Async wrapper for GetEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEndpointAsync(const Model::GetEndpointRequest& request, const GetEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the event stream settings for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventStreamOutcome GetEventStream(const Model::GetEventStreamRequest& request) const;

        /**
         * A Callable wrapper for GetEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventStreamOutcomeCallable GetEventStreamCallable(const Model::GetEventStreamRequest& request) const;

        /**
         * An Async wrapper for GetEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventStreamAsync(const Model::GetEventStreamRequest& request, const GetEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of a specific export job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobOutcome GetExportJob(const Model::GetExportJobRequest& request) const;

        /**
         * A Callable wrapper for GetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportJobOutcomeCallable GetExportJobCallable(const Model::GetExportJobRequest& request) const;

        /**
         * An Async wrapper for GetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportJobAsync(const Model::GetExportJobRequest& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of all the export jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobsOutcome GetExportJobs(const Model::GetExportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportJobsOutcomeCallable GetExportJobsCallable(const Model::GetExportJobsRequest& request) const;

        /**
         * An Async wrapper for GetExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportJobsAsync(const Model::GetExportJobsRequest& request, const GetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGcmChannelOutcome GetGcmChannel(const Model::GetGcmChannelRequest& request) const;

        /**
         * A Callable wrapper for GetGcmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGcmChannelOutcomeCallable GetGcmChannelCallable(const Model::GetGcmChannelRequest& request) const;

        /**
         * An Async wrapper for GetGcmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGcmChannelAsync(const Model::GetGcmChannelRequest& request, const GetGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of a specific import job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobOutcomeCallable GetImportJobCallable(const Model::GetImportJobRequest& request) const;

        /**
         * An Async wrapper for GetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobAsync(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of all the import jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobsOutcome GetImportJobs(const Model::GetImportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobsOutcomeCallable GetImportJobsCallable(const Model::GetImportJobsRequest& request) const;

        /**
         * An Async wrapper for GetImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobsAsync(const Model::GetImportJobsRequest& request, const GetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the in-app messages targeted for the provided endpoint
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetInAppMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInAppMessagesOutcome GetInAppMessages(const Model::GetInAppMessagesRequest& request) const;

        /**
         * A Callable wrapper for GetInAppMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInAppMessagesOutcomeCallable GetInAppMessagesCallable(const Model::GetInAppMessagesRequest& request) const;

        /**
         * An Async wrapper for GetInAppMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInAppMessagesAsync(const Model::GetInAppMessagesRequest& request, const GetInAppMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the content and settings of a message template for messages sent
         * through the in-app channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInAppTemplateOutcome GetInAppTemplate(const Model::GetInAppTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetInAppTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInAppTemplateOutcomeCallable GetInAppTemplateCallable(const Model::GetInAppTemplateRequest& request) const;

        /**
         * An Async wrapper for GetInAppTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInAppTemplateAsync(const Model::GetInAppTemplateRequest& request, const GetInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyOutcome GetJourney(const Model::GetJourneyRequest& request) const;

        /**
         * A Callable wrapper for GetJourney that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJourneyOutcomeCallable GetJourneyCallable(const Model::GetJourneyRequest& request) const;

        /**
         * An Async wrapper for GetJourney that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJourneyAsync(const Model::GetJourneyRequest& request, const GetJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard engagement metric that
         * applies to a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyDateRangeKpiOutcome GetJourneyDateRangeKpi(const Model::GetJourneyDateRangeKpiRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyDateRangeKpi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJourneyDateRangeKpiOutcomeCallable GetJourneyDateRangeKpiCallable(const Model::GetJourneyDateRangeKpiRequest& request) const;

        /**
         * An Async wrapper for GetJourneyDateRangeKpi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJourneyDateRangeKpiAsync(const Model::GetJourneyDateRangeKpiRequest& request, const GetJourneyDateRangeKpiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard execution metric that
         * applies to a journey activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyExecutionActivityMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyExecutionActivityMetricsOutcome GetJourneyExecutionActivityMetrics(const Model::GetJourneyExecutionActivityMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyExecutionActivityMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJourneyExecutionActivityMetricsOutcomeCallable GetJourneyExecutionActivityMetricsCallable(const Model::GetJourneyExecutionActivityMetricsRequest& request) const;

        /**
         * An Async wrapper for GetJourneyExecutionActivityMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJourneyExecutionActivityMetricsAsync(const Model::GetJourneyExecutionActivityMetricsRequest& request, const GetJourneyExecutionActivityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard execution metric that
         * applies to a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyExecutionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyExecutionMetricsOutcome GetJourneyExecutionMetrics(const Model::GetJourneyExecutionMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetJourneyExecutionMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJourneyExecutionMetricsOutcomeCallable GetJourneyExecutionMetricsCallable(const Model::GetJourneyExecutionMetricsRequest& request) const;

        /**
         * An Async wrapper for GetJourneyExecutionMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJourneyExecutionMetricsAsync(const Model::GetJourneyExecutionMetricsRequest& request, const GetJourneyExecutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through a push notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetPushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPushTemplateOutcome GetPushTemplate(const Model::GetPushTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetPushTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPushTemplateOutcomeCallable GetPushTemplateCallable(const Model::GetPushTemplateRequest& request) const;

        /**
         * An Async wrapper for GetPushTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPushTemplateAsync(const Model::GetPushTemplateRequest& request, const GetPushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an Amazon Pinpoint configuration for a
         * recommender model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommenderConfigurationOutcome GetRecommenderConfiguration(const Model::GetRecommenderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetRecommenderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommenderConfigurationOutcomeCallable GetRecommenderConfigurationCallable(const Model::GetRecommenderConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetRecommenderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommenderConfigurationAsync(const Model::GetRecommenderConfigurationRequest& request, const GetRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the recommender model configurations that are
         * associated with your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetRecommenderConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommenderConfigurationsOutcome GetRecommenderConfigurations(const Model::GetRecommenderConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for GetRecommenderConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommenderConfigurationsOutcomeCallable GetRecommenderConfigurationsCallable(const Model::GetRecommenderConfigurationsRequest& request) const;

        /**
         * An Async wrapper for GetRecommenderConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommenderConfigurationsAsync(const Model::GetRecommenderConfigurationsRequest& request, const GetRecommenderConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific segment that's associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentOutcome GetSegment(const Model::GetSegmentRequest& request) const;

        /**
         * A Callable wrapper for GetSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentOutcomeCallable GetSegmentCallable(const Model::GetSegmentRequest& request) const;

        /**
         * An Async wrapper for GetSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentAsync(const Model::GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the export jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentExportJobsOutcome GetSegmentExportJobs(const Model::GetSegmentExportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentExportJobsOutcomeCallable GetSegmentExportJobsCallable(const Model::GetSegmentExportJobsRequest& request) const;

        /**
         * An Async wrapper for GetSegmentExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentExportJobsAsync(const Model::GetSegmentExportJobsRequest& request, const GetSegmentExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the import jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentImportJobsOutcome GetSegmentImportJobs(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentImportJobsOutcomeCallable GetSegmentImportJobsCallable(const Model::GetSegmentImportJobsRequest& request) const;

        /**
         * An Async wrapper for GetSegmentImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentImportJobsAsync(const Model::GetSegmentImportJobsRequest& request, const GetSegmentImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific version of a segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionOutcome GetSegmentVersion(const Model::GetSegmentVersionRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentVersionOutcomeCallable GetSegmentVersionCallable(const Model::GetSegmentVersionRequest& request) const;

        /**
         * An Async wrapper for GetSegmentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentVersionAsync(const Model::GetSegmentVersionRequest& request, const GetSegmentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the versions of a specific segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionsOutcome GetSegmentVersions(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetSegmentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentVersionsOutcomeCallable GetSegmentVersionsCallable(const Model::GetSegmentVersionsRequest& request) const;

        /**
         * An Async wrapper for GetSegmentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentVersionsAsync(const Model::GetSegmentVersionsRequest& request, const GetSegmentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the segments that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentsOutcome GetSegments(const Model::GetSegmentsRequest& request) const;

        /**
         * A Callable wrapper for GetSegments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSegmentsOutcomeCallable GetSegmentsCallable(const Model::GetSegmentsRequest& request) const;

        /**
         * An Async wrapper for GetSegments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSegmentsAsync(const Model::GetSegmentsRequest& request, const GetSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSmsChannelOutcome GetSmsChannel(const Model::GetSmsChannelRequest& request) const;

        /**
         * A Callable wrapper for GetSmsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSmsChannelOutcomeCallable GetSmsChannelCallable(const Model::GetSmsChannelRequest& request) const;

        /**
         * An Async wrapper for GetSmsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSmsChannelAsync(const Model::GetSmsChannelRequest& request, const GetSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the SMS channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSmsTemplateOutcome GetSmsTemplate(const Model::GetSmsTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetSmsTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSmsTemplateOutcomeCallable GetSmsTemplateCallable(const Model::GetSmsTemplateRequest& request) const;

        /**
         * An Async wrapper for GetSmsTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSmsTemplateAsync(const Model::GetSmsTemplateRequest& request, const GetSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the endpoints that are associated with a
         * specific user ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserEndpointsOutcome GetUserEndpoints(const Model::GetUserEndpointsRequest& request) const;

        /**
         * A Callable wrapper for GetUserEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserEndpointsOutcomeCallable GetUserEndpointsCallable(const Model::GetUserEndpointsRequest& request) const;

        /**
         * An Async wrapper for GetUserEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserEndpointsAsync(const Model::GetUserEndpointsRequest& request, const GetUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status and settings of the voice channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceChannelOutcome GetVoiceChannel(const Model::GetVoiceChannelRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceChannelOutcomeCallable GetVoiceChannelCallable(const Model::GetVoiceChannelRequest& request) const;

        /**
         * An Async wrapper for GetVoiceChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceChannelAsync(const Model::GetVoiceChannelRequest& request, const GetVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the voice channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceTemplateOutcome GetVoiceTemplate(const Model::GetVoiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetVoiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceTemplateOutcomeCallable GetVoiceTemplateCallable(const Model::GetVoiceTemplateRequest& request) const;

        /**
         * An Async wrapper for GetVoiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceTemplateAsync(const Model::GetVoiceTemplateRequest& request, const GetVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the journeys that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListJourneys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJourneysOutcome ListJourneys(const Model::ListJourneysRequest& request) const;

        /**
         * A Callable wrapper for ListJourneys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJourneysOutcomeCallable ListJourneysCallable(const Model::ListJourneysRequest& request) const;

        /**
         * An Async wrapper for ListJourneys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJourneysAsync(const Model::ListJourneysRequest& request, const ListJourneysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all the tags (keys and values) that are associated with an
         * application, campaign, message template, or segment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the versions of a specific message
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateVersionsOutcome ListTemplateVersions(const Model::ListTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplateVersionsOutcomeCallable ListTemplateVersionsCallable(const Model::ListTemplateVersionsRequest& request) const;

        /**
         * An Async wrapper for ListTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplateVersionsAsync(const Model::ListTemplateVersionsRequest& request, const ListTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the message templates that are associated
         * with your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const Model::ListTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         */
        virtual Model::PhoneNumberValidateOutcome PhoneNumberValidate(const Model::PhoneNumberValidateRequest& request) const;

        /**
         * A Callable wrapper for PhoneNumberValidate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PhoneNumberValidateOutcomeCallable PhoneNumberValidateCallable(const Model::PhoneNumberValidateRequest& request) const;

        /**
         * An Async wrapper for PhoneNumberValidate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PhoneNumberValidateAsync(const Model::PhoneNumberValidateRequest& request, const PhoneNumberValidateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new event stream for an application or updates the settings of an
         * existing event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventStreamOutcome PutEventStream(const Model::PutEventStreamRequest& request) const;

        /**
         * A Callable wrapper for PutEventStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventStreamOutcomeCallable PutEventStreamCallable(const Model::PutEventStreamRequest& request) const;

        /**
         * An Async wrapper for PutEventStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventStreamAsync(const Model::PutEventStreamRequest& request, const PutEventStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new event to record for endpoints, or creates or updates endpoint
         * data that existing events are associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * A Callable wrapper for PutEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * An Async wrapper for PutEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more attributes, of the same attribute type, from all the
         * endpoints that are associated with an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAttributesOutcome RemoveAttributes(const Model::RemoveAttributesRequest& request) const;

        /**
         * A Callable wrapper for RemoveAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAttributesOutcomeCallable RemoveAttributesCallable(const Model::RemoveAttributesRequest& request) const;

        /**
         * An Async wrapper for RemoveAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAttributesAsync(const Model::RemoveAttributesRequest& request, const RemoveAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and sends a direct message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessagesOutcome SendMessages(const Model::SendMessagesRequest& request) const;

        /**
         * A Callable wrapper for SendMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessagesOutcomeCallable SendMessagesCallable(const Model::SendMessagesRequest& request) const;

        /**
         * An Async wrapper for SendMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessagesAsync(const Model::SendMessagesRequest& request, const SendMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Send an OTP message</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendOTPMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendOTPMessageOutcome SendOTPMessage(const Model::SendOTPMessageRequest& request) const;

        /**
         * A Callable wrapper for SendOTPMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendOTPMessageOutcomeCallable SendOTPMessageCallable(const Model::SendOTPMessageRequest& request) const;

        /**
         * An Async wrapper for SendOTPMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendOTPMessageAsync(const Model::SendOTPMessageRequest& request, const SendOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and sends a message to a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendUsersMessagesOutcome SendUsersMessages(const Model::SendUsersMessagesRequest& request) const;

        /**
         * A Callable wrapper for SendUsersMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendUsersMessagesOutcomeCallable SendUsersMessagesCallable(const Model::SendUsersMessagesRequest& request) const;

        /**
         * An Async wrapper for SendUsersMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendUsersMessagesAsync(const Model::SendUsersMessagesRequest& request, const SendUsersMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags (keys and values) to an application, campaign, message
         * template, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags (keys and values) from an application, campaign,
         * message template, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the ADM channel for an application or updates the status and settings
         * of the ADM channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAdmChannelOutcome UpdateAdmChannel(const Model::UpdateAdmChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateAdmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAdmChannelOutcomeCallable UpdateAdmChannelCallable(const Model::UpdateAdmChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateAdmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAdmChannelAsync(const Model::UpdateAdmChannelRequest& request, const UpdateAdmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the APNs channel for an application or updates the status and
         * settings of the APNs channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsChannelOutcome UpdateApnsChannel(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateApnsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsChannelOutcomeCallable UpdateApnsChannelCallable(const Model::UpdateApnsChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateApnsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsChannelAsync(const Model::UpdateApnsChannelRequest& request, const UpdateApnsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the APNs sandbox channel for an application or updates the status and
         * settings of the APNs sandbox channel for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsSandboxChannelOutcome UpdateApnsSandboxChannel(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateApnsSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsSandboxChannelOutcomeCallable UpdateApnsSandboxChannelCallable(const Model::UpdateApnsSandboxChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateApnsSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsSandboxChannelAsync(const Model::UpdateApnsSandboxChannelRequest& request, const UpdateApnsSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the APNs VoIP channel for an application or updates the status and
         * settings of the APNs VoIP channel for an application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipChannelOutcome UpdateApnsVoipChannel(const Model::UpdateApnsVoipChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateApnsVoipChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsVoipChannelOutcomeCallable UpdateApnsVoipChannelCallable(const Model::UpdateApnsVoipChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateApnsVoipChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsVoipChannelAsync(const Model::UpdateApnsVoipChannelRequest& request, const UpdateApnsVoipChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the APNs VoIP sandbox channel for an application or updates the
         * status and settings of the APNs VoIP sandbox channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipSandboxChannelOutcome UpdateApnsVoipSandboxChannel(const Model::UpdateApnsVoipSandboxChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateApnsVoipSandboxChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApnsVoipSandboxChannelOutcomeCallable UpdateApnsVoipSandboxChannelCallable(const Model::UpdateApnsVoipSandboxChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateApnsVoipSandboxChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApnsVoipSandboxChannelAsync(const Model::UpdateApnsVoipSandboxChannelRequest& request, const UpdateApnsVoipSandboxChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationSettingsOutcome UpdateApplicationSettings(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationSettingsOutcomeCallable UpdateApplicationSettingsCallable(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateApplicationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationSettingsAsync(const Model::UpdateApplicationSettingsRequest& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the Baidu channel for an application or updates the status and
         * settings of the Baidu channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBaiduChannelOutcome UpdateBaiduChannel(const Model::UpdateBaiduChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateBaiduChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBaiduChannelOutcomeCallable UpdateBaiduChannelCallable(const Model::UpdateBaiduChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateBaiduChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBaiduChannelAsync(const Model::UpdateBaiduChannelRequest& request, const UpdateBaiduChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration and other settings for a campaign.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

        /**
         * A Callable wrapper for UpdateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const Model::UpdateCampaignRequest& request) const;

        /**
         * An Async wrapper for UpdateCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCampaignAsync(const Model::UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the email channel for an application or updates the status and
         * settings of the email channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailChannelOutcome UpdateEmailChannel(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateEmailChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailChannelOutcomeCallable UpdateEmailChannelCallable(const Model::UpdateEmailChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateEmailChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailChannelAsync(const Model::UpdateEmailChannelRequest& request, const UpdateEmailChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing message template for messages that are sent through the
         * email channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailTemplateOutcomeCallable UpdateEmailTemplateCallable(const Model::UpdateEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailTemplateAsync(const Model::UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new endpoint for an application or updates the settings and
         * attributes of an existing endpoint for an application. You can also use this
         * operation to define custom attributes for an endpoint. If an update includes one
         * or more values for a custom attribute, Amazon Pinpoint replaces (overwrites) any
         * existing values with the new values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new batch of endpoints for an application or updates the settings
         * and attributes of a batch of existing endpoints for an application. You can also
         * use this operation to define custom attributes for a batch of endpoints. If an
         * update includes one or more values for a custom attribute, Amazon Pinpoint
         * replaces (overwrites) any existing values with the new values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEndpointsBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointsBatchOutcome UpdateEndpointsBatch(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpointsBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointsBatchOutcomeCallable UpdateEndpointsBatchCallable(const Model::UpdateEndpointsBatchRequest& request) const;

        /**
         * An Async wrapper for UpdateEndpointsBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointsBatchAsync(const Model::UpdateEndpointsBatchRequest& request, const UpdateEndpointsBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the GCM channel for an application or updates the status and settings
         * of the GCM channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGcmChannelOutcome UpdateGcmChannel(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateGcmChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGcmChannelOutcomeCallable UpdateGcmChannelCallable(const Model::UpdateGcmChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateGcmChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGcmChannelAsync(const Model::UpdateGcmChannelRequest& request, const UpdateGcmChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing message template for messages sent through the in-app
         * message channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInAppTemplateOutcome UpdateInAppTemplate(const Model::UpdateInAppTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateInAppTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInAppTemplateOutcomeCallable UpdateInAppTemplateCallable(const Model::UpdateInAppTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateInAppTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInAppTemplateAsync(const Model::UpdateInAppTemplateRequest& request, const UpdateInAppTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration and other settings for a journey.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJourneyOutcome UpdateJourney(const Model::UpdateJourneyRequest& request) const;

        /**
         * A Callable wrapper for UpdateJourney that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJourneyOutcomeCallable UpdateJourneyCallable(const Model::UpdateJourneyRequest& request) const;

        /**
         * An Async wrapper for UpdateJourney that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJourneyAsync(const Model::UpdateJourneyRequest& request, const UpdateJourneyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels (stops) an active journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateJourneyState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJourneyStateOutcome UpdateJourneyState(const Model::UpdateJourneyStateRequest& request) const;

        /**
         * A Callable wrapper for UpdateJourneyState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJourneyStateOutcomeCallable UpdateJourneyStateCallable(const Model::UpdateJourneyStateRequest& request) const;

        /**
         * An Async wrapper for UpdateJourneyState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJourneyStateAsync(const Model::UpdateJourneyStateRequest& request, const UpdateJourneyStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing message template for messages that are sent through a
         * push notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdatePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePushTemplateOutcome UpdatePushTemplate(const Model::UpdatePushTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdatePushTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePushTemplateOutcomeCallable UpdatePushTemplateCallable(const Model::UpdatePushTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdatePushTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePushTemplateAsync(const Model::UpdatePushTemplateRequest& request, const UpdatePushTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecommenderConfigurationOutcome UpdateRecommenderConfiguration(const Model::UpdateRecommenderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecommenderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRecommenderConfigurationOutcomeCallable UpdateRecommenderConfigurationCallable(const Model::UpdateRecommenderConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateRecommenderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRecommenderConfigurationAsync(const Model::UpdateRecommenderConfigurationRequest& request, const UpdateRecommenderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSegmentOutcome UpdateSegment(const Model::UpdateSegmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateSegment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSegmentOutcomeCallable UpdateSegmentCallable(const Model::UpdateSegmentRequest& request) const;

        /**
         * An Async wrapper for UpdateSegment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSegmentAsync(const Model::UpdateSegmentRequest& request, const UpdateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the SMS channel for an application or updates the status and settings
         * of the SMS channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSmsChannelOutcome UpdateSmsChannel(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateSmsChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSmsChannelOutcomeCallable UpdateSmsChannelCallable(const Model::UpdateSmsChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateSmsChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSmsChannelAsync(const Model::UpdateSmsChannelRequest& request, const UpdateSmsChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing message template for messages that are sent through the
         * SMS channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSmsTemplateOutcome UpdateSmsTemplate(const Model::UpdateSmsTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateSmsTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSmsTemplateOutcomeCallable UpdateSmsTemplateCallable(const Model::UpdateSmsTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateSmsTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSmsTemplateAsync(const Model::UpdateSmsTemplateRequest& request, const UpdateSmsTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of a specific version of a message template to
         * <i>active</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateTemplateActiveVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateActiveVersionOutcome UpdateTemplateActiveVersion(const Model::UpdateTemplateActiveVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplateActiveVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplateActiveVersionOutcomeCallable UpdateTemplateActiveVersionCallable(const Model::UpdateTemplateActiveVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateTemplateActiveVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplateActiveVersionAsync(const Model::UpdateTemplateActiveVersionRequest& request, const UpdateTemplateActiveVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the voice channel for an application or updates the status and
         * settings of the voice channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceChannelOutcome UpdateVoiceChannel(const Model::UpdateVoiceChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVoiceChannelOutcomeCallable UpdateVoiceChannelCallable(const Model::UpdateVoiceChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateVoiceChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceChannelAsync(const Model::UpdateVoiceChannelRequest& request, const UpdateVoiceChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing message template for messages that are sent through the
         * voice channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceTemplateOutcome UpdateVoiceTemplate(const Model::UpdateVoiceTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateVoiceTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVoiceTemplateOutcomeCallable UpdateVoiceTemplateCallable(const Model::UpdateVoiceTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateVoiceTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceTemplateAsync(const Model::UpdateVoiceTemplateRequest& request, const UpdateVoiceTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verify an OTP</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VerifyOTPMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyOTPMessageOutcome VerifyOTPMessage(const Model::VerifyOTPMessageRequest& request) const;

        /**
         * A Callable wrapper for VerifyOTPMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyOTPMessageOutcomeCallable VerifyOTPMessageCallable(const Model::VerifyOTPMessageRequest& request) const;

        /**
         * An Async wrapper for VerifyOTPMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyOTPMessageAsync(const Model::VerifyOTPMessageRequest& request, const VerifyOTPMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PinpointEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PinpointClient>;
      void init(const PinpointClientConfiguration& clientConfiguration);

      PinpointClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PinpointEndpointProviderBase> m_endpointProvider;
  };

} // namespace Pinpoint
} // namespace Aws
