/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint/PinpointServiceClientModel.h>
#include <aws/pinpoint/PinpointLegacyAsyncMacros.h>

namespace Aws
{
namespace Pinpoint
{
  /**
   * <p>Doc Engage API - Amazon Pinpoint API</p>
   */
  class AWS_PINPOINT_API PinpointClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Creates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;


        /**
         * <p>Creates a new campaign for an application or updates the settings of an
         * existing campaign for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;


        /**
         * <p>Creates a message template for messages that are sent through the email
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest& request) const;


        /**
         * <p>Creates an export job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportJobOutcome CreateExportJob(const Model::CreateExportJobRequest& request) const;


        /**
         * <p>Creates an import job for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;


        /**
         * <p>Creates a new message template for messages using the in-app message
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInAppTemplateOutcome CreateInAppTemplate(const Model::CreateInAppTemplateRequest& request) const;


        /**
         * <p>Creates a journey for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJourneyOutcome CreateJourney(const Model::CreateJourneyRequest& request) const;


        /**
         * <p>Creates a message template for messages that are sent through a push
         * notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreatePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePushTemplateOutcome CreatePushTemplate(const Model::CreatePushTemplateRequest& request) const;


        /**
         * <p>Creates an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecommenderConfigurationOutcome CreateRecommenderConfiguration(const Model::CreateRecommenderConfigurationRequest& request) const;


        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSegmentOutcome CreateSegment(const Model::CreateSegmentRequest& request) const;


        /**
         * <p>Creates a message template for messages that are sent through the SMS
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSmsTemplateOutcome CreateSmsTemplate(const Model::CreateSmsTemplateRequest& request) const;


        /**
         * <p>Creates a message template for messages that are sent through the voice
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceTemplateOutcome CreateVoiceTemplate(const Model::CreateVoiceTemplateRequest& request) const;


        /**
         * <p>Disables the ADM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAdmChannelOutcome DeleteAdmChannel(const Model::DeleteAdmChannelRequest& request) const;


        /**
         * <p>Disables the APNs channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsChannelOutcome DeleteApnsChannel(const Model::DeleteApnsChannelRequest& request) const;


        /**
         * <p>Disables the APNs sandbox channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsSandboxChannelOutcome DeleteApnsSandboxChannel(const Model::DeleteApnsSandboxChannelRequest& request) const;


        /**
         * <p>Disables the APNs VoIP channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipChannelOutcome DeleteApnsVoipChannel(const Model::DeleteApnsVoipChannelRequest& request) const;


        /**
         * <p>Disables the APNs VoIP sandbox channel for an application and deletes any
         * existing settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApnsVoipSandboxChannelOutcome DeleteApnsVoipSandboxChannel(const Model::DeleteApnsVoipSandboxChannelRequest& request) const;


        /**
         * <p>Deletes an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;


        /**
         * <p>Disables the Baidu channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBaiduChannelOutcome DeleteBaiduChannel(const Model::DeleteBaiduChannelRequest& request) const;


        /**
         * <p>Deletes a campaign from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;


        /**
         * <p>Disables the email channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailChannelOutcome DeleteEmailChannel(const Model::DeleteEmailChannelRequest& request) const;


        /**
         * <p>Deletes a message template for messages that were sent through the email
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest& request) const;


        /**
         * <p>Deletes an endpoint from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;


        /**
         * <p>Deletes the event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventStreamOutcome DeleteEventStream(const Model::DeleteEventStreamRequest& request) const;


        /**
         * <p>Disables the GCM channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGcmChannelOutcome DeleteGcmChannel(const Model::DeleteGcmChannelRequest& request) const;


        /**
         * <p>Deletes a message template for messages sent using the in-app message
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInAppTemplateOutcome DeleteInAppTemplate(const Model::DeleteInAppTemplateRequest& request) const;


        /**
         * <p>Deletes a journey from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJourneyOutcome DeleteJourney(const Model::DeleteJourneyRequest& request) const;


        /**
         * <p>Deletes a message template for messages that were sent through a push
         * notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeletePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePushTemplateOutcome DeletePushTemplate(const Model::DeletePushTemplateRequest& request) const;


        /**
         * <p>Deletes an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecommenderConfigurationOutcome DeleteRecommenderConfiguration(const Model::DeleteRecommenderConfigurationRequest& request) const;


        /**
         * <p>Deletes a segment from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSegmentOutcome DeleteSegment(const Model::DeleteSegmentRequest& request) const;


        /**
         * <p>Disables the SMS channel for an application and deletes any existing settings
         * for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSmsChannelOutcome DeleteSmsChannel(const Model::DeleteSmsChannelRequest& request) const;


        /**
         * <p>Deletes a message template for messages that were sent through the SMS
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSmsTemplateOutcome DeleteSmsTemplate(const Model::DeleteSmsTemplateRequest& request) const;


        /**
         * <p>Deletes all the endpoints that are associated with a specific user
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserEndpointsOutcome DeleteUserEndpoints(const Model::DeleteUserEndpointsRequest& request) const;


        /**
         * <p>Disables the voice channel for an application and deletes any existing
         * settings for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceChannelOutcome DeleteVoiceChannel(const Model::DeleteVoiceChannelRequest& request) const;


        /**
         * <p>Deletes a message template for messages that were sent through the voice
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DeleteVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceTemplateOutcome DeleteVoiceTemplate(const Model::DeleteVoiceTemplateRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the ADM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdmChannelOutcome GetAdmChannel(const Model::GetAdmChannelRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the APNs channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsChannelOutcome GetApnsChannel(const Model::GetApnsChannelRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the APNs sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsSandboxChannelOutcome GetApnsSandboxChannel(const Model::GetApnsSandboxChannelRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP channel
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipChannelOutcome GetApnsVoipChannel(const Model::GetApnsVoipChannelRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the APNs VoIP sandbox
         * channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApnsVoipSandboxChannelOutcome GetApnsVoipSandboxChannel(const Model::GetApnsVoipSandboxChannelRequest& request) const;


        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;


        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard metric that applies to
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationDateRangeKpiOutcome GetApplicationDateRangeKpi(const Model::GetApplicationDateRangeKpiRequest& request) const;


        /**
         * <p>Retrieves information about the settings for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationSettingsOutcome GetApplicationSettings(const Model::GetApplicationSettingsRequest& request) const;


        /**
         * <p>Retrieves information about all the applications that are associated with
         * your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetApps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppsOutcome GetApps(const Model::GetAppsRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the Baidu channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBaiduChannelOutcome GetBaiduChannel(const Model::GetBaiduChannelRequest& request) const;


        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;


        /**
         * <p>Retrieves information about all the activities for a campaign.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignActivitiesOutcome GetCampaignActivities(const Model::GetCampaignActivitiesRequest& request) const;


        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard metric that applies to
         * a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignDateRangeKpiOutcome GetCampaignDateRangeKpi(const Model::GetCampaignDateRangeKpiRequest& request) const;


        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a specific version of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionOutcome GetCampaignVersion(const Model::GetCampaignVersionRequest& request) const;


        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all versions of a campaign.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaignVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignVersionsOutcome GetCampaignVersions(const Model::GetCampaignVersionsRequest& request) const;


        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the campaigns that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCampaignsOutcome GetCampaigns(const Model::GetCampaignsRequest& request) const;


        /**
         * <p>Retrieves information about the history and status of each channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelsOutcome GetChannels(const Model::GetChannelsRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the email channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailChannelOutcome GetEmailChannel(const Model::GetEmailChannelRequest& request) const;


        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the email channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest& request) const;


        /**
         * <p>Retrieves information about the settings and attributes of a specific
         * endpoint for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointOutcome GetEndpoint(const Model::GetEndpointRequest& request) const;


        /**
         * <p>Retrieves information about the event stream settings for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventStreamOutcome GetEventStream(const Model::GetEventStreamRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of a specific export job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobOutcome GetExportJob(const Model::GetExportJobRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of all the export jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobsOutcome GetExportJobs(const Model::GetExportJobsRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the GCM channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGcmChannelOutcome GetGcmChannel(const Model::GetGcmChannelRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of a specific import job
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of all the import jobs
         * for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobsOutcome GetImportJobs(const Model::GetImportJobsRequest& request) const;


        /**
         * <p>Retrieves the in-app messages targeted for the provided endpoint
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetInAppMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInAppMessagesOutcome GetInAppMessages(const Model::GetInAppMessagesRequest& request) const;


        /**
         * <p>Retrieves the content and settings of a message template for messages sent
         * through the in-app channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInAppTemplateOutcome GetInAppTemplate(const Model::GetInAppTemplateRequest& request) const;


        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyOutcome GetJourney(const Model::GetJourneyRequest& request) const;


        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard engagement metric that
         * applies to a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyDateRangeKpi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyDateRangeKpiOutcome GetJourneyDateRangeKpi(const Model::GetJourneyDateRangeKpiRequest& request) const;


        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard execution metric that
         * applies to a journey activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyExecutionActivityMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyExecutionActivityMetricsOutcome GetJourneyExecutionActivityMetrics(const Model::GetJourneyExecutionActivityMetricsRequest& request) const;


        /**
         * <p>Retrieves (queries) pre-aggregated data for a standard execution metric that
         * applies to a journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetJourneyExecutionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJourneyExecutionMetricsOutcome GetJourneyExecutionMetrics(const Model::GetJourneyExecutionMetricsRequest& request) const;


        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through a push notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetPushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPushTemplateOutcome GetPushTemplate(const Model::GetPushTemplateRequest& request) const;


        /**
         * <p>Retrieves information about an Amazon Pinpoint configuration for a
         * recommender model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommenderConfigurationOutcome GetRecommenderConfiguration(const Model::GetRecommenderConfigurationRequest& request) const;


        /**
         * <p>Retrieves information about all the recommender model configurations that are
         * associated with your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetRecommenderConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommenderConfigurationsOutcome GetRecommenderConfigurations(const Model::GetRecommenderConfigurationsRequest& request) const;


        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific segment that's associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentOutcome GetSegment(const Model::GetSegmentRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the export jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentExportJobsOutcome GetSegmentExportJobs(const Model::GetSegmentExportJobsRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the import jobs for a
         * segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentImportJobsOutcome GetSegmentImportJobs(const Model::GetSegmentImportJobsRequest& request) const;


        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for a specific version of a segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionOutcome GetSegmentVersion(const Model::GetSegmentVersionRequest& request) const;


        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the versions of a specific segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegmentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentVersionsOutcome GetSegmentVersions(const Model::GetSegmentVersionsRequest& request) const;


        /**
         * <p>Retrieves information about the configuration, dimension, and other settings
         * for all the segments that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSegmentsOutcome GetSegments(const Model::GetSegmentsRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the SMS channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSmsChannelOutcome GetSmsChannel(const Model::GetSmsChannelRequest& request) const;


        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the SMS channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSmsTemplateOutcome GetSmsTemplate(const Model::GetSmsTemplateRequest& request) const;


        /**
         * <p>Retrieves information about all the endpoints that are associated with a
         * specific user ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetUserEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserEndpointsOutcome GetUserEndpoints(const Model::GetUserEndpointsRequest& request) const;


        /**
         * <p>Retrieves information about the status and settings of the voice channel for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceChannelOutcome GetVoiceChannel(const Model::GetVoiceChannelRequest& request) const;


        /**
         * <p>Retrieves the content and settings of a message template for messages that
         * are sent through the voice channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GetVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceTemplateOutcome GetVoiceTemplate(const Model::GetVoiceTemplateRequest& request) const;


        /**
         * <p>Retrieves information about the status, configuration, and other settings for
         * all the journeys that are associated with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListJourneys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJourneysOutcome ListJourneys(const Model::ListJourneysRequest& request) const;


        /**
         * <p>Retrieves all the tags (keys and values) that are associated with an
         * application, campaign, message template, or segment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Retrieves information about all the versions of a specific message
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateVersionsOutcome ListTemplateVersions(const Model::ListTemplateVersionsRequest& request) const;


        /**
         * <p>Retrieves information about all the message templates that are associated
         * with your Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;


        /**
         * <p>Retrieves information about a phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PhoneNumberValidate">AWS
         * API Reference</a></p>
         */
        virtual Model::PhoneNumberValidateOutcome PhoneNumberValidate(const Model::PhoneNumberValidateRequest& request) const;


