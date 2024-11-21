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
    AWS_CLOUDTRAIL_API CreateDashboardResult();
    AWS_CLOUDTRAIL_API CreateDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API CreateDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN for the dashboard. </p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArn = value; }
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArn = std::move(value); }
    inline void SetDashboardArn(const char* value) { m_dashboardArn.assign(value); }
    inline CreateDashboardResult& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}
    inline CreateDashboardResult& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}
    inline CreateDashboardResult& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the dashboard. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateDashboardResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDashboardResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDashboardResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The dashboard type. </p>
     */
    inline const DashboardType& GetType() const{ return m_type; }
    inline void SetType(const DashboardType& value) { m_type = value; }
    inline void SetType(DashboardType&& value) { m_type = std::move(value); }
    inline CreateDashboardResult& WithType(const DashboardType& value) { SetType(value); return *this;}
    inline CreateDashboardResult& WithType(DashboardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of widgets for the dashboard. </p>
     */
    inline const Aws::Vector<Widget>& GetWidgets() const{ return m_widgets; }
    inline void SetWidgets(const Aws::Vector<Widget>& value) { m_widgets = value; }
    inline void SetWidgets(Aws::Vector<Widget>&& value) { m_widgets = std::move(value); }
    inline CreateDashboardResult& WithWidgets(const Aws::Vector<Widget>& value) { SetWidgets(value); return *this;}
    inline CreateDashboardResult& WithWidgets(Aws::Vector<Widget>&& value) { SetWidgets(std::move(value)); return *this;}
    inline CreateDashboardResult& AddWidgets(const Widget& value) { m_widgets.push_back(value); return *this; }
    inline CreateDashboardResult& AddWidgets(Widget&& value) { m_widgets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagsList() const{ return m_tagsList; }
    inline void SetTagsList(const Aws::Vector<Tag>& value) { m_tagsList = value; }
    inline void SetTagsList(Aws::Vector<Tag>&& value) { m_tagsList = std::move(value); }
    inline CreateDashboardResult& WithTagsList(const Aws::Vector<Tag>& value) { SetTagsList(value); return *this;}
    inline CreateDashboardResult& WithTagsList(Aws::Vector<Tag>&& value) { SetTagsList(std::move(value)); return *this;}
    inline CreateDashboardResult& AddTagsList(const Tag& value) { m_tagsList.push_back(value); return *this; }
    inline CreateDashboardResult& AddTagsList(Tag&& value) { m_tagsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The refresh schedule for the dashboard, if configured. </p>
     */
    inline const RefreshSchedule& GetRefreshSchedule() const{ return m_refreshSchedule; }
    inline void SetRefreshSchedule(const RefreshSchedule& value) { m_refreshSchedule = value; }
    inline void SetRefreshSchedule(RefreshSchedule&& value) { m_refreshSchedule = std::move(value); }
    inline CreateDashboardResult& WithRefreshSchedule(const RefreshSchedule& value) { SetRefreshSchedule(value); return *this;}
    inline CreateDashboardResult& WithRefreshSchedule(RefreshSchedule&& value) { SetRefreshSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether termination protection is enabled for the dashboard. </p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabled = value; }
    inline CreateDashboardResult& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDashboardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDashboardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDashboardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dashboardArn;

    Aws::String m_name;

    DashboardType m_type;

    Aws::Vector<Widget> m_widgets;

    Aws::Vector<Tag> m_tagsList;

    RefreshSchedule m_refreshSchedule;

    bool m_terminationProtectionEnabled;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
