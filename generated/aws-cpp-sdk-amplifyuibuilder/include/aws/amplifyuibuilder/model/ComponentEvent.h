﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/ActionParameters.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration of an event. You can bind an event and a
   * corresponding action to a <code>Component</code> or a
   * <code>ComponentChild</code>. A button click is an example of an event.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentEvent">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFYUIBUILDER_API ComponentEvent
  {
  public:
    ComponentEvent();
    ComponentEvent(Aws::Utils::Json::JsonView jsonValue);
    ComponentEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to perform when a specific event is raised.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The action to perform when a specific event is raised.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to perform when a specific event is raised.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to perform when a specific event is raised.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to perform when a specific event is raised.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The action to perform when a specific event is raised.</p>
     */
    inline ComponentEvent& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The action to perform when a specific event is raised.</p>
     */
    inline ComponentEvent& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action to perform when a specific event is raised.</p>
     */
    inline ComponentEvent& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>Describes information about the action.</p>
     */
    inline const ActionParameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>Describes information about the action.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Describes information about the action.</p>
     */
    inline void SetParameters(const ActionParameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Describes information about the action.</p>
     */
    inline void SetParameters(ActionParameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Describes information about the action.</p>
     */
    inline ComponentEvent& WithParameters(const ActionParameters& value) { SetParameters(value); return *this;}

    /**
     * <p>Describes information about the action.</p>
     */
    inline ComponentEvent& WithParameters(ActionParameters&& value) { SetParameters(std::move(value)); return *this;}

  private:

    Aws::String m_action;
    bool m_actionHasBeenSet;

    ActionParameters m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
