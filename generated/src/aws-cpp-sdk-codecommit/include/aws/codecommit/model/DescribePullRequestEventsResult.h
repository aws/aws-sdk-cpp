﻿/**
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
    AWS_CODECOMMIT_API DescribePullRequestEventsResult();
    AWS_CODECOMMIT_API DescribePullRequestEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DescribePullRequestEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the pull request events.</p>
     */
    inline const Aws::Vector<PullRequestEvent>& GetPullRequestEvents() const{ return m_pullRequestEvents; }
    inline void SetPullRequestEvents(const Aws::Vector<PullRequestEvent>& value) { m_pullRequestEvents = value; }
    inline void SetPullRequestEvents(Aws::Vector<PullRequestEvent>&& value) { m_pullRequestEvents = std::move(value); }
    inline DescribePullRequestEventsResult& WithPullRequestEvents(const Aws::Vector<PullRequestEvent>& value) { SetPullRequestEvents(value); return *this;}
    inline DescribePullRequestEventsResult& WithPullRequestEvents(Aws::Vector<PullRequestEvent>&& value) { SetPullRequestEvents(std::move(value)); return *this;}
    inline DescribePullRequestEventsResult& AddPullRequestEvents(const PullRequestEvent& value) { m_pullRequestEvents.push_back(value); return *this; }
    inline DescribePullRequestEventsResult& AddPullRequestEvents(PullRequestEvent&& value) { m_pullRequestEvents.push_back(std::move(value)); return *this; }
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
    inline DescribePullRequestEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribePullRequestEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribePullRequestEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePullRequestEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePullRequestEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePullRequestEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PullRequestEvent> m_pullRequestEvents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
