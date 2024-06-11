﻿/**
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
  class GetCommentRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API GetCommentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComment"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique, system-generated ID of the comment. To get this ID, use
     * <a>GetCommentsForComparedCommit</a> or <a>GetCommentsForPullRequest</a>.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }
    inline GetCommentRequest& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}
    inline GetCommentRequest& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}
    inline GetCommentRequest& WithCommentId(const char* value) { SetCommentId(value); return *this;}
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
