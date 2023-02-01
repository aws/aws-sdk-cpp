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
  class GetCommentResult
  {
  public:
    AWS_CODECOMMIT_API GetCommentResult();
    AWS_CODECOMMIT_API GetCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The contents of the comment.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }

    /**
     * <p>The contents of the comment.</p>
     */
    inline void SetComment(const Comment& value) { m_comment = value; }

    /**
     * <p>The contents of the comment.</p>
     */
    inline void SetComment(Comment&& value) { m_comment = std::move(value); }

    /**
     * <p>The contents of the comment.</p>
     */
    inline GetCommentResult& WithComment(const Comment& value) { SetComment(value); return *this;}

    /**
     * <p>The contents of the comment.</p>
     */
    inline GetCommentResult& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}

  private:

    Comment m_comment;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
