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
  class AWS_IOTEVENTS_API DetectorModelDefinition
  {
  public:
    DetectorModelDefinition();
    DetectorModelDefinition(Aws::Utils::Json::JsonView jsonValue);
    DetectorModelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the states of the detector.</p>
     */
    inline const Aws::Vector<State>& GetStates() const{ return m_states; }

    /**
     * <p>Information about the states of the detector.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>Information about the states of the detector.</p>
     */
    inline void SetStates(const Aws::Vector<State>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>Information about the states of the detector.</p>
     */
    inline void SetStates(Aws::Vector<State>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>Information about the states of the detector.</p>
     */
    inline DetectorModelDefinition& WithStates(const Aws::Vector<State>& value) { SetStates(value); return *this;}

    /**
     * <p>Information about the states of the detector.</p>
     */
    inline DetectorModelDefinition& WithStates(Aws::Vector<State>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>Information about the states of the detector.</p>
     */
    inline DetectorModelDefinition& AddStates(const State& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>Information about the states of the detector.</p>
     */
    inline DetectorModelDefinition& AddStates(State&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline const Aws::String& GetInitialStateName() const{ return m_initialStateName; }

    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline bool InitialStateNameHasBeenSet() const { return m_initialStateNameHasBeenSet; }

    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline void SetInitialStateName(const Aws::String& value) { m_initialStateNameHasBeenSet = true; m_initialStateName = value; }

    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline void SetInitialStateName(Aws::String&& value) { m_initialStateNameHasBeenSet = true; m_initialStateName = std::move(value); }

    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline void SetInitialStateName(const char* value) { m_initialStateNameHasBeenSet = true; m_initialStateName.assign(value); }

    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline DetectorModelDefinition& WithInitialStateName(const Aws::String& value) { SetInitialStateName(value); return *this;}

    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline DetectorModelDefinition& WithInitialStateName(Aws::String&& value) { SetInitialStateName(std::move(value)); return *this;}

    /**
     * <p>The state that is entered at the creation of each detector (instance).</p>
     */
    inline DetectorModelDefinition& WithInitialStateName(const char* value) { SetInitialStateName(value); return *this;}

  private:

    Aws::Vector<State> m_states;
    bool m_statesHasBeenSet;

    Aws::String m_initialStateName;
    bool m_initialStateNameHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
