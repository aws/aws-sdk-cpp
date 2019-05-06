/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/BatchUpdateScheduleResult.h>
#include <aws/medialive/model/CreateChannelResult.h>
#include <aws/medialive/model/CreateInputResult.h>
#include <aws/medialive/model/CreateInputSecurityGroupResult.h>
#include <aws/medialive/model/DeleteChannelResult.h>
#include <aws/medialive/model/DeleteInputResult.h>
#include <aws/medialive/model/DeleteInputSecurityGroupResult.h>
#include <aws/medialive/model/DeleteReservationResult.h>
#include <aws/medialive/model/DeleteScheduleResult.h>
#include <aws/medialive/model/DescribeChannelResult.h>
#include <aws/medialive/model/DescribeInputResult.h>
#include <aws/medialive/model/DescribeInputSecurityGroupResult.h>
#include <aws/medialive/model/DescribeOfferingResult.h>
#include <aws/medialive/model/DescribeReservationResult.h>
#include <aws/medialive/model/DescribeScheduleResult.h>
#include <aws/medialive/model/ListChannelsResult.h>
#include <aws/medialive/model/ListInputSecurityGroupsResult.h>
#include <aws/medialive/model/ListInputsResult.h>
#include <aws/medialive/model/ListOfferingsResult.h>
#include <aws/medialive/model/ListReservationsResult.h>
#include <aws/medialive/model/ListTagsForResourceResult.h>
#include <aws/medialive/model/PurchaseOfferingResult.h>
#include <aws/medialive/model/StartChannelResult.h>
#include <aws/medialive/model/StopChannelResult.h>
#include <aws/medialive/model/UpdateChannelResult.h>
#include <aws/medialive/model/UpdateChannelClassResult.h>
#include <aws/medialive/model/UpdateInputResult.h>
#include <aws/medialive/model/UpdateInputSecurityGroupResult.h>
#include <aws/medialive/model/UpdateReservationResult.h>
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

namespace MediaLive
{

namespace Model
{
        class BatchUpdateScheduleRequest;
        class CreateChannelRequest;
        class CreateInputRequest;
        class CreateInputSecurityGroupRequest;
        class CreateTagsRequest;
        class DeleteChannelRequest;
        class DeleteInputRequest;
        class DeleteInputSecurityGroupRequest;
        class DeleteReservationRequest;
        class DeleteScheduleRequest;
        class DeleteTagsRequest;
        class DescribeChannelRequest;
        class DescribeInputRequest;
        class DescribeInputSecurityGroupRequest;
        class DescribeOfferingRequest;
        class DescribeReservationRequest;
        class DescribeScheduleRequest;
        class ListChannelsRequest;
        class ListInputSecurityGroupsRequest;
        class ListInputsRequest;
        class ListOfferingsRequest;
        class ListReservationsRequest;
        class ListTagsForResourceRequest;
        class PurchaseOfferingRequest;
        class StartChannelRequest;
        class StopChannelRequest;
        class UpdateChannelRequest;
        class UpdateChannelClassRequest;
        class UpdateInputRequest;
        class UpdateInputSecurityGroupRequest;
        class UpdateReservationRequest;

