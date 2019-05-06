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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CLOUDWATCH_API DeleteDashboardsRequest : public CloudWatchRequest
  {
  public:
    DeleteDashboardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDashboards"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDashboardNames() const{ return m_dashboardNames; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline bool DashboardNamesHasBeenSet() const { return m_dashboardNamesHasBeenSet; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline void SetDashboardNames(const Aws::Vector<Aws::String>& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames = value; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline void SetDashboardNames(Aws::Vector<Aws::String>&& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames = std::move(value); }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& WithDashboardNames(const Aws::Vector<Aws::String>& value) { SetDashboardNames(value); return *this;}

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& WithDashboardNames(Aws::Vector<Aws::String>&& value) { SetDashboardNames(std::move(value)); return *this;}

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& AddDashboardNames(const Aws::String& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames.push_back(value); return *this; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& AddDashboardNames(Aws::String&& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& AddDashboardNames(const char* value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_dashboardNames;
    bool m_dashboardNamesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
