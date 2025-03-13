/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class UpdateCommentRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdateCommentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComment"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline const Aws::String& GetCommentId() const { return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    template<typename CommentIdT = Aws::String>
    void SetCommentId(CommentIdT&& value) { m_commentIdHasBeenSet = true; m_commentId = std::forward<CommentIdT>(value); }
    template<typename CommentIdT = Aws::String>
    UpdateCommentRequest& WithCommentId(CommentIdT&& value) { SetCommentId(std::forward<CommentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    UpdateCommentRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
