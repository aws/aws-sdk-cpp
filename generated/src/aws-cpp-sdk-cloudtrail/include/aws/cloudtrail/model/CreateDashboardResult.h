/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/DashboardType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/RefreshSchedule.h>
#include <aws/cloudtrail/model/Widget.h>
#include <aws/cloudtrail/model/Tag.h>
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
  class CreateDashboardResult
  {
  public:
    AWS_CLOUDTRAIL_API CreateDashboardResult() = default;
    AWS_CLOUDTRAIL_API CreateDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API CreateDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN for the dashboard. </p>
     */
    inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
    template<typename DashboardArnT = Aws::String>
    void SetDashboardArn(DashboardArnT&& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = std::forward<DashboardArnT>(value); }
    template<typename DashboardArnT = Aws::String>
    CreateDashboardResult& WithDashboardArn(DashboardArnT&& value) { SetDashboardArn(std::forward<DashboardArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the dashboard. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDashboardResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The dashboard type. </p>
     */
    inline DashboardType GetType() const { return m_type; }
    inline void SetType(DashboardType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateDashboardResult& WithType(DashboardType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of widgets for the dashboard. </p>
     */
    inline const Aws::Vector<Widget>& GetWidgets() const { return m_widgets; }
    template<typename WidgetsT = Aws::Vector<Widget>>
    void SetWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets = std::forward<WidgetsT>(value); }
    template<typename WidgetsT = Aws::Vector<Widget>>
    CreateDashboardResult& WithWidgets(WidgetsT&& value) { SetWidgets(std::forward<WidgetsT>(value)); return *this;}
    template<typename WidgetsT = Widget>
    CreateDashboardResult& AddWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets.emplace_back(std::forward<WidgetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagsList() const { return m_tagsList; }
    template<typename TagsListT = Aws::Vector<Tag>>
    void SetTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::forward<TagsListT>(value); }
    template<typename TagsListT = Aws::Vector<Tag>>
    CreateDashboardResult& WithTagsList(TagsListT&& value) { SetTagsList(std::forward<TagsListT>(value)); return *this;}
    template<typename TagsListT = Tag>
    CreateDashboardResult& AddTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList.emplace_back(std::forward<TagsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The refresh schedule for the dashboard, if configured. </p>
     */
    inline const RefreshSchedule& GetRefreshSchedule() const { return m_refreshSchedule; }
    template<typename RefreshScheduleT = RefreshSchedule>
    void SetRefreshSchedule(RefreshScheduleT&& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = std::forward<RefreshScheduleT>(value); }
    template<typename RefreshScheduleT = RefreshSchedule>
    CreateDashboardResult& WithRefreshSchedule(RefreshScheduleT&& value) { SetRefreshSchedule(std::forward<RefreshScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether termination protection is enabled for the dashboard. </p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline CreateDashboardResult& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDashboardResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardArn;
    bool m_dashboardArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DashboardType m_type{DashboardType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Widget> m_widgets;
    bool m_widgetsHasBeenSet = false;

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet = false;

    RefreshSchedule m_refreshSchedule;
    bool m_refreshScheduleHasBeenSet = false;

    bool m_terminationProtectionEnabled{false};
    bool m_terminationProtectionEnabledHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
