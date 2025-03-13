/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/CommentsForPullRequest.h>
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
  class GetCommentsForPullRequestResult
  {
  public:
    AWS_CODECOMMIT_API GetCommentsForPullRequestResult() = default;
    AWS_CODECOMMIT_API GetCommentsForPullRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetCommentsForPullRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of comment objects on the pull request.</p>
     */
    inline const Aws::Vector<CommentsForPullRequest>& GetCommentsForPullRequestData() const { return m_commentsForPullRequestData; }
    template<typename CommentsForPullRequestDataT = Aws::Vector<CommentsForPullRequest>>
    void SetCommentsForPullRequestData(CommentsForPullRequestDataT&& value) { m_commentsForPullRequestDataHasBeenSet = true; m_commentsForPullRequestData = std::forward<CommentsForPullRequestDataT>(value); }
    template<typename CommentsForPullRequestDataT = Aws::Vector<CommentsForPullRequest>>
    GetCommentsForPullRequestResult& WithCommentsForPullRequestData(CommentsForPullRequestDataT&& value) { SetCommentsForPullRequestData(std::forward<CommentsForPullRequestDataT>(value)); return *this;}
    template<typename CommentsForPullRequestDataT = CommentsForPullRequest>
    GetCommentsForPullRequestResult& AddCommentsForPullRequestData(CommentsForPullRequestDataT&& value) { m_commentsForPullRequestDataHasBeenSet = true; m_commentsForPullRequestData.emplace_back(std::forward<CommentsForPullRequestDataT>(value)); return *this; }
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
    GetCommentsForPullRequestResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCommentsForPullRequestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommentsForPullRequest> m_commentsForPullRequestData;
    bool m_commentsForPullRequestDataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
