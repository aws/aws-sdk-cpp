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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/OutputGroupSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Output.h>
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
   * Group of outputs<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputGroup">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API OutputGroup
  {
  public:
    OutputGroup();
    OutputGroup(Aws::Utils::Json::JsonView jsonValue);
    OutputGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Custom Group Name (CustomName) to specify a name for the output group. This
     * value is displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline const Aws::String& GetCustomName() const{ return m_customName; }

    /**
     * Use Custom Group Name (CustomName) to specify a name for the output group. This
     * value is displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline bool CustomNameHasBeenSet() const { return m_customNameHasBeenSet; }

    /**
     * Use Custom Group Name (CustomName) to specify a name for the output group. This
     * value is displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline void SetCustomName(const Aws::String& value) { m_customNameHasBeenSet = true; m_customName = value; }

    /**
     * Use Custom Group Name (CustomName) to specify a name for the output group. This
     * value is displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline void SetCustomName(Aws::String&& value) { m_customNameHasBeenSet = true; m_customName = std::move(value); }

    /**
     * Use Custom Group Name (CustomName) to specify a name for the output group. This
     * value is displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline void SetCustomName(const char* value) { m_customNameHasBeenSet = true; m_customName.assign(value); }

    /**
     * Use Custom Group Name (CustomName) to specify a name for the output group. This
     * value is displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline OutputGroup& WithCustomName(const Aws::String& value) { SetCustomName(value); return *this;}

    /**
     * Use Custom Group Name (CustomName) to specify a name for the output group. This
     * value is displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline OutputGroup& WithCustomName(Aws::String&& value) { SetCustomName(std::move(value)); return *this;}

    /**
     * Use Custom Group Name (CustomName) to specify a name for the output group. This
     * value is displayed on the console and can make your job settings JSON more
     * human-readable. It does not affect your outputs. Use up to twelve characters
     * that are either letters, numbers, spaces, or underscores.
     */
    inline OutputGroup& WithCustomName(const char* value) { SetCustomName(value); return *this;}


    /**
     * Name of the output group
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name of the output group
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Name of the output group
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Name of the output group
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Name of the output group
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Name of the output group
     */
    inline OutputGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name of the output group
     */
    inline OutputGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name of the output group
     */
    inline OutputGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Output Group settings, including type
     */
    inline const OutputGroupSettings& GetOutputGroupSettings() const{ return m_outputGroupSettings; }

    /**
     * Output Group settings, including type
     */
    inline bool OutputGroupSettingsHasBeenSet() const { return m_outputGroupSettingsHasBeenSet; }

    /**
     * Output Group settings, including type
     */
    inline void SetOutputGroupSettings(const OutputGroupSettings& value) { m_outputGroupSettingsHasBeenSet = true; m_outputGroupSettings = value; }

    /**
     * Output Group settings, including type
     */
    inline void SetOutputGroupSettings(OutputGroupSettings&& value) { m_outputGroupSettingsHasBeenSet = true; m_outputGroupSettings = std::move(value); }

    /**
     * Output Group settings, including type
     */
    inline OutputGroup& WithOutputGroupSettings(const OutputGroupSettings& value) { SetOutputGroupSettings(value); return *this;}

    /**
     * Output Group settings, including type
     */
    inline OutputGroup& WithOutputGroupSettings(OutputGroupSettings&& value) { SetOutputGroupSettings(std::move(value)); return *this;}


    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline OutputGroup& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline OutputGroup& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline OutputGroup& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * This object holds groups of encoding settings, one group of settings per output.
     */
    inline OutputGroup& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_customName;
    bool m_customNameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    OutputGroupSettings m_outputGroupSettings;
    bool m_outputGroupSettingsHasBeenSet;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
