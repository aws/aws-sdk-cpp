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
  class GetCommentReactionsRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetCommentReactionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCommentReactions"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the comment for which you want to get reactions information.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }

    /**
     * <p>The ID of the comment for which you want to get reactions information.</p>
     */
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }

    /**
     * <p>The ID of the comment for which you want to get reactions information.</p>
     */
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }

    /**
     * <p>The ID of the comment for which you want to get reactions information.</p>
     */
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }

    /**
     * <p>The ID of the comment for which you want to get reactions information.</p>
     */
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }

    /**
     * <p>The ID of the comment for which you want to get reactions information.</p>
     */
    inline GetCommentReactionsRequest& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}

    /**
     * <p>The ID of the comment for which you want to get reactions information.</p>
     */
    inline GetCommentReactionsRequest& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the comment for which you want to get reactions information.</p>
     */
    inline GetCommentReactionsRequest& WithCommentId(const char* value) { SetCommentId(value); return *this;}


    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user or identity for which
     * you want to get reaction information.</p>
     */
    inline const Aws::String& GetReactionUserArn() const{ return m_reactionUserArn; }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user or identity for which
     * you want to get reaction information.</p>
     */
    inline bool ReactionUserArnHasBeenSet() const { return m_reactionUserArnHasBeenSet; }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user or identity for which
     * you want to get reaction information.</p>
     */
    inline void SetReactionUserArn(const Aws::String& value) { m_reactionUserArnHasBeenSet = true; m_reactionUserArn = value; }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user or identity for which
     * you want to get reaction information.</p>
     */
    inline void SetReactionUserArn(Aws::String&& value) { m_reactionUserArnHasBeenSet = true; m_reactionUserArn = std::move(value); }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user or identity for which
     * you want to get reaction information.</p>
     */
    inline void SetReactionUserArn(const char* value) { m_reactionUserArnHasBeenSet = true; m_reactionUserArn.assign(value); }

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user or identity for which
     * you want to get reaction information.</p>
     */
    inline GetCommentReactionsRequest& WithReactionUserArn(const Aws::String& value) { SetReactionUserArn(value); return *this;}

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user or identity for which
     * you want to get reaction information.</p>
     */
    inline GetCommentReactionsRequest& WithReactionUserArn(Aws::String&& value) { SetReactionUserArn(std::move(value)); return *this;}

    /**
     * <p>Optional. The Amazon Resource Name (ARN) of the user or identity for which
     * you want to get reaction information.</p>
     */
    inline GetCommentReactionsRequest& WithReactionUserArn(const char* value) { SetReactionUserArn(value); return *this;}


    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline GetCommentReactionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline GetCommentReactionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results. </p>
     */
    inline GetCommentReactionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results. The default is the same as the allowed maximum, 1,000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results. The default is the same as the allowed maximum, 1,000.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results. The default is the same as the allowed maximum, 1,000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results. The default is the same as the allowed maximum, 1,000.</p>
     */
    inline GetCommentReactionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_reactionUserArn;
    bool m_reactionUserArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
