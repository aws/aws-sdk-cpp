﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/MediaTailorServiceClientModel.h>

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
        MediaTailorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaTailorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaTailorClient();


        /**
         * <p>Configures Amazon CloudWatch log settings for a playback
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ConfigureLogsForPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsForPlaybackConfigurationOutcome ConfigureLogsForPlaybackConfiguration(const Model::ConfigureLogsForPlaybackConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ConfigureLogsForPlaybackConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfigureLogsForPlaybackConfigurationOutcomeCallable ConfigureLogsForPlaybackConfigurationCallable(const Model::ConfigureLogsForPlaybackConfigurationRequest& request) const;

        /**
         * An Async wrapper for ConfigureLogsForPlaybackConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfigureLogsForPlaybackConfigurationAsync(const Model::ConfigureLogsForPlaybackConfigurationRequest& request, const ConfigureLogsForPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates name for a specific live source in a source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLiveSourceOutcome CreateLiveSource(const Model::CreateLiveSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateLiveSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLiveSourceOutcomeCallable CreateLiveSourceCallable(const Model::CreateLiveSourceRequest& request) const;

        /**
         * An Async wrapper for CreateLiveSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLiveSourceAsync(const Model::CreateLiveSourceRequest& request, const CreateLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new prefetch schedule for the specified playback
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreatePrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePrefetchScheduleOutcome CreatePrefetchSchedule(const Model::CreatePrefetchScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreatePrefetchSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePrefetchScheduleOutcomeCallable CreatePrefetchScheduleCallable(const Model::CreatePrefetchScheduleRequest& request) const;

        /**
         * An Async wrapper for CreatePrefetchSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePrefetchScheduleAsync(const Model::CreatePrefetchScheduleRequest& request, const CreatePrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a program.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProgramOutcome CreateProgram(const Model::CreateProgramRequest& request) const;

        /**
         * A Callable wrapper for CreateProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProgramOutcomeCallable CreateProgramCallable(const Model::CreateProgramRequest& request) const;

        /**
         * An Async wrapper for CreateProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProgramAsync(const Model::CreateProgramRequest& request, const CreateProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSourceLocationOutcome CreateSourceLocation(const Model::CreateSourceLocationRequest& request) const;

        /**
         * A Callable wrapper for CreateSourceLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSourceLocationOutcomeCallable CreateSourceLocationCallable(const Model::CreateSourceLocationRequest& request) const;

        /**
         * An Async wrapper for CreateSourceLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSourceLocationAsync(const Model::CreateSourceLocationRequest& request, const CreateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates name for a specific VOD source in a source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVodSourceOutcome CreateVodSource(const Model::CreateVodSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateVodSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVodSourceOutcomeCallable CreateVodSourceCallable(const Model::CreateVodSourceRequest& request) const;

        /**
         * An Async wrapper for CreateVodSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVodSourceAsync(const Model::CreateVodSourceRequest& request, const CreateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a channel. You must stop the channel before it can be
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a channel's IAM policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelPolicyOutcome DeleteChannelPolicy(const Model::DeleteChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelPolicyOutcomeCallable DeleteChannelPolicyCallable(const Model::DeleteChannelPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelPolicyAsync(const Model::DeleteChannelPolicyRequest& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific live source in a specific source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLiveSourceOutcome DeleteLiveSource(const Model::DeleteLiveSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteLiveSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLiveSourceOutcomeCallable DeleteLiveSourceCallable(const Model::DeleteLiveSourceRequest& request) const;

        /**
         * An Async wrapper for DeleteLiveSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLiveSourceAsync(const Model::DeleteLiveSourceRequest& request, const DeleteLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the playback configuration for the specified name.</p>  <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaybackConfigurationOutcome DeletePlaybackConfiguration(const Model::DeletePlaybackConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeletePlaybackConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlaybackConfigurationOutcomeCallable DeletePlaybackConfigurationCallable(const Model::DeletePlaybackConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeletePlaybackConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlaybackConfigurationAsync(const Model::DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a prefetch schedule for a specific playback configuration. If you
         * call DeletePrefetchSchedule on an expired prefetch schedule, MediaTailor returns
         * an HTTP 404 status code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePrefetchScheduleOutcome DeletePrefetchSchedule(const Model::DeletePrefetchScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeletePrefetchSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePrefetchScheduleOutcomeCallable DeletePrefetchScheduleCallable(const Model::DeletePrefetchScheduleRequest& request) const;

        /**
         * An Async wrapper for DeletePrefetchSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePrefetchScheduleAsync(const Model::DeletePrefetchScheduleRequest& request, const DeletePrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific program on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProgramOutcome DeleteProgram(const Model::DeleteProgramRequest& request) const;

        /**
         * A Callable wrapper for DeleteProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProgramOutcomeCallable DeleteProgramCallable(const Model::DeleteProgramRequest& request) const;

        /**
         * An Async wrapper for DeleteProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProgramAsync(const Model::DeleteProgramRequest& request, const DeleteProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceLocationOutcome DeleteSourceLocation(const Model::DeleteSourceLocationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSourceLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSourceLocationOutcomeCallable DeleteSourceLocationCallable(const Model::DeleteSourceLocationRequest& request) const;

        /**
         * An Async wrapper for DeleteSourceLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSourceLocationAsync(const Model::DeleteSourceLocationRequest& request, const DeleteSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific VOD source in a specific source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVodSourceOutcome DeleteVodSource(const Model::DeleteVodSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteVodSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVodSourceOutcomeCallable DeleteVodSourceCallable(const Model::DeleteVodSourceRequest& request) const;

        /**
         * An Async wrapper for DeleteVodSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVodSourceAsync(const Model::DeleteVodSourceRequest& request, const DeleteVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the properties of a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about a specific live source in a specific source
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLiveSourceOutcome DescribeLiveSource(const Model::DescribeLiveSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeLiveSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLiveSourceOutcomeCallable DescribeLiveSourceCallable(const Model::DescribeLiveSourceRequest& request) const;

        /**
         * An Async wrapper for DescribeLiveSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLiveSourceAsync(const Model::DescribeLiveSourceRequest& request, const DescribeLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the properties of the requested program.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProgramOutcome DescribeProgram(const Model::DescribeProgramRequest& request) const;

        /**
         * A Callable wrapper for DescribeProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProgramOutcomeCallable DescribeProgramCallable(const Model::DescribeProgramRequest& request) const;

        /**
         * An Async wrapper for DescribeProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProgramAsync(const Model::DescribeProgramRequest& request, const DescribeProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the properties of the requested source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceLocationOutcome DescribeSourceLocation(const Model::DescribeSourceLocationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSourceLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSourceLocationOutcomeCallable DescribeSourceLocationCallable(const Model::DescribeSourceLocationRequest& request) const;

        /**
         * An Async wrapper for DescribeSourceLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSourceLocationAsync(const Model::DescribeSourceLocationRequest& request, const DescribeSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about a specific VOD source in a specific source
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVodSourceOutcome DescribeVodSource(const Model::DescribeVodSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeVodSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVodSourceOutcomeCallable DescribeVodSourceCallable(const Model::DescribeVodSourceRequest& request) const;

        /**
         * An Async wrapper for DescribeVodSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVodSourceAsync(const Model::DescribeVodSourceRequest& request, const DescribeVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a channel's IAM policy.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelPolicyOutcome GetChannelPolicy(const Model::GetChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelPolicyOutcomeCallable GetChannelPolicyCallable(const Model::GetChannelPolicyRequest& request) const;

        /**
         * An Async wrapper for GetChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelPolicyAsync(const Model::GetChannelPolicyRequest& request, const GetChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about your channel's schedule.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelScheduleOutcome GetChannelSchedule(const Model::GetChannelScheduleRequest& request) const;

        /**
         * A Callable wrapper for GetChannelSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelScheduleOutcomeCallable GetChannelScheduleCallable(const Model::GetChannelScheduleRequest& request) const;

        /**
         * An Async wrapper for GetChannelSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelScheduleAsync(const Model::GetChannelScheduleRequest& request, const GetChannelScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the playback configuration for the specified name.</p>  <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlaybackConfigurationOutcome GetPlaybackConfiguration(const Model::GetPlaybackConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetPlaybackConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlaybackConfigurationOutcomeCallable GetPlaybackConfigurationCallable(const Model::GetPlaybackConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetPlaybackConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlaybackConfigurationAsync(const Model::GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the prefetch schedule for a specific playback
         * configuration. If you call GetPrefetchSchedule on an expired prefetch schedule,
         * MediaTailor returns an HTTP 404 status code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPrefetchScheduleOutcome GetPrefetchSchedule(const Model::GetPrefetchScheduleRequest& request) const;

        /**
         * A Callable wrapper for GetPrefetchSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPrefetchScheduleOutcomeCallable GetPrefetchScheduleCallable(const Model::GetPrefetchScheduleRequest& request) const;

        /**
         * An Async wrapper for GetPrefetchSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPrefetchScheduleAsync(const Model::GetPrefetchScheduleRequest& request, const GetPrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of alerts for the given resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListAlerts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlertsOutcome ListAlerts(const Model::ListAlertsRequest& request) const;

        /**
         * A Callable wrapper for ListAlerts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAlertsOutcomeCallable ListAlertsCallable(const Model::ListAlertsRequest& request) const;

        /**
         * An Async wrapper for ListAlerts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlertsAsync(const Model::ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of channels that are associated with this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>lists all the live sources in a source location.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListLiveSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLiveSourcesOutcome ListLiveSources(const Model::ListLiveSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListLiveSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLiveSourcesOutcomeCallable ListLiveSourcesCallable(const Model::ListLiveSourcesRequest& request) const;

        /**
         * An Async wrapper for ListLiveSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLiveSourcesAsync(const Model::ListLiveSourcesRequest& request, const ListLiveSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the playback configurations defined in AWS Elemental
         * MediaTailor. You can specify a maximum number of configurations to return at a
         * time. The default maximum is 50. Results are returned in pagefuls. If
         * MediaTailor has more configurations than the specified maximum, it provides
         * parameters in the response that you can use to retrieve the next pageful.</p> 
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPlaybackConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaybackConfigurationsOutcome ListPlaybackConfigurations(const Model::ListPlaybackConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListPlaybackConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlaybackConfigurationsOutcomeCallable ListPlaybackConfigurationsCallable(const Model::ListPlaybackConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListPlaybackConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlaybackConfigurationsAsync(const Model::ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new prefetch schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPrefetchSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrefetchSchedulesOutcome ListPrefetchSchedules(const Model::ListPrefetchSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListPrefetchSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrefetchSchedulesOutcomeCallable ListPrefetchSchedulesCallable(const Model::ListPrefetchSchedulesRequest& request) const;

        /**
         * An Async wrapper for ListPrefetchSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrefetchSchedulesAsync(const Model::ListPrefetchSchedulesRequest& request, const ListPrefetchSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of source locations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListSourceLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceLocationsOutcome ListSourceLocations(const Model::ListSourceLocationsRequest& request) const;

        /**
         * A Callable wrapper for ListSourceLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSourceLocationsOutcomeCallable ListSourceLocationsCallable(const Model::ListSourceLocationsRequest& request) const;

        /**
         * An Async wrapper for ListSourceLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSourceLocationsAsync(const Model::ListSourceLocationsRequest& request, const ListSourceLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the tags assigned to the specified playback configuration
         * resource.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListTagsForResource">AWS
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
         * <p>Lists all the VOD sources in a source location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListVodSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVodSourcesOutcome ListVodSources(const Model::ListVodSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListVodSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVodSourcesOutcomeCallable ListVodSourcesCallable(const Model::ListVodSourcesRequest& request) const;

        /**
         * An Async wrapper for ListVodSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVodSourcesAsync(const Model::ListVodSourcesRequest& request, const ListVodSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM policy for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChannelPolicyOutcome PutChannelPolicy(const Model::PutChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutChannelPolicyOutcomeCallable PutChannelPolicyCallable(const Model::PutChannelPolicyRequest& request) const;

        /**
         * An Async wrapper for PutChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutChannelPolicyAsync(const Model::PutChannelPolicyRequest& request, const PutChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new playback configuration to AWS Elemental MediaTailor.</p> 
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPlaybackConfigurationOutcome PutPlaybackConfiguration(const Model::PutPlaybackConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutPlaybackConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPlaybackConfigurationOutcomeCallable PutPlaybackConfigurationCallable(const Model::PutPlaybackConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutPlaybackConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPlaybackConfigurationAsync(const Model::PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;

        /**
         * A Callable wrapper for StartChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChannelOutcomeCallable StartChannelCallable(const Model::StartChannelRequest& request) const;

        /**
         * An Async wrapper for StartChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChannelAsync(const Model::StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;

        /**
         * A Callable wrapper for StopChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopChannelOutcomeCallable StopChannelCallable(const Model::StopChannelRequest& request) const;

        /**
         * An Async wrapper for StopChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopChannelAsync(const Model::StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to the specified playback configuration resource. You can specify
         * one or more tags to add.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TagResource">AWS
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
         * <p>Removes tags from the specified playback configuration resource. You can
         * specify one or more tags to remove.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UntagResource">AWS
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
         * <p>Updates an existing channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specific live source in a specific source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLiveSourceOutcome UpdateLiveSource(const Model::UpdateLiveSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateLiveSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLiveSourceOutcomeCallable UpdateLiveSourceCallable(const Model::UpdateLiveSourceRequest& request) const;

        /**
         * An Async wrapper for UpdateLiveSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLiveSourceAsync(const Model::UpdateLiveSourceRequest& request, const UpdateLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSourceLocationOutcome UpdateSourceLocation(const Model::UpdateSourceLocationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSourceLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSourceLocationOutcomeCallable UpdateSourceLocationCallable(const Model::UpdateSourceLocationRequest& request) const;

        /**
         * An Async wrapper for UpdateSourceLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSourceLocationAsync(const Model::UpdateSourceLocationRequest& request, const UpdateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specific VOD source in a specific source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVodSourceOutcome UpdateVodSource(const Model::UpdateVodSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateVodSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVodSourceOutcomeCallable UpdateVodSourceCallable(const Model::UpdateVodSourceRequest& request) const;

        /**
         * An Async wrapper for UpdateVodSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVodSourceAsync(const Model::UpdateVodSourceRequest& request, const UpdateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaTailor
} // namespace Aws
