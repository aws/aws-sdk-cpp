/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/OnInputLifecycle.h>
#include <aws/iotevents/model/OnEnterLifecycle.h>
#include <aws/iotevents/model/OnExitLifecycle.h>
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
   * <p>Information that defines a state of a detector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/State">AWS API
   * Reference</a></p>
   */
  class State
  {
  public:
    AWS_IOTEVENTS_API State() = default;
    AWS_IOTEVENTS_API State(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API State& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the state.</p>
     */
    inline const Aws::String& GetStateName() const { return m_stateName; }
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }
    template<typename StateNameT = Aws::String>
    void SetStateName(StateNameT&& value) { m_stateNameHasBeenSet = true; m_stateName = std::forward<StateNameT>(value); }
    template<typename StateNameT = Aws::String>
    State& WithStateName(StateNameT&& value) { SetStateName(std::forward<StateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When an input is received and the <code>condition</code> is TRUE, perform the
     * specified <code>actions</code>.</p>
     */
    inline const OnInputLifecycle& GetOnInput() const { return m_onInput; }
    inline bool OnInputHasBeenSet() const { return m_onInputHasBeenSet; }
    template<typename OnInputT = OnInputLifecycle>
    void SetOnInput(OnInputT&& value) { m_onInputHasBeenSet = true; m_onInput = std::forward<OnInputT>(value); }
    template<typename OnInputT = OnInputLifecycle>
    State& WithOnInput(OnInputT&& value) { SetOnInput(std::forward<OnInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When entering this state, perform these <code>actions</code> if the
     * <code>condition</code> is TRUE.</p>
     */
    inline const OnEnterLifecycle& GetOnEnter() const { return m_onEnter; }
    inline bool OnEnterHasBeenSet() const { return m_onEnterHasBeenSet; }
    template<typename OnEnterT = OnEnterLifecycle>
    void SetOnEnter(OnEnterT&& value) { m_onEnterHasBeenSet = true; m_onEnter = std::forward<OnEnterT>(value); }
    template<typename OnEnterT = OnEnterLifecycle>
    State& WithOnEnter(OnEnterT&& value) { SetOnEnter(std::forward<OnEnterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When exiting this state, perform these <code>actions</code> if the specified
     * <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline const OnExitLifecycle& GetOnExit() const { return m_onExit; }
    inline bool OnExitHasBeenSet() const { return m_onExitHasBeenSet; }
    template<typename OnExitT = OnExitLifecycle>
    void SetOnExit(OnExitT&& value) { m_onExitHasBeenSet = true; m_onExit = std::forward<OnExitT>(value); }
    template<typename OnExitT = OnExitLifecycle>
    State& WithOnExit(OnExitT&& value) { SetOnExit(std::forward<OnExitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateName;
    bool m_stateNameHasBeenSet = false;

    OnInputLifecycle m_onInput;
    bool m_onInputHasBeenSet = false;

    OnEnterLifecycle m_onEnter;
    bool m_onEnterHasBeenSet = false;

    OnExitLifecycle m_onExit;
    bool m_onExitHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
