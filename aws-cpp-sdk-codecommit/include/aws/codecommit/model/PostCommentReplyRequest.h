/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API PostCommentReplyRequest : public CodeCommitRequest
  {
  public:
    PostCommentReplyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostCommentReply"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the comment to which you want to reply. To get
     * this ID, use <a>GetCommentsForComparedCommit</a> or
     * <a>GetCommentsForPullRequest</a>.</p>
     */
    inline const Aws::String& GetInReplyTo() const{ return m_inReplyTo; }

    /**
     * <p>The system-generated ID of the comment to which you want to reply. To get
     * this ID, use <a>GetCommentsForComparedCommit</a> or
     * <a>GetCommentsForPullRequest</a>.</p>
     */
    inline bool InReplyToHasBeenSet() const { return m_inReplyToHasBeenSet; }

    /**
     * <p>The system-generated ID of the comment to which you want to reply. To get
     * this ID, use <a>GetCommentsForComparedCommit</a> or
     * <a>GetCommentsForPullRequest</a>.</p>
     */
    inline void SetInReplyTo(const Aws::String& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = value; }

    /**
     * <p>The system-generated ID of the comment to which you want to reply. To get
     * this ID, use <a>GetCommentsForComparedCommit</a> or
     * <a>GetCommentsForPullRequest</a>.</p>
     */
    inline void SetInReplyTo(Aws::String&& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = std::move(value); }

    /**
     * <p>The system-generated ID of the comment to which you want to reply. To get
     * this ID, use <a>GetCommentsForComparedCommit</a> or
     * <a>GetCommentsForPullRequest</a>.</p>
     */
    inline void SetInReplyTo(const char* value) { m_inReplyToHasBeenSet = true; m_inReplyTo.assign(value); }

    /**
     * <p>The system-generated ID of the comment to which you want to reply. To get
     * this ID, use <a>GetCommentsForComparedCommit</a> or
     * <a>GetCommentsForPullRequest</a>.</p>
     */
    inline PostCommentReplyRequest& WithInReplyTo(const Aws::String& value) { SetInReplyTo(value); return *this;}

    /**
     * <p>The system-generated ID of the comment to which you want to reply. To get
     * this ID, use <a>GetCommentsForComparedCommit</a> or
     * <a>GetCommentsForPullRequest</a>.</p>
     */
    inline PostCommentReplyRequest& WithInReplyTo(Aws::String&& value) { SetInReplyTo(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the comment to which you want to reply. To get
     * this ID, use <a>GetCommentsForComparedCommit</a> or
     * <a>GetCommentsForPullRequest</a>.</p>
     */
    inline PostCommentReplyRequest& WithInReplyTo(const char* value) { SetInReplyTo(value); return *this;}


    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline PostCommentReplyRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline PostCommentReplyRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline PostCommentReplyRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The contents of your reply to a comment.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The contents of your reply to a comment.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The contents of your reply to a comment.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The contents of your reply to a comment.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The contents of your reply to a comment.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The contents of your reply to a comment.</p>
     */
    inline PostCommentReplyRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The contents of your reply to a comment.</p>
     */
    inline PostCommentReplyRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The contents of your reply to a comment.</p>
     */
    inline PostCommentReplyRequest& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_inReplyTo;
    bool m_inReplyToHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
