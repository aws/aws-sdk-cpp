/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/Condition.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class PutPermissionRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API PutPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPermission"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the event bus associated with the rule. If you omit this, the
     * default event bus is used.</p>
     */
    inline const Aws::String& GetEventBusName() const{ return m_eventBusName; }

    /**
     * <p>The name of the event bus associated with the rule. If you omit this, the
     * default event bus is used.</p>
     */
    inline bool EventBusNameHasBeenSet() const { return m_eventBusNameHasBeenSet; }

    /**
     * <p>The name of the event bus associated with the rule. If you omit this, the
     * default event bus is used.</p>
     */
    inline void SetEventBusName(const Aws::String& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = value; }

    /**
     * <p>The name of the event bus associated with the rule. If you omit this, the
     * default event bus is used.</p>
     */
    inline void SetEventBusName(Aws::String&& value) { m_eventBusNameHasBeenSet = true; m_eventBusName = std::move(value); }

    /**
     * <p>The name of the event bus associated with the rule. If you omit this, the
     * default event bus is used.</p>
     */
    inline void SetEventBusName(const char* value) { m_eventBusNameHasBeenSet = true; m_eventBusName.assign(value); }

    /**
     * <p>The name of the event bus associated with the rule. If you omit this, the
     * default event bus is used.</p>
     */
    inline PutPermissionRequest& WithEventBusName(const Aws::String& value) { SetEventBusName(value); return *this;}

    /**
     * <p>The name of the event bus associated with the rule. If you omit this, the
     * default event bus is used.</p>
     */
    inline PutPermissionRequest& WithEventBusName(Aws::String&& value) { SetEventBusName(std::move(value)); return *this;}

    /**
     * <p>The name of the event bus associated with the rule. If you omit this, the
     * default event bus is used.</p>
     */
    inline PutPermissionRequest& WithEventBusName(const char* value) { SetEventBusName(value); return *this;}


    /**
     * <p>The action that you are enabling the other account to perform.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The action that you are enabling the other account to perform.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that you are enabling the other account to perform.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that you are enabling the other account to perform.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that you are enabling the other account to perform.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The action that you are enabling the other account to perform.</p>
     */
    inline PutPermissionRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The action that you are enabling the other account to perform.</p>
     */
    inline PutPermissionRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action that you are enabling the other account to perform.</p>
     */
    inline PutPermissionRequest& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The 12-digit Amazon Web Services account ID that you are permitting to put
     * events to your default event bus. Specify "*" to permit any account to put
     * events to your default event bus.</p> <p>If you specify "*" without specifying
     * <code>Condition</code>, avoid creating rules that may match undesirable events.
     * To create more secure rules, make sure that the event pattern for each rule
     * contains an <code>account</code> field with a specific account ID from which to
     * receive events. Rules with an account field do not match any events sent from
     * other accounts.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The 12-digit Amazon Web Services account ID that you are permitting to put
     * events to your default event bus. Specify "*" to permit any account to put
     * events to your default event bus.</p> <p>If you specify "*" without specifying
     * <code>Condition</code>, avoid creating rules that may match undesirable events.
     * To create more secure rules, make sure that the event pattern for each rule
     * contains an <code>account</code> field with a specific account ID from which to
     * receive events. Rules with an account field do not match any events sent from
     * other accounts.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The 12-digit Amazon Web Services account ID that you are permitting to put
     * events to your default event bus. Specify "*" to permit any account to put
     * events to your default event bus.</p> <p>If you specify "*" without specifying
     * <code>Condition</code>, avoid creating rules that may match undesirable events.
     * To create more secure rules, make sure that the event pattern for each rule
     * contains an <code>account</code> field with a specific account ID from which to
     * receive events. Rules with an account field do not match any events sent from
     * other accounts.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The 12-digit Amazon Web Services account ID that you are permitting to put
     * events to your default event bus. Specify "*" to permit any account to put
     * events to your default event bus.</p> <p>If you specify "*" without specifying
     * <code>Condition</code>, avoid creating rules that may match undesirable events.
     * To create more secure rules, make sure that the event pattern for each rule
     * contains an <code>account</code> field with a specific account ID from which to
     * receive events. Rules with an account field do not match any events sent from
     * other accounts.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The 12-digit Amazon Web Services account ID that you are permitting to put
     * events to your default event bus. Specify "*" to permit any account to put
     * events to your default event bus.</p> <p>If you specify "*" without specifying
     * <code>Condition</code>, avoid creating rules that may match undesirable events.
     * To create more secure rules, make sure that the event pattern for each rule
     * contains an <code>account</code> field with a specific account ID from which to
     * receive events. Rules with an account field do not match any events sent from
     * other accounts.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The 12-digit Amazon Web Services account ID that you are permitting to put
     * events to your default event bus. Specify "*" to permit any account to put
     * events to your default event bus.</p> <p>If you specify "*" without specifying
     * <code>Condition</code>, avoid creating rules that may match undesirable events.
     * To create more secure rules, make sure that the event pattern for each rule
     * contains an <code>account</code> field with a specific account ID from which to
     * receive events. Rules with an account field do not match any events sent from
     * other accounts.</p>
     */
    inline PutPermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account ID that you are permitting to put
     * events to your default event bus. Specify "*" to permit any account to put
     * events to your default event bus.</p> <p>If you specify "*" without specifying
     * <code>Condition</code>, avoid creating rules that may match undesirable events.
     * To create more secure rules, make sure that the event pattern for each rule
     * contains an <code>account</code> field with a specific account ID from which to
     * receive events. Rules with an account field do not match any events sent from
     * other accounts.</p>
     */
    inline PutPermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The 12-digit Amazon Web Services account ID that you are permitting to put
     * events to your default event bus. Specify "*" to permit any account to put
     * events to your default event bus.</p> <p>If you specify "*" without specifying
     * <code>Condition</code>, avoid creating rules that may match undesirable events.
     * To create more secure rules, make sure that the event pattern for each rule
     * contains an <code>account</code> field with a specific account ID from which to
     * receive events. Rules with an account field do not match any events sent from
     * other accounts.</p>
     */
    inline PutPermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>An identifier string for the external account that you are granting
     * permissions to. If you later want to revoke the permission for this external
     * account, specify this <code>StatementId</code> when you run <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemovePermission.html">RemovePermission</a>.</p>
     *  <p>Each <code>StatementId</code> must be unique.</p> 
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>An identifier string for the external account that you are granting
     * permissions to. If you later want to revoke the permission for this external
     * account, specify this <code>StatementId</code> when you run <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemovePermission.html">RemovePermission</a>.</p>
     *  <p>Each <code>StatementId</code> must be unique.</p> 
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>An identifier string for the external account that you are granting
     * permissions to. If you later want to revoke the permission for this external
     * account, specify this <code>StatementId</code> when you run <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemovePermission.html">RemovePermission</a>.</p>
     *  <p>Each <code>StatementId</code> must be unique.</p> 
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>An identifier string for the external account that you are granting
     * permissions to. If you later want to revoke the permission for this external
     * account, specify this <code>StatementId</code> when you run <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemovePermission.html">RemovePermission</a>.</p>
     *  <p>Each <code>StatementId</code> must be unique.</p> 
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>An identifier string for the external account that you are granting
     * permissions to. If you later want to revoke the permission for this external
     * account, specify this <code>StatementId</code> when you run <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemovePermission.html">RemovePermission</a>.</p>
     *  <p>Each <code>StatementId</code> must be unique.</p> 
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>An identifier string for the external account that you are granting
     * permissions to. If you later want to revoke the permission for this external
     * account, specify this <code>StatementId</code> when you run <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemovePermission.html">RemovePermission</a>.</p>
     *  <p>Each <code>StatementId</code> must be unique.</p> 
     */
    inline PutPermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>An identifier string for the external account that you are granting
     * permissions to. If you later want to revoke the permission for this external
     * account, specify this <code>StatementId</code> when you run <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemovePermission.html">RemovePermission</a>.</p>
     *  <p>Each <code>StatementId</code> must be unique.</p> 
     */
    inline PutPermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>An identifier string for the external account that you are granting
     * permissions to. If you later want to revoke the permission for this external
     * account, specify this <code>StatementId</code> when you run <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemovePermission.html">RemovePermission</a>.</p>
     *  <p>Each <code>StatementId</code> must be unique.</p> 
     */
    inline PutPermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>This parameter enables you to limit the permission to accounts that fulfill a
     * certain condition, such as being a member of a certain Amazon Web Services
     * organization. For more information about Amazon Web Services Organizations, see
     * <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * Is Amazon Web Services Organizations</a> in the <i>Amazon Web Services
     * Organizations User Guide</i>.</p> <p>If you specify <code>Condition</code> with
     * an Amazon Web Services organization ID, and specify "*" as the value for
     * <code>Principal</code>, you grant permission to all the accounts in the named
     * organization.</p> <p>The <code>Condition</code> is a JSON string which must
     * contain <code>Type</code>, <code>Key</code>, and <code>Value</code> fields.</p>
     */
    inline const Condition& GetCondition() const{ return m_condition; }

    /**
     * <p>This parameter enables you to limit the permission to accounts that fulfill a
     * certain condition, such as being a member of a certain Amazon Web Services
     * organization. For more information about Amazon Web Services Organizations, see
     * <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * Is Amazon Web Services Organizations</a> in the <i>Amazon Web Services
     * Organizations User Guide</i>.</p> <p>If you specify <code>Condition</code> with
     * an Amazon Web Services organization ID, and specify "*" as the value for
     * <code>Principal</code>, you grant permission to all the accounts in the named
     * organization.</p> <p>The <code>Condition</code> is a JSON string which must
     * contain <code>Type</code>, <code>Key</code>, and <code>Value</code> fields.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>This parameter enables you to limit the permission to accounts that fulfill a
     * certain condition, such as being a member of a certain Amazon Web Services
     * organization. For more information about Amazon Web Services Organizations, see
     * <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * Is Amazon Web Services Organizations</a> in the <i>Amazon Web Services
     * Organizations User Guide</i>.</p> <p>If you specify <code>Condition</code> with
     * an Amazon Web Services organization ID, and specify "*" as the value for
     * <code>Principal</code>, you grant permission to all the accounts in the named
     * organization.</p> <p>The <code>Condition</code> is a JSON string which must
     * contain <code>Type</code>, <code>Key</code>, and <code>Value</code> fields.</p>
     */
    inline void SetCondition(const Condition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>This parameter enables you to limit the permission to accounts that fulfill a
     * certain condition, such as being a member of a certain Amazon Web Services
     * organization. For more information about Amazon Web Services Organizations, see
     * <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * Is Amazon Web Services Organizations</a> in the <i>Amazon Web Services
     * Organizations User Guide</i>.</p> <p>If you specify <code>Condition</code> with
     * an Amazon Web Services organization ID, and specify "*" as the value for
     * <code>Principal</code>, you grant permission to all the accounts in the named
     * organization.</p> <p>The <code>Condition</code> is a JSON string which must
     * contain <code>Type</code>, <code>Key</code>, and <code>Value</code> fields.</p>
     */
    inline void SetCondition(Condition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>This parameter enables you to limit the permission to accounts that fulfill a
     * certain condition, such as being a member of a certain Amazon Web Services
     * organization. For more information about Amazon Web Services Organizations, see
     * <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * Is Amazon Web Services Organizations</a> in the <i>Amazon Web Services
     * Organizations User Guide</i>.</p> <p>If you specify <code>Condition</code> with
     * an Amazon Web Services organization ID, and specify "*" as the value for
     * <code>Principal</code>, you grant permission to all the accounts in the named
     * organization.</p> <p>The <code>Condition</code> is a JSON string which must
     * contain <code>Type</code>, <code>Key</code>, and <code>Value</code> fields.</p>
     */
    inline PutPermissionRequest& WithCondition(const Condition& value) { SetCondition(value); return *this;}

    /**
     * <p>This parameter enables you to limit the permission to accounts that fulfill a
     * certain condition, such as being a member of a certain Amazon Web Services
     * organization. For more information about Amazon Web Services Organizations, see
     * <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * Is Amazon Web Services Organizations</a> in the <i>Amazon Web Services
     * Organizations User Guide</i>.</p> <p>If you specify <code>Condition</code> with
     * an Amazon Web Services organization ID, and specify "*" as the value for
     * <code>Principal</code>, you grant permission to all the accounts in the named
     * organization.</p> <p>The <code>Condition</code> is a JSON string which must
     * contain <code>Type</code>, <code>Key</code>, and <code>Value</code> fields.</p>
     */
    inline PutPermissionRequest& WithCondition(Condition&& value) { SetCondition(std::move(value)); return *this;}


    /**
     * <p>A JSON string that describes the permission policy statement. You can include
     * a <code>Policy</code> parameter in the request instead of using the
     * <code>StatementId</code>, <code>Action</code>, <code>Principal</code>, or
     * <code>Condition</code> parameters.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A JSON string that describes the permission policy statement. You can include
     * a <code>Policy</code> parameter in the request instead of using the
     * <code>StatementId</code>, <code>Action</code>, <code>Principal</code>, or
     * <code>Condition</code> parameters.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A JSON string that describes the permission policy statement. You can include
     * a <code>Policy</code> parameter in the request instead of using the
     * <code>StatementId</code>, <code>Action</code>, <code>Principal</code>, or
     * <code>Condition</code> parameters.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A JSON string that describes the permission policy statement. You can include
     * a <code>Policy</code> parameter in the request instead of using the
     * <code>StatementId</code>, <code>Action</code>, <code>Principal</code>, or
     * <code>Condition</code> parameters.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A JSON string that describes the permission policy statement. You can include
     * a <code>Policy</code> parameter in the request instead of using the
     * <code>StatementId</code>, <code>Action</code>, <code>Principal</code>, or
     * <code>Condition</code> parameters.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A JSON string that describes the permission policy statement. You can include
     * a <code>Policy</code> parameter in the request instead of using the
     * <code>StatementId</code>, <code>Action</code>, <code>Principal</code>, or
     * <code>Condition</code> parameters.</p>
     */
    inline PutPermissionRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A JSON string that describes the permission policy statement. You can include
     * a <code>Policy</code> parameter in the request instead of using the
     * <code>StatementId</code>, <code>Action</code>, <code>Principal</code>, or
     * <code>Condition</code> parameters.</p>
     */
    inline PutPermissionRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON string that describes the permission policy statement. You can include
     * a <code>Policy</code> parameter in the request instead of using the
     * <code>StatementId</code>, <code>Action</code>, <code>Principal</code>, or
     * <code>Condition</code> parameters.</p>
     */
    inline PutPermissionRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_eventBusName;
    bool m_eventBusNameHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    Condition m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
