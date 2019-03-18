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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/OutputGroupSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/Output.h>
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
   * Output groups for this Live Event. Output groups contain information about where
   * streams should be distributed.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputGroup">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API OutputGroup
  {
  public:
    OutputGroup();
    OutputGroup(Aws::Utils::Json::JsonView jsonValue);
    OutputGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Custom output group name optionally defined by the user.  Only letters, numbers,
     * and the underscore character allowed; only 32 characters allowed.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Custom output group name optionally defined by the user.  Only letters, numbers,
     * and the underscore character allowed; only 32 characters allowed.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Custom output group name optionally defined by the user.  Only letters, numbers,
     * and the underscore character allowed; only 32 characters allowed.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Custom output group name optionally defined by the user.  Only letters, numbers,
     * and the underscore character allowed; only 32 characters allowed.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Custom output group name optionally defined by the user.  Only letters, numbers,
     * and the underscore character allowed; only 32 characters allowed.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Custom output group name optionally defined by the user.  Only letters, numbers,
     * and the underscore character allowed; only 32 characters allowed.
     */
    inline OutputGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Custom output group name optionally defined by the user.  Only letters, numbers,
     * and the underscore character allowed; only 32 characters allowed.
     */
    inline OutputGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Custom output group name optionally defined by the user.  Only letters, numbers,
     * and the underscore character allowed; only 32 characters allowed.
     */
    inline OutputGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Settings associated with the output group.
     */
    inline const OutputGroupSettings& GetOutputGroupSettings() const{ return m_outputGroupSettings; }

    /**
     * Settings associated with the output group.
     */
    inline bool OutputGroupSettingsHasBeenSet() const { return m_outputGroupSettingsHasBeenSet; }

    /**
     * Settings associated with the output group.
     */
    inline void SetOutputGroupSettings(const OutputGroupSettings& value) { m_outputGroupSettingsHasBeenSet = true; m_outputGroupSettings = value; }

    /**
     * Settings associated with the output group.
     */
    inline void SetOutputGroupSettings(OutputGroupSettings&& value) { m_outputGroupSettingsHasBeenSet = true; m_outputGroupSettings = std::move(value); }

    /**
     * Settings associated with the output group.
     */
    inline OutputGroup& WithOutputGroupSettings(const OutputGroupSettings& value) { SetOutputGroupSettings(value); return *this;}

    /**
     * Settings associated with the output group.
     */
    inline OutputGroup& WithOutputGroupSettings(OutputGroupSettings&& value) { SetOutputGroupSettings(std::move(value)); return *this;}


    
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    
    inline OutputGroup& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    
    inline OutputGroup& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    
    inline OutputGroup& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    
    inline OutputGroup& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    OutputGroupSettings m_outputGroupSettings;
    bool m_outputGroupSettingsHasBeenSet;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
