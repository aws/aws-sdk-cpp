﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/StatelessCustomActionDefinition.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A custom action definition. A custom action is an optional, non-standard
   * action to use for stateless packet handling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceCustomActionsDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API RuleGroupSourceCustomActionsDetails
  {
  public:
    RuleGroupSourceCustomActionsDetails();
    RuleGroupSourceCustomActionsDetails(Aws::Utils::Json::JsonView jsonValue);
    RuleGroupSourceCustomActionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The definition of a custom action.</p>
     */
    inline const StatelessCustomActionDefinition& GetActionDefinition() const{ return m_actionDefinition; }

    /**
     * <p>The definition of a custom action.</p>
     */
    inline bool ActionDefinitionHasBeenSet() const { return m_actionDefinitionHasBeenSet; }

    /**
     * <p>The definition of a custom action.</p>
     */
    inline void SetActionDefinition(const StatelessCustomActionDefinition& value) { m_actionDefinitionHasBeenSet = true; m_actionDefinition = value; }

    /**
     * <p>The definition of a custom action.</p>
     */
    inline void SetActionDefinition(StatelessCustomActionDefinition&& value) { m_actionDefinitionHasBeenSet = true; m_actionDefinition = std::move(value); }

    /**
     * <p>The definition of a custom action.</p>
     */
    inline RuleGroupSourceCustomActionsDetails& WithActionDefinition(const StatelessCustomActionDefinition& value) { SetActionDefinition(value); return *this;}

    /**
     * <p>The definition of a custom action.</p>
     */
    inline RuleGroupSourceCustomActionsDetails& WithActionDefinition(StatelessCustomActionDefinition&& value) { SetActionDefinition(std::move(value)); return *this;}


    /**
     * <p>A descriptive name of the custom action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>A descriptive name of the custom action.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>A descriptive name of the custom action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>A descriptive name of the custom action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>A descriptive name of the custom action.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>A descriptive name of the custom action.</p>
     */
    inline RuleGroupSourceCustomActionsDetails& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>A descriptive name of the custom action.</p>
     */
    inline RuleGroupSourceCustomActionsDetails& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name of the custom action.</p>
     */
    inline RuleGroupSourceCustomActionsDetails& WithActionName(const char* value) { SetActionName(value); return *this;}

  private:

    StatelessCustomActionDefinition m_actionDefinition;
    bool m_actionDefinitionHasBeenSet;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
