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
  class AWS_IOTSITEWISE_API DescribeDashboardRequest : public IoTSiteWiseRequest
  {
  public:
    DescribeDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDashboard"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DescribeDashboardRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DescribeDashboardRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DescribeDashboardRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}

  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
