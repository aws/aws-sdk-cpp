/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ApplicationVersionSummary.h>
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
  class ListApplicationVersionsResult
  {
  public:
    AWS_KINESISANALYTICSV2_API ListApplicationVersionsResult();
    AWS_KINESISANALYTICSV2_API ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API ListApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the application versions and the associated configuration
     * summaries. The list includes application versions that were rolled back.</p>
     * <p>To get the complete description of a specific application version, invoke the
     * <a>DescribeApplicationVersion</a> operation.</p>
     */
    inline const Aws::Vector<ApplicationVersionSummary>& GetApplicationVersionSummaries() const{ return m_applicationVersionSummaries; }

    /**
     * <p>A list of the application versions and the associated configuration
     * summaries. The list includes application versions that were rolled back.</p>
     * <p>To get the complete description of a specific application version, invoke the
     * <a>DescribeApplicationVersion</a> operation.</p>
     */
    inline void SetApplicationVersionSummaries(const Aws::Vector<ApplicationVersionSummary>& value) { m_applicationVersionSummaries = value; }

    /**
     * <p>A list of the application versions and the associated configuration
     * summaries. The list includes application versions that were rolled back.</p>
     * <p>To get the complete description of a specific application version, invoke the
     * <a>DescribeApplicationVersion</a> operation.</p>
     */
    inline void SetApplicationVersionSummaries(Aws::Vector<ApplicationVersionSummary>&& value) { m_applicationVersionSummaries = std::move(value); }

    /**
     * <p>A list of the application versions and the associated configuration
     * summaries. The list includes application versions that were rolled back.</p>
     * <p>To get the complete description of a specific application version, invoke the
     * <a>DescribeApplicationVersion</a> operation.</p>
     */
    inline ListApplicationVersionsResult& WithApplicationVersionSummaries(const Aws::Vector<ApplicationVersionSummary>& value) { SetApplicationVersionSummaries(value); return *this;}

    /**
     * <p>A list of the application versions and the associated configuration
     * summaries. The list includes application versions that were rolled back.</p>
     * <p>To get the complete description of a specific application version, invoke the
     * <a>DescribeApplicationVersion</a> operation.</p>
     */
    inline ListApplicationVersionsResult& WithApplicationVersionSummaries(Aws::Vector<ApplicationVersionSummary>&& value) { SetApplicationVersionSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of the application versions and the associated configuration
     * summaries. The list includes application versions that were rolled back.</p>
     * <p>To get the complete description of a specific application version, invoke the
     * <a>DescribeApplicationVersion</a> operation.</p>
     */
    inline ListApplicationVersionsResult& AddApplicationVersionSummaries(const ApplicationVersionSummary& value) { m_applicationVersionSummaries.push_back(value); return *this; }

    /**
     * <p>A list of the application versions and the associated configuration
     * summaries. The list includes application versions that were rolled back.</p>
     * <p>To get the complete description of a specific application version, invoke the
     * <a>DescribeApplicationVersion</a> operation.</p>
     */
    inline ListApplicationVersionsResult& AddApplicationVersionSummaries(ApplicationVersionSummary&& value) { m_applicationVersionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. To retrieve the next set of items, pass this
     * token into a subsequent invocation of this operation. For more information about
     * pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. To retrieve the next set of items, pass this
     * token into a subsequent invocation of this operation. For more information about
     * pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. To retrieve the next set of items, pass this
     * token into a subsequent invocation of this operation. For more information about
     * pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. To retrieve the next set of items, pass this
     * token into a subsequent invocation of this operation. For more information about
     * pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. To retrieve the next set of items, pass this
     * token into a subsequent invocation of this operation. For more information about
     * pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. To retrieve the next set of items, pass this
     * token into a subsequent invocation of this operation. For more information about
     * pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. To retrieve the next set of items, pass this
     * token into a subsequent invocation of this operation. For more information about
     * pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationVersionSummary> m_applicationVersionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
