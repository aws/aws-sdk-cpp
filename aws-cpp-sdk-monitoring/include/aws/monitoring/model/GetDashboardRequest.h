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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API GetDashboardRequest : public CloudWatchRequest
  {
  public:
    GetDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDashboard"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline void SetDashboardName(const Aws::String& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = value; }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline void SetDashboardName(Aws::String&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::move(value); }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline void SetDashboardName(const char* value) { m_dashboardNameHasBeenSet = true; m_dashboardName.assign(value); }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline GetDashboardRequest& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline GetDashboardRequest& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline GetDashboardRequest& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}

  private:

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
