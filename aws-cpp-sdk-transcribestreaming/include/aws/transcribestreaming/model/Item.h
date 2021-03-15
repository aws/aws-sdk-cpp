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
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Item">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API Item
  {
  public:
    Item();
    Item(Aws::Utils::Json::JsonView jsonValue);
    Item& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The offset from the beginning of the audio stream to the beginning of the
     * audio that resulted in the item.</p>
     */
    inline double GetStartTime() const{ return m_startTime; }

    /**
     * <p>The offset from the beginning of the audio stream to the beginning of the
     * audio that resulted in the item.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The offset from the beginning of the audio stream to the beginning of the
     * audio that resulted in the item.</p>
     */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The offset from the beginning of the audio stream to the beginning of the
     * audio that resulted in the item.</p>
     */
    inline Item& WithStartTime(double value) { SetStartTime(value); return *this;}


    /**
     * <p>The offset from the beginning of the audio stream to the end of the audio
     * that resulted in the item.</p>
     */
    inline double GetEndTime() const{ return m_endTime; }

    /**
     * <p>The offset from the beginning of the audio stream to the end of the audio
     * that resulted in the item.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The offset from the beginning of the audio stream to the end of the audio
     * that resulted in the item.</p>
     */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The offset from the beginning of the audio stream to the end of the audio
     * that resulted in the item.</p>
     */
    inline Item& WithEndTime(double value) { SetEndTime(value); return *this;}


    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio.</p>
     */
    inline const ItemType& GetType() const{ return m_type; }

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio.</p>
     */
    inline void SetType(const ItemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio.</p>
     */
    inline void SetType(ItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio.</p>
     */
    inline Item& WithType(const ItemType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the item. <code>PRONUNCIATION</code> indicates that the item is a
     * word that was recognized in the input audio. <code>PUNCTUATION</code> indicates
     * that the item was interpreted as a pause in the input audio.</p>
     */
    inline Item& WithType(ItemType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The word or punctuation that was recognized in the input audio.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The word or punctuation that was recognized in the input audio.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The word or punctuation that was recognized in the input audio.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The word or punctuation that was recognized in the input audio.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The word or punctuation that was recognized in the input audio.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The word or punctuation that was recognized in the input audio.</p>
     */
    inline Item& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The word or punctuation that was recognized in the input audio.</p>
     */
    inline Item& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The word or punctuation that was recognized in the input audio.</p>
     */
    inline Item& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>Indicates whether a word in the item matches a word in the vocabulary filter
     * you've chosen for your real-time stream. If <code>true</code> then a word in the
     * item matches your vocabulary filter.</p>
     */
    inline bool GetVocabularyFilterMatch() const{ return m_vocabularyFilterMatch; }

    /**
     * <p>Indicates whether a word in the item matches a word in the vocabulary filter
     * you've chosen for your real-time stream. If <code>true</code> then a word in the
     * item matches your vocabulary filter.</p>
     */
    inline bool VocabularyFilterMatchHasBeenSet() const { return m_vocabularyFilterMatchHasBeenSet; }

    /**
     * <p>Indicates whether a word in the item matches a word in the vocabulary filter
     * you've chosen for your real-time stream. If <code>true</code> then a word in the
     * item matches your vocabulary filter.</p>
     */
    inline void SetVocabularyFilterMatch(bool value) { m_vocabularyFilterMatchHasBeenSet = true; m_vocabularyFilterMatch = value; }

    /**
     * <p>Indicates whether a word in the item matches a word in the vocabulary filter
     * you've chosen for your real-time stream. If <code>true</code> then a word in the
     * item matches your vocabulary filter.</p>
     */
    inline Item& WithVocabularyFilterMatch(bool value) { SetVocabularyFilterMatch(value); return *this;}


    /**
     * <p>If speaker identification is enabled, shows the speakers identified in the
     * real-time stream.</p>
     */
    inline const Aws::String& GetSpeaker() const{ return m_speaker; }

    /**
     * <p>If speaker identification is enabled, shows the speakers identified in the
     * real-time stream.</p>
     */
    inline bool SpeakerHasBeenSet() const { return m_speakerHasBeenSet; }

    /**
     * <p>If speaker identification is enabled, shows the speakers identified in the
     * real-time stream.</p>
     */
    inline void SetSpeaker(const Aws::String& value) { m_speakerHasBeenSet = true; m_speaker = value; }

    /**
     * <p>If speaker identification is enabled, shows the speakers identified in the
     * real-time stream.</p>
     */
    inline void SetSpeaker(Aws::String&& value) { m_speakerHasBeenSet = true; m_speaker = std::move(value); }

    /**
     * <p>If speaker identification is enabled, shows the speakers identified in the
     * real-time stream.</p>
     */
    inline void SetSpeaker(const char* value) { m_speakerHasBeenSet = true; m_speaker.assign(value); }

    /**
     * <p>If speaker identification is enabled, shows the speakers identified in the
     * real-time stream.</p>
     */
    inline Item& WithSpeaker(const Aws::String& value) { SetSpeaker(value); return *this;}

    /**
     * <p>If speaker identification is enabled, shows the speakers identified in the
     * real-time stream.</p>
     */
    inline Item& WithSpeaker(Aws::String&& value) { SetSpeaker(std::move(value)); return *this;}

    /**
     * <p>If speaker identification is enabled, shows the speakers identified in the
     * real-time stream.</p>
     */
    inline Item& WithSpeaker(const char* value) { SetSpeaker(value); return *this;}


    /**
     * <p>A value between 0 and 1 for an item that is a confidence score that Amazon
     * Transcribe assigns to each word or phrase that it transcribes.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>A value between 0 and 1 for an item that is a confidence score that Amazon
     * Transcribe assigns to each word or phrase that it transcribes.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>A value between 0 and 1 for an item that is a confidence score that Amazon
     * Transcribe assigns to each word or phrase that it transcribes.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>A value between 0 and 1 for an item that is a confidence score that Amazon
     * Transcribe assigns to each word or phrase that it transcribes.</p>
     */
    inline Item& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    double m_startTime;
    bool m_startTimeHasBeenSet;

    double m_endTime;
    bool m_endTimeHasBeenSet;

    ItemType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;

    bool m_vocabularyFilterMatch;
    bool m_vocabularyFilterMatchHasBeenSet;

    Aws::String m_speaker;
    bool m_speakerHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
