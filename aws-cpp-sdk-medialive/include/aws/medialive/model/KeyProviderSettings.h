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
#include <aws/medialive/model/StaticKeySettings.h>
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
   * Key Provider Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/KeyProviderSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API KeyProviderSettings
  {
  public:
    KeyProviderSettings();
    KeyProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    KeyProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const StaticKeySettings& GetStaticKeySettings() const{ return m_staticKeySettings; }

    
    inline bool StaticKeySettingsHasBeenSet() const { return m_staticKeySettingsHasBeenSet; }

    
    inline void SetStaticKeySettings(const StaticKeySettings& value) { m_staticKeySettingsHasBeenSet = true; m_staticKeySettings = value; }

    
    inline void SetStaticKeySettings(StaticKeySettings&& value) { m_staticKeySettingsHasBeenSet = true; m_staticKeySettings = std::move(value); }

    
    inline KeyProviderSettings& WithStaticKeySettings(const StaticKeySettings& value) { SetStaticKeySettings(value); return *this;}

    
    inline KeyProviderSettings& WithStaticKeySettings(StaticKeySettings&& value) { SetStaticKeySettings(std::move(value)); return *this;}

  private:

    StaticKeySettings m_staticKeySettings;
    bool m_staticKeySettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
