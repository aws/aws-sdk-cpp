﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/State.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Information that defines how a detector operates.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DetectorModelDefinition">AWS
   * API Reference</a></p>
   */
  class DetectorModelDefinition
  {
  public:
    AWS_IOTEVENTS_API DetectorModelDefinition();
    AWS_IOTEVENTS_API DetectorModelDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DetectorModelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the states of the detector.</p>
     */
    inline const Aws::Vector<State>& GetStates() const{ return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    inline void SetStates(const Aws::Vector<State>& value) { m_statesHasBeenSet = true; m_states = value; }
    inline void SetStates(Aws::Vector<State>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }
    inline DetectorModelDefinition& WithStates(const Aws::Vector<State>& value) { SetStates(value); return *this;}
    inline DetectorModelDefinition& WithStates(Aws::Vector<State>&& value) { SetStates(std::move(value)); return *this;}
    inline DetectorModelDefinition& AddStates(const State& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    inline DetectorModelDefinition& AddStates(State&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline const Aws::String& GetInitialStateName() const{ return m_initialStateName; }
    inline bool InitialStateNameHasBeenSet() const { return m_initialStateNameHasBeenSet; }
    inline void SetInitialStateName(const Aws::String& value) { m_initialStateNameHasBeenSet = true; m_initialStateName = value; }
    inline void SetInitialStateName(Aws::String&& value) { m_initialStateNameHasBeenSet = true; m_initialStateName = std::move(value); }
    inline void SetInitialStateName(const char* value) { m_initialStateNameHasBeenSet = true; m_initialStateName.assign(value); }
    inline DetectorModelDefinition& WithInitialStateName(const Aws::String& value) { SetInitialStateName(value); return *this;}
    inline DetectorModelDefinition& WithInitialStateName(Aws::String&& value) { SetInitialStateName(std::move(value)); return *this;}
    inline DetectorModelDefinition& WithInitialStateName(const char* value) { SetInitialStateName(value); return *this;}
    ///@}
  private:

    Aws::Vector<State> m_states;
    bool m_statesHasBeenSet = false;

    Aws::String m_initialStateName;
    bool m_initialStateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
