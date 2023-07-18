/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/ItemType.h>
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
   * <p>A word, phrase, or punctuation mark that is transcribed from the input
   * audio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalItem">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalItem
  {
  public:
    MedicalItem();
    MedicalItem(Aws::Utils::Json::JsonView jsonValue);
    MedicalItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of seconds into an audio stream that indicates the creation time
     * of an item.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The number of seconds into an audio stream that indicates the creation time
     * of an item.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The number of seconds into an audio stream that indicates the creation time
     * of an item.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The number of seconds into an audio stream that indicates the creation time
     * of an item.</p>
     */
    inline MedicalItem& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The number of seconds into an audio stream that indicates the creation time
     * of an item.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The number of seconds into an audio stream that indicates the creation time
     * of an item.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The number of seconds into an audio stream that indicates the creation time
     * of an item.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The number of seconds into an audio stream that indicates the creation time
     * of an item.</p>
     */
    inline MedicalItem& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio, such as a period to
     * indicate the end of a sentence.</p>
     */
    inline const ItemType& GetType() const{ return m_type; }

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio, such as a period to
     * indicate the end of a sentence.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio, such as a period to
     * indicate the end of a sentence.</p>
     */
    inline void SetType(const ItemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio, such as a period to
     * indicate the end of a sentence.</p>
     */
    inline void SetType(ItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio, such as a period to
     * indicate the end of a sentence.</p>
     */
    inline MedicalItem& WithType(const ItemType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio, such as a period to
     * indicate the end of a sentence.</p>
     */
    inline MedicalItem& WithType(ItemType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The word or punctuation mark that was recognized in the input audio.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The word or punctuation mark that was recognized in the input audio.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The word or punctuation mark that was recognized in the input audio.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The word or punctuation mark that was recognized in the input audio.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The word or punctuation mark that was recognized in the input audio.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The word or punctuation mark that was recognized in the input audio.</p>
     */
    inline MedicalItem& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The word or punctuation mark that was recognized in the input audio.</p>
     */
    inline MedicalItem& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The word or punctuation mark that was recognized in the input audio.</p>
     */
    inline MedicalItem& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A value between 0 and 1 for an item that is a confidence score that Amazon
     * Transcribe Medical assigns to each word that it transcribes.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>A value between 0 and 1 for an item that is a confidence score that Amazon
     * Transcribe Medical assigns to each word that it transcribes.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>A value between 0 and 1 for an item that is a confidence score that Amazon
     * Transcribe Medical assigns to each word that it transcribes.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>A value between 0 and 1 for an item that is a confidence score that Amazon
     * Transcribe Medical assigns to each word that it transcribes.</p>
     */
    inline MedicalItem& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>If speaker identification is enabled, shows the integer values that
     * correspond to the different speakers identified in the stream. For example, if
     * the value of <code>Speaker</code> in the stream is either a <code>0</code> or a
     * <code>1</code>, that indicates that Amazon Transcribe Medical has identified two
     * speakers in the stream. The value of <code>0</code> corresponds to one speaker
     * and the value of <code>1</code> corresponds to the other speaker.</p>
     */
    inline const Aws::String& GetSpeaker() const{ return m_speaker; }

    /**
     * <p>If speaker identification is enabled, shows the integer values that
     * correspond to the different speakers identified in the stream. For example, if
     * the value of <code>Speaker</code> in the stream is either a <code>0</code> or a
     * <code>1</code>, that indicates that Amazon Transcribe Medical has identified two
     * speakers in the stream. The value of <code>0</code> corresponds to one speaker
     * and the value of <code>1</code> corresponds to the other speaker.</p>
     */
    inline bool SpeakerHasBeenSet() const { return m_speakerHasBeenSet; }

    /**
     * <p>If speaker identification is enabled, shows the integer values that
     * correspond to the different speakers identified in the stream. For example, if
     * the value of <code>Speaker</code> in the stream is either a <code>0</code> or a
     * <code>1</code>, that indicates that Amazon Transcribe Medical has identified two
     * speakers in the stream. The value of <code>0</code> corresponds to one speaker
     * and the value of <code>1</code> corresponds to the other speaker.</p>
     */
    inline void SetSpeaker(const Aws::String& value) { m_speakerHasBeenSet = true; m_speaker = value; }

    /**
     * <p>If speaker identification is enabled, shows the integer values that
     * correspond to the different speakers identified in the stream. For example, if
     * the value of <code>Speaker</code> in the stream is either a <code>0</code> or a
     * <code>1</code>, that indicates that Amazon Transcribe Medical has identified two
     * speakers in the stream. The value of <code>0</code> corresponds to one speaker
     * and the value of <code>1</code> corresponds to the other speaker.</p>
     */
    inline void SetSpeaker(Aws::String&& value) { m_speakerHasBeenSet = true; m_speaker = std::move(value); }

    /**
     * <p>If speaker identification is enabled, shows the integer values that
     * correspond to the different speakers identified in the stream. For example, if
     * the value of <code>Speaker</code> in the stream is either a <code>0</code> or a
     * <code>1</code>, that indicates that Amazon Transcribe Medical has identified two
     * speakers in the stream. The value of <code>0</code> corresponds to one speaker
     * and the value of <code>1</code> corresponds to the other speaker.</p>
     */
    inline void SetSpeaker(const char* value) { m_speakerHasBeenSet = true; m_speaker.assign(value); }

    /**
     * <p>If speaker identification is enabled, shows the integer values that
     * correspond to the different speakers identified in the stream. For example, if
     * the value of <code>Speaker</code> in the stream is either a <code>0</code> or a
     * <code>1</code>, that indicates that Amazon Transcribe Medical has identified two
     * speakers in the stream. The value of <code>0</code> corresponds to one speaker
     * and the value of <code>1</code> corresponds to the other speaker.</p>
     */
    inline MedicalItem& WithSpeaker(const Aws::String& value) { SetSpeaker(value); return *this;}

    /**
     * <p>If speaker identification is enabled, shows the integer values that
     * correspond to the different speakers identified in the stream. For example, if
     * the value of <code>Speaker</code> in the stream is either a <code>0</code> or a
     * <code>1</code>, that indicates that Amazon Transcribe Medical has identified two
     * speakers in the stream. The value of <code>0</code> corresponds to one speaker
     * and the value of <code>1</code> corresponds to the other speaker.</p>
     */
    inline MedicalItem& WithSpeaker(Aws::String&& value) { SetSpeaker(std::move(value)); return *this;}

    /**
     * <p>If speaker identification is enabled, shows the integer values that
     * correspond to the different speakers identified in the stream. For example, if
     * the value of <code>Speaker</code> in the stream is either a <code>0</code> or a
     * <code>1</code>, that indicates that Amazon Transcribe Medical has identified two
     * speakers in the stream. The value of <code>0</code> corresponds to one speaker
     * and the value of <code>1</code> corresponds to the other speaker.</p>
     */
    inline MedicalItem& WithSpeaker(const char* value) { SetSpeaker(value); return *this;}

  private:

    double m_startTime;
    bool m_startTimeHasBeenSet;

    double m_endTime;
    bool m_endTimeHasBeenSet;

    ItemType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;

    Aws::String m_speaker;
    bool m_speakerHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
