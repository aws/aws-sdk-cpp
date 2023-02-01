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
  class UpdateCommentResult
  {
  public:
    AWS_CODECOMMIT_API UpdateCommentResult();
    AWS_CODECOMMIT_API UpdateCommentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API UpdateCommentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the updated comment.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }

    /**
     * <p>Information about the updated comment.</p>
     */
    inline void SetComment(const Comment& value) { m_comment = value; }

    /**
     * <p>Information about the updated comment.</p>
     */
    inline void SetComment(Comment&& value) { m_comment = std::move(value); }

    /**
     * <p>Information about the updated comment.</p>
     */
    inline UpdateCommentResult& WithComment(const Comment& value) { SetComment(value); return *this;}

    /**
     * <p>Information about the updated comment.</p>
     */
    inline UpdateCommentResult& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}

  private:

    Comment m_comment;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
