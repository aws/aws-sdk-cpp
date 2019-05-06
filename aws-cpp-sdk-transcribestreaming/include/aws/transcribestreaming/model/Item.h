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
   * <p>A word or phrase transcribed from the input audio.</p><p><h3>See Also:</h3>  
   * <a
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

  private:

    double m_startTime;
    bool m_startTimeHasBeenSet;

    double m_endTime;
    bool m_endTimeHasBeenSet;

    ItemType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
