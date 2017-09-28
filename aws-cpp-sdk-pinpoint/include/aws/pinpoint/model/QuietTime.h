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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Quiet Time<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/QuietTime">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API QuietTime
  {
  public:
    QuietTime();
    QuietTime(const Aws::Utils::Json::JsonValue& jsonValue);
    QuietTime& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The default end time for quiet time in ISO 8601 format.
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * The default end time for quiet time in ISO 8601 format.
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * The default end time for quiet time in ISO 8601 format.
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * The default end time for quiet time in ISO 8601 format.
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * The default end time for quiet time in ISO 8601 format.
     */
    inline QuietTime& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * The default end time for quiet time in ISO 8601 format.
     */
    inline QuietTime& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * The default end time for quiet time in ISO 8601 format.
     */
    inline QuietTime& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * The default start time for quiet time in ISO 8601 format.
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * The default start time for quiet time in ISO 8601 format.
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * The default start time for quiet time in ISO 8601 format.
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * The default start time for quiet time in ISO 8601 format.
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * The default start time for quiet time in ISO 8601 format.
     */
    inline QuietTime& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * The default start time for quiet time in ISO 8601 format.
     */
    inline QuietTime& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * The default start time for quiet time in ISO 8601 format.
     */
    inline QuietTime& WithStart(const char* value) { SetStart(value); return *this;}

  private:

    Aws::String m_end;
    bool m_endHasBeenSet;

    Aws::String m_start;
    bool m_startHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
