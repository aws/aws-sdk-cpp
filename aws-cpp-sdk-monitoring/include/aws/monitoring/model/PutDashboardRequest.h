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
  class AWS_CLOUDWATCH_API PutDashboardRequest : public CloudWatchRequest
  {
  public:
    PutDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDashboard"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }

    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }

    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline void SetDashboardName(const Aws::String& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = value; }

    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline void SetDashboardName(Aws::String&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::move(value); }

    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline void SetDashboardName(const char* value) { m_dashboardNameHasBeenSet = true; m_dashboardName.assign(value); }

    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline PutDashboardRequest& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}

    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline PutDashboardRequest& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}

    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline PutDashboardRequest& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}


    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>.</p>
     */
    inline const Aws::String& GetDashboardBody() const{ return m_dashboardBody; }

    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>.</p>
     */
    inline bool DashboardBodyHasBeenSet() const { return m_dashboardBodyHasBeenSet; }

    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>.</p>
     */
    inline void SetDashboardBody(const Aws::String& value) { m_dashboardBodyHasBeenSet = true; m_dashboardBody = value; }

    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>.</p>
     */
    inline void SetDashboardBody(Aws::String&& value) { m_dashboardBodyHasBeenSet = true; m_dashboardBody = std::move(value); }

    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>.</p>
     */
    inline void SetDashboardBody(const char* value) { m_dashboardBodyHasBeenSet = true; m_dashboardBody.assign(value); }

    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>.</p>
     */
    inline PutDashboardRequest& WithDashboardBody(const Aws::String& value) { SetDashboardBody(value); return *this;}

    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>.</p>
     */
    inline PutDashboardRequest& WithDashboardBody(Aws::String&& value) { SetDashboardBody(std::move(value)); return *this;}

    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>.</p>
     */
    inline PutDashboardRequest& WithDashboardBody(const char* value) { SetDashboardBody(value); return *this;}

  private:

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet;

    Aws::String m_dashboardBody;
    bool m_dashboardBodyHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
