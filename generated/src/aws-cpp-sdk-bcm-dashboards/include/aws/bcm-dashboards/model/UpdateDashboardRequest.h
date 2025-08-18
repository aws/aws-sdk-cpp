/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/BCMDashboardsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-dashboards/model/Widget.h>
#include <utility>

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{

  /**
   */
  class UpdateDashboardRequest : public BCMDashboardsRequest
  {
  public:
    AWS_BCMDASHBOARDS_API UpdateDashboardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDashboard"; }

    AWS_BCMDASHBOARDS_API Aws::String SerializePayload() const override;

    AWS_BCMDASHBOARDS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the dashboard to update.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateDashboardRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the dashboard. If not specified, the existing name is
     * retained.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDashboardRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description for the dashboard. If not specified, the existing
     * description is retained.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDashboardRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated array of widget configurations for the dashboard. Replaces all
     * existing widgets.</p>
     */
    inline const Aws::Vector<Widget>& GetWidgets() const { return m_widgets; }
    inline bool WidgetsHasBeenSet() const { return m_widgetsHasBeenSet; }
    template<typename WidgetsT = Aws::Vector<Widget>>
    void SetWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets = std::forward<WidgetsT>(value); }
    template<typename WidgetsT = Aws::Vector<Widget>>
    UpdateDashboardRequest& WithWidgets(WidgetsT&& value) { SetWidgets(std::forward<WidgetsT>(value)); return *this;}
    template<typename WidgetsT = Widget>
    UpdateDashboardRequest& AddWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets.emplace_back(std::forward<WidgetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Widget> m_widgets;
    bool m_widgetsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
