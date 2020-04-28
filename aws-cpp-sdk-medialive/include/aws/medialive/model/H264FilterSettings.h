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
#include <aws/medialive/model/TemporalFilterSettings.h>
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
   * H264 Filter Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H264FilterSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API H264FilterSettings
  {
  public:
    H264FilterSettings();
    H264FilterSettings(Aws::Utils::Json::JsonView jsonValue);
    H264FilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const TemporalFilterSettings& GetTemporalFilterSettings() const{ return m_temporalFilterSettings; }

    
    inline bool TemporalFilterSettingsHasBeenSet() const { return m_temporalFilterSettingsHasBeenSet; }

    
    inline void SetTemporalFilterSettings(const TemporalFilterSettings& value) { m_temporalFilterSettingsHasBeenSet = true; m_temporalFilterSettings = value; }

    
    inline void SetTemporalFilterSettings(TemporalFilterSettings&& value) { m_temporalFilterSettingsHasBeenSet = true; m_temporalFilterSettings = std::move(value); }

    
    inline H264FilterSettings& WithTemporalFilterSettings(const TemporalFilterSettings& value) { SetTemporalFilterSettings(value); return *this;}

    
    inline H264FilterSettings& WithTemporalFilterSettings(TemporalFilterSettings&& value) { SetTemporalFilterSettings(std::move(value)); return *this;}

  private:

    TemporalFilterSettings m_temporalFilterSettings;
    bool m_temporalFilterSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
