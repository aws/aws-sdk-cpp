/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListPullRequestsResult
  {
  public:
    AWS_CODECOMMIT_API ListPullRequestsResult() = default;
    AWS_CODECOMMIT_API ListPullRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListPullRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPullRequestIds() const { return m_pullRequestIds; }
    template<typename PullRequestIdsT = Aws::Vector<Aws::String>>
    void SetPullRequestIds(PullRequestIdsT&& value) { m_pullRequestIdsHasBeenSet = true; m_pullRequestIds = std::forward<PullRequestIdsT>(value); }
    template<typename PullRequestIdsT = Aws::Vector<Aws::String>>
    ListPullRequestsResult& WithPullRequestIds(PullRequestIdsT&& value) { SetPullRequestIds(std::forward<PullRequestIdsT>(value)); return *this;}
    template<typename PullRequestIdsT = Aws::String>
    ListPullRequestsResult& AddPullRequestIds(PullRequestIdsT&& value) { m_pullRequestIdsHasBeenSet = true; m_pullRequestIds.emplace_back(std::forward<PullRequestIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPullRequestsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPullRequestsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_pullRequestIds;
    bool m_pullRequestIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
