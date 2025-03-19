/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/DashboardSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListDashboardsResult
  {
  public:
    AWS_IOTSITEWISE_API ListDashboardsResult() = default;
    AWS_IOTSITEWISE_API ListDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each dashboard in the project.</p>
     */
    inline const Aws::Vector<DashboardSummary>& GetDashboardSummaries() const { return m_dashboardSummaries; }
    template<typename DashboardSummariesT = Aws::Vector<DashboardSummary>>
    void SetDashboardSummaries(DashboardSummariesT&& value) { m_dashboardSummariesHasBeenSet = true; m_dashboardSummaries = std::forward<DashboardSummariesT>(value); }
    template<typename DashboardSummariesT = Aws::Vector<DashboardSummary>>
    ListDashboardsResult& WithDashboardSummaries(DashboardSummariesT&& value) { SetDashboardSummaries(std::forward<DashboardSummariesT>(value)); return *this;}
    template<typename DashboardSummariesT = DashboardSummary>
    ListDashboardsResult& AddDashboardSummaries(DashboardSummariesT&& value) { m_dashboardSummariesHasBeenSet = true; m_dashboardSummaries.emplace_back(std::forward<DashboardSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDashboardsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDashboardsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DashboardSummary> m_dashboardSummaries;
    bool m_dashboardSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
