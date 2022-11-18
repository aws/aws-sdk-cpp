/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteLexiconAsync(...)  SubmitAsync(&PollyClient::DeleteLexicon, __VA_ARGS__)
#define DeleteLexiconCallable(REQUEST)  SubmitCallable(&PollyClient::DeleteLexicon, REQUEST)

#define DescribeVoicesAsync(...)  SubmitAsync(&PollyClient::DescribeVoices, __VA_ARGS__)
#define DescribeVoicesCallable(REQUEST)  SubmitCallable(&PollyClient::DescribeVoices, REQUEST)

#define GetLexiconAsync(...)  SubmitAsync(&PollyClient::GetLexicon, __VA_ARGS__)
#define GetLexiconCallable(REQUEST)  SubmitCallable(&PollyClient::GetLexicon, REQUEST)

#define GetSpeechSynthesisTaskAsync(...)  SubmitAsync(&PollyClient::GetSpeechSynthesisTask, __VA_ARGS__)
#define GetSpeechSynthesisTaskCallable(REQUEST)  SubmitCallable(&PollyClient::GetSpeechSynthesisTask, REQUEST)

#define ListLexiconsAsync(...)  SubmitAsync(&PollyClient::ListLexicons, __VA_ARGS__)
#define ListLexiconsCallable(REQUEST)  SubmitCallable(&PollyClient::ListLexicons, REQUEST)

#define ListSpeechSynthesisTasksAsync(...)  SubmitAsync(&PollyClient::ListSpeechSynthesisTasks, __VA_ARGS__)
#define ListSpeechSynthesisTasksCallable(REQUEST)  SubmitCallable(&PollyClient::ListSpeechSynthesisTasks, REQUEST)

#define PutLexiconAsync(...)  SubmitAsync(&PollyClient::PutLexicon, __VA_ARGS__)
#define PutLexiconCallable(REQUEST)  SubmitCallable(&PollyClient::PutLexicon, REQUEST)

#define StartSpeechSynthesisTaskAsync(...)  SubmitAsync(&PollyClient::StartSpeechSynthesisTask, __VA_ARGS__)
#define StartSpeechSynthesisTaskCallable(REQUEST)  SubmitCallable(&PollyClient::StartSpeechSynthesisTask, REQUEST)

#define SynthesizeSpeechAsync(...)  SubmitAsync(&PollyClient::SynthesizeSpeech, __VA_ARGS__)
#define SynthesizeSpeechCallable(REQUEST)  SubmitCallable(&PollyClient::SynthesizeSpeech, REQUEST)

