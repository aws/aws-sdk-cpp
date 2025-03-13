/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/Effect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/Principal.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class CreateResourcePolicyStatementRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateResourcePolicyStatementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourcePolicyStatement"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

    AWS_LEXMODELSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    CreateResourcePolicyStatementRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline const Aws::String& GetStatementId() const { return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    template<typename StatementIdT = Aws::String>
    void SetStatementId(StatementIdT&& value) { m_statementIdHasBeenSet = true; m_statementId = std::forward<StatementIdT>(value); }
    template<typename StatementIdT = Aws::String>
    CreateResourcePolicyStatementRequest& WithStatementId(StatementIdT&& value) { SetStatementId(std::forward<StatementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the statement allows or denies access to the resource.</p>
     */
    inline Effect GetEffect() const { return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(Effect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline CreateResourcePolicyStatementRequest& WithEffect(Effect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM principal, such as an IAM user, IAM role, or Amazon Web Services
     * services that is allowed or denied access to a resource. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">Amazon
     * Web Services JSON policy elements: Principal</a>.</p>
     */
    inline const Aws::Vector<Principal>& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::Vector<Principal>>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::Vector<Principal>>
    CreateResourcePolicyStatementRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    template<typename PrincipalT = Principal>
    CreateResourcePolicyStatementRequest& AddPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal.emplace_back(std::forward<PrincipalT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::Vector<Aws::String>>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::Vector<Aws::String>>
    CreateResourcePolicyStatementRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    template<typename ActionT = Aws::String>
    CreateResourcePolicyStatementRequest& AddAction(ActionT&& value) { m_actionHasBeenSet = true; m_action.emplace_back(std::forward<ActionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    CreateResourcePolicyStatementRequest& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    template<typename ConditionKeyT = Aws::String, typename ConditionValueT = Aws::Map<Aws::String, Aws::String>>
    CreateResourcePolicyStatementRequest& AddCondition(ConditionKeyT&& key, ConditionValueT&& value) {
      m_conditionHasBeenSet = true; m_condition.emplace(std::forward<ConditionKeyT>(key), std::forward<ConditionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
    template<typename ExpectedRevisionIdT = Aws::String>
    void SetExpectedRevisionId(ExpectedRevisionIdT&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value); }
    template<typename ExpectedRevisionIdT = Aws::String>
    CreateResourcePolicyStatementRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) { SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    Effect m_effect{Effect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::Vector<Principal> m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Vector<Aws::String> m_action;
    bool m_actionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_expectedRevisionId;
    bool m_expectedRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
