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
  class AWS_CODECOMMIT_API DescribePullRequestEventsResult
  {
  public:
    DescribePullRequestEventsResult();
    DescribePullRequestEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePullRequestEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the pull request events.</p>
     */
    inline const Aws::Vector<PullRequestEvent>& GetPullRequestEvents() const{ return m_pullRequestEvents; }

    /**
     * <p>Information about the pull request events.</p>
     */
    inline void SetPullRequestEvents(const Aws::Vector<PullRequestEvent>& value) { m_pullRequestEvents = value; }

    /**
     * <p>Information about the pull request events.</p>
     */
    inline void SetPullRequestEvents(Aws::Vector<PullRequestEvent>&& value) { m_pullRequestEvents = std::move(value); }

    /**
     * <p>Information about the pull request events.</p>
     */
    inline DescribePullRequestEventsResult& WithPullRequestEvents(const Aws::Vector<PullRequestEvent>& value) { SetPullRequestEvents(value); return *this;}

    /**
     * <p>Information about the pull request events.</p>
     */
    inline DescribePullRequestEventsResult& WithPullRequestEvents(Aws::Vector<PullRequestEvent>&& value) { SetPullRequestEvents(std::move(value)); return *this;}

    /**
     * <p>Information about the pull request events.</p>
     */
    inline DescribePullRequestEventsResult& AddPullRequestEvents(const PullRequestEvent& value) { m_pullRequestEvents.push_back(value); return *this; }

    /**
     * <p>Information about the pull request events.</p>
     */
    inline DescribePullRequestEventsResult& AddPullRequestEvents(PullRequestEvent&& value) { m_pullRequestEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline DescribePullRequestEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline DescribePullRequestEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline DescribePullRequestEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PullRequestEvent> m_pullRequestEvents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
