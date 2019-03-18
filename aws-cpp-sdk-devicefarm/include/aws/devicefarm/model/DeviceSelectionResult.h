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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DeviceFilter.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Contains the run results requested by the device selection configuration as
   * well as how many devices were returned. For an example of the JSON response
   * syntax, see <a>ScheduleRun</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeviceSelectionResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API DeviceSelectionResult
  {
  public:
    DeviceSelectionResult();
    DeviceSelectionResult(Aws::Utils::Json::JsonView jsonValue);
    DeviceSelectionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filters in a device selection result.</p>
     */
    inline const Aws::Vector<DeviceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters in a device selection result.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters in a device selection result.</p>
     */
    inline void SetFilters(const Aws::Vector<DeviceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters in a device selection result.</p>
     */
    inline void SetFilters(Aws::Vector<DeviceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters in a device selection result.</p>
     */
    inline DeviceSelectionResult& WithFilters(const Aws::Vector<DeviceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters in a device selection result.</p>
     */
    inline DeviceSelectionResult& WithFilters(Aws::Vector<DeviceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters in a device selection result.</p>
     */
    inline DeviceSelectionResult& AddFilters(const DeviceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters in a device selection result.</p>
     */
    inline DeviceSelectionResult& AddFilters(DeviceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of devices that matched the device filter selection criteria.</p>
     */
    inline int GetMatchedDevicesCount() const{ return m_matchedDevicesCount; }

    /**
     * <p>The number of devices that matched the device filter selection criteria.</p>
     */
    inline bool MatchedDevicesCountHasBeenSet() const { return m_matchedDevicesCountHasBeenSet; }

    /**
     * <p>The number of devices that matched the device filter selection criteria.</p>
     */
    inline void SetMatchedDevicesCount(int value) { m_matchedDevicesCountHasBeenSet = true; m_matchedDevicesCount = value; }

    /**
     * <p>The number of devices that matched the device filter selection criteria.</p>
     */
    inline DeviceSelectionResult& WithMatchedDevicesCount(int value) { SetMatchedDevicesCount(value); return *this;}


    /**
     * <p>The maximum number of devices to be selected by a device filter and included
     * in a test run.</p>
     */
    inline int GetMaxDevices() const{ return m_maxDevices; }

    /**
     * <p>The maximum number of devices to be selected by a device filter and included
     * in a test run.</p>
     */
    inline bool MaxDevicesHasBeenSet() const { return m_maxDevicesHasBeenSet; }

    /**
     * <p>The maximum number of devices to be selected by a device filter and included
     * in a test run.</p>
     */
    inline void SetMaxDevices(int value) { m_maxDevicesHasBeenSet = true; m_maxDevices = value; }

    /**
     * <p>The maximum number of devices to be selected by a device filter and included
     * in a test run.</p>
     */
    inline DeviceSelectionResult& WithMaxDevices(int value) { SetMaxDevices(value); return *this;}

  private:

    Aws::Vector<DeviceFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_matchedDevicesCount;
    bool m_matchedDevicesCountHasBeenSet;

    int m_maxDevices;
    bool m_maxDevicesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
