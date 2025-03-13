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
    AWS_KINESISANALYTICSV2_API ListApplicationVersionsResult() = default;
    AWS_KINESISANALYTICSV2_API ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API ListApplicationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the application versions and the associated configuration
     * summaries. The list includes application versions that were rolled back.</p>
     * <p>To get the complete description of a specific application version, invoke the
     * <a>DescribeApplicationVersion</a> operation.</p>
     */
    inline const Aws::Vector<ApplicationVersionSummary>& GetApplicationVersionSummaries() const { return m_applicationVersionSummaries; }
    template<typename ApplicationVersionSummariesT = Aws::Vector<ApplicationVersionSummary>>
    void SetApplicationVersionSummaries(ApplicationVersionSummariesT&& value) { m_applicationVersionSummariesHasBeenSet = true; m_applicationVersionSummaries = std::forward<ApplicationVersionSummariesT>(value); }
    template<typename ApplicationVersionSummariesT = Aws::Vector<ApplicationVersionSummary>>
    ListApplicationVersionsResult& WithApplicationVersionSummaries(ApplicationVersionSummariesT&& value) { SetApplicationVersionSummaries(std::forward<ApplicationVersionSummariesT>(value)); return *this;}
    template<typename ApplicationVersionSummariesT = ApplicationVersionSummary>
    ListApplicationVersionsResult& AddApplicationVersionSummaries(ApplicationVersionSummariesT&& value) { m_applicationVersionSummariesHasBeenSet = true; m_applicationVersionSummaries.emplace_back(std::forward<ApplicationVersionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token for the next set of results, or <code>null</code> if
     * there are no additional results. To retrieve the next set of items, pass this
     * token into a subsequent invocation of this operation. For more information about
     * pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationVersionSummary> m_applicationVersionSummaries;
    bool m_applicationVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
