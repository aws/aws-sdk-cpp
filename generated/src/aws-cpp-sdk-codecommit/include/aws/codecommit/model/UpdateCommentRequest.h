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
    AWS_CODECOMMIT_API UpdateCommentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComment"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }

    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }

    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }

    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }

    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline UpdateCommentRequest& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}

    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline UpdateCommentRequest& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the comment you want to update. To get this ID,
     * use <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline UpdateCommentRequest& WithCommentId(const char* value) { SetCommentId(value); return *this;}


    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline UpdateCommentRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline UpdateCommentRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The updated content to replace the existing content of the comment.</p>
     */
    inline UpdateCommentRequest& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
