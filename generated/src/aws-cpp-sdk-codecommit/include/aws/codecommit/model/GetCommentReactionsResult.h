﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/ReactionForComment.h>
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
  class GetCommentReactionsResult
  {
  public:
    AWS_CODECOMMIT_API GetCommentReactionsResult();
    AWS_CODECOMMIT_API GetCommentReactionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetCommentReactionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of reactions to the specified comment.</p>
     */
    inline const Aws::Vector<ReactionForComment>& GetReactionsForComment() const{ return m_reactionsForComment; }
    inline void SetReactionsForComment(const Aws::Vector<ReactionForComment>& value) { m_reactionsForComment = value; }
    inline void SetReactionsForComment(Aws::Vector<ReactionForComment>&& value) { m_reactionsForComment = std::move(value); }
    inline GetCommentReactionsResult& WithReactionsForComment(const Aws::Vector<ReactionForComment>& value) { SetReactionsForComment(value); return *this;}
    inline GetCommentReactionsResult& WithReactionsForComment(Aws::Vector<ReactionForComment>&& value) { SetReactionsForComment(std::move(value)); return *this;}
    inline GetCommentReactionsResult& AddReactionsForComment(const ReactionForComment& value) { m_reactionsForComment.push_back(value); return *this; }
    inline GetCommentReactionsResult& AddReactionsForComment(ReactionForComment&& value) { m_reactionsForComment.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetCommentReactionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCommentReactionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCommentReactionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCommentReactionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCommentReactionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCommentReactionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ReactionForComment> m_reactionsForComment;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
