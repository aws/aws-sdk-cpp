/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/Variable.h>
#include <aws/iotevents-data/model/Timer.h>
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
   * <p>Information about the current state of the detector instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/DetectorState">AWS
   * API Reference</a></p>
   */
  class DetectorState
  {
  public:
    AWS_IOTEVENTSDATA_API DetectorState();
    AWS_IOTEVENTSDATA_API DetectorState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API DetectorState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the state.</p>
     */
    inline const Aws::String& GetStateName() const{ return m_stateName; }
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }
    inline void SetStateName(const Aws::String& value) { m_stateNameHasBeenSet = true; m_stateName = value; }
    inline void SetStateName(Aws::String&& value) { m_stateNameHasBeenSet = true; m_stateName = std::move(value); }
    inline void SetStateName(const char* value) { m_stateNameHasBeenSet = true; m_stateName.assign(value); }
    inline DetectorState& WithStateName(const Aws::String& value) { SetStateName(value); return *this;}
    inline DetectorState& WithStateName(Aws::String&& value) { SetStateName(std::move(value)); return *this;}
    inline DetectorState& WithStateName(const char* value) { SetStateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current values of the detector's variables.</p>
     */
    inline const Aws::Vector<Variable>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Vector<Variable>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Vector<Variable>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline DetectorState& WithVariables(const Aws::Vector<Variable>& value) { SetVariables(value); return *this;}
    inline DetectorState& WithVariables(Aws::Vector<Variable>&& value) { SetVariables(std::move(value)); return *this;}
    inline DetectorState& AddVariables(const Variable& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }
    inline DetectorState& AddVariables(Variable&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the detector's timers.</p>
     */
    inline const Aws::Vector<Timer>& GetTimers() const{ return m_timers; }
    inline bool TimersHasBeenSet() const { return m_timersHasBeenSet; }
    inline void SetTimers(const Aws::Vector<Timer>& value) { m_timersHasBeenSet = true; m_timers = value; }
    inline void SetTimers(Aws::Vector<Timer>&& value) { m_timersHasBeenSet = true; m_timers = std::move(value); }
    inline DetectorState& WithTimers(const Aws::Vector<Timer>& value) { SetTimers(value); return *this;}
    inline DetectorState& WithTimers(Aws::Vector<Timer>&& value) { SetTimers(std::move(value)); return *this;}
    inline DetectorState& AddTimers(const Timer& value) { m_timersHasBeenSet = true; m_timers.push_back(value); return *this; }
    inline DetectorState& AddTimers(Timer&& value) { m_timersHasBeenSet = true; m_timers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_stateName;
    bool m_stateNameHasBeenSet = false;

    Aws::Vector<Variable> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::Vector<Timer> m_timers;
    bool m_timersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
