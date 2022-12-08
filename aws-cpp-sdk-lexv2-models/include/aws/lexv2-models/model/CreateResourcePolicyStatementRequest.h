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
    AWS_LEXMODELSV2_API CreateResourcePolicyStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourcePolicyStatement"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

    AWS_LEXMODELSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline CreateResourcePolicyStatementRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline CreateResourcePolicyStatementRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>The name of the statement. The ID is the same as the <code>Sid</code> IAM
     * property. The statement name must be unique within the policy. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_sid.html">IAM
     * JSON policy elements: Sid</a>. </p>
     */
    inline CreateResourcePolicyStatementRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>Determines whether the statement allows or denies access to the resource.</p>
     */
    inline const Effect& GetEffect() const{ return m_effect; }

    /**
     * <p>Determines whether the statement allows or denies access to the resource.</p>
     */
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }

    /**
     * <p>Determines whether the statement allows or denies access to the resource.</p>
     */
    inline void SetEffect(const Effect& value) { m_effectHasBeenSet = true; m_effect = value; }

    /**
     * <p>Determines whether the statement allows or denies access to the resource.</p>
     */
    inline void SetEffect(Effect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }

    /**
     * <p>Determines whether the statement allows or denies access to the resource.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithEffect(const Effect& value) { SetEffect(value); return *this;}

    /**
     * <p>Determines whether the statement allows or denies access to the resource.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithEffect(Effect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>An IAM principal, such as an IAM users, IAM roles, or AWS services that is
     * allowed or denied access to a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">AWS
     * JSON policy elements: Principal</a>.</p>
     */
    inline const Aws::Vector<Principal>& GetPrincipal() const{ return m_principal; }

    /**
     * <p>An IAM principal, such as an IAM users, IAM roles, or AWS services that is
     * allowed or denied access to a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">AWS
     * JSON policy elements: Principal</a>.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>An IAM principal, such as an IAM users, IAM roles, or AWS services that is
     * allowed or denied access to a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">AWS
     * JSON policy elements: Principal</a>.</p>
     */
    inline void SetPrincipal(const Aws::Vector<Principal>& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>An IAM principal, such as an IAM users, IAM roles, or AWS services that is
     * allowed or denied access to a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">AWS
     * JSON policy elements: Principal</a>.</p>
     */
    inline void SetPrincipal(Aws::Vector<Principal>&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>An IAM principal, such as an IAM users, IAM roles, or AWS services that is
     * allowed or denied access to a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">AWS
     * JSON policy elements: Principal</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithPrincipal(const Aws::Vector<Principal>& value) { SetPrincipal(value); return *this;}

    /**
     * <p>An IAM principal, such as an IAM users, IAM roles, or AWS services that is
     * allowed or denied access to a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">AWS
     * JSON policy elements: Principal</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithPrincipal(Aws::Vector<Principal>&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>An IAM principal, such as an IAM users, IAM roles, or AWS services that is
     * allowed or denied access to a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">AWS
     * JSON policy elements: Principal</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddPrincipal(const Principal& value) { m_principalHasBeenSet = true; m_principal.push_back(value); return *this; }

    /**
     * <p>An IAM principal, such as an IAM users, IAM roles, or AWS services that is
     * allowed or denied access to a resource. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">AWS
     * JSON policy elements: Principal</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddPrincipal(Principal&& value) { m_principalHasBeenSet = true; m_principal.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const{ return m_action; }

    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline void SetAction(const Aws::Vector<Aws::String>& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline void SetAction(Aws::Vector<Aws::String>&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithAction(const Aws::Vector<Aws::String>& value) { SetAction(value); return *this;}

    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithAction(Aws::Vector<Aws::String>&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }

    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Lex action that this policy either allows or denies. The action
     * must apply to the resource type of the specified ARN. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazonlexv2.html">
     * Actions, resources, and condition keys for Amazon Lex V2</a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddAction(const char* value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }


    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetCondition() const{ return m_condition; }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline void SetCondition(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline void SetCondition(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithCondition(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetCondition(value); return *this;}

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithCondition(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddCondition(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddCondition(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddCondition(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddCondition(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddCondition(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies a condition when the policy is in effect. If the principal of the
     * policy is a service principal, you must provide two condition blocks, one with a
     * SourceAccount global condition key and one with a SourceArn global condition
     * key.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_condition.html">IAM
     * JSON policy elements: Condition </a>.</p>
     */
    inline CreateResourcePolicyStatementRequest& AddCondition(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }


    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline const Aws::String& GetExpectedRevisionId() const{ return m_expectedRevisionId; }

    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }

    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline void SetExpectedRevisionId(const Aws::String& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = value; }

    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline void SetExpectedRevisionId(Aws::String&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::move(value); }

    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline void SetExpectedRevisionId(const char* value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId.assign(value); }

    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithExpectedRevisionId(const Aws::String& value) { SetExpectedRevisionId(value); return *this;}

    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithExpectedRevisionId(Aws::String&& value) { SetExpectedRevisionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the revision of the policy to edit. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline CreateResourcePolicyStatementRequest& WithExpectedRevisionId(const char* value) { SetExpectedRevisionId(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    Effect m_effect;
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
