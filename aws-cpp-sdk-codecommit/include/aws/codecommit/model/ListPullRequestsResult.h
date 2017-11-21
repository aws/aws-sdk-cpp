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
  class AWS_CODECOMMIT_API ListPullRequestsResult
  {
  public:
    ListPullRequestsResult();
    ListPullRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPullRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPullRequestIds() const{ return m_pullRequestIds; }

    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline void SetPullRequestIds(const Aws::Vector<Aws::String>& value) { m_pullRequestIds = value; }

    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline void SetPullRequestIds(Aws::Vector<Aws::String>&& value) { m_pullRequestIds = std::move(value); }

    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline ListPullRequestsResult& WithPullRequestIds(const Aws::Vector<Aws::String>& value) { SetPullRequestIds(value); return *this;}

    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline ListPullRequestsResult& WithPullRequestIds(Aws::Vector<Aws::String>&& value) { SetPullRequestIds(std::move(value)); return *this;}

    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline ListPullRequestsResult& AddPullRequestIds(const Aws::String& value) { m_pullRequestIds.push_back(value); return *this; }

    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline ListPullRequestsResult& AddPullRequestIds(Aws::String&& value) { m_pullRequestIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The system-generated IDs of the pull requests.</p>
     */
    inline ListPullRequestsResult& AddPullRequestIds(const char* value) { m_pullRequestIds.push_back(value); return *this; }


    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListPullRequestsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListPullRequestsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListPullRequestsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_pullRequestIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
