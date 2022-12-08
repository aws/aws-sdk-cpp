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
    AWS_IOTEVENTS_API State();
    AWS_IOTEVENTS_API State(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API State& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline State& WithStateName(const Aws::String& value) { SetStateName(value); return *this;}

    /**
     * <p>The name of the state.</p>
     */
    inline State& WithStateName(Aws::String&& value) { SetStateName(std::move(value)); return *this;}

    /**
     * <p>The name of the state.</p>
     */
    inline State& WithStateName(const char* value) { SetStateName(value); return *this;}


    /**
     * <p>When an input is received and the <code>condition</code> is TRUE, perform the
     * specified <code>actions</code>.</p>
     */
    inline const OnInputLifecycle& GetOnInput() const{ return m_onInput; }

    /**
     * <p>When an input is received and the <code>condition</code> is TRUE, perform the
     * specified <code>actions</code>.</p>
     */
    inline bool OnInputHasBeenSet() const { return m_onInputHasBeenSet; }

    /**
     * <p>When an input is received and the <code>condition</code> is TRUE, perform the
     * specified <code>actions</code>.</p>
     */
    inline void SetOnInput(const OnInputLifecycle& value) { m_onInputHasBeenSet = true; m_onInput = value; }

    /**
     * <p>When an input is received and the <code>condition</code> is TRUE, perform the
     * specified <code>actions</code>.</p>
     */
    inline void SetOnInput(OnInputLifecycle&& value) { m_onInputHasBeenSet = true; m_onInput = std::move(value); }

    /**
     * <p>When an input is received and the <code>condition</code> is TRUE, perform the
     * specified <code>actions</code>.</p>
     */
    inline State& WithOnInput(const OnInputLifecycle& value) { SetOnInput(value); return *this;}

    /**
     * <p>When an input is received and the <code>condition</code> is TRUE, perform the
     * specified <code>actions</code>.</p>
     */
    inline State& WithOnInput(OnInputLifecycle&& value) { SetOnInput(std::move(value)); return *this;}


    /**
     * <p>When entering this state, perform these <code>actions</code> if the
     * <code>condition</code> is TRUE.</p>
     */
    inline const OnEnterLifecycle& GetOnEnter() const{ return m_onEnter; }

    /**
     * <p>When entering this state, perform these <code>actions</code> if the
     * <code>condition</code> is TRUE.</p>
     */
    inline bool OnEnterHasBeenSet() const { return m_onEnterHasBeenSet; }

    /**
     * <p>When entering this state, perform these <code>actions</code> if the
     * <code>condition</code> is TRUE.</p>
     */
    inline void SetOnEnter(const OnEnterLifecycle& value) { m_onEnterHasBeenSet = true; m_onEnter = value; }

    /**
     * <p>When entering this state, perform these <code>actions</code> if the
     * <code>condition</code> is TRUE.</p>
     */
    inline void SetOnEnter(OnEnterLifecycle&& value) { m_onEnterHasBeenSet = true; m_onEnter = std::move(value); }

    /**
     * <p>When entering this state, perform these <code>actions</code> if the
     * <code>condition</code> is TRUE.</p>
     */
    inline State& WithOnEnter(const OnEnterLifecycle& value) { SetOnEnter(value); return *this;}

    /**
     * <p>When entering this state, perform these <code>actions</code> if the
     * <code>condition</code> is TRUE.</p>
     */
    inline State& WithOnEnter(OnEnterLifecycle&& value) { SetOnEnter(std::move(value)); return *this;}


    /**
     * <p>When exiting this state, perform these <code>actions</code> if the specified
     * <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline const OnExitLifecycle& GetOnExit() const{ return m_onExit; }

    /**
     * <p>When exiting this state, perform these <code>actions</code> if the specified
     * <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline bool OnExitHasBeenSet() const { return m_onExitHasBeenSet; }

    /**
     * <p>When exiting this state, perform these <code>actions</code> if the specified
     * <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline void SetOnExit(const OnExitLifecycle& value) { m_onExitHasBeenSet = true; m_onExit = value; }

    /**
     * <p>When exiting this state, perform these <code>actions</code> if the specified
     * <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline void SetOnExit(OnExitLifecycle&& value) { m_onExitHasBeenSet = true; m_onExit = std::move(value); }

    /**
     * <p>When exiting this state, perform these <code>actions</code> if the specified
     * <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline State& WithOnExit(const OnExitLifecycle& value) { SetOnExit(value); return *this;}

    /**
     * <p>When exiting this state, perform these <code>actions</code> if the specified
     * <code>condition</code> is <code>TRUE</code>.</p>
     */
    inline State& WithOnExit(OnExitLifecycle&& value) { SetOnExit(std::move(value)); return *this;}

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
