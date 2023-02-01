/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateResourcePolicyRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourcePolicy"; }

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
    inline UpdateResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline UpdateResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline UpdateResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A resource policy to add to the resource. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>. </p> <p>If the policy isn't valid, Amazon Lex
     * returns a validation exception.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A resource policy to add to the resource. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>. </p> <p>If the policy isn't valid, Amazon Lex
     * returns a validation exception.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A resource policy to add to the resource. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>. </p> <p>If the policy isn't valid, Amazon Lex
     * returns a validation exception.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A resource policy to add to the resource. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>. </p> <p>If the policy isn't valid, Amazon Lex
     * returns a validation exception.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A resource policy to add to the resource. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>. </p> <p>If the policy isn't valid, Amazon Lex
     * returns a validation exception.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A resource policy to add to the resource. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>. </p> <p>If the policy isn't valid, Amazon Lex
     * returns a validation exception.</p>
     */
    inline UpdateResourcePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A resource policy to add to the resource. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>. </p> <p>If the policy isn't valid, Amazon Lex
     * returns a validation exception.</p>
     */
    inline UpdateResourcePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A resource policy to add to the resource. The policy is a JSON structure that
     * contains one or more statements that define the policy. The policy must follow
     * the IAM syntax. For more information about the contents of a JSON policy
     * document, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">
     * IAM JSON policy reference </a>. </p> <p>If the policy isn't valid, Amazon Lex
     * returns a validation exception.</p>
     */
    inline UpdateResourcePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The identifier of the revision of the policy to update. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline const Aws::String& GetExpectedRevisionId() const{ return m_expectedRevisionId; }

    /**
     * <p>The identifier of the revision of the policy to update. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }

    /**
     * <p>The identifier of the revision of the policy to update. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline void SetExpectedRevisionId(const Aws::String& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = value; }

    /**
     * <p>The identifier of the revision of the policy to update. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline void SetExpectedRevisionId(Aws::String&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::move(value); }

    /**
     * <p>The identifier of the revision of the policy to update. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline void SetExpectedRevisionId(const char* value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId.assign(value); }

    /**
     * <p>The identifier of the revision of the policy to update. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline UpdateResourcePolicyRequest& WithExpectedRevisionId(const Aws::String& value) { SetExpectedRevisionId(value); return *this;}

    /**
     * <p>The identifier of the revision of the policy to update. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline UpdateResourcePolicyRequest& WithExpectedRevisionId(Aws::String&& value) { SetExpectedRevisionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the revision of the policy to update. If this revision ID
     * doesn't match the current revision ID, Amazon Lex throws an exception.</p> <p>If
     * you don't specify a revision, Amazon Lex overwrites the contents of the policy
     * with the new values.</p>
     */
    inline UpdateResourcePolicyRequest& WithExpectedRevisionId(const char* value) { SetExpectedRevisionId(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_expectedRevisionId;
    bool m_expectedRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