        typedef Aws::Utils::Outcome<BatchUpdateScheduleResult, Aws::Client::AWSError<MediaLiveErrors>> BatchUpdateScheduleOutcome;
        typedef Aws::Utils::Outcome<CreateChannelResult, Aws::Client::AWSError<MediaLiveErrors>> CreateChannelOutcome;
        typedef Aws::Utils::Outcome<CreateInputResult, Aws::Client::AWSError<MediaLiveErrors>> CreateInputOutcome;
        typedef Aws::Utils::Outcome<CreateInputSecurityGroupResult, Aws::Client::AWSError<MediaLiveErrors>> CreateInputSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<MediaLiveErrors>> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteChannelResult, Aws::Client::AWSError<MediaLiveErrors>> DeleteChannelOutcome;
        typedef Aws::Utils::Outcome<DeleteInputResult, Aws::Client::AWSError<MediaLiveErrors>> DeleteInputOutcome;
        typedef Aws::Utils::Outcome<DeleteInputSecurityGroupResult, Aws::Client::AWSError<MediaLiveErrors>> DeleteInputSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteReservationResult, Aws::Client::AWSError<MediaLiveErrors>> DeleteReservationOutcome;
        typedef Aws::Utils::Outcome<DeleteScheduleResult, Aws::Client::AWSError<MediaLiveErrors>> DeleteScheduleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<MediaLiveErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelResult, Aws::Client::AWSError<MediaLiveErrors>> DescribeChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeInputResult, Aws::Client::AWSError<MediaLiveErrors>> DescribeInputOutcome;
        typedef Aws::Utils::Outcome<DescribeInputSecurityGroupResult, Aws::Client::AWSError<MediaLiveErrors>> DescribeInputSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<DescribeOfferingResult, Aws::Client::AWSError<MediaLiveErrors>> DescribeOfferingOutcome;
        typedef Aws::Utils::Outcome<DescribeReservationResult, Aws::Client::AWSError<MediaLiveErrors>> DescribeReservationOutcome;
        typedef Aws::Utils::Outcome<DescribeScheduleResult, Aws::Client::AWSError<MediaLiveErrors>> DescribeScheduleOutcome;
        typedef Aws::Utils::Outcome<ListChannelsResult, Aws::Client::AWSError<MediaLiveErrors>> ListChannelsOutcome;
        typedef Aws::Utils::Outcome<ListInputSecurityGroupsResult, Aws::Client::AWSError<MediaLiveErrors>> ListInputSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<ListInputsResult, Aws::Client::AWSError<MediaLiveErrors>> ListInputsOutcome;
        typedef Aws::Utils::Outcome<ListOfferingsResult, Aws::Client::AWSError<MediaLiveErrors>> ListOfferingsOutcome;
        typedef Aws::Utils::Outcome<ListReservationsResult, Aws::Client::AWSError<MediaLiveErrors>> ListReservationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<MediaLiveErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PurchaseOfferingResult, Aws::Client::AWSError<MediaLiveErrors>> PurchaseOfferingOutcome;
        typedef Aws::Utils::Outcome<StartChannelResult, Aws::Client::AWSError<MediaLiveErrors>> StartChannelOutcome;
        typedef Aws::Utils::Outcome<StopChannelResult, Aws::Client::AWSError<MediaLiveErrors>> StopChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelResult, Aws::Client::AWSError<MediaLiveErrors>> UpdateChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelClassResult, Aws::Client::AWSError<MediaLiveErrors>> UpdateChannelClassOutcome;
        typedef Aws::Utils::Outcome<UpdateInputResult, Aws::Client::AWSError<MediaLiveErrors>> UpdateInputOutcome;
        typedef Aws::Utils::Outcome<UpdateInputSecurityGroupResult, Aws::Client::AWSError<MediaLiveErrors>> UpdateInputSecurityGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateReservationResult, Aws::Client::AWSError<MediaLiveErrors>> UpdateReservationOutcome;

        typedef std::future<BatchUpdateScheduleOutcome> BatchUpdateScheduleOutcomeCallable;
        typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
        typedef std::future<CreateInputOutcome> CreateInputOutcomeCallable;
        typedef std::future<CreateInputSecurityGroupOutcome> CreateInputSecurityGroupOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
        typedef std::future<DeleteInputOutcome> DeleteInputOutcomeCallable;
        typedef std::future<DeleteInputSecurityGroupOutcome> DeleteInputSecurityGroupOutcomeCallable;
        typedef std::future<DeleteReservationOutcome> DeleteReservationOutcomeCallable;
        typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
        typedef std::future<DescribeInputOutcome> DescribeInputOutcomeCallable;
        typedef std::future<DescribeInputSecurityGroupOutcome> DescribeInputSecurityGroupOutcomeCallable;
        typedef std::future<DescribeOfferingOutcome> DescribeOfferingOutcomeCallable;
        typedef std::future<DescribeReservationOutcome> DescribeReservationOutcomeCallable;
        typedef std::future<DescribeScheduleOutcome> DescribeScheduleOutcomeCallable;
        typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
        typedef std::future<ListInputSecurityGroupsOutcome> ListInputSecurityGroupsOutcomeCallable;
        typedef std::future<ListInputsOutcome> ListInputsOutcomeCallable;
        typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
        typedef std::future<ListReservationsOutcome> ListReservationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
        typedef std::future<StartChannelOutcome> StartChannelOutcomeCallable;
        typedef std::future<StopChannelOutcome> StopChannelOutcomeCallable;
        typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
        typedef std::future<UpdateChannelClassOutcome> UpdateChannelClassOutcomeCallable;
        typedef std::future<UpdateInputOutcome> UpdateInputOutcomeCallable;
        typedef std::future<UpdateInputSecurityGroupOutcome> UpdateInputSecurityGroupOutcomeCallable;
        typedef std::future<UpdateReservationOutcome> UpdateReservationOutcomeCallable;
} // namespace Model

