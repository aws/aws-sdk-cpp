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
#include <aws/medialive/model/AvailSettings.h>
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
   * Avail Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AvailConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AvailConfiguration
  {
  public:
    AvailConfiguration();
    AvailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AvailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Ad avail settings.
     */
    inline const AvailSettings& GetAvailSettings() const{ return m_availSettings; }

    /**
     * Ad avail settings.
     */
    inline bool AvailSettingsHasBeenSet() const { return m_availSettingsHasBeenSet; }

    /**
     * Ad avail settings.
     */
    inline void SetAvailSettings(const AvailSettings& value) { m_availSettingsHasBeenSet = true; m_availSettings = value; }

    /**
     * Ad avail settings.
     */
    inline void SetAvailSettings(AvailSettings&& value) { m_availSettingsHasBeenSet = true; m_availSettings = std::move(value); }

    /**
     * Ad avail settings.
     */
    inline AvailConfiguration& WithAvailSettings(const AvailSettings& value) { SetAvailSettings(value); return *this;}

    /**
     * Ad avail settings.
     */
    inline AvailConfiguration& WithAvailSettings(AvailSettings&& value) { SetAvailSettings(std::move(value)); return *this;}

  private:

    AvailSettings m_availSettings;
    bool m_availSettingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
