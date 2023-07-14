﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/Item.h>
#include <aws/transcribestreaming/model/Entity.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Alternative">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API Alternative
  {
  public:
    Alternative();
    Alternative(Aws::Utils::Json::JsonView jsonValue);
    Alternative& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Alternative& WithTranscript(const Aws::String& value) { SetTranscript(value); return *this;}

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline Alternative& WithTranscript(Aws::String&& value) { SetTranscript(std::move(value)); return *this;}

    /**
     * <p>The text that was transcribed from the audio.</p>
     */
    inline Alternative& WithTranscript(const char* value) { SetTranscript(value); return *this;}


    /**
     * <p>One or more alternative interpretations of the input audio. </p>
     */
    inline const Aws::Vector<Item>& GetItems() const{ return m_items; }

    /**
     * <p>One or more alternative interpretations of the input audio. </p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>One or more alternative interpretations of the input audio. </p>
     */
    inline void SetItems(const Aws::Vector<Item>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>One or more alternative interpretations of the input audio. </p>
     */
    inline void SetItems(Aws::Vector<Item>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>One or more alternative interpretations of the input audio. </p>
     */
    inline Alternative& WithItems(const Aws::Vector<Item>& value) { SetItems(value); return *this;}

    /**
     * <p>One or more alternative interpretations of the input audio. </p>
     */
    inline Alternative& WithItems(Aws::Vector<Item>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>One or more alternative interpretations of the input audio. </p>
     */
    inline Alternative& AddItems(const Item& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>One or more alternative interpretations of the input audio. </p>
     */
    inline Alternative& AddItems(Item&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains the entities identified as personally identifiable information (PII)
     * in the transcription output.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }

    /**
     * <p>Contains the entities identified as personally identifiable information (PII)
     * in the transcription output.</p>
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>Contains the entities identified as personally identifiable information (PII)
     * in the transcription output.</p>
     */
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>Contains the entities identified as personally identifiable information (PII)
     * in the transcription output.</p>
     */
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>Contains the entities identified as personally identifiable information (PII)
     * in the transcription output.</p>
     */
    inline Alternative& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}

    /**
     * <p>Contains the entities identified as personally identifiable information (PII)
     * in the transcription output.</p>
     */
    inline Alternative& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>Contains the entities identified as personally identifiable information (PII)
     * in the transcription output.</p>
     */
    inline Alternative& AddEntities(const Entity& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }

    /**
     * <p>Contains the entities identified as personally identifiable information (PII)
     * in the transcription output.</p>
     */
    inline Alternative& AddEntities(Entity&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet;

    Aws::Vector<Item> m_items;
    bool m_itemsHasBeenSet;

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