  class MediaLiveClient;

    typedef std::function<void(const MediaLiveClient*, const Model::BatchUpdateScheduleRequest&, const Model::BatchUpdateScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateInputRequest&, const Model::CreateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateInputSecurityGroupRequest&, const Model::CreateInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteInputRequest&, const Model::DeleteInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteInputSecurityGroupRequest&, const Model::DeleteInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteReservationRequest&, const Model::DeleteReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteScheduleRequest&, const Model::DeleteScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputRequest&, const Model::DescribeInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputSecurityGroupRequest&, const Model::DescribeInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeOfferingRequest&, const Model::DescribeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeReservationRequest&, const Model::DescribeReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeScheduleRequest&, const Model::DescribeScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputSecurityGroupsRequest&, const Model::ListInputSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputsRequest&, const Model::ListInputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListReservationsRequest&, const Model::ListReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReservationsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartChannelRequest&, const Model::StartChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StopChannelRequest&, const Model::StopChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelClassRequest&, const Model::UpdateChannelClassOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelClassResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputRequest&, const Model::UpdateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputSecurityGroupRequest&, const Model::UpdateInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateReservationRequest&, const Model::UpdateReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReservationResponseReceivedHandler;

  /**
   * API for AWS Elemental MediaLive
   */
  class AWS_MEDIALIVE_API MediaLiveClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaLiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaLiveClient();

        inline virtual const char* GetServiceClientName() const override { return "MediaLive"; }


        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateScheduleOutcome BatchUpdateSchedule(const Model::BatchUpdateScheduleRequest& request) const;

        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateScheduleOutcomeCallable BatchUpdateScheduleCallable(const Model::BatchUpdateScheduleRequest& request) const;

        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateScheduleAsync(const Model::BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request) const;

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInputOutcomeCallable CreateInputCallable(const Model::CreateInputRequest& request) const;

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInputAsync(const Model::CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputSecurityGroupOutcome CreateInputSecurityGroup(const Model::CreateInputSecurityGroupRequest& request) const;

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInputSecurityGroupOutcomeCallable CreateInputSecurityGroupCallable(const Model::CreateInputSecurityGroupRequest& request) const;

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInputSecurityGroupAsync(const Model::CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputOutcome DeleteInput(const Model::DeleteInputRequest& request) const;

        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInputOutcomeCallable DeleteInputCallable(const Model::DeleteInputRequest& request) const;

        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInputAsync(const Model::DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputSecurityGroupOutcome DeleteInputSecurityGroup(const Model::DeleteInputSecurityGroupRequest& request) const;

        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInputSecurityGroupOutcomeCallable DeleteInputSecurityGroupCallable(const Model::DeleteInputSecurityGroupRequest& request) const;

        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInputSecurityGroupAsync(const Model::DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReservationOutcome DeleteReservation(const Model::DeleteReservationRequest& request) const;

        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReservationOutcomeCallable DeleteReservationCallable(const Model::DeleteReservationRequest& request) const;

        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReservationAsync(const Model::DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;

        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduleOutcomeCallable DeleteScheduleCallable(const Model::DeleteScheduleRequest& request) const;

        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputOutcome DescribeInput(const Model::DescribeInputRequest& request) const;

        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputOutcomeCallable DescribeInputCallable(const Model::DescribeInputRequest& request) const;

        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputAsync(const Model::DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputSecurityGroupOutcome DescribeInputSecurityGroup(const Model::DescribeInputSecurityGroupRequest& request) const;

        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInputSecurityGroupOutcomeCallable DescribeInputSecurityGroupCallable(const Model::DescribeInputSecurityGroupRequest& request) const;

        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInputSecurityGroupAsync(const Model::DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOfferingOutcome DescribeOffering(const Model::DescribeOfferingRequest& request) const;

        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOfferingOutcomeCallable DescribeOfferingCallable(const Model::DescribeOfferingRequest& request) const;

        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOfferingAsync(const Model::DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservationOutcome DescribeReservation(const Model::DescribeReservationRequest& request) const;

        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReservationOutcomeCallable DescribeReservationCallable(const Model::DescribeReservationRequest& request) const;

        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReservationAsync(const Model::DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduleOutcome DescribeSchedule(const Model::DescribeScheduleRequest& request) const;

        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduleOutcomeCallable DescribeScheduleCallable(const Model::DescribeScheduleRequest& request) const;

        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduleAsync(const Model::DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputSecurityGroupsOutcome ListInputSecurityGroups(const Model::ListInputSecurityGroupsRequest& request) const;

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputSecurityGroupsOutcomeCallable ListInputSecurityGroupsCallable(const Model::ListInputSecurityGroupsRequest& request) const;

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputSecurityGroupsAsync(const Model::ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request) const;

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInputsOutcomeCallable ListInputsCallable(const Model::ListInputsRequest& request) const;

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInputsAsync(const Model::ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const Model::ListOfferingsRequest& request) const;

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingsAsync(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request) const;

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReservationsOutcomeCallable ListReservationsCallable(const Model::ListReservationsRequest& request) const;

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReservationsAsync(const Model::ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const Model::PurchaseOfferingRequest& request) const;

        /**
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseOfferingAsync(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;

        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartChannelOutcomeCallable StartChannelCallable(const Model::StartChannelRequest& request) const;

        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartChannelAsync(const Model::StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;

        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopChannelOutcomeCallable StopChannelCallable(const Model::StopChannelRequest& request) const;

        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopChannelAsync(const Model::StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelClassOutcome UpdateChannelClass(const Model::UpdateChannelClassRequest& request) const;

        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelClassOutcomeCallable UpdateChannelClassCallable(const Model::UpdateChannelClassRequest& request) const;

        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelClassAsync(const Model::UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputOutcome UpdateInput(const Model::UpdateInputRequest& request) const;

        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputOutcomeCallable UpdateInputCallable(const Model::UpdateInputRequest& request) const;

        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputAsync(const Model::UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputSecurityGroupOutcome UpdateInputSecurityGroup(const Model::UpdateInputSecurityGroupRequest& request) const;

        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInputSecurityGroupOutcomeCallable UpdateInputSecurityGroupCallable(const Model::UpdateInputSecurityGroupRequest& request) const;

        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInputSecurityGroupAsync(const Model::UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReservationOutcome UpdateReservation(const Model::UpdateReservationRequest& request) const;

        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReservationOutcomeCallable UpdateReservationCallable(const Model::UpdateReservationRequest& request) const;

        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReservationAsync(const Model::UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchUpdateScheduleAsyncHelper(const Model::BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelAsyncHelper(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInputAsyncHelper(const Model::CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInputSecurityGroupAsyncHelper(const Model::CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelAsyncHelper(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInputAsyncHelper(const Model::DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInputSecurityGroupAsyncHelper(const Model::DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReservationAsyncHelper(const Model::DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScheduleAsyncHelper(const Model::DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelAsyncHelper(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInputAsyncHelper(const Model::DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInputSecurityGroupAsyncHelper(const Model::DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOfferingAsyncHelper(const Model::DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReservationAsyncHelper(const Model::DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduleAsyncHelper(const Model::DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAsyncHelper(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInputSecurityGroupsAsyncHelper(const Model::ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInputsAsyncHelper(const Model::ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOfferingsAsyncHelper(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReservationsAsyncHelper(const Model::ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseOfferingAsyncHelper(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartChannelAsyncHelper(const Model::StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopChannelAsyncHelper(const Model::StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelAsyncHelper(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelClassAsyncHelper(const Model::UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInputAsyncHelper(const Model::UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInputSecurityGroupAsyncHelper(const Model::UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReservationAsyncHelper(const Model::UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaLive
} // namespace Aws
