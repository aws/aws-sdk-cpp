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
#include <aws/transcribestreaming/model/Item.h>
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

  private:

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet;

    Aws::Vector<Item> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