        /**
         * <p>Creates a new event stream for an application or updates the settings of an
         * existing event stream for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEventStream">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventStreamOutcome PutEventStream(const Model::PutEventStreamRequest& request) const;


        /**
         * <p>Creates a new event to record for endpoints, or creates or updates endpoint
         * data that existing events are associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;


        /**
         * <p>Removes one or more attributes, of the same attribute type, from all the
         * endpoints that are associated with an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/RemoveAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAttributesOutcome RemoveAttributes(const Model::RemoveAttributesRequest& request) const;


        /**
         * <p>Creates and sends a direct message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessagesOutcome SendMessages(const Model::SendMessagesRequest& request) const;


        /**
         * <p>Send an OTP message</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendOTPMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendOTPMessageOutcome SendOTPMessage(const Model::SendOTPMessageRequest& request) const;


        /**
         * <p>Creates and sends a message to a list of users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::SendUsersMessagesOutcome SendUsersMessages(const Model::SendUsersMessagesRequest& request) const;


        /**
         * <p>Adds one or more tags (keys and values) to an application, campaign, message
         * template, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags (keys and values) from an application, campaign,
         * message template, or segment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Enables the ADM channel for an application or updates the status and settings
         * of the ADM channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAdmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAdmChannelOutcome UpdateAdmChannel(const Model::UpdateAdmChannelRequest& request) const;


        /**
         * <p>Enables the APNs channel for an application or updates the status and
         * settings of the APNs channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsChannelOutcome UpdateApnsChannel(const Model::UpdateApnsChannelRequest& request) const;


        /**
         * <p>Enables the APNs sandbox channel for an application or updates the status and
         * settings of the APNs sandbox channel for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsSandboxChannelOutcome UpdateApnsSandboxChannel(const Model::UpdateApnsSandboxChannelRequest& request) const;


        /**
         * <p>Enables the APNs VoIP channel for an application or updates the status and
         * settings of the APNs VoIP channel for an application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipChannelOutcome UpdateApnsVoipChannel(const Model::UpdateApnsVoipChannelRequest& request) const;


        /**
         * <p>Enables the APNs VoIP sandbox channel for an application or updates the
         * status and settings of the APNs VoIP sandbox channel for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApnsVoipSandboxChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApnsVoipSandboxChannelOutcome UpdateApnsVoipSandboxChannel(const Model::UpdateApnsVoipSandboxChannelRequest& request) const;


        /**
         * <p>Updates the settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationSettingsOutcome UpdateApplicationSettings(const Model::UpdateApplicationSettingsRequest& request) const;


        /**
         * <p>Enables the Baidu channel for an application or updates the status and
         * settings of the Baidu channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateBaiduChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBaiduChannelOutcome UpdateBaiduChannel(const Model::UpdateBaiduChannelRequest& request) const;


        /**
         * <p>Updates the configuration and other settings for a campaign.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;


        /**
         * <p>Enables the email channel for an application or updates the status and
         * settings of the email channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailChannelOutcome UpdateEmailChannel(const Model::UpdateEmailChannelRequest& request) const;


        /**
         * <p>Updates an existing message template for messages that are sent through the
         * email channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest& request) const;


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
         * <p>Enables the GCM channel for an application or updates the status and settings
         * of the GCM channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateGcmChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGcmChannelOutcome UpdateGcmChannel(const Model::UpdateGcmChannelRequest& request) const;


        /**
         * <p>Updates an existing message template for messages sent through the in-app
         * message channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateInAppTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInAppTemplateOutcome UpdateInAppTemplate(const Model::UpdateInAppTemplateRequest& request) const;


        /**
         * <p>Updates the configuration and other settings for a journey.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateJourney">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJourneyOutcome UpdateJourney(const Model::UpdateJourneyRequest& request) const;


        /**
         * <p>Cancels (stops) an active journey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateJourneyState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJourneyStateOutcome UpdateJourneyState(const Model::UpdateJourneyStateRequest& request) const;


        /**
         * <p>Updates an existing message template for messages that are sent through a
         * push notification channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdatePushTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePushTemplateOutcome UpdatePushTemplate(const Model::UpdatePushTemplateRequest& request) const;


        /**
         * <p>Updates an Amazon Pinpoint configuration for a recommender
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateRecommenderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecommenderConfigurationOutcome UpdateRecommenderConfiguration(const Model::UpdateRecommenderConfigurationRequest& request) const;


        /**
         * <p>Creates a new segment for an application or updates the configuration,
         * dimension, and other settings for an existing segment that's associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSegment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSegmentOutcome UpdateSegment(const Model::UpdateSegmentRequest& request) const;


        /**
         * <p>Enables the SMS channel for an application or updates the status and settings
         * of the SMS channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSmsChannelOutcome UpdateSmsChannel(const Model::UpdateSmsChannelRequest& request) const;


        /**
         * <p>Updates an existing message template for messages that are sent through the
         * SMS channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateSmsTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSmsTemplateOutcome UpdateSmsTemplate(const Model::UpdateSmsTemplateRequest& request) const;


        /**
         * <p>Changes the status of a specific version of a message template to
         * <i>active</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateTemplateActiveVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateActiveVersionOutcome UpdateTemplateActiveVersion(const Model::UpdateTemplateActiveVersionRequest& request) const;


        /**
         * <p>Enables the voice channel for an application or updates the status and
         * settings of the voice channel for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceChannelOutcome UpdateVoiceChannel(const Model::UpdateVoiceChannelRequest& request) const;


        /**
         * <p>Updates an existing message template for messages that are sent through the
         * voice channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateVoiceTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceTemplateOutcome UpdateVoiceTemplate(const Model::UpdateVoiceTemplateRequest& request) const;


        /**
         * <p>Verify an OTP</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/VerifyOTPMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyOTPMessageOutcome VerifyOTPMessage(const Model::VerifyOTPMessageRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PinpointEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const PinpointClientConfiguration& clientConfiguration);

      PinpointClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PinpointEndpointProviderBase> m_endpointProvider;
  };

} // namespace Pinpoint
} // namespace Aws
