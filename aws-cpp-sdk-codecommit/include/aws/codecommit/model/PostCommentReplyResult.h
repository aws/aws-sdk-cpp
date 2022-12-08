/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/Comment.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{
  class PostCommentReplyResult
  {
  public:
    AWS_CODECOMMIT_API PostCommentReplyResult();
    AWS_CODECOMMIT_API PostCommentReplyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API PostCommentReplyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the reply to a comment.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }

    /**
     * <p>Information about the reply to a comment.</p>
     */
    inline void SetComment(const Comment& value) { m_comment = value; }

    /**
     * <p>Information about the reply to a comment.</p>
     */
    inline void SetComment(Comment&& value) { m_comment = std::move(value); }

    /**
     * <p>Information about the reply to a comment.</p>
     */
    inline PostCommentReplyResult& WithComment(const Comment& value) { SetComment(value); return *this;}

    /**
     * <p>Information about the reply to a comment.</p>
     */
    inline PostCommentReplyResult& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}

  private:

    Comment m_comment;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
