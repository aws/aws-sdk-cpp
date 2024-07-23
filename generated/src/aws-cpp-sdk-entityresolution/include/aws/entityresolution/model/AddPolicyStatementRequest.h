/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/StatementEffect.h>
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
    AWS_ENTITYRESOLUTION_API AddPolicyStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPolicyStatement"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The action that the principal can use on the resource. </p> <p>For example,
     * <code>entityresolution:GetIdMappingJob</code>,
     * <code>entityresolution:GetMatchingJob</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::Vector<Aws::String>& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::Vector<Aws::String>&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline AddPolicyStatementRequest& WithAction(const Aws::Vector<Aws::String>& value) { SetAction(value); return *this;}
    inline AddPolicyStatementRequest& WithAction(Aws::Vector<Aws::String>&& value) { SetAction(std::move(value)); return *this;}
    inline AddPolicyStatementRequest& AddAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }
    inline AddPolicyStatementRequest& AddAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action.push_back(std::move(value)); return *this; }
    inline AddPolicyStatementRequest& AddAction(const char* value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AddPolicyStatementRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AddPolicyStatementRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AddPolicyStatementRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of condition keys that you can use in key policies.</p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }
    inline AddPolicyStatementRequest& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}
    inline AddPolicyStatementRequest& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}
    inline AddPolicyStatementRequest& WithCondition(const char* value) { SetCondition(value); return *this;}
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
    inline const StatementEffect& GetEffect() const{ return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(const StatementEffect& value) { m_effectHasBeenSet = true; m_effect = value; }
    inline void SetEffect(StatementEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }
    inline AddPolicyStatementRequest& WithEffect(const StatementEffect& value) { SetEffect(value); return *this;}
    inline AddPolicyStatementRequest& WithEffect(StatementEffect&& value) { SetEffect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services service or Amazon Web Services account that can
     * access the resource defined as ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::Vector<Aws::String>& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::Vector<Aws::String>&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline AddPolicyStatementRequest& WithPrincipal(const Aws::Vector<Aws::String>& value) { SetPrincipal(value); return *this;}
    inline AddPolicyStatementRequest& WithPrincipal(Aws::Vector<Aws::String>&& value) { SetPrincipal(std::move(value)); return *this;}
    inline AddPolicyStatementRequest& AddPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal.push_back(value); return *this; }
    inline AddPolicyStatementRequest& AddPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal.push_back(std::move(value)); return *this; }
    inline AddPolicyStatementRequest& AddPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A statement identifier that differentiates the statement from others in the
     * same policy.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }
    inline AddPolicyStatementRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}
    inline AddPolicyStatementRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}
    inline AddPolicyStatementRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;

    StatementEffect m_effect;
    bool m_effectHasBeenSet = false;

    Aws::Vector<Aws::String> m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
