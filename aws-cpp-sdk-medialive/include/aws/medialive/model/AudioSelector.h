/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/AudioSelectorSettings.h>
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
   * Audio Selector<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioSelector">AWS
   * API Reference</a></p>
   */
  class AudioSelector
  {
  public:
    AWS_MEDIALIVE_API AudioSelector();
    AWS_MEDIALIVE_API AudioSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline AudioSelector& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline AudioSelector& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of this AudioSelector. AudioDescriptions will use this name to uniquely
     * identify this Selector.  Selector names should be unique per input.
     */
    inline AudioSelector& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The audio selector settings.
     */
    inline const AudioSelectorSettings& GetSelectorSettings() const{ return m_selectorSettings; }

    /**
     * The audio selector settings.
     */
    inline bool SelectorSettingsHasBeenSet() const { return m_selectorSettingsHasBeenSet; }

    /**
     * The audio selector settings.
     */
    inline void SetSelectorSettings(const AudioSelectorSettings& value) { m_selectorSettingsHasBeenSet = true; m_selectorSettings = value; }

    /**
     * The audio selector settings.
     */
    inline void SetSelectorSettings(AudioSelectorSettings&& value) { m_selectorSettingsHasBeenSet = true; m_selectorSettings = std::move(value); }

    /**
     * The audio selector settings.
     */
    inline AudioSelector& WithSelectorSettings(const AudioSelectorSettings& value) { SetSelectorSettings(value); return *this;}

    /**
     * The audio selector settings.
     */
    inline AudioSelector& WithSelectorSettings(AudioSelectorSettings&& value) { SetSelectorSettings(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AudioSelectorSettings m_selectorSettings;
    bool m_selectorSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
