/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DetectorStateDefinition
  {
  public:
    AWS_IOTEVENTSDATA_API DetectorStateDefinition() = default;
    AWS_IOTEVENTSDATA_API DetectorStateDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API DetectorStateDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the new state of the detector (instance).</p>
     */
    inline const Aws::String& GetStateName() const { return m_stateName; }
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }
    template<typename StateNameT = Aws::String>
    void SetStateName(StateNameT&& value) { m_stateNameHasBeenSet = true; m_stateName = std::forward<StateNameT>(value); }
    template<typename StateNameT = Aws::String>
    DetectorStateDefinition& WithStateName(StateNameT&& value) { SetStateName(std::forward<StateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new values of the detector's variables. Any variable whose value isn't
     * specified is cleared.</p>
     */
    inline const Aws::Vector<VariableDefinition>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Vector<VariableDefinition>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Vector<VariableDefinition>>
    DetectorStateDefinition& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesT = VariableDefinition>
    DetectorStateDefinition& AddVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables.emplace_back(std::forward<VariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new values of the detector's timers. Any timer whose value isn't
     * specified is cleared, and its timeout event won't occur.</p>
     */
    inline const Aws::Vector<TimerDefinition>& GetTimers() const { return m_timers; }
    inline bool TimersHasBeenSet() const { return m_timersHasBeenSet; }
    template<typename TimersT = Aws::Vector<TimerDefinition>>
    void SetTimers(TimersT&& value) { m_timersHasBeenSet = true; m_timers = std::forward<TimersT>(value); }
    template<typename TimersT = Aws::Vector<TimerDefinition>>
    DetectorStateDefinition& WithTimers(TimersT&& value) { SetTimers(std::forward<TimersT>(value)); return *this;}
    template<typename TimersT = TimerDefinition>
    DetectorStateDefinition& AddTimers(TimersT&& value) { m_timersHasBeenSet = true; m_timers.emplace_back(std::forward<TimersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_stateName;
    bool m_stateNameHasBeenSet = false;

    Aws::Vector<VariableDefinition> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::Vector<TimerDefinition> m_timers;
    bool m_timersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
