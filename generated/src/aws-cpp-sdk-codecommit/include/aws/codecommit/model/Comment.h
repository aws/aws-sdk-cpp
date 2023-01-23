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


    /**
     * <p>The system-generated comment ID.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline Comment& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline Comment& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline Comment& WithCommentId(const char* value) { SetCommentId(value); return *this;}


    /**
     * <p>The content of the comment.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the comment.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the comment.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the comment.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the comment.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the comment.</p>
     */
    inline Comment& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the comment.</p>
     */
    inline Comment& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the comment.</p>
     */
    inline Comment& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline const Aws::String& GetInReplyTo() const{ return m_inReplyTo; }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline bool InReplyToHasBeenSet() const { return m_inReplyToHasBeenSet; }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline void SetInReplyTo(const Aws::String& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = value; }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline void SetInReplyTo(Aws::String&& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = std::move(value); }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline void SetInReplyTo(const char* value) { m_inReplyToHasBeenSet = true; m_inReplyTo.assign(value); }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline Comment& WithInReplyTo(const Aws::String& value) { SetInReplyTo(value); return *this;}

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline Comment& WithInReplyTo(Aws::String&& value) { SetInReplyTo(std::move(value)); return *this;}

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline Comment& WithInReplyTo(const char* value) { SetInReplyTo(value); return *this;}


    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline Comment& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline Comment& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline Comment& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline Comment& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline const Aws::String& GetAuthorArn() const{ return m_authorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline bool AuthorArnHasBeenSet() const { return m_authorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline void SetAuthorArn(const Aws::String& value) { m_authorArnHasBeenSet = true; m_authorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline void SetAuthorArn(Aws::String&& value) { m_authorArnHasBeenSet = true; m_authorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline void SetAuthorArn(const char* value) { m_authorArnHasBeenSet = true; m_authorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline Comment& WithAuthorArn(const Aws::String& value) { SetAuthorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline Comment& WithAuthorArn(Aws::String&& value) { SetAuthorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline Comment& WithAuthorArn(const char* value) { SetAuthorArn(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }

    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline Comment& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline Comment& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline Comment& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline Comment& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallerReactions() const{ return m_callerReactions; }

    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline bool CallerReactionsHasBeenSet() const { return m_callerReactionsHasBeenSet; }

    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline void SetCallerReactions(const Aws::Vector<Aws::String>& value) { m_callerReactionsHasBeenSet = true; m_callerReactions = value; }

    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline void SetCallerReactions(Aws::Vector<Aws::String>&& value) { m_callerReactionsHasBeenSet = true; m_callerReactions = std::move(value); }

    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline Comment& WithCallerReactions(const Aws::Vector<Aws::String>& value) { SetCallerReactions(value); return *this;}

    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline Comment& WithCallerReactions(Aws::Vector<Aws::String>&& value) { SetCallerReactions(std::move(value)); return *this;}

    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline Comment& AddCallerReactions(const Aws::String& value) { m_callerReactionsHasBeenSet = true; m_callerReactions.push_back(value); return *this; }

    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline Comment& AddCallerReactions(Aws::String&& value) { m_callerReactionsHasBeenSet = true; m_callerReactions.push_back(std::move(value)); return *this; }

    /**
     * <p>The emoji reactions to a comment, if any, submitted by the user whose
     * credentials are associated with the call to the API.</p>
     */
    inline Comment& AddCallerReactions(const char* value) { m_callerReactionsHasBeenSet = true; m_callerReactions.push_back(value); return *this; }


    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetReactionCounts() const{ return m_reactionCounts; }

    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline bool ReactionCountsHasBeenSet() const { return m_reactionCountsHasBeenSet; }

    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline void SetReactionCounts(const Aws::Map<Aws::String, int>& value) { m_reactionCountsHasBeenSet = true; m_reactionCounts = value; }

    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline void SetReactionCounts(Aws::Map<Aws::String, int>&& value) { m_reactionCountsHasBeenSet = true; m_reactionCounts = std::move(value); }

    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline Comment& WithReactionCounts(const Aws::Map<Aws::String, int>& value) { SetReactionCounts(value); return *this;}

    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline Comment& WithReactionCounts(Aws::Map<Aws::String, int>&& value) { SetReactionCounts(std::move(value)); return *this;}

    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline Comment& AddReactionCounts(const Aws::String& key, int value) { m_reactionCountsHasBeenSet = true; m_reactionCounts.emplace(key, value); return *this; }

    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline Comment& AddReactionCounts(Aws::String&& key, int value) { m_reactionCountsHasBeenSet = true; m_reactionCounts.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string to integer map that represents the number of individual users who
     * have responded to a comment with the specified reactions.</p>
     */
    inline Comment& AddReactionCounts(const char* key, int value) { m_reactionCountsHasBeenSet = true; m_reactionCounts.emplace(key, value); return *this; }

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
