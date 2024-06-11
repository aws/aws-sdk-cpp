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
    AWS_CODECOMMIT_API Comment();
    AWS_CODECOMMIT_API Comment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Comment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated comment ID.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }
    inline Comment& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}
    inline Comment& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}
    inline Comment& WithCommentId(const char* value) { SetCommentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the comment.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline Comment& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline Comment& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline Comment& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline const Aws::String& GetInReplyTo() const{ return m_inReplyTo; }
    inline bool InReplyToHasBeenSet() const { return m_inReplyToHasBeenSet; }
    inline void SetInReplyTo(const Aws::String& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = value; }
    inline void SetInReplyTo(Aws::String&& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = std::move(value); }
    inline void SetInReplyTo(const char* value) { m_inReplyToHasBeenSet = true; m_inReplyTo.assign(value); }
    inline Comment& WithInReplyTo(const Aws::String& value) { SetInReplyTo(value); return *this;}
    inline Comment& WithInReplyTo(Aws::String&& value) { SetInReplyTo(std::move(value)); return *this;}
    inline Comment& WithInReplyTo(const char* value) { SetInReplyTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline Comment& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline Comment& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline Comment& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline Comment& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline const Aws::String& GetAuthorArn() const{ return m_authorArn; }
    inline bool AuthorArnHasBeenSet() const { return m_authorArnHasBeenSet; }
    inline void SetAuthorArn(const Aws::String& value) { m_authorArnHasBeenSet = true; m_authorArn = value; }
    inline void SetAuthorArn(Aws::String&& value) { m_authorArnHasBeenSet = true; m_authorArn = std::move(value); }
    inline void SetAuthorArn(const char* value) { m_authorArnHasBeenSet = true; m_authorArn.assign(value); }
    inline Comment& WithAuthorArn(const Aws::String& value) { SetAuthorArn(value); return *this;}
    inline Comment& WithAuthorArn(Aws::String&& value) { SetAuthorArn(std::move(value)); return *this;}
    inline Comment& WithAuthorArn(const char* value) { SetAuthorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }
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
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline Comment& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline Comment& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline Comment& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallerReactions() const{ return m_callerReactions; }
    inline bool CallerReactionsHasBeenSet() const { return m_callerReactionsHasBeenSet; }
    inline void SetCallerReactions(const Aws::Vector<Aws::String>& value) { m_callerReactionsHasBeenSet = true; m_callerReactions = value; }
    inline void SetCallerReactions(Aws::Vector<Aws::String>&& value) { m_callerReactionsHasBeenSet = true; m_callerReactions = std::move(value); }
    inline Comment& WithCallerReactions(const Aws::Vector<Aws::String>& value) { SetCallerReactions(value); return *this;}
    inline Comment& WithCallerReactions(Aws::Vector<Aws::String>&& value) { SetCallerReactions(std::move(value)); return *this;}
    inline Comment& AddCallerReactions(const Aws::String& value) { m_callerReactionsHasBeenSet = true; m_callerReactions.push_back(value); return *this; }
    inline Comment& AddCallerReactions(Aws::String&& value) { m_callerReactionsHasBeenSet = true; m_callerReactions.push_back(std::move(value)); return *this; }
    inline Comment& AddCallerReactions(const char* value) { m_callerReactionsHasBeenSet = true; m_callerReactions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetReactionCounts() const{ return m_reactionCounts; }
    inline bool ReactionCountsHasBeenSet() const { return m_reactionCountsHasBeenSet; }
    inline void SetReactionCounts(const Aws::Map<Aws::String, int>& value) { m_reactionCountsHasBeenSet = true; m_reactionCounts = value; }
    inline void SetReactionCounts(Aws::Map<Aws::String, int>&& value) { m_reactionCountsHasBeenSet = true; m_reactionCounts = std::move(value); }
    inline Comment& WithReactionCounts(const Aws::Map<Aws::String, int>& value) { SetReactionCounts(value); return *this;}
    inline Comment& WithReactionCounts(Aws::Map<Aws::String, int>&& value) { SetReactionCounts(std::move(value)); return *this;}
    inline Comment& AddReactionCounts(const Aws::String& key, int value) { m_reactionCountsHasBeenSet = true; m_reactionCounts.emplace(key, value); return *this; }
    inline Comment& AddReactionCounts(Aws::String&& key, int value) { m_reactionCountsHasBeenSet = true; m_reactionCounts.emplace(std::move(key), value); return *this; }
    inline Comment& AddReactionCounts(const char* key, int value) { m_reactionCountsHasBeenSet = true; m_reactionCounts.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_inReplyTo;
    bool m_inReplyToHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_authorArn;
    bool m_authorArnHasBeenSet = false;

    bool m_deleted;
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
