/**
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
   * <p>A list of possible alternative transcriptions for the input audio. Each
   * alternative may contain one or more of <code>Items</code>,
   * <code>Entities</code>, or <code>Transcript</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Alternative">AWS
   * API Reference</a></p>
   */
  class Alternative
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API Alternative();
    AWS_TRANSCRIBESTREAMINGSERVICE_API Alternative(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Alternative& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains transcribed text.</p>
     */
    inline const Aws::String& GetTranscript() const{ return m_transcript; }

    /**
     * <p>Contains transcribed text.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>Contains transcribed text.</p>
     */
    inline void SetTranscript(const Aws::String& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>Contains transcribed text.</p>
     */
    inline void SetTranscript(Aws::String&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>Contains transcribed text.</p>
     */
    inline void SetTranscript(const char* value) { m_transcriptHasBeenSet = true; m_transcript.assign(value); }

    /**
     * <p>Contains transcribed text.</p>
     */
    inline Alternative& WithTranscript(const Aws::String& value) { SetTranscript(value); return *this;}

    /**
     * <p>Contains transcribed text.</p>
     */
    inline Alternative& WithTranscript(Aws::String&& value) { SetTranscript(std::move(value)); return *this;}

    /**
     * <p>Contains transcribed text.</p>
     */
    inline Alternative& WithTranscript(const char* value) { SetTranscript(value); return *this;}


    /**
     * <p>Contains words, phrases, or punctuation marks in your transcription
     * output.</p>
     */
    inline const Aws::Vector<Item>& GetItems() const{ return m_items; }

    /**
     * <p>Contains words, phrases, or punctuation marks in your transcription
     * output.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Contains words, phrases, or punctuation marks in your transcription
     * output.</p>
     */
    inline void SetItems(const Aws::Vector<Item>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Contains words, phrases, or punctuation marks in your transcription
     * output.</p>
     */
    inline void SetItems(Aws::Vector<Item>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Contains words, phrases, or punctuation marks in your transcription
     * output.</p>
     */
    inline Alternative& WithItems(const Aws::Vector<Item>& value) { SetItems(value); return *this;}

    /**
     * <p>Contains words, phrases, or punctuation marks in your transcription
     * output.</p>
     */
    inline Alternative& WithItems(Aws::Vector<Item>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Contains words, phrases, or punctuation marks in your transcription
     * output.</p>
     */
    inline Alternative& AddItems(const Item& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Contains words, phrases, or punctuation marks in your transcription
     * output.</p>
     */
    inline Alternative& AddItems(Item&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }

    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline Alternative& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}

    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline Alternative& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline Alternative& AddEntities(const Entity& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }

    /**
     * <p>Contains entities identified as personally identifiable information (PII) in
     * your transcription output.</p>
     */
    inline Alternative& AddEntities(Entity&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::Vector<Item> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
