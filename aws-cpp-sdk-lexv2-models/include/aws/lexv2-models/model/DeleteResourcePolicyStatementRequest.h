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
  class DeleteResourcePolicyStatementRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteResourcePolicyStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicyStatement"; }

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
    inline DeleteResourcePolicyStatementRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline DeleteResourcePolicyStatementRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bot or bot alias that the resource
     * policy is attached to.</p>
     */
    inline DeleteResourcePolicyStatementRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline DeleteResourcePolicyStatementRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline DeleteResourcePolicyStatementRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline DeleteResourcePolicyStatementRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline const Aws::String& GetExpectedRevisionId() const{ return m_expectedRevisionId; }

    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }

    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline void SetExpectedRevisionId(const Aws::String& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = value; }

    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline void SetExpectedRevisionId(Aws::String&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::move(value); }

    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline void SetExpectedRevisionId(const char* value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId.assign(value); }

    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline DeleteResourcePolicyStatementRequest& WithExpectedRevisionId(const Aws::String& value) { SetExpectedRevisionId(value); return *this;}

    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline DeleteResourcePolicyStatementRequest& WithExpectedRevisionId(Aws::String&& value) { SetExpectedRevisionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline DeleteResourcePolicyStatementRequest& WithExpectedRevisionId(const char* value) { SetExpectedRevisionId(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    Aws::String m_expectedRevisionId;
    bool m_expectedRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
