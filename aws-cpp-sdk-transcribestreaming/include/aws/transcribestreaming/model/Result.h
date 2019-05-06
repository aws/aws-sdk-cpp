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
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/Alternative.h>
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
     * <p>The offset in milliseconds from the beginning of the audio stream to the
     * beginning of the result.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The offset in milliseconds from the beginning of the audio stream to the
     * beginning of the result.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The offset in milliseconds from the beginning of the audio stream to the
     * beginning of the result.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The offset in milliseconds from the beginning of the audio stream to the
     * beginning of the result.</p>
     */
    inline Result& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The offset in milliseconds from the beginning of the audio stream to the end
     * of the result.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The offset in milliseconds from the beginning of the audio stream to the end
     * of the result.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The offset in milliseconds from the beginning of the audio stream to the end
     * of the result.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The offset in milliseconds from the beginning of the audio stream to the end
     * of the result.</p>
     */
    inline Result& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p> <code>true</code> to indicate that Amazon Transcribe has additional
     * transcription data to send, <code>false</code> to indicate that this is the last
     * transcription result for the audio stream.</p>
     */
    inline bool GetIsPartial() const{ return m_isPartial; }

    /**
     * <p> <code>true</code> to indicate that Amazon Transcribe has additional
     * transcription data to send, <code>false</code> to indicate that this is the last
     * transcription result for the audio stream.</p>
     */
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }

    /**
     * <p> <code>true</code> to indicate that Amazon Transcribe has additional
     * transcription data to send, <code>false</code> to indicate that this is the last
     * transcription result for the audio stream.</p>
     */
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }

    /**
     * <p> <code>true</code> to indicate that Amazon Transcribe has additional
     * transcription data to send, <code>false</code> to indicate that this is the last
     * transcription result for the audio stream.</p>
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
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
