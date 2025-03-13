/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DescribeDashboardRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeDashboardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDashboard"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    DescribeDashboardRequest& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
