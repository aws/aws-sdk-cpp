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
  class PutCommentReactionRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API PutCommentReactionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCommentReaction"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }

    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }

    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }

    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }

    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }

    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline PutCommentReactionRequest& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}

    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline PutCommentReactionRequest& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline PutCommentReactionRequest& WithCommentId(const char* value) { SetCommentId(value); return *this;}


    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in AWS CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">AWS
     * CodeCommit User Guide</a>.</p>
     */
    inline const Aws::String& GetReactionValue() const{ return m_reactionValue; }

    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in AWS CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">AWS
     * CodeCommit User Guide</a>.</p>
     */
    inline bool ReactionValueHasBeenSet() const { return m_reactionValueHasBeenSet; }

    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in AWS CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">AWS
     * CodeCommit User Guide</a>.</p>
     */
    inline void SetReactionValue(const Aws::String& value) { m_reactionValueHasBeenSet = true; m_reactionValue = value; }

    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in AWS CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">AWS
     * CodeCommit User Guide</a>.</p>
     */
    inline void SetReactionValue(Aws::String&& value) { m_reactionValueHasBeenSet = true; m_reactionValue = std::move(value); }

    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in AWS CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">AWS
     * CodeCommit User Guide</a>.</p>
     */
    inline void SetReactionValue(const char* value) { m_reactionValueHasBeenSet = true; m_reactionValue.assign(value); }

    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in AWS CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">AWS
     * CodeCommit User Guide</a>.</p>
     */
    inline PutCommentReactionRequest& WithReactionValue(const Aws::String& value) { SetReactionValue(value); return *this;}

    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in AWS CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">AWS
     * CodeCommit User Guide</a>.</p>
     */
    inline PutCommentReactionRequest& WithReactionValue(Aws::String&& value) { SetReactionValue(std::move(value)); return *this;}

    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in AWS CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">AWS
     * CodeCommit User Guide</a>.</p>
     */
    inline PutCommentReactionRequest& WithReactionValue(const char* value) { SetReactionValue(value); return *this;}

  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_reactionValue;
    bool m_reactionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
