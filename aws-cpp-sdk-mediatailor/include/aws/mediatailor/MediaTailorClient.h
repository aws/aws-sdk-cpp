/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/MediaTailorServiceClientModel.h>
#include <aws/mediatailor/MediaTailorLegacyAsyncMacros.h>

namespace Aws
{
namespace MediaTailor
{
  /**
   * <p>Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad
   * insertion and linear channels. With MediaTailor, you can assemble existing
   * content into a linear stream and serve targeted ads to viewers while maintaining
   * broadcast quality in over-the-top (OTT) video applications. For information
   * about using the service, including detailed information about the settings
   * covered in this guide, see the <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental
   * MediaTailor User Guide</a>.</p> <p>Through the SDKs and the CLI you manage AWS
   * Elemental MediaTailor configurations and channels the same as you do through the
   * console. For example, you specify ad insertion behavior and mapping information
   * for the origin server and the ad decision server (ADS).</p>
   */
  class AWS_MEDIATAILOR_API MediaTailorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::MediaTailor::MediaTailorClientConfiguration& clientConfiguration = Aws::MediaTailor::MediaTailorClientConfiguration(),
                          std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG),
                          const Aws::MediaTailor::MediaTailorClientConfiguration& clientConfiguration = Aws::MediaTailor::MediaTailorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaTailorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider = Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG),
                          const Aws::MediaTailor::MediaTailorClientConfiguration& clientConfiguration = Aws::MediaTailor::MediaTailorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaTailorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaTailorClient();


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
         * <p>Amazon CloudWatch log settings for a playback configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ConfigureLogsForPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsForPlaybackConfigurationOutcome ConfigureLogsForPlaybackConfiguration(const Model::ConfigureLogsForPlaybackConfigurationRequest& request) const;


        /**
         * <p>Creates a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;


        /**
         * <p>The live source configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLiveSourceOutcome CreateLiveSource(const Model::CreateLiveSourceRequest& request) const;


        /**
         * <p>Creates a prefetch schedule for a playback configuration. A prefetch schedule
         * allows you to tell MediaTailor to fetch and prepare certain ads before an ad
         * break happens. For more information about ad prefetching, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Using
         * ad prefetching</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreatePrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePrefetchScheduleOutcome CreatePrefetchSchedule(const Model::CreatePrefetchScheduleRequest& request) const;


        /**
         * <p>Creates a program within a channel. For information about programs, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-programs.html">Working
         * with programs</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProgramOutcome CreateProgram(const Model::CreateProgramRequest& request) const;


        /**
         * <p>Creates a source location. A source location is a container for sources. For
         * more information about source locations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
         * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSourceLocationOutcome CreateSourceLocation(const Model::CreateSourceLocationRequest& request) const;


        /**
         * <p>The VOD source configuration parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVodSourceOutcome CreateVodSource(const Model::CreateVodSourceRequest& request) const;


        /**
         * <p>Deletes a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;


        /**
         * <p>The channel policy to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelPolicyOutcome DeleteChannelPolicy(const Model::DeleteChannelPolicyRequest& request) const;


        /**
         * <p>The live source to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLiveSourceOutcome DeleteLiveSource(const Model::DeleteLiveSourceRequest& request) const;


        /**
         * <p>Deletes a playback configuration. For information about MediaTailor
         * configurations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
         * with configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaybackConfigurationOutcome DeletePlaybackConfiguration(const Model::DeletePlaybackConfigurationRequest& request) const;


        /**
         * <p>Deletes a prefetch schedule for a specific playback configuration. If you
         * call <code>DeletePrefetchSchedule</code> on an expired prefetch schedule,
         * MediaTailor returns an HTTP 404 status code. For more information about ad
         * prefetching, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Using
         * ad prefetching</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePrefetchScheduleOutcome DeletePrefetchSchedule(const Model::DeletePrefetchScheduleRequest& request) const;


        /**
         * <p>Deletes a program within a channel. For information about programs, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-programs.html">Working
         * with programs</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProgramOutcome DeleteProgram(const Model::DeleteProgramRequest& request) const;


        /**
         * <p>Deletes a source location. A source location is a container for sources. For
         * more information about source locations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
         * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceLocationOutcome DeleteSourceLocation(const Model::DeleteSourceLocationRequest& request) const;


        /**
         * <p>The video on demand (VOD) source to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVodSourceOutcome DeleteVodSource(const Model::DeleteVodSourceRequest& request) const;


        /**
         * <p>Describes a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;


        /**
         * <p>The live source to describe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLiveSourceOutcome DescribeLiveSource(const Model::DescribeLiveSourceRequest& request) const;


        /**
         * <p>Describes a program within a channel. For information about programs, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-programs.html">Working
         * with programs</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProgramOutcome DescribeProgram(const Model::DescribeProgramRequest& request) const;


        /**
         * <p>Describes a source location. A source location is a container for sources.
         * For more information about source locations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
         * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceLocationOutcome DescribeSourceLocation(const Model::DescribeSourceLocationRequest& request) const;


        /**
         * <p>Provides details about a specific video on demand (VOD) source in a specific
         * source location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVodSourceOutcome DescribeVodSource(const Model::DescribeVodSourceRequest& request) const;


        /**
         * <p>Returns the channel's IAM policy. IAM policies are used to control access to
         * your channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelPolicyOutcome GetChannelPolicy(const Model::GetChannelPolicyRequest& request) const;


        /**
         * <p>Retrieves information about your channel's schedule.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelScheduleOutcome GetChannelSchedule(const Model::GetChannelScheduleRequest& request) const;


        /**
         * <p>Retrieves a playback configuration. For information about MediaTailor
         * configurations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
         * with configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlaybackConfigurationOutcome GetPlaybackConfiguration(const Model::GetPlaybackConfigurationRequest& request) const;


        /**
         * <p>Retrieves a prefetch schedule for a playback configuration. A prefetch
         * schedule allows you to tell MediaTailor to fetch and prepare certain ads before
         * an ad break happens. For more information about ad prefetching, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Using
         * ad prefetching</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPrefetchScheduleOutcome GetPrefetchSchedule(const Model::GetPrefetchScheduleRequest& request) const;


        /**
         * <p>Lists the alerts that are associated with a MediaTailor channel assembly
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListAlerts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlertsOutcome ListAlerts(const Model::ListAlertsRequest& request) const;


        /**
         * <p>Retrieves information about the channels that are associated with the current
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;


        /**
         * <p>Lists the live sources contained in a source location. A source represents a
         * piece of content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListLiveSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLiveSourcesOutcome ListLiveSources(const Model::ListLiveSourcesRequest& request) const;


        /**
         * <p>Retrieves existing playback configurations. For information about MediaTailor
         * configurations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
         * with Configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPlaybackConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaybackConfigurationsOutcome ListPlaybackConfigurations(const Model::ListPlaybackConfigurationsRequest& request) const;


        /**
         * <p>Lists the prefetch schedules for a playback configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPrefetchSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrefetchSchedulesOutcome ListPrefetchSchedules(const Model::ListPrefetchSchedulesRequest& request) const;


        /**
         * <p>Lists the source locations for a channel. A source location defines the host
         * server URL, and contains a list of sources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListSourceLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceLocationsOutcome ListSourceLocations(const Model::ListSourceLocationsRequest& request) const;


        /**
         * <p>A list of tags that are associated with this resource. Tags are key-value
         * pairs that you can associate with Amazon resources to help with organization,
         * access control, and cost tracking. For more information, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
         * AWS Elemental MediaTailor Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the VOD sources contained in a source location. A source represents a
         * piece of content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListVodSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVodSourcesOutcome ListVodSources(const Model::ListVodSourcesRequest& request) const;


        /**
         * <p>Creates an IAM policy for the channel. IAM policies are used to control
         * access to your channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChannelPolicyOutcome PutChannelPolicy(const Model::PutChannelPolicyRequest& request) const;


        /**
         * <p>Creates a playback configuration. For information about MediaTailor
         * configurations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
         * with configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPlaybackConfigurationOutcome PutPlaybackConfiguration(const Model::PutPlaybackConfigurationRequest& request) const;


        /**
         * <p>Starts a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;


        /**
         * <p>Stops a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;


        /**
         * <p>The resource to tag. Tags are key-value pairs that you can associate with
         * Amazon resources to help with organization, access control, and cost tracking.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
         * AWS Elemental MediaTailor Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>The resource to untag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;


        /**
         * <p>Updates a live source's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLiveSourceOutcome UpdateLiveSource(const Model::UpdateLiveSourceRequest& request) const;


        /**
         * <p>Updates a source location. A source location is a container for sources. For
         * more information about source locations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
         * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSourceLocationOutcome UpdateSourceLocation(const Model::UpdateSourceLocationRequest& request) const;


        /**
         * <p>Updates a VOD source's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVodSourceOutcome UpdateVodSource(const Model::UpdateVodSourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaTailorEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MediaTailorClientConfiguration& clientConfiguration);

      MediaTailorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaTailorEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaTailor
} // namespace Aws
