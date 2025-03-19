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
    AWS_CODECOMMIT_API PutCommentReactionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCommentReaction"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the comment to which you want to add or update a reaction.</p>
     */
    inline const Aws::String& GetCommentId() const { return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    template<typename CommentIdT = Aws::String>
    void SetCommentId(CommentIdT&& value) { m_commentIdHasBeenSet = true; m_commentId = std::forward<CommentIdT>(value); }
    template<typename CommentIdT = Aws::String>
    PutCommentReactionRequest& WithCommentId(CommentIdT&& value) { SetCommentId(std::forward<CommentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The emoji reaction you want to add or update. To remove a reaction, provide a
     * value of blank or null. You can also provide the value of none. For information
     * about emoji reaction values supported in CodeCommit, see the <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-commit-comment.html#emoji-reaction-table">CodeCommit
     * User Guide</a>.</p>
     */
    inline const Aws::String& GetReactionValue() const { return m_reactionValue; }
    inline bool ReactionValueHasBeenSet() const { return m_reactionValueHasBeenSet; }
    template<typename ReactionValueT = Aws::String>
    void SetReactionValue(ReactionValueT&& value) { m_reactionValueHasBeenSet = true; m_reactionValue = std::forward<ReactionValueT>(value); }
    template<typename ReactionValueT = Aws::String>
    PutCommentReactionRequest& WithReactionValue(ReactionValueT&& value) { SetReactionValue(std::forward<ReactionValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_reactionValue;
    bool m_reactionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
