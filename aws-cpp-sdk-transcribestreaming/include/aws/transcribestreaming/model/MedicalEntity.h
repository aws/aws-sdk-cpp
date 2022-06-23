/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The medical entity identified as personal health information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalEntity">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalEntity
  {
  public:
    MedicalEntity();
    MedicalEntity(Aws::Utils::Json::JsonView jsonValue);
    MedicalEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of the speech that was identified as a medical entity.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the speech that was identified as a medical entity.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the speech that was identified as a medical entity.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the speech that was identified as a medical entity.</p>
     */
    inline MedicalEntity& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The end time of the speech that was identified as a medical entity.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the speech that was identified as a medical entity.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the speech that was identified as a medical entity.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the speech that was identified as a medical entity.</p>
     */
    inline MedicalEntity& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>The type of personal health information of the medical entity.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The type of personal health information of the medical entity.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The type of personal health information of the medical entity.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The type of personal health information of the medical entity.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The type of personal health information of the medical entity.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The type of personal health information of the medical entity.</p>
     */
    inline MedicalEntity& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The type of personal health information of the medical entity.</p>
     */
    inline MedicalEntity& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The type of personal health information of the medical entity.</p>
     */
    inline MedicalEntity& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>The word or words in the transcription output that have been identified as a
     * medical entity.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The word or words in the transcription output that have been identified as a
     * medical entity.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The word or words in the transcription output that have been identified as a
     * medical entity.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The word or words in the transcription output that have been identified as a
     * medical entity.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The word or words in the transcription output that have been identified as a
     * medical entity.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The word or words in the transcription output that have been identified as a
     * medical entity.</p>
     */
    inline MedicalEntity& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The word or words in the transcription output that have been identified as a
     * medical entity.</p>
     */
    inline MedicalEntity& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The word or words in the transcription output that have been identified as a
     * medical entity.</p>
     */
    inline MedicalEntity& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A value between zero and one that Amazon Transcribe Medical assigned to the
     * personal health information that it identified in the source audio. Larger
     * values indicate that Amazon Transcribe Medical has higher confidence in the
     * personal health information that it identified.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>A value between zero and one that Amazon Transcribe Medical assigned to the
     * personal health information that it identified in the source audio. Larger
     * values indicate that Amazon Transcribe Medical has higher confidence in the
     * personal health information that it identified.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>A value between zero and one that Amazon Transcribe Medical assigned to the
     * personal health information that it identified in the source audio. Larger
     * values indicate that Amazon Transcribe Medical has higher confidence in the
     * personal health information that it identified.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>A value between zero and one that Amazon Transcribe Medical assigned to the
     * personal health information that it identified in the source audio. Larger
     * values indicate that Amazon Transcribe Medical has higher confidence in the
     * personal health information that it identified.</p>
     */
    inline MedicalEntity& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    double m_startTime;
    bool m_startTimeHasBeenSet;

    double m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
