/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsServiceClientModel.h>

namespace Aws
{
namespace ChimeSDKMeetings
{
  /**
   * <p>The Amazon Chime SDK meetings APIs in this section allow software developers
   * to create Amazon Chime SDK meetings, set the Amazon Web Services Regions for
   * meetings, create and manage users, and send and receive meeting notifications.
   * For more information about the meeting APIs, see <a
   * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Meetings.html">Amazon
   * Chime SDK meetings</a>.</p>
   */
  class AWS_CHIMESDKMEETINGS_API ChimeSDKMeetingsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKMeetingsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ChimeSDKMeetingsClientConfiguration ClientConfigurationType;
      typedef ChimeSDKMeetingsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMeetingsClient(const Aws::ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration = Aws::ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration(),
                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMeetingsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration = Aws::ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMeetingsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration& clientConfiguration = Aws::ChimeSDKMeetings::ChimeSDKMeetingsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMeetingsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMeetingsClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMeetingsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
        template<typename BatchCreateAttendeeRequestT = Model::BatchCreateAttendeeRequest>
        Model::BatchCreateAttendeeOutcomeCallable BatchCreateAttendeeCallable(const BatchCreateAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::BatchCreateAttendee, request);
        }

        /**
         * An Async wrapper for BatchCreateAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateAttendeeRequestT = Model::BatchCreateAttendeeRequest>
        void BatchCreateAttendeeAsync(const BatchCreateAttendeeRequestT& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::BatchCreateAttendee, request, handler, context);
        }

        /**
         * <p>Updates <code>AttendeeCapabilities</code> except the capabilities listed in
         * an <code>ExcludedAttendeeIds</code> table.</p>  <p>You use the
         * capabilities with a set of values that control what the capabilities can do,
         * such as <code>SendReceive</code> data. For more information about those values,
         * see .</p>  <p>When using capabilities, be aware of these corner
         * cases:</p> <ul> <li> <p>If you specify
         * <code>MeetingFeatures:Video:MaxResolution:None</code> when you create a meeting,
         * all API requests that include <code>SendReceive</code>, <code>Send</code>, or
         * <code>Receive</code> for <code>AttendeeCapabilities:Video</code> will be
         * rejected with <code>ValidationError 400</code>.</p> </li> <li> <p>If you specify
         * <code>MeetingFeatures:Content:MaxResolution:None</code> when you create a
         * meeting, all API requests that include <code>SendReceive</code>,
         * <code>Send</code>, or <code>Receive</code> for
         * <code>AttendeeCapabilities:Content</code> will be rejected with
         * <code>ValidationError 400</code>.</p> </li> <li> <p>You can't set
         * <code>content</code> capabilities to <code>SendReceive</code> or
         * <code>Receive</code> unless you also set <code>video</code> capabilities to
         * <code>SendReceive</code> or <code>Receive</code>. If you don't set the
         * <code>video</code> capability to receive, the response will contain an HTTP 400
         * Bad Request status code. However, you can set your <code>video</code> capability
         * to receive and you set your <code>content</code> capability to not receive.</p>
         * </li> <li> <p>When you change an <code>audio</code> capability from
         * <code>None</code> or <code>Receive</code> to <code>Send</code> or
         * <code>SendReceive</code> , and if the attendee left their microphone unmuted,
         * audio will flow from the attendee to the other meeting participants.</p> </li>
         * <li> <p>When you change a <code>video</code> or <code>content</code> capability
         * from <code>None</code> or <code>Receive</code> to <code>Send</code> or
         * <code>SendReceive</code> , and if the attendee turned on their video or content
         * streams, remote attendees can receive those streams, but only after media
         * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/BatchUpdateAttendeeCapabilitiesExcept">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateAttendeeCapabilitiesExceptOutcome BatchUpdateAttendeeCapabilitiesExcept(const Model::BatchUpdateAttendeeCapabilitiesExceptRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateAttendeeCapabilitiesExcept that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateAttendeeCapabilitiesExceptRequestT = Model::BatchUpdateAttendeeCapabilitiesExceptRequest>
        Model::BatchUpdateAttendeeCapabilitiesExceptOutcomeCallable BatchUpdateAttendeeCapabilitiesExceptCallable(const BatchUpdateAttendeeCapabilitiesExceptRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExcept, request);
        }

        /**
         * An Async wrapper for BatchUpdateAttendeeCapabilitiesExcept that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateAttendeeCapabilitiesExceptRequestT = Model::BatchUpdateAttendeeCapabilitiesExceptRequest>
        void BatchUpdateAttendeeCapabilitiesExceptAsync(const BatchUpdateAttendeeCapabilitiesExceptRequestT& request, const BatchUpdateAttendeeCapabilitiesExceptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExcept, request, handler, context);
        }

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
        template<typename CreateAttendeeRequestT = Model::CreateAttendeeRequest>
        Model::CreateAttendeeOutcomeCallable CreateAttendeeCallable(const CreateAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::CreateAttendee, request);
        }

        /**
         * An Async wrapper for CreateAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAttendeeRequestT = Model::CreateAttendeeRequest>
        void CreateAttendeeAsync(const CreateAttendeeRequestT& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::CreateAttendee, request, handler, context);
        }

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
        template<typename CreateMeetingRequestT = Model::CreateMeetingRequest>
        Model::CreateMeetingOutcomeCallable CreateMeetingCallable(const CreateMeetingRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::CreateMeeting, request);
        }

        /**
         * An Async wrapper for CreateMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMeetingRequestT = Model::CreateMeetingRequest>
        void CreateMeetingAsync(const CreateMeetingRequestT& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::CreateMeeting, request, handler, context);
        }

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
        template<typename CreateMeetingWithAttendeesRequestT = Model::CreateMeetingWithAttendeesRequest>
        Model::CreateMeetingWithAttendeesOutcomeCallable CreateMeetingWithAttendeesCallable(const CreateMeetingWithAttendeesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::CreateMeetingWithAttendees, request);
        }

        /**
         * An Async wrapper for CreateMeetingWithAttendees that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMeetingWithAttendeesRequestT = Model::CreateMeetingWithAttendeesRequest>
        void CreateMeetingWithAttendeesAsync(const CreateMeetingWithAttendeesRequestT& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::CreateMeetingWithAttendees, request, handler, context);
        }

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
        template<typename DeleteAttendeeRequestT = Model::DeleteAttendeeRequest>
        Model::DeleteAttendeeOutcomeCallable DeleteAttendeeCallable(const DeleteAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::DeleteAttendee, request);
        }

        /**
         * An Async wrapper for DeleteAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAttendeeRequestT = Model::DeleteAttendeeRequest>
        void DeleteAttendeeAsync(const DeleteAttendeeRequestT& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::DeleteAttendee, request, handler, context);
        }

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
        template<typename DeleteMeetingRequestT = Model::DeleteMeetingRequest>
        Model::DeleteMeetingOutcomeCallable DeleteMeetingCallable(const DeleteMeetingRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::DeleteMeeting, request);
        }

        /**
         * An Async wrapper for DeleteMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMeetingRequestT = Model::DeleteMeetingRequest>
        void DeleteMeetingAsync(const DeleteMeetingRequestT& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::DeleteMeeting, request, handler, context);
        }

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
        template<typename GetAttendeeRequestT = Model::GetAttendeeRequest>
        Model::GetAttendeeOutcomeCallable GetAttendeeCallable(const GetAttendeeRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::GetAttendee, request);
        }

        /**
         * An Async wrapper for GetAttendee that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAttendeeRequestT = Model::GetAttendeeRequest>
        void GetAttendeeAsync(const GetAttendeeRequestT& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::GetAttendee, request, handler, context);
        }

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
        template<typename GetMeetingRequestT = Model::GetMeetingRequest>
        Model::GetMeetingOutcomeCallable GetMeetingCallable(const GetMeetingRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::GetMeeting, request);
        }

        /**
         * An Async wrapper for GetMeeting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMeetingRequestT = Model::GetMeetingRequest>
        void GetMeetingAsync(const GetMeetingRequestT& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::GetMeeting, request, handler, context);
        }

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
        template<typename ListAttendeesRequestT = Model::ListAttendeesRequest>
        Model::ListAttendeesOutcomeCallable ListAttendeesCallable(const ListAttendeesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::ListAttendees, request);
        }

        /**
         * An Async wrapper for ListAttendees that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttendeesRequestT = Model::ListAttendeesRequest>
        void ListAttendeesAsync(const ListAttendeesRequestT& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::ListAttendees, request, handler, context);
        }

        /**
         * <p>Returns a list of the tags available for the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts transcription for the specified <code>meetingId</code>. For more
         * information, refer to <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meeting-transcription.html">
         * Using Amazon Chime SDK live transcription </a> in the <i>Amazon Chime SDK
         * Developer Guide</i>.</p> <p>If you specify an invalid configuration, a
         * <code>TranscriptFailed</code> event will be sent with the contents of the
         * <code>BadRequestException</code> generated by Amazon Transcribe. For more
         * information on each parameter and which combinations are valid, refer to the <a
         * href="https://docs.aws.amazon.com/transcribe/latest/APIReference/API_streaming_StartStreamTranscription.html">StartStreamTranscription</a>
         * API in the <i>Amazon Transcribe Developer Guide</i>.</p>  <p>By default,
         * Amazon Transcribe may use and store audio content processed by the service to
         * develop and improve Amazon Web Services AI/ML services as further described in
         * section 50 of the <a href="https://aws.amazon.com/service-terms/">Amazon Web
         * Services Service Terms</a>. Using Amazon Transcribe may be subject to federal
         * and state laws or regulations regarding the recording or interception of
         * electronic communications. It is your and your end users’ responsibility to
         * comply with all applicable laws regarding the recording, including properly
         * notifying all participants in a recorded session or communication that the
         * session or communication is being recorded, and obtaining all necessary
         * consents. You can opt out from Amazon Web Services using audio content to
         * develop and improve AWS AI/ML services by configuring an AI services opt out
         * policy using Amazon Web Services Organizations.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/StartMeetingTranscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMeetingTranscriptionOutcome StartMeetingTranscription(const Model::StartMeetingTranscriptionRequest& request) const;

        /**
         * A Callable wrapper for StartMeetingTranscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMeetingTranscriptionRequestT = Model::StartMeetingTranscriptionRequest>
        Model::StartMeetingTranscriptionOutcomeCallable StartMeetingTranscriptionCallable(const StartMeetingTranscriptionRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::StartMeetingTranscription, request);
        }

        /**
         * An Async wrapper for StartMeetingTranscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMeetingTranscriptionRequestT = Model::StartMeetingTranscriptionRequest>
        void StartMeetingTranscriptionAsync(const StartMeetingTranscriptionRequestT& request, const StartMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::StartMeetingTranscription, request, handler, context);
        }

        /**
         * <p>Stops transcription for the specified <code>meetingId</code>. For more
         * information, refer to <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/meeting-transcription.html">
         * Using Amazon Chime SDK live transcription </a> in the <i>Amazon Chime SDK
         * Developer Guide</i>.</p>  <p>By default, Amazon Transcribe may use
         * and store audio content processed by the service to develop and improve Amazon
         * Web Services AI/ML services as further described in section 50 of the <a
         * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
         * Terms</a>. Using Amazon Transcribe may be subject to federal and state laws or
         * regulations regarding the recording or interception of electronic
         * communications. It is your and your end users’ responsibility to comply with all
         * applicable laws regarding the recording, including properly notifying all
         * participants in a recorded session or communication that the session or
         * communication is being recorded, and obtaining all necessary consents. You can
         * opt out from Amazon Web Services using audio content to develop and improve
         * Amazon Web Services AI/ML services by configuring an AI services opt out policy
         * using Amazon Web Services Organizations.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/StopMeetingTranscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMeetingTranscriptionOutcome StopMeetingTranscription(const Model::StopMeetingTranscriptionRequest& request) const;

        /**
         * A Callable wrapper for StopMeetingTranscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopMeetingTranscriptionRequestT = Model::StopMeetingTranscriptionRequest>
        Model::StopMeetingTranscriptionOutcomeCallable StopMeetingTranscriptionCallable(const StopMeetingTranscriptionRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::StopMeetingTranscription, request);
        }

        /**
         * An Async wrapper for StopMeetingTranscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopMeetingTranscriptionRequestT = Model::StopMeetingTranscriptionRequest>
        void StopMeetingTranscriptionAsync(const StopMeetingTranscriptionRequestT& request, const StopMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::StopMeetingTranscription, request, handler, context);
        }

        /**
         * <p>The resource that supports tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resources. When you specify a
         * tag key, the action removes both that key and its associated value. The
         * operation succeeds even if you attempt to remove tags from a resource that were
         * already removed. Note the following:</p> <ul> <li> <p>To remove tags from a
         * resource, you need the necessary permissions for the service that the resource
         * belongs to as well as permissions for removing tags. For more information, see
         * the documentation for the service whose resource you want to untag.</p> </li>
         * <li> <p>You can only tag resources that are located in the specified Amazon Web
         * Services Region for the calling Amazon Web Services account.</p> </li> </ul> <p>
         * <b>Minimum permissions</b> </p> <p>In addition to the
         * <code>tag:UntagResources</code> permission required by this operation, you must
         * also have the remove tags permission defined by the service that created the
         * resource. For example, to remove the tags from an Amazon EC2 instance using the
         * <code>UntagResources</code> operation, you must have both of the following
         * permissions:</p> <p> <code>tag:UntagResource</code> </p> <p>
         * <code>ChimeSDKMeetings:DeleteTags</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>The capabilities that you want to update.</p>  <p>You use the
         * capabilities with a set of values that control what the capabilities can do,
         * such as <code>SendReceive</code> data. For more information about those values,
         * see .</p>  <p>When using capabilities, be aware of these corner
         * cases:</p> <ul> <li> <p>If you specify
         * <code>MeetingFeatures:Video:MaxResolution:None</code> when you create a meeting,
         * all API requests that include <code>SendReceive</code>, <code>Send</code>, or
         * <code>Receive</code> for <code>AttendeeCapabilities:Video</code> will be
         * rejected with <code>ValidationError 400</code>.</p> </li> <li> <p>If you specify
         * <code>MeetingFeatures:Content:MaxResolution:None</code> when you create a
         * meeting, all API requests that include <code>SendReceive</code>,
         * <code>Send</code>, or <code>Receive</code> for
         * <code>AttendeeCapabilities:Content</code> will be rejected with
         * <code>ValidationError 400</code>.</p> </li> <li> <p>You can't set
         * <code>content</code> capabilities to <code>SendReceive</code> or
         * <code>Receive</code> unless you also set <code>video</code> capabilities to
         * <code>SendReceive</code> or <code>Receive</code>. If you don't set the
         * <code>video</code> capability to receive, the response will contain an HTTP 400
         * Bad Request status code. However, you can set your <code>video</code> capability
         * to receive and you set your <code>content</code> capability to not receive.</p>
         * </li> <li> <p>When you change an <code>audio</code> capability from
         * <code>None</code> or <code>Receive</code> to <code>Send</code> or
         * <code>SendReceive</code> , and if the attendee left their microphone unmuted,
         * audio will flow from the attendee to the other meeting participants.</p> </li>
         * <li> <p>When you change a <code>video</code> or <code>content</code> capability
         * from <code>None</code> or <code>Receive</code> to <code>Send</code> or
         * <code>SendReceive</code> , and if the attendee turned on their video or content
         * streams, remote attendees can receive those streams, but only after media
         * renegotiation between the client and the Amazon Chime back-end server.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/UpdateAttendeeCapabilities">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAttendeeCapabilitiesOutcome UpdateAttendeeCapabilities(const Model::UpdateAttendeeCapabilitiesRequest& request) const;

        /**
         * A Callable wrapper for UpdateAttendeeCapabilities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAttendeeCapabilitiesRequestT = Model::UpdateAttendeeCapabilitiesRequest>
        Model::UpdateAttendeeCapabilitiesOutcomeCallable UpdateAttendeeCapabilitiesCallable(const UpdateAttendeeCapabilitiesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMeetingsClient::UpdateAttendeeCapabilities, request);
        }

        /**
         * An Async wrapper for UpdateAttendeeCapabilities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAttendeeCapabilitiesRequestT = Model::UpdateAttendeeCapabilitiesRequest>
        void UpdateAttendeeCapabilitiesAsync(const UpdateAttendeeCapabilitiesRequestT& request, const UpdateAttendeeCapabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMeetingsClient::UpdateAttendeeCapabilities, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKMeetingsClient>;
      void init(const ChimeSDKMeetingsClientConfiguration& clientConfiguration);

      ChimeSDKMeetingsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ChimeSDKMeetingsEndpointProviderBase> m_endpointProvider;
  };

} // namespace ChimeSDKMeetings
} // namespace Aws
