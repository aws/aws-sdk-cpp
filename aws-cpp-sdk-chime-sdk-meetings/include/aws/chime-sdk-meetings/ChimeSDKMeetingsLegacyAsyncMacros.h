/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchCreateAttendeeAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::BatchCreateAttendee, __VA_ARGS__)
#define BatchCreateAttendeeCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::BatchCreateAttendee, REQUEST)

#define BatchUpdateAttendeeCapabilitiesExceptAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExcept, __VA_ARGS__)
#define BatchUpdateAttendeeCapabilitiesExceptCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExcept, REQUEST)

#define CreateAttendeeAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::CreateAttendee, __VA_ARGS__)
#define CreateAttendeeCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::CreateAttendee, REQUEST)

#define CreateMeetingAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::CreateMeeting, __VA_ARGS__)
#define CreateMeetingCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::CreateMeeting, REQUEST)

#define CreateMeetingWithAttendeesAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::CreateMeetingWithAttendees, __VA_ARGS__)
#define CreateMeetingWithAttendeesCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::CreateMeetingWithAttendees, REQUEST)

#define DeleteAttendeeAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::DeleteAttendee, __VA_ARGS__)
#define DeleteAttendeeCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::DeleteAttendee, REQUEST)

#define DeleteMeetingAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::DeleteMeeting, __VA_ARGS__)
#define DeleteMeetingCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::DeleteMeeting, REQUEST)

#define GetAttendeeAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::GetAttendee, __VA_ARGS__)
#define GetAttendeeCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::GetAttendee, REQUEST)

#define GetMeetingAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::GetMeeting, __VA_ARGS__)
#define GetMeetingCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::GetMeeting, REQUEST)

#define ListAttendeesAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::ListAttendees, __VA_ARGS__)
#define ListAttendeesCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::ListAttendees, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::ListTagsForResource, REQUEST)

#define StartMeetingTranscriptionAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::StartMeetingTranscription, __VA_ARGS__)
#define StartMeetingTranscriptionCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::StartMeetingTranscription, REQUEST)

#define StopMeetingTranscriptionAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::StopMeetingTranscription, __VA_ARGS__)
#define StopMeetingTranscriptionCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::StopMeetingTranscription, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::UntagResource, REQUEST)

#define UpdateAttendeeCapabilitiesAsync(...)  SubmitAsync(&ChimeSDKMeetingsClient::UpdateAttendeeCapabilities, __VA_ARGS__)
#define UpdateAttendeeCapabilitiesCallable(REQUEST)  SubmitCallable(&ChimeSDKMeetingsClient::UpdateAttendeeCapabilities, REQUEST)

