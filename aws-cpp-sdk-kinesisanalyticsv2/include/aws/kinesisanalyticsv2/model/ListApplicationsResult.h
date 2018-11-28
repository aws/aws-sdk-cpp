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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ApplicationSummary.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class AWS_KINESISANALYTICSV2_API ListApplicationsResult
  {
  public:
    ListApplicationsResult();
    ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>ApplicationSummary</code> objects.</p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplicationSummaries() const{ return m_applicationSummaries; }

    /**
     * <p>A list of <code>ApplicationSummary</code> objects.</p>
     */
    inline void SetApplicationSummaries(const Aws::Vector<ApplicationSummary>& value) { m_applicationSummaries = value; }

    /**
     * <p>A list of <code>ApplicationSummary</code> objects.</p>
     */
    inline void SetApplicationSummaries(Aws::Vector<ApplicationSummary>&& value) { m_applicationSummaries = std::move(value); }

    /**
     * <p>A list of <code>ApplicationSummary</code> objects.</p>
     */
    inline ListApplicationsResult& WithApplicationSummaries(const Aws::Vector<ApplicationSummary>& value) { SetApplicationSummaries(value); return *this;}

    /**
     * <p>A list of <code>ApplicationSummary</code> objects.</p>
     */
    inline ListApplicationsResult& WithApplicationSummaries(Aws::Vector<ApplicationSummary>&& value) { SetApplicationSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ApplicationSummary</code> objects.</p>
     */
    inline ListApplicationsResult& AddApplicationSummaries(const ApplicationSummary& value) { m_applicationSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>ApplicationSummary</code> objects.</p>
     */
    inline ListApplicationsResult& AddApplicationSummaries(ApplicationSummary&& value) { m_applicationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. Pass this token into a subsequent command to
     * retrieve the next set of items For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the AWS Command Line Interface's Pagination Options</a>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. Pass this token into a subsequent command to
     * retrieve the next set of items For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the AWS Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. Pass this token into a subsequent command to
     * retrieve the next set of items For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the AWS Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. Pass this token into a subsequent command to
     * retrieve the next set of items For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the AWS Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. Pass this token into a subsequent command to
     * retrieve the next set of items For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the AWS Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. Pass this token into a subsequent command to
     * retrieve the next set of items For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the AWS Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. Pass this token into a subsequent command to
     * retrieve the next set of items For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the AWS Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationSummary> m_applicationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
