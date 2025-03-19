/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/PullRequestEvent.h>
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
  class DescribePullRequestEventsResult
  {
  public:
    AWS_CODECOMMIT_API DescribePullRequestEventsResult() = default;
    AWS_CODECOMMIT_API DescribePullRequestEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DescribePullRequestEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the pull request events.</p>
     */
    inline const Aws::Vector<PullRequestEvent>& GetPullRequestEvents() const { return m_pullRequestEvents; }
    template<typename PullRequestEventsT = Aws::Vector<PullRequestEvent>>
    void SetPullRequestEvents(PullRequestEventsT&& value) { m_pullRequestEventsHasBeenSet = true; m_pullRequestEvents = std::forward<PullRequestEventsT>(value); }
    template<typename PullRequestEventsT = Aws::Vector<PullRequestEvent>>
    DescribePullRequestEventsResult& WithPullRequestEvents(PullRequestEventsT&& value) { SetPullRequestEvents(std::forward<PullRequestEventsT>(value)); return *this;}
    template<typename PullRequestEventsT = PullRequestEvent>
    DescribePullRequestEventsResult& AddPullRequestEvents(PullRequestEventsT&& value) { m_pullRequestEventsHasBeenSet = true; m_pullRequestEvents.emplace_back(std::forward<PullRequestEventsT>(value)); return *this; }
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
    DescribePullRequestEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePullRequestEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PullRequestEvent> m_pullRequestEvents;
    bool m_pullRequestEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
