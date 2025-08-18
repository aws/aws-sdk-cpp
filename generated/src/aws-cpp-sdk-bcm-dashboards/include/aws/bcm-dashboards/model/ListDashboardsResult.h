/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-dashboards/model/DashboardReference.h>
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
namespace BCMDashboards
{
namespace Model
{
  class ListDashboardsResult
  {
  public:
    AWS_BCMDASHBOARDS_API ListDashboardsResult() = default;
    AWS_BCMDASHBOARDS_API ListDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDASHBOARDS_API ListDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of dashboard references, containing basic information about each
     * dashboard.</p>
     */
    inline const Aws::Vector<DashboardReference>& GetDashboards() const { return m_dashboards; }
    template<typename DashboardsT = Aws::Vector<DashboardReference>>
    void SetDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::forward<DashboardsT>(value); }
    template<typename DashboardsT = Aws::Vector<DashboardReference>>
    ListDashboardsResult& WithDashboards(DashboardsT&& value) { SetDashboards(std::forward<DashboardsT>(value)); return *this;}
    template<typename DashboardsT = DashboardReference>
    ListDashboardsResult& AddDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards.emplace_back(std::forward<DashboardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. Not returned if there
     * are no more results to retrieve.</p>
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

    Aws::Vector<DashboardReference> m_dashboards;
    bool m_dashboardsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
