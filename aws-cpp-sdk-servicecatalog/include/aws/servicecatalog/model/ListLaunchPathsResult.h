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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/LaunchPathSummary.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API ListLaunchPathsResult
  {
  public:
    ListLaunchPathsResult();
    ListLaunchPathsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLaunchPathsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the launch path.</p>
     */
    inline const Aws::Vector<LaunchPathSummary>& GetLaunchPathSummaries() const{ return m_launchPathSummaries; }

    /**
     * <p>Information about the launch path.</p>
     */
    inline void SetLaunchPathSummaries(const Aws::Vector<LaunchPathSummary>& value) { m_launchPathSummaries = value; }

    /**
     * <p>Information about the launch path.</p>
     */
    inline void SetLaunchPathSummaries(Aws::Vector<LaunchPathSummary>&& value) { m_launchPathSummaries = std::move(value); }

    /**
     * <p>Information about the launch path.</p>
     */
    inline ListLaunchPathsResult& WithLaunchPathSummaries(const Aws::Vector<LaunchPathSummary>& value) { SetLaunchPathSummaries(value); return *this;}

    /**
     * <p>Information about the launch path.</p>
     */
    inline ListLaunchPathsResult& WithLaunchPathSummaries(Aws::Vector<LaunchPathSummary>&& value) { SetLaunchPathSummaries(std::move(value)); return *this;}

    /**
     * <p>Information about the launch path.</p>
     */
    inline ListLaunchPathsResult& AddLaunchPathSummaries(const LaunchPathSummary& value) { m_launchPathSummaries.push_back(value); return *this; }

    /**
     * <p>Information about the launch path.</p>
     */
    inline ListLaunchPathsResult& AddLaunchPathSummaries(LaunchPathSummary&& value) { m_launchPathSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListLaunchPathsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListLaunchPathsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListLaunchPathsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<LaunchPathSummary> m_launchPathSummaries;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
