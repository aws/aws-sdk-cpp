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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/Schedule.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The "DatasetTrigger" that specifies when the data set is automatically
   * updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetTrigger">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatasetTrigger
  {
  public:
    DatasetTrigger();
    DatasetTrigger(const Aws::Utils::Json::JsonValue& jsonValue);
    DatasetTrigger& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The "Schedule" when the trigger is initiated.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The "Schedule" when the trigger is initiated.</p>
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The "Schedule" when the trigger is initiated.</p>
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The "Schedule" when the trigger is initiated.</p>
     */
    inline DatasetTrigger& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The "Schedule" when the trigger is initiated.</p>
     */
    inline DatasetTrigger& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}

  private:

    Schedule m_schedule;
    bool m_scheduleHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
