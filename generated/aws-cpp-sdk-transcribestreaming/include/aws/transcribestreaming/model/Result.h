﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/transcribestreaming/model/Alternative.h>
#include <aws/transcribestreaming/model/LanguageWithScore.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>The result of transcribing a portion of the input audio stream.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Result">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API Result
  {
  public:
    Result();
    Result(Aws::Utils::Json::JsonView jsonValue);
    Result& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the result. </p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>A unique identifier for the result. </p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>A unique identifier for the result. </p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>A unique identifier for the result. </p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>A unique identifier for the result. </p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>A unique identifier for the result. </p>
     */
    inline Result& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>A unique identifier for the result. </p>
     */
    inline Result& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the result. </p>
     */
    inline Result& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>The offset in seconds from the beginning of the audio stream to the beginning
     * of the result.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The offset in seconds from the beginning of the audio stream to the beginning
     * of the result.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The offset in seconds from the beginning of the audio stream to the beginning
     * of the result.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The offset in seconds from the beginning of the audio stream to the beginning
     * of the result.</p>
     */
    inline Result& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The offset in seconds from the beginning of the audio stream to the end of
     * the result.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The offset in seconds from the beginning of the audio stream to the end of
     * the result.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The offset in seconds from the beginning of the audio stream to the end of
     * the result.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The offset in seconds from the beginning of the audio stream to the end of
     * the result.</p>
     */
    inline Result& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>Amazon Transcribe divides the incoming audio stream into segments at natural
     * points in the audio. Transcription results are returned based on these segments.
     * </p> <p>The <code>IsPartial</code> field is <code>true</code> to indicate that
     * Amazon Transcribe has additional transcription data to send, <code>false</code>
     * to indicate that this is the last transcription result for the segment.</p>
     */
    inline bool GetIsPartial() const{ return m_isPartial; }

    /**
     * <p>Amazon Transcribe divides the incoming audio stream into segments at natural
     * points in the audio. Transcription results are returned based on these segments.
     * </p> <p>The <code>IsPartial</code> field is <code>true</code> to indicate that
     * Amazon Transcribe has additional transcription data to send, <code>false</code>
     * to indicate that this is the last transcription result for the segment.</p>
     */
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }

    /**
     * <p>Amazon Transcribe divides the incoming audio stream into segments at natural
     * points in the audio. Transcription results are returned based on these segments.
     * </p> <p>The <code>IsPartial</code> field is <code>true</code> to indicate that
     * Amazon Transcribe has additional transcription data to send, <code>false</code>
     * to indicate that this is the last transcription result for the segment.</p>
     */
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }

    /**
     * <p>Amazon Transcribe divides the incoming audio stream into segments at natural
     * points in the audio. Transcription results are returned based on these segments.
     * </p> <p>The <code>IsPartial</code> field is <code>true</code> to indicate that
     * Amazon Transcribe has additional transcription data to send, <code>false</code>
     * to indicate that this is the last transcription result for the segment.</p>
     */
    inline Result& WithIsPartial(bool value) { SetIsPartial(value); return *this;}


    /**
     * <p>A list of possible transcriptions for the audio. Each alternative typically
     * contains one <code>item</code> that contains the result of the
     * transcription.</p>
     */
    inline const Aws::Vector<Alternative>& GetAlternatives() const{ return m_alternatives; }

    /**
     * <p>A list of possible transcriptions for the audio. Each alternative typically
     * contains one <code>item</code> that contains the result of the
     * transcription.</p>
     */
    inline bool AlternativesHasBeenSet() const { return m_alternativesHasBeenSet; }

    /**
     * <p>A list of possible transcriptions for the audio. Each alternative typically
     * contains one <code>item</code> that contains the result of the
     * transcription.</p>
     */
    inline void SetAlternatives(const Aws::Vector<Alternative>& value) { m_alternativesHasBeenSet = true; m_alternatives = value; }

    /**
     * <p>A list of possible transcriptions for the audio. Each alternative typically
     * contains one <code>item</code> that contains the result of the
     * transcription.</p>
     */
    inline void SetAlternatives(Aws::Vector<Alternative>&& value) { m_alternativesHasBeenSet = true; m_alternatives = std::move(value); }

    /**
     * <p>A list of possible transcriptions for the audio. Each alternative typically
     * contains one <code>item</code> that contains the result of the
     * transcription.</p>
     */
    inline Result& WithAlternatives(const Aws::Vector<Alternative>& value) { SetAlternatives(value); return *this;}

    /**
     * <p>A list of possible transcriptions for the audio. Each alternative typically
     * contains one <code>item</code> that contains the result of the
     * transcription.</p>
     */
    inline Result& WithAlternatives(Aws::Vector<Alternative>&& value) { SetAlternatives(std::move(value)); return *this;}

    /**
     * <p>A list of possible transcriptions for the audio. Each alternative typically
     * contains one <code>item</code> that contains the result of the
     * transcription.</p>
     */
    inline Result& AddAlternatives(const Alternative& value) { m_alternativesHasBeenSet = true; m_alternatives.push_back(value); return *this; }

    /**
     * <p>A list of possible transcriptions for the audio. Each alternative typically
     * contains one <code>item</code> that contains the result of the
     * transcription.</p>
     */
    inline Result& AddAlternatives(Alternative&& value) { m_alternativesHasBeenSet = true; m_alternatives.push_back(std::move(value)); return *this; }


    /**
     * <p>When channel identification is enabled, Amazon Transcribe transcribes the
     * speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe transcribes the
     * speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe transcribes the
     * speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe transcribes the
     * speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe transcribes the
     * speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe transcribes the
     * speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline Result& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * <p>When channel identification is enabled, Amazon Transcribe transcribes the
     * speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline Result& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * <p>When channel identification is enabled, Amazon Transcribe transcribes the
     * speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline Result& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * <p>The language code of the identified language in your media stream.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code of the identified language in your media stream.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code of the identified language in your media stream.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code of the identified language in your media stream.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code of the identified language in your media stream.</p>
     */
    inline Result& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code of the identified language in your media stream.</p>
     */
    inline Result& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The language code of the dominant language identified in your media.</p>
     */
    inline const Aws::Vector<LanguageWithScore>& GetLanguageIdentification() const{ return m_languageIdentification; }

    /**
     * <p>The language code of the dominant language identified in your media.</p>
     */
    inline bool LanguageIdentificationHasBeenSet() const { return m_languageIdentificationHasBeenSet; }

    /**
     * <p>The language code of the dominant language identified in your media.</p>
     */
    inline void SetLanguageIdentification(const Aws::Vector<LanguageWithScore>& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification = value; }

    /**
     * <p>The language code of the dominant language identified in your media.</p>
     */
    inline void SetLanguageIdentification(Aws::Vector<LanguageWithScore>&& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification = std::move(value); }

    /**
     * <p>The language code of the dominant language identified in your media.</p>
     */
    inline Result& WithLanguageIdentification(const Aws::Vector<LanguageWithScore>& value) { SetLanguageIdentification(value); return *this;}

    /**
     * <p>The language code of the dominant language identified in your media.</p>
     */
    inline Result& WithLanguageIdentification(Aws::Vector<LanguageWithScore>&& value) { SetLanguageIdentification(std::move(value)); return *this;}

    /**
     * <p>The language code of the dominant language identified in your media.</p>
     */
    inline Result& AddLanguageIdentification(const LanguageWithScore& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification.push_back(value); return *this; }

    /**
     * <p>The language code of the dominant language identified in your media.</p>
     */
    inline Result& AddLanguageIdentification(LanguageWithScore&& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet;

    double m_startTime;
    bool m_startTimeHasBeenSet;

    double m_endTime;
    bool m_endTimeHasBeenSet;

    bool m_isPartial;
    bool m_isPartialHasBeenSet;

    Aws::Vector<Alternative> m_alternatives;
    bool m_alternativesHasBeenSet;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    Aws::Vector<LanguageWithScore> m_languageIdentification;
    bool m_languageIdentificationHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
