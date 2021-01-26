/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/MedicalAlternative.h>
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
   * <p>The results of transcribing a portion of the input audio
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalResult">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalResult
  {
  public:
    MedicalResult();
    MedicalResult(Aws::Utils::Json::JsonView jsonValue);
    MedicalResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the result.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>A unique identifier for the result.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>A unique identifier for the result.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>A unique identifier for the result.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>A unique identifier for the result.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>A unique identifier for the result.</p>
     */
    inline MedicalResult& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>A unique identifier for the result.</p>
     */
    inline MedicalResult& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the result.</p>
     */
    inline MedicalResult& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>The time, in seconds, from the beginning of the audio stream to the beginning
     * of the result.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time, in seconds, from the beginning of the audio stream to the beginning
     * of the result.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time, in seconds, from the beginning of the audio stream to the beginning
     * of the result.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time, in seconds, from the beginning of the audio stream to the beginning
     * of the result.</p>
     */
    inline MedicalResult& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The time, in seconds, from the beginning of the audio stream to the end of
     * the result.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time, in seconds, from the beginning of the audio stream to the end of
     * the result.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time, in seconds, from the beginning of the audio stream to the end of
     * the result.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time, in seconds, from the beginning of the audio stream to the end of
     * the result.</p>
     */
    inline MedicalResult& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>Amazon Transcribe Medical divides the incoming audio stream into segments at
     * natural points in the audio. Transcription results are returned based on these
     * segments.</p> <p>The <code>IsPartial</code> field is <code>true</code> to
     * indicate that Amazon Transcribe Medical has additional transcription data to
     * send. The <code>IsPartial</code> field is <code>false</code> to indicate that
     * this is the last transcription result for the segment.</p>
     */
    inline bool GetIsPartial() const{ return m_isPartial; }

    /**
     * <p>Amazon Transcribe Medical divides the incoming audio stream into segments at
     * natural points in the audio. Transcription results are returned based on these
     * segments.</p> <p>The <code>IsPartial</code> field is <code>true</code> to
     * indicate that Amazon Transcribe Medical has additional transcription data to
     * send. The <code>IsPartial</code> field is <code>false</code> to indicate that
     * this is the last transcription result for the segment.</p>
     */
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }

    /**
     * <p>Amazon Transcribe Medical divides the incoming audio stream into segments at
     * natural points in the audio. Transcription results are returned based on these
     * segments.</p> <p>The <code>IsPartial</code> field is <code>true</code> to
     * indicate that Amazon Transcribe Medical has additional transcription data to
     * send. The <code>IsPartial</code> field is <code>false</code> to indicate that
     * this is the last transcription result for the segment.</p>
     */
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }

    /**
     * <p>Amazon Transcribe Medical divides the incoming audio stream into segments at
     * natural points in the audio. Transcription results are returned based on these
     * segments.</p> <p>The <code>IsPartial</code> field is <code>true</code> to
     * indicate that Amazon Transcribe Medical has additional transcription data to
     * send. The <code>IsPartial</code> field is <code>false</code> to indicate that
     * this is the last transcription result for the segment.</p>
     */
    inline MedicalResult& WithIsPartial(bool value) { SetIsPartial(value); return *this;}


    /**
     * <p>A list of possible transcriptions of the audio. Each alternative typically
     * contains one <code>Item</code> that contains the result of the
     * transcription.</p>
     */
    inline const Aws::Vector<MedicalAlternative>& GetAlternatives() const{ return m_alternatives; }

    /**
     * <p>A list of possible transcriptions of the audio. Each alternative typically
     * contains one <code>Item</code> that contains the result of the
     * transcription.</p>
     */
    inline bool AlternativesHasBeenSet() const { return m_alternativesHasBeenSet; }

    /**
     * <p>A list of possible transcriptions of the audio. Each alternative typically
     * contains one <code>Item</code> that contains the result of the
     * transcription.</p>
     */
    inline void SetAlternatives(const Aws::Vector<MedicalAlternative>& value) { m_alternativesHasBeenSet = true; m_alternatives = value; }

    /**
     * <p>A list of possible transcriptions of the audio. Each alternative typically
     * contains one <code>Item</code> that contains the result of the
     * transcription.</p>
     */
    inline void SetAlternatives(Aws::Vector<MedicalAlternative>&& value) { m_alternativesHasBeenSet = true; m_alternatives = std::move(value); }

    /**
     * <p>A list of possible transcriptions of the audio. Each alternative typically
     * contains one <code>Item</code> that contains the result of the
     * transcription.</p>
     */
    inline MedicalResult& WithAlternatives(const Aws::Vector<MedicalAlternative>& value) { SetAlternatives(value); return *this;}

    /**
     * <p>A list of possible transcriptions of the audio. Each alternative typically
     * contains one <code>Item</code> that contains the result of the
     * transcription.</p>
     */
    inline MedicalResult& WithAlternatives(Aws::Vector<MedicalAlternative>&& value) { SetAlternatives(std::move(value)); return *this;}

    /**
     * <p>A list of possible transcriptions of the audio. Each alternative typically
     * contains one <code>Item</code> that contains the result of the
     * transcription.</p>
     */
    inline MedicalResult& AddAlternatives(const MedicalAlternative& value) { m_alternativesHasBeenSet = true; m_alternatives.push_back(value); return *this; }

    /**
     * <p>A list of possible transcriptions of the audio. Each alternative typically
     * contains one <code>Item</code> that contains the result of the
     * transcription.</p>
     */
    inline MedicalResult& AddAlternatives(MedicalAlternative&& value) { m_alternativesHasBeenSet = true; m_alternatives.push_back(std::move(value)); return *this; }


    /**
     * <p>When channel identification is enabled, Amazon Transcribe Medical transcribes
     * the speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe Medical transcribes
     * the speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe Medical transcribes
     * the speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe Medical transcribes
     * the speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe Medical transcribes
     * the speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * <p>When channel identification is enabled, Amazon Transcribe Medical transcribes
     * the speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline MedicalResult& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * <p>When channel identification is enabled, Amazon Transcribe Medical transcribes
     * the speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline MedicalResult& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * <p>When channel identification is enabled, Amazon Transcribe Medical transcribes
     * the speech from each audio channel separately.</p> <p>You can use
     * <code>ChannelId</code> to retrieve the transcription results for a single
     * channel in your audio stream.</p>
     */
    inline MedicalResult& WithChannelId(const char* value) { SetChannelId(value); return *this;}

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet;

    double m_startTime;
    bool m_startTimeHasBeenSet;

    double m_endTime;
    bool m_endTimeHasBeenSet;

    bool m_isPartial;
    bool m_isPartialHasBeenSet;

    Aws::Vector<MedicalAlternative> m_alternatives;
    bool m_alternativesHasBeenSet;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
