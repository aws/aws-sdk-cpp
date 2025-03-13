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
    AWS_LEXMODELSV2_API DeleteResourcePolicyStatementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicyStatement"; }

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
    DeleteResourcePolicyStatementRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the statement (SID) to delete from the policy.</p>
     */
    inline const Aws::String& GetStatementId() const { return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    template<typename StatementIdT = Aws::String>
    void SetStatementId(StatementIdT&& value) { m_statementIdHasBeenSet = true; m_statementId = std::forward<StatementIdT>(value); }
    template<typename StatementIdT = Aws::String>
    DeleteResourcePolicyStatementRequest& WithStatementId(StatementIdT&& value) { SetStatementId(std::forward<StatementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the revision of the policy to delete the statement from. If
     * this revision ID doesn't match the current revision ID, Amazon Lex throws an
     * exception.</p> <p>If you don't specify a revision, Amazon Lex removes the
     * current contents of the statement. </p>
     */
    inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
    template<typename ExpectedRevisionIdT = Aws::String>
    void SetExpectedRevisionId(ExpectedRevisionIdT&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value); }
    template<typename ExpectedRevisionIdT = Aws::String>
    DeleteResourcePolicyStatementRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) { SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value)); return *this;}
    ///@}
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
