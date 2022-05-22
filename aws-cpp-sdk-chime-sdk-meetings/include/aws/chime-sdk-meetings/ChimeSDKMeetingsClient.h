/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-meetings/model/BatchCreateAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingResult.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingWithAttendeesResult.h>
#include <aws/chime-sdk-meetings/model/GetAttendeeResult.h>
#include <aws/chime-sdk-meetings/model/GetMeetingResult.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesResult.h>
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

namespace ChimeSDKMeetings
{

namespace Model
{
        class BatchCreateAttendeeRequest;
        class CreateAttendeeRequest;
        class CreateMeetingRequest;
        class CreateMeetingWithAttendeesRequest;
        class DeleteAttendeeRequest;
        class DeleteMeetingRequest;
        class GetAttendeeRequest;
        class GetMeetingRequest;
        class ListAttendeesRequest;
        class StartMeetingTranscriptionRequest;
        class StopMeetingTranscriptionRequest;

        typedef Aws::Utils::Outcome<BatchCreateAttendeeResult, ChimeSDKMeetingsError> BatchCreateAttendeeOutcome;
        typedef Aws::Utils::Outcome<CreateAttendeeResult, ChimeSDKMeetingsError> CreateAttendeeOutcome;
        typedef Aws::Utils::Outcome<CreateMeetingResult, ChimeSDKMeetingsError> CreateMeetingOutcome;
        typedef Aws::Utils::Outcome<CreateMeetingWithAttendeesResult, ChimeSDKMeetingsError> CreateMeetingWithAttendeesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> DeleteAttendeeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> DeleteMeetingOutcome;
        typedef Aws::Utils::Outcome<GetAttendeeResult, ChimeSDKMeetingsError> GetAttendeeOutcome;
        typedef Aws::Utils::Outcome<GetMeetingResult, ChimeSDKMeetingsError> GetMeetingOutcome;
        typedef Aws::Utils::Outcome<ListAttendeesResult, ChimeSDKMeetingsError> ListAttendeesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> StartMeetingTranscriptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeSDKMeetingsError> StopMeetingTranscriptionOutcome;

        typedef std::future<BatchCreateAttendeeOutcome> BatchCreateAttendeeOutcomeCallable;
        typedef std::future<CreateAttendeeOutcome> CreateAttendeeOutcomeCallable;
        typedef std::future<CreateMeetingOutcome> CreateMeetingOutcomeCallable;
        typedef std::future<CreateMeetingWithAttendeesOutcome> CreateMeetingWithAttendeesOutcomeCallable;
        typedef std::future<DeleteAttendeeOutcome> DeleteAttendeeOutcomeCallable;
        typedef std::future<DeleteMeetingOutcome> DeleteMeetingOutcomeCallable;
        typedef std::future<GetAttendeeOutcome> GetAttendeeOutcomeCallable;
        typedef std::future<GetMeetingOutcome> GetMeetingOutcomeCallable;
        typedef std::future<ListAttendeesOutcome> ListAttendeesOutcomeCallable;
        typedef std::future<StartMeetingTranscriptionOutcome> StartMeetingTranscriptionOutcomeCallable;
        typedef std::future<StopMeetingTranscriptionOutcome> StopMeetingTranscriptionOutcomeCallable;
} // namespace Model

