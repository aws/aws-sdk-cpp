/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/RefreshSchedule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Tag.h>
#include <aws/cloudtrail/model/RequestWidget.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class CreateDashboardRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API CreateDashboardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDashboard"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the dashboard. The name must be unique to your account. </p>
     * <p>To create the Highlights dashboard, the name must be
     * <code>AWSCloudTrail-Highlights</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDashboardRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The refresh schedule configuration for the dashboard. </p> <p>To create the
     * Highlights dashboard, you must set a refresh schedule and set the
     * <code>Status</code> to <code>ENABLED</code>. The <code>Unit</code> for the
     * refresh schedule must be <code>HOURS</code> and the <code>Value</code> must be
     * <code>6</code>.</p>
     */
    inline const RefreshSchedule& GetRefreshSchedule() const { return m_refreshSchedule; }
    inline bool RefreshScheduleHasBeenSet() const { return m_refreshScheduleHasBeenSet; }
    template<typename RefreshScheduleT = RefreshSchedule>
    void SetRefreshSchedule(RefreshScheduleT&& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = std::forward<RefreshScheduleT>(value); }
    template<typename RefreshScheduleT = RefreshSchedule>
    CreateDashboardRequest& WithRefreshSchedule(RefreshScheduleT&& value) { SetRefreshSchedule(std::forward<RefreshScheduleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagsList() const { return m_tagsList; }
    inline bool TagsListHasBeenSet() const { return m_tagsListHasBeenSet; }
    template<typename TagsListT = Aws::Vector<Tag>>
    void SetTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::forward<TagsListT>(value); }
    template<typename TagsListT = Aws::Vector<Tag>>
    CreateDashboardRequest& WithTagsList(TagsListT&& value) { SetTagsList(std::forward<TagsListT>(value)); return *this;}
    template<typename TagsListT = Tag>
    CreateDashboardRequest& AddTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList.emplace_back(std::forward<TagsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies whether termination protection is enabled for the dashboard. If
     * termination protection is enabled, you cannot delete the dashboard until
     * termination protection is disabled. </p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline CreateDashboardRequest& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of widgets for a custom dashboard. A custom dashboard can have a
     * maximum of ten widgets. </p> <p>You do not need to specify widgets for the
     * Highlights dashboard.</p>
     */
    inline const Aws::Vector<RequestWidget>& GetWidgets() const { return m_widgets; }
    inline bool WidgetsHasBeenSet() const { return m_widgetsHasBeenSet; }
    template<typename WidgetsT = Aws::Vector<RequestWidget>>
    void SetWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets = std::forward<WidgetsT>(value); }
    template<typename WidgetsT = Aws::Vector<RequestWidget>>
    CreateDashboardRequest& WithWidgets(WidgetsT&& value) { SetWidgets(std::forward<WidgetsT>(value)); return *this;}
    template<typename WidgetsT = RequestWidget>
    CreateDashboardRequest& AddWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets.emplace_back(std::forward<WidgetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RefreshSchedule m_refreshSchedule;
    bool m_refreshScheduleHasBeenSet = false;

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet = false;

    bool m_terminationProtectionEnabled{false};
    bool m_terminationProtectionEnabledHasBeenSet = false;

    Aws::Vector<RequestWidget> m_widgets;
    bool m_widgetsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
