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
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information about the detector state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DetectorStateSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTSDATA_API DetectorStateSummary
  {
  public:
    DetectorStateSummary();
    DetectorStateSummary(Aws::Utils::Json::JsonView jsonValue);
    DetectorStateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the state.</p>
     */
    inline const Aws::String& GetStateName() const{ return m_stateName; }

    /**
     * <p>The name of the state.</p>
     */
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }

    /**
     * <p>The name of the state.</p>
     */
    inline void SetStateName(const Aws::String& value) { m_stateNameHasBeenSet = true; m_stateName = value; }

    /**
     * <p>The name of the state.</p>
     */
    inline void SetStateName(Aws::String&& value) { m_stateNameHasBeenSet = true; m_stateName = std::move(value); }

    /**
     * <p>The name of the state.</p>
     */
    inline void SetStateName(const char* value) { m_stateNameHasBeenSet = true; m_stateName.assign(value); }

    /**
     * <p>The name of the state.</p>
     */
    inline DetectorStateSummary& WithStateName(const Aws::String& value) { SetStateName(value); return *this;}

    /**
     * <p>The name of the state.</p>
     */
    inline DetectorStateSummary& WithStateName(Aws::String&& value) { SetStateName(std::move(value)); return *this;}

    /**
     * <p>The name of the state.</p>
     */
    inline DetectorStateSummary& WithStateName(const char* value) { SetStateName(value); return *this;}

  private:

    Aws::String m_stateName;
    bool m_stateNameHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
