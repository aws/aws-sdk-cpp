/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/RemediationActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/SecurityGroupRuleDescription.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Remediation option for the rule specified in the
   * <code>ViolationTarget</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/SecurityGroupRemediationAction">AWS
   * API Reference</a></p>
   */
  class SecurityGroupRemediationAction
  {
  public:
    AWS_FMS_API SecurityGroupRemediationAction();
    AWS_FMS_API SecurityGroupRemediationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API SecurityGroupRemediationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The remediation action that will be performed.</p>
     */
    inline const RemediationActionType& GetRemediationActionType() const{ return m_remediationActionType; }

    /**
     * <p>The remediation action that will be performed.</p>
     */
    inline bool RemediationActionTypeHasBeenSet() const { return m_remediationActionTypeHasBeenSet; }

    /**
     * <p>The remediation action that will be performed.</p>
     */
    inline void SetRemediationActionType(const RemediationActionType& value) { m_remediationActionTypeHasBeenSet = true; m_remediationActionType = value; }

    /**
     * <p>The remediation action that will be performed.</p>
     */
    inline void SetRemediationActionType(RemediationActionType&& value) { m_remediationActionTypeHasBeenSet = true; m_remediationActionType = std::move(value); }

    /**
     * <p>The remediation action that will be performed.</p>
     */
    inline SecurityGroupRemediationAction& WithRemediationActionType(const RemediationActionType& value) { SetRemediationActionType(value); return *this;}

    /**
     * <p>The remediation action that will be performed.</p>
     */
    inline SecurityGroupRemediationAction& WithRemediationActionType(RemediationActionType&& value) { SetRemediationActionType(std::move(value)); return *this;}


    /**
     * <p>Brief description of the action that will be performed.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Brief description of the action that will be performed.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Brief description of the action that will be performed.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Brief description of the action that will be performed.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Brief description of the action that will be performed.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Brief description of the action that will be performed.</p>
     */
    inline SecurityGroupRemediationAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Brief description of the action that will be performed.</p>
     */
    inline SecurityGroupRemediationAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Brief description of the action that will be performed.</p>
     */
    inline SecurityGroupRemediationAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The final state of the rule specified in the <code>ViolationTarget</code>
     * after it is remediated.</p>
     */
    inline const SecurityGroupRuleDescription& GetRemediationResult() const{ return m_remediationResult; }

    /**
     * <p>The final state of the rule specified in the <code>ViolationTarget</code>
     * after it is remediated.</p>
     */
    inline bool RemediationResultHasBeenSet() const { return m_remediationResultHasBeenSet; }

    /**
     * <p>The final state of the rule specified in the <code>ViolationTarget</code>
     * after it is remediated.</p>
     */
    inline void SetRemediationResult(const SecurityGroupRuleDescription& value) { m_remediationResultHasBeenSet = true; m_remediationResult = value; }

    /**
     * <p>The final state of the rule specified in the <code>ViolationTarget</code>
     * after it is remediated.</p>
     */
    inline void SetRemediationResult(SecurityGroupRuleDescription&& value) { m_remediationResultHasBeenSet = true; m_remediationResult = std::move(value); }

    /**
     * <p>The final state of the rule specified in the <code>ViolationTarget</code>
     * after it is remediated.</p>
     */
    inline SecurityGroupRemediationAction& WithRemediationResult(const SecurityGroupRuleDescription& value) { SetRemediationResult(value); return *this;}

    /**
     * <p>The final state of the rule specified in the <code>ViolationTarget</code>
     * after it is remediated.</p>
     */
    inline SecurityGroupRemediationAction& WithRemediationResult(SecurityGroupRuleDescription&& value) { SetRemediationResult(std::move(value)); return *this;}


    /**
     * <p>Indicates if the current action is the default action.</p>
     */
    inline bool GetIsDefaultAction() const{ return m_isDefaultAction; }

    /**
     * <p>Indicates if the current action is the default action.</p>
     */
    inline bool IsDefaultActionHasBeenSet() const { return m_isDefaultActionHasBeenSet; }

    /**
     * <p>Indicates if the current action is the default action.</p>
     */
    inline void SetIsDefaultAction(bool value) { m_isDefaultActionHasBeenSet = true; m_isDefaultAction = value; }

    /**
     * <p>Indicates if the current action is the default action.</p>
     */
    inline SecurityGroupRemediationAction& WithIsDefaultAction(bool value) { SetIsDefaultAction(value); return *this;}

  private:

    RemediationActionType m_remediationActionType;
    bool m_remediationActionTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SecurityGroupRuleDescription m_remediationResult;
    bool m_remediationResultHasBeenSet = false;

    bool m_isDefaultAction;
    bool m_isDefaultActionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
