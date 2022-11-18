/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateDomainAsync(...)  SubmitAsync(&VoiceIDClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&VoiceIDClient::CreateDomain, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&VoiceIDClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&VoiceIDClient::DeleteDomain, REQUEST)

#define DeleteFraudsterAsync(...)  SubmitAsync(&VoiceIDClient::DeleteFraudster, __VA_ARGS__)
#define DeleteFraudsterCallable(REQUEST)  SubmitCallable(&VoiceIDClient::DeleteFraudster, REQUEST)

#define DeleteSpeakerAsync(...)  SubmitAsync(&VoiceIDClient::DeleteSpeaker, __VA_ARGS__)
#define DeleteSpeakerCallable(REQUEST)  SubmitCallable(&VoiceIDClient::DeleteSpeaker, REQUEST)

#define DescribeDomainAsync(...)  SubmitAsync(&VoiceIDClient::DescribeDomain, __VA_ARGS__)
#define DescribeDomainCallable(REQUEST)  SubmitCallable(&VoiceIDClient::DescribeDomain, REQUEST)

#define DescribeFraudsterAsync(...)  SubmitAsync(&VoiceIDClient::DescribeFraudster, __VA_ARGS__)
#define DescribeFraudsterCallable(REQUEST)  SubmitCallable(&VoiceIDClient::DescribeFraudster, REQUEST)

#define DescribeFraudsterRegistrationJobAsync(...)  SubmitAsync(&VoiceIDClient::DescribeFraudsterRegistrationJob, __VA_ARGS__)
#define DescribeFraudsterRegistrationJobCallable(REQUEST)  SubmitCallable(&VoiceIDClient::DescribeFraudsterRegistrationJob, REQUEST)

#define DescribeSpeakerAsync(...)  SubmitAsync(&VoiceIDClient::DescribeSpeaker, __VA_ARGS__)
#define DescribeSpeakerCallable(REQUEST)  SubmitCallable(&VoiceIDClient::DescribeSpeaker, REQUEST)

#define DescribeSpeakerEnrollmentJobAsync(...)  SubmitAsync(&VoiceIDClient::DescribeSpeakerEnrollmentJob, __VA_ARGS__)
#define DescribeSpeakerEnrollmentJobCallable(REQUEST)  SubmitCallable(&VoiceIDClient::DescribeSpeakerEnrollmentJob, REQUEST)

#define EvaluateSessionAsync(...)  SubmitAsync(&VoiceIDClient::EvaluateSession, __VA_ARGS__)
#define EvaluateSessionCallable(REQUEST)  SubmitCallable(&VoiceIDClient::EvaluateSession, REQUEST)

#define ListDomainsAsync(...)  SubmitAsync(&VoiceIDClient::ListDomains, __VA_ARGS__)
#define ListDomainsCallable(REQUEST)  SubmitCallable(&VoiceIDClient::ListDomains, REQUEST)

#define ListFraudsterRegistrationJobsAsync(...)  SubmitAsync(&VoiceIDClient::ListFraudsterRegistrationJobs, __VA_ARGS__)
#define ListFraudsterRegistrationJobsCallable(REQUEST)  SubmitCallable(&VoiceIDClient::ListFraudsterRegistrationJobs, REQUEST)

#define ListSpeakerEnrollmentJobsAsync(...)  SubmitAsync(&VoiceIDClient::ListSpeakerEnrollmentJobs, __VA_ARGS__)
#define ListSpeakerEnrollmentJobsCallable(REQUEST)  SubmitCallable(&VoiceIDClient::ListSpeakerEnrollmentJobs, REQUEST)

#define ListSpeakersAsync(...)  SubmitAsync(&VoiceIDClient::ListSpeakers, __VA_ARGS__)
#define ListSpeakersCallable(REQUEST)  SubmitCallable(&VoiceIDClient::ListSpeakers, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&VoiceIDClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&VoiceIDClient::ListTagsForResource, REQUEST)

#define OptOutSpeakerAsync(...)  SubmitAsync(&VoiceIDClient::OptOutSpeaker, __VA_ARGS__)
#define OptOutSpeakerCallable(REQUEST)  SubmitCallable(&VoiceIDClient::OptOutSpeaker, REQUEST)

#define StartFraudsterRegistrationJobAsync(...)  SubmitAsync(&VoiceIDClient::StartFraudsterRegistrationJob, __VA_ARGS__)
#define StartFraudsterRegistrationJobCallable(REQUEST)  SubmitCallable(&VoiceIDClient::StartFraudsterRegistrationJob, REQUEST)

#define StartSpeakerEnrollmentJobAsync(...)  SubmitAsync(&VoiceIDClient::StartSpeakerEnrollmentJob, __VA_ARGS__)
#define StartSpeakerEnrollmentJobCallable(REQUEST)  SubmitCallable(&VoiceIDClient::StartSpeakerEnrollmentJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&VoiceIDClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&VoiceIDClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&VoiceIDClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&VoiceIDClient::UntagResource, REQUEST)

#define UpdateDomainAsync(...)  SubmitAsync(&VoiceIDClient::UpdateDomain, __VA_ARGS__)
#define UpdateDomainCallable(REQUEST)  SubmitCallable(&VoiceIDClient::UpdateDomain, REQUEST)

