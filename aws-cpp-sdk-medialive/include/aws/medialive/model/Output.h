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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/OutputSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Output settings. There can be multiple outputs within a group.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Output">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Output
  {
  public:
    Output();
    Output(Aws::Utils::Json::JsonView jsonValue);
    Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline const Aws::Vector<Aws::String>& GetAudioDescriptionNames() const{ return m_audioDescriptionNames; }

    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline bool AudioDescriptionNamesHasBeenSet() const { return m_audioDescriptionNamesHasBeenSet; }

    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline void SetAudioDescriptionNames(const Aws::Vector<Aws::String>& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames = value; }

    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline void SetAudioDescriptionNames(Aws::Vector<Aws::String>&& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames = std::move(value); }

    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline Output& WithAudioDescriptionNames(const Aws::Vector<Aws::String>& value) { SetAudioDescriptionNames(value); return *this;}

    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline Output& WithAudioDescriptionNames(Aws::Vector<Aws::String>&& value) { SetAudioDescriptionNames(std::move(value)); return *this;}

    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline Output& AddAudioDescriptionNames(const Aws::String& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames.push_back(value); return *this; }

    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline Output& AddAudioDescriptionNames(Aws::String&& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames.push_back(std::move(value)); return *this; }

    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline Output& AddAudioDescriptionNames(const char* value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames.push_back(value); return *this; }


    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline const Aws::Vector<Aws::String>& GetCaptionDescriptionNames() const{ return m_captionDescriptionNames; }

    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline bool CaptionDescriptionNamesHasBeenSet() const { return m_captionDescriptionNamesHasBeenSet; }

    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline void SetCaptionDescriptionNames(const Aws::Vector<Aws::String>& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames = value; }

    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline void SetCaptionDescriptionNames(Aws::Vector<Aws::String>&& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames = std::move(value); }

    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline Output& WithCaptionDescriptionNames(const Aws::Vector<Aws::String>& value) { SetCaptionDescriptionNames(value); return *this;}

    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline Output& WithCaptionDescriptionNames(Aws::Vector<Aws::String>&& value) { SetCaptionDescriptionNames(std::move(value)); return *this;}

    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline Output& AddCaptionDescriptionNames(const Aws::String& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames.push_back(value); return *this; }

    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline Output& AddCaptionDescriptionNames(Aws::String&& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames.push_back(std::move(value)); return *this; }

    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline Output& AddCaptionDescriptionNames(const char* value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames.push_back(value); return *this; }


    /**
     * The name used to identify an output.
     */
    inline const Aws::String& GetOutputName() const{ return m_outputName; }

    /**
     * The name used to identify an output.
     */
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }

    /**
     * The name used to identify an output.
     */
    inline void SetOutputName(const Aws::String& value) { m_outputNameHasBeenSet = true; m_outputName = value; }

    /**
     * The name used to identify an output.
     */
    inline void SetOutputName(Aws::String&& value) { m_outputNameHasBeenSet = true; m_outputName = std::move(value); }

    /**
     * The name used to identify an output.
     */
    inline void SetOutputName(const char* value) { m_outputNameHasBeenSet = true; m_outputName.assign(value); }

    /**
     * The name used to identify an output.
     */
    inline Output& WithOutputName(const Aws::String& value) { SetOutputName(value); return *this;}

    /**
     * The name used to identify an output.
     */
    inline Output& WithOutputName(Aws::String&& value) { SetOutputName(std::move(value)); return *this;}

    /**
     * The name used to identify an output.
     */
    inline Output& WithOutputName(const char* value) { SetOutputName(value); return *this;}


    /**
     * Output type-specific settings.
     */
    inline const OutputSettings& GetOutputSettings() const{ return m_outputSettings; }

    /**
     * Output type-specific settings.
     */
    inline bool OutputSettingsHasBeenSet() const { return m_outputSettingsHasBeenSet; }

    /**
     * Output type-specific settings.
     */
    inline void SetOutputSettings(const OutputSettings& value) { m_outputSettingsHasBeenSet = true; m_outputSettings = value; }

    /**
     * Output type-specific settings.
     */
    inline void SetOutputSettings(OutputSettings&& value) { m_outputSettingsHasBeenSet = true; m_outputSettings = std::move(value); }

    /**
     * Output type-specific settings.
     */
    inline Output& WithOutputSettings(const OutputSettings& value) { SetOutputSettings(value); return *this;}

    /**
     * Output type-specific settings.
     */
    inline Output& WithOutputSettings(OutputSettings&& value) { SetOutputSettings(std::move(value)); return *this;}


    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline const Aws::String& GetVideoDescriptionName() const{ return m_videoDescriptionName; }

    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline bool VideoDescriptionNameHasBeenSet() const { return m_videoDescriptionNameHasBeenSet; }

    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline void SetVideoDescriptionName(const Aws::String& value) { m_videoDescriptionNameHasBeenSet = true; m_videoDescriptionName = value; }

    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline void SetVideoDescriptionName(Aws::String&& value) { m_videoDescriptionNameHasBeenSet = true; m_videoDescriptionName = std::move(value); }

    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline void SetVideoDescriptionName(const char* value) { m_videoDescriptionNameHasBeenSet = true; m_videoDescriptionName.assign(value); }

    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline Output& WithVideoDescriptionName(const Aws::String& value) { SetVideoDescriptionName(value); return *this;}

    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline Output& WithVideoDescriptionName(Aws::String&& value) { SetVideoDescriptionName(std::move(value)); return *this;}

    /**
     * The name of the VideoDescription used as the source for this output.
     */
    inline Output& WithVideoDescriptionName(const char* value) { SetVideoDescriptionName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_audioDescriptionNames;
    bool m_audioDescriptionNamesHasBeenSet;

    Aws::Vector<Aws::String> m_captionDescriptionNames;
    bool m_captionDescriptionNamesHasBeenSet;

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet;

    OutputSettings m_outputSettings;
    bool m_outputSettingsHasBeenSet;

    Aws::String m_videoDescriptionName;
    bool m_videoDescriptionNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
