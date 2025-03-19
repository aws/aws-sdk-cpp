/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/DashboardDetail.h>
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
namespace CloudTrail
{
namespace Model
{
  class ListDashboardsResult
  {
  public:
    AWS_CLOUDTRAIL_API ListDashboardsResult() = default;
    AWS_CLOUDTRAIL_API ListDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Contains information about dashboards in the account, in the current Region
     * that match the applied filters. </p>
     */
    inline const Aws::Vector<DashboardDetail>& GetDashboards() const { return m_dashboards; }
    template<typename DashboardsT = Aws::Vector<DashboardDetail>>
    void SetDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards = std::forward<DashboardsT>(value); }
    template<typename DashboardsT = Aws::Vector<DashboardDetail>>
    ListDashboardsResult& WithDashboards(DashboardsT&& value) { SetDashboards(std::forward<DashboardsT>(value)); return *this;}
    template<typename DashboardsT = DashboardDetail>
    ListDashboardsResult& AddDashboards(DashboardsT&& value) { m_dashboardsHasBeenSet = true; m_dashboards.emplace_back(std::forward<DashboardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token you can use to get the next page of dashboard results. </p>
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

    Aws::Vector<DashboardDetail> m_dashboards;
    bool m_dashboardsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
