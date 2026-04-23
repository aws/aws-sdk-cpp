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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Group of Audio Selectors<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioSelectorGroup">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AudioSelectorGroup
  {
  public:
    AudioSelectorGroup();
    AudioSelectorGroup(Aws::Utils::Json::JsonView jsonValue);
    AudioSelectorGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline const Aws::Vector<Aws::String>& GetAudioSelectorNames() const{ return m_audioSelectorNames; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline bool AudioSelectorNamesHasBeenSet() const { return m_audioSelectorNamesHasBeenSet; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline void SetAudioSelectorNames(const Aws::Vector<Aws::String>& value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames = value; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline void SetAudioSelectorNames(Aws::Vector<Aws::String>&& value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames = std::move(value); }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& WithAudioSelectorNames(const Aws::Vector<Aws::String>& value) { SetAudioSelectorNames(value); return *this;}

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& WithAudioSelectorNames(Aws::Vector<Aws::String>&& value) { SetAudioSelectorNames(std::move(value)); return *this;}

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& AddAudioSelectorNames(const Aws::String& value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames.push_back(value); return *this; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& AddAudioSelectorNames(Aws::String&& value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames.push_back(std::move(value)); return *this; }

    /**
     * Name of an Audio Selector within the same input to include in the group.  Audio
     * selector names are standardized, based on their order within the input (e.g.,
     * "Audio Selector 1"). The audio selector name parameter can be repeated to add
     * any number of audio selectors to the group.
     */
    inline AudioSelectorGroup& AddAudioSelectorNames(const char* value) { m_audioSelectorNamesHasBeenSet = true; m_audioSelectorNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_audioSelectorNames;
    bool m_audioSelectorNamesHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
