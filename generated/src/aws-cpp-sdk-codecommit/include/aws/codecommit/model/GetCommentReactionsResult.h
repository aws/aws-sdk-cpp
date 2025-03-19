/**
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
    AWS_CODECOMMIT_API GetCommentReactionsResult() = default;
    AWS_CODECOMMIT_API GetCommentReactionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetCommentReactionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of reactions to the specified comment.</p>
     */
    inline const Aws::Vector<ReactionForComment>& GetReactionsForComment() const { return m_reactionsForComment; }
    template<typename ReactionsForCommentT = Aws::Vector<ReactionForComment>>
    void SetReactionsForComment(ReactionsForCommentT&& value) { m_reactionsForCommentHasBeenSet = true; m_reactionsForComment = std::forward<ReactionsForCommentT>(value); }
    template<typename ReactionsForCommentT = Aws::Vector<ReactionForComment>>
    GetCommentReactionsResult& WithReactionsForComment(ReactionsForCommentT&& value) { SetReactionsForComment(std::forward<ReactionsForCommentT>(value)); return *this;}
    template<typename ReactionsForCommentT = ReactionForComment>
    GetCommentReactionsResult& AddReactionsForComment(ReactionsForCommentT&& value) { m_reactionsForCommentHasBeenSet = true; m_reactionsForComment.emplace_back(std::forward<ReactionsForCommentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCommentReactionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCommentReactionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReactionForComment> m_reactionsForComment;
    bool m_reactionsForCommentHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
