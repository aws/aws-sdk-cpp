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
    AWS_CLOUDTRAIL_API StartDashboardRefreshRequest();

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
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline StartDashboardRefreshRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline StartDashboardRefreshRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline StartDashboardRefreshRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParameterValues() const{ return m_queryParameterValues; }
    inline bool QueryParameterValuesHasBeenSet() const { return m_queryParameterValuesHasBeenSet; }
    inline void SetQueryParameterValues(const Aws::Map<Aws::String, Aws::String>& value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues = value; }
    inline void SetQueryParameterValues(Aws::Map<Aws::String, Aws::String>&& value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues = std::move(value); }
    inline StartDashboardRefreshRequest& WithQueryParameterValues(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryParameterValues(value); return *this;}
    inline StartDashboardRefreshRequest& WithQueryParameterValues(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryParameterValues(std::move(value)); return *this;}
    inline StartDashboardRefreshRequest& AddQueryParameterValues(const Aws::String& key, const Aws::String& value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues.emplace(key, value); return *this; }
    inline StartDashboardRefreshRequest& AddQueryParameterValues(Aws::String&& key, const Aws::String& value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues.emplace(std::move(key), value); return *this; }
    inline StartDashboardRefreshRequest& AddQueryParameterValues(const Aws::String& key, Aws::String&& value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues.emplace(key, std::move(value)); return *this; }
    inline StartDashboardRefreshRequest& AddQueryParameterValues(Aws::String&& key, Aws::String&& value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues.emplace(std::move(key), std::move(value)); return *this; }
    inline StartDashboardRefreshRequest& AddQueryParameterValues(const char* key, Aws::String&& value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues.emplace(key, std::move(value)); return *this; }
    inline StartDashboardRefreshRequest& AddQueryParameterValues(Aws::String&& key, const char* value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues.emplace(std::move(key), value); return *this; }
    inline StartDashboardRefreshRequest& AddQueryParameterValues(const char* key, const char* value) { m_queryParameterValuesHasBeenSet = true; m_queryParameterValues.emplace(key, value); return *this; }
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
