/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/StatementEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class AddPolicyStatementRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API AddPolicyStatementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPolicyStatement"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AddPolicyStatementRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline const Aws::String& GetStatementId() const { return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    template<typename StatementIdT = Aws::String>
    void SetStatementId(StatementIdT&& value) { m_statementIdHasBeenSet = true; m_statementId = std::forward<StatementIdT>(value); }
    template<typename StatementIdT = Aws::String>
    AddPolicyStatementRequest& WithStatementId(StatementIdT&& value) { SetStatementId(std::forward<StatementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the permissions specified in the policy are to be allowed
     * (<code>Allow</code>) or denied (<code>Deny</code>).</p>  <p> If you
     * set the value of the <code>effect</code> parameter to <code>Deny</code> for the
     * <code>AddPolicyStatement</code> operation, you must also set the value of the
     * <code>effect</code> parameter in the <code>policy</code> to <code>Deny</code>
     * for the <code>PutPolicy</code> operation.</p> 
     */
    inline StatementEffect GetEffect() const { return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(StatementEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline AddPolicyStatementRequest& WithEffect(StatementEffect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that the principal can use on the resource. </p> <p>For example,
     * <code>entityresolution:GetIdMappingJob</code>,
     * <code>entityresolution:GetMatchingJob</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::Vector<Aws::String>>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::Vector<Aws::String>>
    AddPolicyStatementRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    template<typename ActionT = Aws::String>
    AddPolicyStatementRequest& AddAction(ActionT&& value) { m_actionHasBeenSet = true; m_action.emplace_back(std::forward<ActionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service or Amazon Web Services account that can
     * access the resource defined as ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::Vector<Aws::String>>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::Vector<Aws::String>>
    AddPolicyStatementRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    template<typename PrincipalT = Aws::String>
    AddPolicyStatementRequest& AddPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal.emplace_back(std::forward<PrincipalT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of condition keys that you can use in key policies.</p>
     */
    inline const Aws::String& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::String>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::String>
    AddPolicyStatementRequest& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    StatementEffect m_effect{StatementEffect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::Vector<Aws::String> m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<Aws::String> m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
