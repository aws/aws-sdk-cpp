/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a specific comment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Comment">AWS
   * API Reference</a></p>
   */
  class Comment
  {
  public:
    AWS_CODECOMMIT_API Comment() = default;
    AWS_CODECOMMIT_API Comment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Comment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated comment ID.</p>
     */
    inline const Aws::String& GetCommentId() const { return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    template<typename CommentIdT = Aws::String>
    void SetCommentId(CommentIdT&& value) { m_commentIdHasBeenSet = true; m_commentId = std::forward<CommentIdT>(value); }
    template<typename CommentIdT = Aws::String>
    Comment& WithCommentId(CommentIdT&& value) { SetCommentId(std::forward<CommentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the comment.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    Comment& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline const Aws::String& GetInReplyTo() const { return m_inReplyTo; }
    inline bool InReplyToHasBeenSet() const { return m_inReplyToHasBeenSet; }
    template<typename InReplyToT = Aws::String>
    void SetInReplyTo(InReplyToT&& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = std::forward<InReplyToT>(value); }
    template<typename InReplyToT = Aws::String>
    Comment& WithInReplyTo(InReplyToT&& value) { SetInReplyTo(std::forward<InReplyToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    Comment& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    Comment& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline const Aws::String& GetAuthorArn() const { return m_authorArn; }
    inline bool AuthorArnHasBeenSet() const { return m_authorArnHasBeenSet; }
    template<typename AuthorArnT = Aws::String>
    void SetAuthorArn(AuthorArnT&& value) { m_authorArnHasBeenSet = true; m_authorArn = std::forward<AuthorArnT>(value); }
    template<typename AuthorArnT = Aws::String>
    Comment& WithAuthorArn(AuthorArnT&& value) { SetAuthorArn(std::forward<AuthorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline bool GetDeleted() const { return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline Comment& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    Comment& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallerReactions() const { return m_callerReactions; }
    inline bool CallerReactionsHasBeenSet() const { return m_callerReactionsHasBeenSet; }
    template<typename CallerReactionsT = Aws::Vector<Aws::String>>
    void SetCallerReactions(CallerReactionsT&& value) { m_callerReactionsHasBeenSet = true; m_callerReactions = std::forward<CallerReactionsT>(value); }
    template<typename CallerReactionsT = Aws::Vector<Aws::String>>
    Comment& WithCallerReactions(CallerReactionsT&& value) { SetCallerReactions(std::forward<CallerReactionsT>(value)); return *this;}
    template<typename CallerReactionsT = Aws::String>
    Comment& AddCallerReactions(CallerReactionsT&& value) { m_callerReactionsHasBeenSet = true; m_callerReactions.emplace_back(std::forward<CallerReactionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetReactionCounts() const { return m_reactionCounts; }
    inline bool ReactionCountsHasBeenSet() const { return m_reactionCountsHasBeenSet; }
    template<typename ReactionCountsT = Aws::Map<Aws::String, int>>
    void SetReactionCounts(ReactionCountsT&& value) { m_reactionCountsHasBeenSet = true; m_reactionCounts = std::forward<ReactionCountsT>(value); }
    template<typename ReactionCountsT = Aws::Map<Aws::String, int>>
    Comment& WithReactionCounts(ReactionCountsT&& value) { SetReactionCounts(std::forward<ReactionCountsT>(value)); return *this;}
    inline Comment& AddReactionCounts(Aws::String key, int value) {
      m_reactionCountsHasBeenSet = true; m_reactionCounts.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_inReplyTo;
    bool m_inReplyToHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_authorArn;
    bool m_authorArnHasBeenSet = false;

    bool m_deleted{false};
    bool m_deletedHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_callerReactions;
    bool m_callerReactionsHasBeenSet = false;

    Aws::Map<Aws::String, int> m_reactionCounts;
    bool m_reactionCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
