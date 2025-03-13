/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class StartDashboardRefreshRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API StartDashboardRefreshRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDashboardRefresh"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name or ARN of the dashboard. </p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    StartDashboardRefreshRequest& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The query parameter values for the dashboard </p> <p>For custom dashboards,
     * the following query parameters are valid: <code>$StartTime$</code>,
     * <code>$EndTime$</code>, and <code>$Period$</code>.</p> <p>For managed
     * dashboards, the following query parameters are valid: <code>$StartTime$</code>,
     * <code>$EndTime$</code>, <code>$Period$</code>, and
     * <code>$EventDataStoreId$</code>. The <code>$EventDataStoreId$</code> query
     * parameter is required.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParameterValues() const { return m_queryParameterValues; }
    inline bool QueryParameterValuesHasBeenSet() const { return m_queryParameterValuesHasBeenSet; }
    template<typename QueryParameterValuesT = Aws::Map<Aws::String, Aws::String>>
    void SetQueryParameterValues(QueryParameterValuesT&& value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues = std::forward<QueryParameterValuesT>(value); }
    template<typename QueryParameterValuesT = Aws::Map<Aws::String, Aws::String>>
    StartDashboardRefreshRequest& WithQueryParameterValues(QueryParameterValuesT&& value) { SetQueryParameterValues(std::forward<QueryParameterValuesT>(value)); return *this;}
    template<typename QueryParameterValuesKeyT = Aws::String, typename QueryParameterValuesValueT = Aws::String>
    StartDashboardRefreshRequest& AddQueryParameterValues(QueryParameterValuesKeyT&& key, QueryParameterValuesValueT&& value) {
      m_queryParameterValuesHasBeenSet = true; m_queryParameterValues.emplace(std::forward<QueryParameterValuesKeyT>(key), std::forward<QueryParameterValuesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryParameterValues;
    bool m_queryParameterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
