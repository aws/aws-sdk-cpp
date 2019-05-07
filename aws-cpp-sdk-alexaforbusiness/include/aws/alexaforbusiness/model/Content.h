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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/Text.h>
#include <aws/alexaforbusiness/model/Ssml.h>
#include <aws/alexaforbusiness/model/Audio.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The content definition. This can contain only one text, SSML, or audio list
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Content">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API Content
  {
  public:
    Content();
    Content(Aws::Utils::Json::JsonView jsonValue);
    Content& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of text messages.</p>
     */
    inline const Aws::Vector<Text>& GetTextList() const{ return m_textList; }

    /**
     * <p>The list of text messages.</p>
     */
    inline bool TextListHasBeenSet() const { return m_textListHasBeenSet; }

    /**
     * <p>The list of text messages.</p>
     */
    inline void SetTextList(const Aws::Vector<Text>& value) { m_textListHasBeenSet = true; m_textList = value; }

    /**
     * <p>The list of text messages.</p>
     */
    inline void SetTextList(Aws::Vector<Text>&& value) { m_textListHasBeenSet = true; m_textList = std::move(value); }

    /**
     * <p>The list of text messages.</p>
     */
    inline Content& WithTextList(const Aws::Vector<Text>& value) { SetTextList(value); return *this;}

    /**
     * <p>The list of text messages.</p>
     */
    inline Content& WithTextList(Aws::Vector<Text>&& value) { SetTextList(std::move(value)); return *this;}

    /**
     * <p>The list of text messages.</p>
     */
    inline Content& AddTextList(const Text& value) { m_textListHasBeenSet = true; m_textList.push_back(value); return *this; }

    /**
     * <p>The list of text messages.</p>
     */
    inline Content& AddTextList(Text&& value) { m_textListHasBeenSet = true; m_textList.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of SSML messages.</p>
     */
    inline const Aws::Vector<Ssml>& GetSsmlList() const{ return m_ssmlList; }

    /**
     * <p>The list of SSML messages.</p>
     */
    inline bool SsmlListHasBeenSet() const { return m_ssmlListHasBeenSet; }

    /**
     * <p>The list of SSML messages.</p>
     */
    inline void SetSsmlList(const Aws::Vector<Ssml>& value) { m_ssmlListHasBeenSet = true; m_ssmlList = value; }

    /**
     * <p>The list of SSML messages.</p>
     */
    inline void SetSsmlList(Aws::Vector<Ssml>&& value) { m_ssmlListHasBeenSet = true; m_ssmlList = std::move(value); }

    /**
     * <p>The list of SSML messages.</p>
     */
    inline Content& WithSsmlList(const Aws::Vector<Ssml>& value) { SetSsmlList(value); return *this;}

    /**
     * <p>The list of SSML messages.</p>
     */
    inline Content& WithSsmlList(Aws::Vector<Ssml>&& value) { SetSsmlList(std::move(value)); return *this;}

    /**
     * <p>The list of SSML messages.</p>
     */
    inline Content& AddSsmlList(const Ssml& value) { m_ssmlListHasBeenSet = true; m_ssmlList.push_back(value); return *this; }

    /**
     * <p>The list of SSML messages.</p>
     */
    inline Content& AddSsmlList(Ssml&& value) { m_ssmlListHasBeenSet = true; m_ssmlList.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of audio messages.</p>
     */
    inline const Aws::Vector<Audio>& GetAudioList() const{ return m_audioList; }

    /**
     * <p>The list of audio messages.</p>
     */
    inline bool AudioListHasBeenSet() const { return m_audioListHasBeenSet; }

    /**
     * <p>The list of audio messages.</p>
     */
    inline void SetAudioList(const Aws::Vector<Audio>& value) { m_audioListHasBeenSet = true; m_audioList = value; }

    /**
     * <p>The list of audio messages.</p>
     */
    inline void SetAudioList(Aws::Vector<Audio>&& value) { m_audioListHasBeenSet = true; m_audioList = std::move(value); }

    /**
     * <p>The list of audio messages.</p>
     */
    inline Content& WithAudioList(const Aws::Vector<Audio>& value) { SetAudioList(value); return *this;}

    /**
     * <p>The list of audio messages.</p>
     */
    inline Content& WithAudioList(Aws::Vector<Audio>&& value) { SetAudioList(std::move(value)); return *this;}

    /**
     * <p>The list of audio messages.</p>
     */
    inline Content& AddAudioList(const Audio& value) { m_audioListHasBeenSet = true; m_audioList.push_back(value); return *this; }

    /**
     * <p>The list of audio messages.</p>
     */
    inline Content& AddAudioList(Audio&& value) { m_audioListHasBeenSet = true; m_audioList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Text> m_textList;
    bool m_textListHasBeenSet;

    Aws::Vector<Ssml> m_ssmlList;
    bool m_ssmlListHasBeenSet;

    Aws::Vector<Audio> m_audioList;
    bool m_audioListHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
