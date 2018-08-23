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
   * Fixed mode schedule action start settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FixedModeScheduleActionStartSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API FixedModeScheduleActionStartSettings
  {
  public:
    FixedModeScheduleActionStartSettings();
    FixedModeScheduleActionStartSettings(Aws::Utils::Json::JsonView jsonValue);
    FixedModeScheduleActionStartSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Fixed timestamp action start. Conforms to ISO-8601.
     */
    inline const Aws::String& GetTime() const{ return m_time; }

    /**
     * Fixed timestamp action start. Conforms to ISO-8601.
     */
    inline void SetTime(const Aws::String& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * Fixed timestamp action start. Conforms to ISO-8601.
     */
    inline void SetTime(Aws::String&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * Fixed timestamp action start. Conforms to ISO-8601.
     */
    inline void SetTime(const char* value) { m_timeHasBeenSet = true; m_time.assign(value); }

    /**
     * Fixed timestamp action start. Conforms to ISO-8601.
     */
    inline FixedModeScheduleActionStartSettings& WithTime(const Aws::String& value) { SetTime(value); return *this;}

    /**
     * Fixed timestamp action start. Conforms to ISO-8601.
     */
    inline FixedModeScheduleActionStartSettings& WithTime(Aws::String&& value) { SetTime(std::move(value)); return *this;}

    /**
     * Fixed timestamp action start. Conforms to ISO-8601.
     */
    inline FixedModeScheduleActionStartSettings& WithTime(const char* value) { SetTime(value); return *this;}

  private:

    Aws::String m_time;
    bool m_timeHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
