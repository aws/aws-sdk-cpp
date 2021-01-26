/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/MedicalItem.h>
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
   * <p>A list of possible transcriptions for the audio.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalAlternative">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalAlternative
  {
  public:
    MedicalAlternative();
    MedicalAlternative(Aws::Utils::Json::JsonView jsonValue);
    MedicalAlternative& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline const Aws::String& GetTranscript() const{ return m_transcript; }

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline void SetTranscript(const Aws::String& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline void SetTranscript(Aws::String&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline void SetTranscript(const char* value) { m_transcriptHasBeenSet = true; m_transcript.assign(value); }

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline MedicalAlternative& WithTranscript(const Aws::String& value) { SetTranscript(value); return *this;}

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline MedicalAlternative& WithTranscript(Aws::String&& value) { SetTranscript(std::move(value)); return *this;}

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline MedicalAlternative& WithTranscript(const char* value) { SetTranscript(value); return *this;}


    /**
     * <p>A list of objects that contains words and punctuation marks that represents
     * one or more interpretations of the input audio.</p>
     */
    inline const Aws::Vector<MedicalItem>& GetItems() const{ return m_items; }

    /**
     * <p>A list of objects that contains words and punctuation marks that represents
     * one or more interpretations of the input audio.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A list of objects that contains words and punctuation marks that represents
     * one or more interpretations of the input audio.</p>
     */
    inline void SetItems(const Aws::Vector<MedicalItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A list of objects that contains words and punctuation marks that represents
     * one or more interpretations of the input audio.</p>
     */
    inline void SetItems(Aws::Vector<MedicalItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A list of objects that contains words and punctuation marks that represents
     * one or more interpretations of the input audio.</p>
     */
    inline MedicalAlternative& WithItems(const Aws::Vector<MedicalItem>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of objects that contains words and punctuation marks that represents
     * one or more interpretations of the input audio.</p>
     */
    inline MedicalAlternative& WithItems(Aws::Vector<MedicalItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contains words and punctuation marks that represents
     * one or more interpretations of the input audio.</p>
     */
    inline MedicalAlternative& AddItems(const MedicalItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A list of objects that contains words and punctuation marks that represents
     * one or more interpretations of the input audio.</p>
     */
    inline MedicalAlternative& AddItems(MedicalItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet;

    Aws::Vector<MedicalItem> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
