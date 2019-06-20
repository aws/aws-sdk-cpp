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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/VariableDefinition.h>
#include <aws/iotevents-data/model/TimerDefinition.h>
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
   * <p>The new state, variable values, and timer settings of the detector
   * (instance).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DetectorStateDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTSDATA_API DetectorStateDefinition
  {
  public:
    DetectorStateDefinition();
    DetectorStateDefinition(Aws::Utils::Json::JsonView jsonValue);
    DetectorStateDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline const Aws::String& GetStateName() const{ return m_stateName; }

    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }

    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline void SetStateName(const Aws::String& value) { m_stateNameHasBeenSet = true; m_stateName = value; }

    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline void SetStateName(Aws::String&& value) { m_stateNameHasBeenSet = true; m_stateName = std::move(value); }

    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline void SetStateName(const char* value) { m_stateNameHasBeenSet = true; m_stateName.assign(value); }

    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline DetectorStateDefinition& WithStateName(const Aws::String& value) { SetStateName(value); return *this;}

    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline DetectorStateDefinition& WithStateName(Aws::String&& value) { SetStateName(std::move(value)); return *this;}

    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline DetectorStateDefinition& WithStateName(const char* value) { SetStateName(value); return *this;}


    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline const Aws::Vector<VariableDefinition>& GetVariables() const{ return m_variables; }

    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }

    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline void SetVariables(const Aws::Vector<VariableDefinition>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline void SetVariables(Aws::Vector<VariableDefinition>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline DetectorStateDefinition& WithVariables(const Aws::Vector<VariableDefinition>& value) { SetVariables(value); return *this;}

    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline DetectorStateDefinition& WithVariables(Aws::Vector<VariableDefinition>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline DetectorStateDefinition& AddVariables(const VariableDefinition& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }

    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline DetectorStateDefinition& AddVariables(VariableDefinition&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }


    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline const Aws::Vector<TimerDefinition>& GetTimers() const{ return m_timers; }

    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline bool TimersHasBeenSet() const { return m_timersHasBeenSet; }

    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline void SetTimers(const Aws::Vector<TimerDefinition>& value) { m_timersHasBeenSet = true; m_timers = value; }

    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline void SetTimers(Aws::Vector<TimerDefinition>&& value) { m_timersHasBeenSet = true; m_timers = std::move(value); }

    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline DetectorStateDefinition& WithTimers(const Aws::Vector<TimerDefinition>& value) { SetTimers(value); return *this;}

    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline DetectorStateDefinition& WithTimers(Aws::Vector<TimerDefinition>&& value) { SetTimers(std::move(value)); return *this;}

    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline DetectorStateDefinition& AddTimers(const TimerDefinition& value) { m_timersHasBeenSet = true; m_timers.push_back(value); return *this; }

    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline DetectorStateDefinition& AddTimers(TimerDefinition&& value) { m_timersHasBeenSet = true; m_timers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_stateName;
    bool m_stateNameHasBeenSet;

    Aws::Vector<VariableDefinition> m_variables;
    bool m_variablesHasBeenSet;

    Aws::Vector<TimerDefinition> m_timers;
    bool m_timersHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
