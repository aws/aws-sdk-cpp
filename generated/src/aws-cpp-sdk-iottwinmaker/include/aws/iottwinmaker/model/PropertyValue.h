/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/DataValue.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that contains information about a value for a time series
   * property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyValue">AWS
   * API Reference</a></p>
   */
  class PropertyValue
  {
  public:
    AWS_IOTTWINMAKER_API PropertyValue();
    AWS_IOTTWINMAKER_API PropertyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline const DataValue& GetValue() const{ return m_value; }

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline void SetValue(const DataValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline void SetValue(DataValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline PropertyValue& WithValue(const DataValue& value) { SetValue(value); return *this;}

    /**
     * <p>An object that specifies a value for a time series property.</p>
     */
    inline PropertyValue& WithValue(DataValue&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>ISO8601 DateTime of a value for a time series property.</p> <p>The time for
     * when the property value was recorded in ISO 8601 format:
     * <i>YYYY-MM-DDThh:mm:ss[.SSSSSSSSS][Z/±HH:mm]</i>.</p> <ul> <li> <p>
     * <i>[YYYY]</i>: year</p> </li> <li> <p> <i>[MM]</i>: month</p> </li> <li> <p>
     * <i>[DD]</i>: day</p> </li> <li> <p> <i>[hh]</i>: hour</p> </li> <li> <p>
     * <i>[mm]</i>: minute</p> </li> <li> <p> <i>[ss]</i>: seconds</p> </li> <li> <p>
     * <i>[.SSSSSSSSS]</i>: additional precision, where precedence is maintained. For
     * example: [.573123] is equal to 573123000 nanoseconds.</p> </li> <li> <p>
     * <i>Z</i>: default timezone UTC</p> </li> <li> <p> <i>± HH:mm</i>: time zone
     * offset in Hours and Minutes.</p> </li> </ul> <p> <i>Required sub-fields</i>:
     * YYYY-MM-DDThh:mm:ss and [Z/±HH:mm]</p>
     */
    inline const Aws::String& GetTime() const{ return m_time; }

    /**
     * <p>ISO8601 DateTime of a value for a time series property.</p> <p>The time for
     * when the property value was recorded in ISO 8601 format:
     * <i>YYYY-MM-DDThh:mm:ss[.SSSSSSSSS][Z/±HH:mm]</i>.</p> <ul> <li> <p>
     * <i>[YYYY]</i>: year</p> </li> <li> <p> <i>[MM]</i>: month</p> </li> <li> <p>
     * <i>[DD]</i>: day</p> </li> <li> <p> <i>[hh]</i>: hour</p> </li> <li> <p>
     * <i>[mm]</i>: minute</p> </li> <li> <p> <i>[ss]</i>: seconds</p> </li> <li> <p>
     * <i>[.SSSSSSSSS]</i>: additional precision, where precedence is maintained. For
     * example: [.573123] is equal to 573123000 nanoseconds.</p> </li> <li> <p>
     * <i>Z</i>: default timezone UTC</p> </li> <li> <p> <i>± HH:mm</i>: time zone
     * offset in Hours and Minutes.</p> </li> </ul> <p> <i>Required sub-fields</i>:
     * YYYY-MM-DDThh:mm:ss and [Z/±HH:mm]</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>ISO8601 DateTime of a value for a time series property.</p> <p>The time for
     * when the property value was recorded in ISO 8601 format:
     * <i>YYYY-MM-DDThh:mm:ss[.SSSSSSSSS][Z/±HH:mm]</i>.</p> <ul> <li> <p>
     * <i>[YYYY]</i>: year</p> </li> <li> <p> <i>[MM]</i>: month</p> </li> <li> <p>
     * <i>[DD]</i>: day</p> </li> <li> <p> <i>[hh]</i>: hour</p> </li> <li> <p>
     * <i>[mm]</i>: minute</p> </li> <li> <p> <i>[ss]</i>: seconds</p> </li> <li> <p>
     * <i>[.SSSSSSSSS]</i>: additional precision, where precedence is maintained. For
     * example: [.573123] is equal to 573123000 nanoseconds.</p> </li> <li> <p>
     * <i>Z</i>: default timezone UTC</p> </li> <li> <p> <i>± HH:mm</i>: time zone
     * offset in Hours and Minutes.</p> </li> </ul> <p> <i>Required sub-fields</i>:
     * YYYY-MM-DDThh:mm:ss and [Z/±HH:mm]</p>
     */
    inline void SetTime(const Aws::String& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>ISO8601 DateTime of a value for a time series property.</p> <p>The time for
     * when the property value was recorded in ISO 8601 format:
     * <i>YYYY-MM-DDThh:mm:ss[.SSSSSSSSS][Z/±HH:mm]</i>.</p> <ul> <li> <p>
     * <i>[YYYY]</i>: year</p> </li> <li> <p> <i>[MM]</i>: month</p> </li> <li> <p>
     * <i>[DD]</i>: day</p> </li> <li> <p> <i>[hh]</i>: hour</p> </li> <li> <p>
     * <i>[mm]</i>: minute</p> </li> <li> <p> <i>[ss]</i>: seconds</p> </li> <li> <p>
     * <i>[.SSSSSSSSS]</i>: additional precision, where precedence is maintained. For
     * example: [.573123] is equal to 573123000 nanoseconds.</p> </li> <li> <p>
     * <i>Z</i>: default timezone UTC</p> </li> <li> <p> <i>± HH:mm</i>: time zone
     * offset in Hours and Minutes.</p> </li> </ul> <p> <i>Required sub-fields</i>:
     * YYYY-MM-DDThh:mm:ss and [Z/±HH:mm]</p>
     */
    inline void SetTime(Aws::String&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>ISO8601 DateTime of a value for a time series property.</p> <p>The time for
     * when the property value was recorded in ISO 8601 format:
     * <i>YYYY-MM-DDThh:mm:ss[.SSSSSSSSS][Z/±HH:mm]</i>.</p> <ul> <li> <p>
     * <i>[YYYY]</i>: year</p> </li> <li> <p> <i>[MM]</i>: month</p> </li> <li> <p>
     * <i>[DD]</i>: day</p> </li> <li> <p> <i>[hh]</i>: hour</p> </li> <li> <p>
     * <i>[mm]</i>: minute</p> </li> <li> <p> <i>[ss]</i>: seconds</p> </li> <li> <p>
     * <i>[.SSSSSSSSS]</i>: additional precision, where precedence is maintained. For
     * example: [.573123] is equal to 573123000 nanoseconds.</p> </li> <li> <p>
     * <i>Z</i>: default timezone UTC</p> </li> <li> <p> <i>± HH:mm</i>: time zone
     * offset in Hours and Minutes.</p> </li> </ul> <p> <i>Required sub-fields</i>:
     * YYYY-MM-DDThh:mm:ss and [Z/±HH:mm]</p>
     */
    inline void SetTime(const char* value) { m_timeHasBeenSet = true; m_time.assign(value); }

    /**
     * <p>ISO8601 DateTime of a value for a time series property.</p> <p>The time for
     * when the property value was recorded in ISO 8601 format:
     * <i>YYYY-MM-DDThh:mm:ss[.SSSSSSSSS][Z/±HH:mm]</i>.</p> <ul> <li> <p>
     * <i>[YYYY]</i>: year</p> </li> <li> <p> <i>[MM]</i>: month</p> </li> <li> <p>
     * <i>[DD]</i>: day</p> </li> <li> <p> <i>[hh]</i>: hour</p> </li> <li> <p>
     * <i>[mm]</i>: minute</p> </li> <li> <p> <i>[ss]</i>: seconds</p> </li> <li> <p>
     * <i>[.SSSSSSSSS]</i>: additional precision, where precedence is maintained. For
     * example: [.573123] is equal to 573123000 nanoseconds.</p> </li> <li> <p>
     * <i>Z</i>: default timezone UTC</p> </li> <li> <p> <i>± HH:mm</i>: time zone
     * offset in Hours and Minutes.</p> </li> </ul> <p> <i>Required sub-fields</i>:
     * YYYY-MM-DDThh:mm:ss and [Z/±HH:mm]</p>
     */
    inline PropertyValue& WithTime(const Aws::String& value) { SetTime(value); return *this;}

    /**
     * <p>ISO8601 DateTime of a value for a time series property.</p> <p>The time for
     * when the property value was recorded in ISO 8601 format:
     * <i>YYYY-MM-DDThh:mm:ss[.SSSSSSSSS][Z/±HH:mm]</i>.</p> <ul> <li> <p>
     * <i>[YYYY]</i>: year</p> </li> <li> <p> <i>[MM]</i>: month</p> </li> <li> <p>
     * <i>[DD]</i>: day</p> </li> <li> <p> <i>[hh]</i>: hour</p> </li> <li> <p>
     * <i>[mm]</i>: minute</p> </li> <li> <p> <i>[ss]</i>: seconds</p> </li> <li> <p>
     * <i>[.SSSSSSSSS]</i>: additional precision, where precedence is maintained. For
     * example: [.573123] is equal to 573123000 nanoseconds.</p> </li> <li> <p>
     * <i>Z</i>: default timezone UTC</p> </li> <li> <p> <i>± HH:mm</i>: time zone
     * offset in Hours and Minutes.</p> </li> </ul> <p> <i>Required sub-fields</i>:
     * YYYY-MM-DDThh:mm:ss and [Z/±HH:mm]</p>
     */
    inline PropertyValue& WithTime(Aws::String&& value) { SetTime(std::move(value)); return *this;}

    /**
     * <p>ISO8601 DateTime of a value for a time series property.</p> <p>The time for
     * when the property value was recorded in ISO 8601 format:
     * <i>YYYY-MM-DDThh:mm:ss[.SSSSSSSSS][Z/±HH:mm]</i>.</p> <ul> <li> <p>
     * <i>[YYYY]</i>: year</p> </li> <li> <p> <i>[MM]</i>: month</p> </li> <li> <p>
     * <i>[DD]</i>: day</p> </li> <li> <p> <i>[hh]</i>: hour</p> </li> <li> <p>
     * <i>[mm]</i>: minute</p> </li> <li> <p> <i>[ss]</i>: seconds</p> </li> <li> <p>
     * <i>[.SSSSSSSSS]</i>: additional precision, where precedence is maintained. For
     * example: [.573123] is equal to 573123000 nanoseconds.</p> </li> <li> <p>
     * <i>Z</i>: default timezone UTC</p> </li> <li> <p> <i>± HH:mm</i>: time zone
     * offset in Hours and Minutes.</p> </li> </ul> <p> <i>Required sub-fields</i>:
     * YYYY-MM-DDThh:mm:ss and [Z/±HH:mm]</p>
     */
    inline PropertyValue& WithTime(const char* value) { SetTime(value); return *this;}

  private:

    DataValue m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
