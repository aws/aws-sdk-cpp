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
  class AWS_CODECOMMIT_API PostCommentReplyResult
  {
  public:
    PostCommentReplyResult();
    PostCommentReplyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PostCommentReplyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