  class ChimeSDKMeetingsClient;

    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::BatchCreateAttendeeRequest&, const Model::BatchCreateAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::CreateAttendeeRequest&, const Model::CreateAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::CreateMeetingRequest&, const Model::CreateMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::CreateMeetingWithAttendeesRequest&, const Model::CreateMeetingWithAttendeesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeetingWithAttendeesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::DeleteAttendeeRequest&, const Model::DeleteAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::DeleteMeetingRequest&, const Model::DeleteMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::GetAttendeeRequest&, const Model::GetAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::GetMeetingRequest&, const Model::GetMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::ListAttendeesRequest&, const Model::ListAttendeesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttendeesResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::StartMeetingTranscriptionRequest&, const Model::StartMeetingTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMeetingTranscriptionResponseReceivedHandler;
    typedef std::function<void(const ChimeSDKMeetingsClient*, const Model::StopMeetingTranscriptionRequest&, const Model::StopMeetingTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMeetingTranscriptionResponseReceivedHandler;

  /**
   * <p>The Amazon Chime SDK meetings APIs in this section allow software developers
   * to create Amazon Chime SDK meetings, set the AWS Regions for meetings, create
   * and manage users, and send and receive meeting notifications. For more
   * information about the meeting APIs, see <a
   * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon
   * Chime SDK meetings</a>.</p>
   */
  class AWS_CHIMESDKMEETINGS_API ChimeSDKMeetingsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMeetingsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMeetingsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMeetingsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ChimeSDKMeetingsClient();


        /**
         * <p>Creates up to 100 attendees for an active Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/BatchCreateAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateAttendeeOutcome BatchCreateAttendee(const Model::BatchCreateAttendeeRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateAttendeeOutcomeCallable BatchCreateAttendeeCallable(const Model::BatchCreateAttendeeRequest& request) const;

        /**
         * An Async wrapper for BatchCreateAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateAttendeeAsync(const Model::BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new attendee for an active Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/CreateAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAttendeeOutcome CreateAttendee(const Model::CreateAttendeeRequest& request) const;

        /**
         * A Callable wrapper for CreateAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAttendeeOutcomeCallable CreateAttendeeCallable(const Model::CreateAttendeeRequest& request) const;

        /**
         * An Async wrapper for CreateAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAttendeeAsync(const Model::CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Chime SDK meeting in the specified media Region with no
         * initial attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i>. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/CreateMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingOutcome CreateMeeting(const Model::CreateMeetingRequest& request) const;

        /**
         * A Callable wrapper for CreateMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeetingOutcomeCallable CreateMeetingCallable(const Model::CreateMeetingRequest& request) const;

        /**
         * An Async wrapper for CreateMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeetingAsync(const Model::CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new Amazon Chime SDK meeting in the specified media Region, with
         * attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i>. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/CreateMeetingWithAttendees">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingWithAttendeesOutcome CreateMeetingWithAttendees(const Model::CreateMeetingWithAttendeesRequest& request) const;

        /**
         * A Callable wrapper for CreateMeetingWithAttendees that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeetingWithAttendeesOutcomeCallable CreateMeetingWithAttendeesCallable(const Model::CreateMeetingWithAttendeesRequest& request) const;

        /**
         * An Async wrapper for CreateMeetingWithAttendees that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeetingWithAttendeesAsync(const Model::CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an attendee from the specified Amazon Chime SDK meeting and deletes
         * their <code>JoinToken</code>. Attendees are automatically deleted when a Amazon
         * Chime SDK meeting is deleted. For more information about the Amazon Chime SDK,
         * see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/DeleteAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttendeeOutcome DeleteAttendee(const Model::DeleteAttendeeRequest& request) const;

        /**
         * A Callable wrapper for DeleteAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAttendeeOutcomeCallable DeleteAttendeeCallable(const Model::DeleteAttendeeRequest& request) const;

        /**
         * An Async wrapper for DeleteAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAttendeeAsync(const Model::DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Chime SDK meeting. The operation deletes all
         * attendees, disconnects all clients, and prevents new clients from joining the
         * meeting. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/DeleteMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeetingOutcome DeleteMeeting(const Model::DeleteMeetingRequest& request) const;

        /**
         * A Callable wrapper for DeleteMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMeetingOutcomeCallable DeleteMeetingCallable(const Model::DeleteMeetingRequest& request) const;

        /**
         * An Async wrapper for DeleteMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMeetingAsync(const Model::DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets the Amazon Chime SDK attendee details for a specified meeting ID and
         * attendee ID. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/GetAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttendeeOutcome GetAttendee(const Model::GetAttendeeRequest& request) const;

        /**
         * A Callable wrapper for GetAttendee that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttendeeOutcomeCallable GetAttendeeCallable(const Model::GetAttendeeRequest& request) const;

        /**
         * An Async wrapper for GetAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAttendeeAsync(const Model::GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Amazon Chime SDK meeting details for the specified meeting ID. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/GetMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMeetingOutcome GetMeeting(const Model::GetMeetingRequest& request) const;

        /**
         * A Callable wrapper for GetMeeting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMeetingOutcomeCallable GetMeetingCallable(const Model::GetMeetingRequest& request) const;

        /**
         * An Async wrapper for GetMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMeetingAsync(const Model::GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the attendees for the specified Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/ListAttendees">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttendeesOutcome ListAttendees(const Model::ListAttendeesRequest& request) const;

        /**
         * A Callable wrapper for ListAttendees that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttendeesOutcomeCallable ListAttendeesCallable(const Model::ListAttendeesRequest& request) const;

        /**
         * An Async wrapper for ListAttendees that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttendeesAsync(const Model::ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts transcription for the specified <code>meetingId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/StartMeetingTranscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMeetingTranscriptionOutcome StartMeetingTranscription(const Model::StartMeetingTranscriptionRequest& request) const;

        /**
         * A Callable wrapper for StartMeetingTranscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMeetingTranscriptionOutcomeCallable StartMeetingTranscriptionCallable(const Model::StartMeetingTranscriptionRequest& request) const;

        /**
         * An Async wrapper for StartMeetingTranscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMeetingTranscriptionAsync(const Model::StartMeetingTranscriptionRequest& request, const StartMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops transcription for the specified <code>meetingId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/StopMeetingTranscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMeetingTranscriptionOutcome StopMeetingTranscription(const Model::StopMeetingTranscriptionRequest& request) const;

        /**
         * A Callable wrapper for StopMeetingTranscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMeetingTranscriptionOutcomeCallable StopMeetingTranscriptionCallable(const Model::StopMeetingTranscriptionRequest& request) const;

        /**
         * An Async wrapper for StopMeetingTranscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMeetingTranscriptionAsync(const Model::StopMeetingTranscriptionRequest& request, const StopMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchCreateAttendeeAsyncHelper(const Model::BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAttendeeAsyncHelper(const Model::CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMeetingAsyncHelper(const Model::CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMeetingWithAttendeesAsyncHelper(const Model::CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAttendeeAsyncHelper(const Model::DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMeetingAsyncHelper(const Model::DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAttendeeAsyncHelper(const Model::GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMeetingAsyncHelper(const Model::GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttendeesAsyncHelper(const Model::ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMeetingTranscriptionAsyncHelper(const Model::StartMeetingTranscriptionRequest& request, const StartMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopMeetingTranscriptionAsyncHelper(const Model::StopMeetingTranscriptionRequest& request, const StopMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ChimeSDKMeetings
} // namespace Aws
