/**
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
   * <p>The <code>Result</code> associated with a <code/>.</p> <p>Contains a set of
   * transcription results from one or more audio segments, along with additional
   * information per your request parameters. This can include information relating
   * to alternative transcriptions, channel identification, partial result
   * stabilization, language identification, and other transcription-related
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Result">AWS
   * API Reference</a></p>
   */
  class Result
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API Result();
    AWS_TRANSCRIBESTREAMINGSERVICE_API Result(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Result& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline Result& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline Result& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline Result& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>The start time, in milliseconds, of the <code>Result</code>.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time, in milliseconds, of the <code>Result</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time, in milliseconds, of the <code>Result</code>.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time, in milliseconds, of the <code>Result</code>.</p>
     */
    inline Result& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The end time, in milliseconds, of the <code>Result</code>.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time, in milliseconds, of the <code>Result</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time, in milliseconds, of the <code>Result</code>.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time, in milliseconds, of the <code>Result</code>.</p>
     */
    inline Result& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>Indicates if the segment is complete.</p> <p>If <code>IsPartial</code> is
     * <code>true</code>, the segment is not complete. If <code>IsPartial</code> is
     * <code>false</code>, the segment is complete.</p>
     */
    inline bool GetIsPartial() const{ return m_isPartial; }

    /**
     * <p>Indicates if the segment is complete.</p> <p>If <code>IsPartial</code> is
     * <code>true</code>, the segment is not complete. If <code>IsPartial</code> is
     * <code>false</code>, the segment is complete.</p>
     */
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }

    /**
     * <p>Indicates if the segment is complete.</p> <p>If <code>IsPartial</code> is
     * <code>true</code>, the segment is not complete. If <code>IsPartial</code> is
     * <code>false</code>, the segment is complete.</p>
     */
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }

    /**
     * <p>Indicates if the segment is complete.</p> <p>If <code>IsPartial</code> is
     * <code>true</code>, the segment is not complete. If <code>IsPartial</code> is
     * <code>false</code>, the segment is complete.</p>
     */
    inline Result& WithIsPartial(bool value) { SetIsPartial(value); return *this;}


    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline const Aws::Vector<Alternative>& GetAlternatives() const{ return m_alternatives; }

    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline bool AlternativesHasBeenSet() const { return m_alternativesHasBeenSet; }

    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline void SetAlternatives(const Aws::Vector<Alternative>& value) { m_alternativesHasBeenSet = true; m_alternatives = value; }

    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline void SetAlternatives(Aws::Vector<Alternative>&& value) { m_alternativesHasBeenSet = true; m_alternatives = std::move(value); }

    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline Result& WithAlternatives(const Aws::Vector<Alternative>& value) { SetAlternatives(value); return *this;}

    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline Result& WithAlternatives(Aws::Vector<Alternative>&& value) { SetAlternatives(std::move(value)); return *this;}

    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline Result& AddAlternatives(const Alternative& value) { m_alternativesHasBeenSet = true; m_alternatives.push_back(value); return *this; }

    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline Result& AddAlternatives(Alternative&& value) { m_alternativesHasBeenSet = true; m_alternatives.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates which audio channel is associated with the <code>Result</code>.</p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * <p>Indicates which audio channel is associated with the <code>Result</code>.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>Indicates which audio channel is associated with the <code>Result</code>.</p>
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>Indicates which audio channel is associated with the <code>Result</code>.</p>
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * <p>Indicates which audio channel is associated with the <code>Result</code>.</p>
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * <p>Indicates which audio channel is associated with the <code>Result</code>.</p>
     */
    inline Result& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * <p>Indicates which audio channel is associated with the <code>Result</code>.</p>
     */
    inline Result& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * <p>Indicates which audio channel is associated with the <code>Result</code>.</p>
     */
    inline Result& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * <p>The language code that represents the language spoken in your audio
     * stream.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code that represents the language spoken in your audio
     * stream.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code that represents the language spoken in your audio
     * stream.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code that represents the language spoken in your audio
     * stream.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code that represents the language spoken in your audio
     * stream.</p>
     */
    inline Result& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code that represents the language spoken in your audio
     * stream.</p>
     */
    inline Result& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     * <p>If you enabled channel identification and each channel of your audio contains
     * a different language, you may have more than one result.</p>
     */
    inline const Aws::Vector<LanguageWithScore>& GetLanguageIdentification() const{ return m_languageIdentification; }

    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     * <p>If you enabled channel identification and each channel of your audio contains
     * a different language, you may have more than one result.</p>
     */
    inline bool LanguageIdentificationHasBeenSet() const { return m_languageIdentificationHasBeenSet; }

    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     * <p>If you enabled channel identification and each channel of your audio contains
     * a different language, you may have more than one result.</p>
     */
    inline void SetLanguageIdentification(const Aws::Vector<LanguageWithScore>& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification = value; }

    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     * <p>If you enabled channel identification and each channel of your audio contains
     * a different language, you may have more than one result.</p>
     */
    inline void SetLanguageIdentification(Aws::Vector<LanguageWithScore>&& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification = std::move(value); }

    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     * <p>If you enabled channel identification and each channel of your audio contains
     * a different language, you may have more than one result.</p>
     */
    inline Result& WithLanguageIdentification(const Aws::Vector<LanguageWithScore>& value) { SetLanguageIdentification(value); return *this;}

    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     * <p>If you enabled channel identification and each channel of your audio contains
     * a different language, you may have more than one result.</p>
     */
    inline Result& WithLanguageIdentification(Aws::Vector<LanguageWithScore>&& value) { SetLanguageIdentification(std::move(value)); return *this;}

    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     * <p>If you enabled channel identification and each channel of your audio contains
     * a different language, you may have more than one result.</p>
     */
    inline Result& AddLanguageIdentification(const LanguageWithScore& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification.push_back(value); return *this; }

    /**
     * <p>The language code of the dominant language identified in your stream.</p>
     * <p>If you enabled channel identification and each channel of your audio contains
     * a different language, you may have more than one result.</p>
     */
    inline Result& AddLanguageIdentification(LanguageWithScore&& value) { m_languageIdentificationHasBeenSet = true; m_languageIdentification.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    double m_startTime;
    bool m_startTimeHasBeenSet = false;

    double m_endTime;
    bool m_endTimeHasBeenSet = false;

    bool m_isPartial;
    bool m_isPartialHasBeenSet = false;

    Aws::Vector<Alternative> m_alternatives;
    bool m_alternativesHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::Vector<LanguageWithScore> m_languageIdentification;
    bool m_languageIdentificationHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
