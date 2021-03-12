/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/CreateChannelResult.h>
#include <aws/mediatailor/model/CreateProgramResult.h>
#include <aws/mediatailor/model/CreateSourceLocationResult.h>
#include <aws/mediatailor/model/CreateVodSourceResult.h>
#include <aws/mediatailor/model/DeleteChannelResult.h>
#include <aws/mediatailor/model/DeleteChannelPolicyResult.h>
#include <aws/mediatailor/model/DeletePlaybackConfigurationResult.h>
#include <aws/mediatailor/model/DeleteProgramResult.h>
#include <aws/mediatailor/model/DeleteSourceLocationResult.h>
#include <aws/mediatailor/model/DeleteVodSourceResult.h>
#include <aws/mediatailor/model/DescribeChannelResult.h>
#include <aws/mediatailor/model/DescribeProgramResult.h>
#include <aws/mediatailor/model/DescribeSourceLocationResult.h>
#include <aws/mediatailor/model/DescribeVodSourceResult.h>
#include <aws/mediatailor/model/GetChannelPolicyResult.h>
#include <aws/mediatailor/model/GetChannelScheduleResult.h>
#include <aws/mediatailor/model/GetPlaybackConfigurationResult.h>
#include <aws/mediatailor/model/ListChannelsResult.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsResult.h>
#include <aws/mediatailor/model/ListProgramsResult.h>
#include <aws/mediatailor/model/ListSourceLocationsResult.h>
#include <aws/mediatailor/model/ListTagsForResourceResult.h>
#include <aws/mediatailor/model/ListVodSourcesResult.h>
#include <aws/mediatailor/model/PutChannelPolicyResult.h>
#include <aws/mediatailor/model/PutPlaybackConfigurationResult.h>
#include <aws/mediatailor/model/StartChannelResult.h>
#include <aws/mediatailor/model/StopChannelResult.h>
#include <aws/mediatailor/model/UpdateChannelResult.h>
#include <aws/mediatailor/model/UpdateSourceLocationResult.h>
#include <aws/mediatailor/model/UpdateVodSourceResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace MediaTailor
{

namespace Model
{
        class CreateChannelRequest;
        class CreateProgramRequest;
        class CreateSourceLocationRequest;
        class CreateVodSourceRequest;
        class DeleteChannelRequest;
        class DeleteChannelPolicyRequest;
        class DeletePlaybackConfigurationRequest;
        class DeleteProgramRequest;
        class DeleteSourceLocationRequest;
        class DeleteVodSourceRequest;
        class DescribeChannelRequest;
        class DescribeProgramRequest;
        class DescribeSourceLocationRequest;
        class DescribeVodSourceRequest;
        class GetChannelPolicyRequest;
        class GetChannelScheduleRequest;
        class GetPlaybackConfigurationRequest;
        class ListChannelsRequest;
        class ListPlaybackConfigurationsRequest;
        class ListProgramsRequest;
        class ListSourceLocationsRequest;
        class ListTagsForResourceRequest;
        class ListVodSourcesRequest;
        class PutChannelPolicyRequest;
        class PutPlaybackConfigurationRequest;
        class StartChannelRequest;
        class StopChannelRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateChannelRequest;
        class UpdateSourceLocationRequest;
        class UpdateVodSourceRequest;

        typedef Aws::Utils::Outcome<CreateChannelResult, MediaTailorError> CreateChannelOutcome;
        typedef Aws::Utils::Outcome<CreateProgramResult, MediaTailorError> CreateProgramOutcome;
        typedef Aws::Utils::Outcome<CreateSourceLocationResult, MediaTailorError> CreateSourceLocationOutcome;
        typedef Aws::Utils::Outcome<CreateVodSourceResult, MediaTailorError> CreateVodSourceOutcome;
        typedef Aws::Utils::Outcome<DeleteChannelResult, MediaTailorError> DeleteChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteChannelPolicyResult, MediaTailorError> DeleteChannelPolicyOutcome;
        typedef Aws::Utils::Outcome<DeletePlaybackConfigurationResult, MediaTailorError> DeletePlaybackConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteProgramResult, MediaTailorError> DeleteProgramOutcome;
        typedef Aws::Utils::Outcome<DeleteSourceLocationResult, MediaTailorError> DeleteSourceLocationOutcome;
        typedef Aws::Utils::Outcome<DeleteVodSourceResult, MediaTailorError> DeleteVodSourceOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelResult, MediaTailorError> DescribeChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeProgramResult, MediaTailorError> DescribeProgramOutcome;
        typedef Aws::Utils::Outcome<DescribeSourceLocationResult, MediaTailorError> DescribeSourceLocationOutcome;
        typedef Aws::Utils::Outcome<DescribeVodSourceResult, MediaTailorError> DescribeVodSourceOutcome;
        typedef Aws::Utils::Outcome<GetChannelPolicyResult, MediaTailorError> GetChannelPolicyOutcome;
        typedef Aws::Utils::Outcome<GetChannelScheduleResult, MediaTailorError> GetChannelScheduleOutcome;
        typedef Aws::Utils::Outcome<GetPlaybackConfigurationResult, MediaTailorError> GetPlaybackConfigurationOutcome;
        typedef Aws::Utils::Outcome<ListChannelsResult, MediaTailorError> ListChannelsOutcome;
        typedef Aws::Utils::Outcome<ListPlaybackConfigurationsResult, MediaTailorError> ListPlaybackConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListProgramsResult, MediaTailorError> ListProgramsOutcome;
        typedef Aws::Utils::Outcome<ListSourceLocationsResult, MediaTailorError> ListSourceLocationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaTailorError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListVodSourcesResult, MediaTailorError> ListVodSourcesOutcome;
        typedef Aws::Utils::Outcome<PutChannelPolicyResult, MediaTailorError> PutChannelPolicyOutcome;
        typedef Aws::Utils::Outcome<PutPlaybackConfigurationResult, MediaTailorError> PutPlaybackConfigurationOutcome;
        typedef Aws::Utils::Outcome<StartChannelResult, MediaTailorError> StartChannelOutcome;
        typedef Aws::Utils::Outcome<StopChannelResult, MediaTailorError> StopChannelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MediaTailorError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, MediaTailorError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelResult, MediaTailorError> UpdateChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateSourceLocationResult, MediaTailorError> UpdateSourceLocationOutcome;
        typedef Aws::Utils::Outcome<UpdateVodSourceResult, MediaTailorError> UpdateVodSourceOutcome;

        typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
        typedef std::future<CreateProgramOutcome> CreateProgramOutcomeCallable;
        typedef std::future<CreateSourceLocationOutcome> CreateSourceLocationOutcomeCallable;
        typedef std::future<CreateVodSourceOutcome> CreateVodSourceOutcomeCallable;
        typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
        typedef std::future<DeleteChannelPolicyOutcome> DeleteChannelPolicyOutcomeCallable;
        typedef std::future<DeletePlaybackConfigurationOutcome> DeletePlaybackConfigurationOutcomeCallable;
        typedef std::future<DeleteProgramOutcome> DeleteProgramOutcomeCallable;
        typedef std::future<DeleteSourceLocationOutcome> DeleteSourceLocationOutcomeCallable;
        typedef std::future<DeleteVodSourceOutcome> DeleteVodSourceOutcomeCallable;
        typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
        typedef std::future<DescribeProgramOutcome> DescribeProgramOutcomeCallable;
        typedef std::future<DescribeSourceLocationOutcome> DescribeSourceLocationOutcomeCallable;
        typedef std::future<DescribeVodSourceOutcome> DescribeVodSourceOutcomeCallable;
        typedef std::future<GetChannelPolicyOutcome> GetChannelPolicyOutcomeCallable;
        typedef std::future<GetChannelScheduleOutcome> GetChannelScheduleOutcomeCallable;
        typedef std::future<GetPlaybackConfigurationOutcome> GetPlaybackConfigurationOutcomeCallable;
        typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
        typedef std::future<ListPlaybackConfigurationsOutcome> ListPlaybackConfigurationsOutcomeCallable;
        typedef std::future<ListProgramsOutcome> ListProgramsOutcomeCallable;
        typedef std::future<ListSourceLocationsOutcome> ListSourceLocationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListVodSourcesOutcome> ListVodSourcesOutcomeCallable;
        typedef std::future<PutChannelPolicyOutcome> PutChannelPolicyOutcomeCallable;
        typedef std::future<PutPlaybackConfigurationOutcome> PutPlaybackConfigurationOutcomeCallable;
        typedef std::future<StartChannelOutcome> StartChannelOutcomeCallable;
        typedef std::future<StopChannelOutcome> StopChannelOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
        typedef std::future<UpdateSourceLocationOutcome> UpdateSourceLocationOutcomeCallable;
        typedef std::future<UpdateVodSourceOutcome> UpdateVodSourceOutcomeCallable;
} // namespace Model

  class MediaTailorClient;

    typedef std::function<void(const MediaTailorClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreateProgramRequest&, const Model::CreateProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProgramResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreateSourceLocationRequest&, const Model::CreateSourceLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSourceLocationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreateVodSourceRequest&, const Model::CreateVodSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVodSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteChannelPolicyRequest&, const Model::DeleteChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeletePlaybackConfigurationRequest&, const Model::DeletePlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteProgramRequest&, const Model::DeleteProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProgramResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteSourceLocationRequest&, const Model::DeleteSourceLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceLocationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteVodSourceRequest&, const Model::DeleteVodSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVodSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeProgramRequest&, const Model::DescribeProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProgramResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeSourceLocationRequest&, const Model::DescribeSourceLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSourceLocationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeVodSourceRequest&, const Model::DescribeVodSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVodSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::GetChannelPolicyRequest&, const Model::GetChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::GetChannelScheduleRequest&, const Model::GetChannelScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::GetPlaybackConfigurationRequest&, const Model::GetPlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListPlaybackConfigurationsRequest&, const Model::ListPlaybackConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlaybackConfigurationsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListProgramsRequest&, const Model::ListProgramsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProgramsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListSourceLocationsRequest&, const Model::ListSourceLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceLocationsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListVodSourcesRequest&, const Model::ListVodSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVodSourcesResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::PutChannelPolicyRequest&, const Model::PutChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::PutPlaybackConfigurationRequest&, const Model::PutPlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::StartChannelRequest&, const Model::StartChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::StopChannelRequest&, const Model::StopChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UpdateSourceLocationRequest&, const Model::UpdateSourceLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSourceLocationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UpdateVodSourceRequest&, const Model::UpdateVodSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVodSourceResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaTailorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaTailorClient();


        /**
         * <p>Creates a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a program.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProgramOutcome CreateProgram(const Model::CreateProgramRequest& request) const;

        /**
         * <p>Creates a program.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateProgram">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProgramOutcomeCallable CreateProgramCallable(const Model::CreateProgramRequest& request) const;

        /**
         * <p>Creates a program.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateProgram">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateSourceLocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSourceLocationOutcomeCallable CreateSourceLocationCallable(const Model::CreateSourceLocationRequest& request) const;

        /**
         * <p>Creates a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateSourceLocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates name for a specific VOD source in a source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateVodSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVodSourceOutcomeCallable CreateVodSourceCallable(const Model::CreateVodSourceRequest& request) const;

        /**
         * <p>Creates name for a specific VOD source in a source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateVodSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a channel. You must stop the channel before it can be
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Deletes a channel. You must stop the channel before it can be
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a channel's IAM policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelPolicyOutcome DeleteChannelPolicy(const Model::DeleteChannelPolicyRequest& request) const;

        /**
         * <p>Deletes a channel's IAM policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannelPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelPolicyOutcomeCallable DeleteChannelPolicyCallable(const Model::DeleteChannelPolicyRequest& request) const;

        /**
         * <p>Deletes a channel's IAM policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannelPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelPolicyAsync(const Model::DeleteChannelPolicyRequest& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the playback configuration for the specified name.</p>  <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaybackConfigurationOutcome DeletePlaybackConfiguration(const Model::DeletePlaybackConfigurationRequest& request) const;

        /**
         * <p>Deletes the playback configuration for the specified name.</p>  <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlaybackConfigurationOutcomeCallable DeletePlaybackConfigurationCallable(const Model::DeletePlaybackConfigurationRequest& request) const;

        /**
         * <p>Deletes the playback configuration for the specified name.</p>  <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlaybackConfigurationAsync(const Model::DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific program on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProgramOutcome DeleteProgram(const Model::DeleteProgramRequest& request) const;

        /**
         * <p>Deletes a specific program on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteProgram">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProgramOutcomeCallable DeleteProgramCallable(const Model::DeleteProgramRequest& request) const;

        /**
         * <p>Deletes a specific program on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteProgram">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteSourceLocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSourceLocationOutcomeCallable DeleteSourceLocationCallable(const Model::DeleteSourceLocationRequest& request) const;

        /**
         * <p>Deletes a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteSourceLocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a specific VOD source in a specific source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteVodSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVodSourceOutcomeCallable DeleteVodSourceCallable(const Model::DeleteVodSourceRequest& request) const;

        /**
         * <p>Deletes a specific VOD source in a specific source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteVodSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVodSourceAsync(const Model::DeleteVodSourceRequest& request, const DeleteVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the properties of a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * <p>Describes the properties of a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * <p>Describes the properties of a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the properties of the requested program.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProgramOutcome DescribeProgram(const Model::DescribeProgramRequest& request) const;

        /**
         * <p>Retrieves the properties of the requested program.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeProgram">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProgramOutcomeCallable DescribeProgramCallable(const Model::DescribeProgramRequest& request) const;

        /**
         * <p>Retrieves the properties of the requested program.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeProgram">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the properties of the requested source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeSourceLocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSourceLocationOutcomeCallable DescribeSourceLocationCallable(const Model::DescribeSourceLocationRequest& request) const;

        /**
         * <p>Retrieves the properties of the requested source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeSourceLocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Provides details about a specific VOD source in a specific source
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeVodSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVodSourceOutcomeCallable DescribeVodSourceCallable(const Model::DescribeVodSourceRequest& request) const;

        /**
         * <p>Provides details about a specific VOD source in a specific source
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeVodSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about a channel's IAM policy.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelPolicyOutcomeCallable GetChannelPolicyCallable(const Model::GetChannelPolicyRequest& request) const;

        /**
         * <p>Retrieves information about a channel's IAM policy.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about your channel's schedule.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelScheduleOutcomeCallable GetChannelScheduleCallable(const Model::GetChannelScheduleRequest& request) const;

        /**
         * <p>Retrieves information about your channel's schedule.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the playback configuration for the specified name.</p>  <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlaybackConfigurationOutcomeCallable GetPlaybackConfigurationCallable(const Model::GetPlaybackConfigurationRequest& request) const;

        /**
         * <p>Returns the playback configuration for the specified name.</p>  <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlaybackConfigurationAsync(const Model::GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of channels that are associated with this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Retrieves a list of channels that are associated with this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Retrieves a list of channels that are associated with this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Returns a list of the playback configurations defined in AWS Elemental
         * MediaTailor. You can specify a maximum number of configurations to return at a
         * time. The default maximum is 50. Results are returned in pagefuls. If
         * MediaTailor has more configurations than the specified maximum, it provides
         * parameters in the response that you can use to retrieve the next pageful.</p> 
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPlaybackConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlaybackConfigurationsOutcomeCallable ListPlaybackConfigurationsCallable(const Model::ListPlaybackConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of the playback configurations defined in AWS Elemental
         * MediaTailor. You can specify a maximum number of configurations to return at a
         * time. The default maximum is 50. Results are returned in pagefuls. If
         * MediaTailor has more configurations than the specified maximum, it provides
         * parameters in the response that you can use to retrieve the next pageful.</p> 
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPlaybackConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlaybackConfigurationsAsync(const Model::ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of programs on a specific channel.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPrograms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProgramsOutcome ListPrograms(const Model::ListProgramsRequest& request) const;

        /**
         * <p>Retrieves a list of programs on a specific channel.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPrograms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProgramsOutcomeCallable ListProgramsCallable(const Model::ListProgramsRequest& request) const;

        /**
         * <p>Retrieves a list of programs on a specific channel.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPrograms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProgramsAsync(const Model::ListProgramsRequest& request, const ListProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of source locations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListSourceLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceLocationsOutcome ListSourceLocations(const Model::ListSourceLocationsRequest& request) const;

        /**
         * <p>Retrieves a list of source locations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListSourceLocations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSourceLocationsOutcomeCallable ListSourceLocationsCallable(const Model::ListSourceLocationsRequest& request) const;

        /**
         * <p>Retrieves a list of source locations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListSourceLocations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of the tags assigned to the specified playback configuration
         * resource.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified playback configuration
         * resource.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the VOD sources in a source location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListVodSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVodSourcesOutcome ListVodSources(const Model::ListVodSourcesRequest& request) const;

        /**
         * <p>Lists all the VOD sources in a source location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListVodSources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVodSourcesOutcomeCallable ListVodSourcesCallable(const Model::ListVodSourcesRequest& request) const;

        /**
         * <p>Lists all the VOD sources in a source location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListVodSources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVodSourcesAsync(const Model::ListVodSourcesRequest& request, const ListVodSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IAM policy for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChannelPolicyOutcome PutChannelPolicy(const Model::PutChannelPolicyRequest& request) const;

        /**
         * <p>Creates an IAM policy for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutChannelPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutChannelPolicyOutcomeCallable PutChannelPolicyCallable(const Model::PutChannelPolicyRequest& request) const;

        /**
         * <p>Creates an IAM policy for the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutChannelPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Adds a new playback configuration to AWS Elemental MediaTailor.</p> 
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutPlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPlaybackConfigurationOutcomeCallable PutPlaybackConfigurationCallable(const Model::PutPlaybackConfigurationRequest& request) const;

        /**
         * <p>Adds a new playback configuration to AWS Elemental MediaTailor.</p> 
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutPlaybackConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPlaybackConfigurationAsync(const Model::PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;

        /**
         * <p>Starts a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StartChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChannelOutcomeCallable StartChannelCallable(const Model::StartChannelRequest& request) const;

        /**
         * <p>Starts a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StartChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChannelAsync(const Model::StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;

        /**
         * <p>Stops a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StopChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopChannelOutcomeCallable StopChannelCallable(const Model::StopChannelRequest& request) const;

        /**
         * <p>Stops a specific channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StopChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Adds tags to the specified playback configuration resource. You can specify
         * one or more tags to add.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to the specified playback configuration resource. You can specify
         * one or more tags to add.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes tags from the specified playback configuration resource. You can
         * specify one or more tags to remove.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from the specified playback configuration resource. You can
         * specify one or more tags to remove.</p>  <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Updates an existing channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Updates an existing channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSourceLocationOutcome UpdateSourceLocation(const Model::UpdateSourceLocationRequest& request) const;

        /**
         * <p>Updates a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateSourceLocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSourceLocationOutcomeCallable UpdateSourceLocationCallable(const Model::UpdateSourceLocationRequest& request) const;

        /**
         * <p>Updates a source location on a specific channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateSourceLocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a specific VOD source in a specific source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateVodSource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVodSourceOutcomeCallable UpdateVodSourceCallable(const Model::UpdateVodSourceRequest& request) const;

        /**
         * <p>Updates a specific VOD source in a specific source location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateVodSource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVodSourceAsync(const Model::UpdateVodSourceRequest& request, const UpdateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateChannelAsyncHelper(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProgramAsyncHelper(const Model::CreateProgramRequest& request, const CreateProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSourceLocationAsyncHelper(const Model::CreateSourceLocationRequest& request, const CreateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVodSourceAsyncHelper(const Model::CreateVodSourceRequest& request, const CreateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelAsyncHelper(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelPolicyAsyncHelper(const Model::DeleteChannelPolicyRequest& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlaybackConfigurationAsyncHelper(const Model::DeletePlaybackConfigurationRequest& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProgramAsyncHelper(const Model::DeleteProgramRequest& request, const DeleteProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSourceLocationAsyncHelper(const Model::DeleteSourceLocationRequest& request, const DeleteSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVodSourceAsyncHelper(const Model::DeleteVodSourceRequest& request, const DeleteVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelAsyncHelper(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProgramAsyncHelper(const Model::DescribeProgramRequest& request, const DescribeProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSourceLocationAsyncHelper(const Model::DescribeSourceLocationRequest& request, const DescribeSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVodSourceAsyncHelper(const Model::DescribeVodSourceRequest& request, const DescribeVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChannelPolicyAsyncHelper(const Model::GetChannelPolicyRequest& request, const GetChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChannelScheduleAsyncHelper(const Model::GetChannelScheduleRequest& request, const GetChannelScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPlaybackConfigurationAsyncHelper(const Model::GetPlaybackConfigurationRequest& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAsyncHelper(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlaybackConfigurationsAsyncHelper(const Model::ListPlaybackConfigurationsRequest& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProgramsAsyncHelper(const Model::ListProgramsRequest& request, const ListProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSourceLocationsAsyncHelper(const Model::ListSourceLocationsRequest& request, const ListSourceLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVodSourcesAsyncHelper(const Model::ListVodSourcesRequest& request, const ListVodSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutChannelPolicyAsyncHelper(const Model::PutChannelPolicyRequest& request, const PutChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPlaybackConfigurationAsyncHelper(const Model::PutPlaybackConfigurationRequest& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartChannelAsyncHelper(const Model::StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopChannelAsyncHelper(const Model::StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelAsyncHelper(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSourceLocationAsyncHelper(const Model::UpdateSourceLocationRequest& request, const UpdateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVodSourceAsyncHelper(const Model::UpdateVodSourceRequest& request, const UpdateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaTailor
} // namespace Aws
