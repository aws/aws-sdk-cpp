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
   * <p>The entity identified as personally identifiable information
   * (PII).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Entity">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API Entity
  {
  public:
    Entity();
    Entity(Aws::Utils::Json::JsonView jsonValue);
    Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of speech that was identified as PII.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of speech that was identified as PII.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of speech that was identified as PII.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of speech that was identified as PII.</p>
     */
    inline Entity& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The end time of speech that was identified as PII.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of speech that was identified as PII.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of speech that was identified as PII.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of speech that was identified as PII.</p>
     */
    inline Entity& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>The category of information identified in this entity; for example, PII.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category of information identified in this entity; for example, PII.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of information identified in this entity; for example, PII.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of information identified in this entity; for example, PII.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of information identified in this entity; for example, PII.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category of information identified in this entity; for example, PII.</p>
     */
    inline Entity& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of information identified in this entity; for example, PII.</p>
     */
    inline Entity& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category of information identified in this entity; for example, PII.</p>
     */
    inline Entity& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>The type of PII identified in this entity; for example, name or credit card
     * number.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of PII identified in this entity; for example, name or credit card
     * number.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of PII identified in this entity; for example, name or credit card
     * number.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of PII identified in this entity; for example, name or credit card
     * number.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of PII identified in this entity; for example, name or credit card
     * number.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of PII identified in this entity; for example, name or credit card
     * number.</p>
     */
    inline Entity& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of PII identified in this entity; for example, name or credit card
     * number.</p>
     */
    inline Entity& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of PII identified in this entity; for example, name or credit card
     * number.</p>
     */
    inline Entity& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The words in the transcription output that have been identified as a PII
     * entity.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The words in the transcription output that have been identified as a PII
     * entity.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The words in the transcription output that have been identified as a PII
     * entity.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The words in the transcription output that have been identified as a PII
     * entity.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The words in the transcription output that have been identified as a PII
     * entity.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The words in the transcription output that have been identified as a PII
     * entity.</p>
     */
    inline Entity& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The words in the transcription output that have been identified as a PII
     * entity.</p>
     */
    inline Entity& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The words in the transcription output that have been identified as a PII
     * entity.</p>
     */
    inline Entity& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A value between zero and one that Amazon Transcribe assigns to PII identified
     * in the source audio. Larger values indicate a higher confidence in PII
     * identification.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigns to PII identified
     * in the source audio. Larger values indicate a higher confidence in PII
     * identification.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigns to PII identified
     * in the source audio. Larger values indicate a higher confidence in PII
     * identification.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>A value between zero and one that Amazon Transcribe assigns to PII identified
     * in the source audio. Larger values indicate a higher confidence in PII
     * identification.</p>
     */
    inline Entity& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    double m_startTime;
    bool m_startTimeHasBeenSet = false;

    double m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
