/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/LinkSharingConfiguration.h>
#include <aws/quicksight/model/ResourcePermission.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeDashboardPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardPermissionsResult();
    AWS_QUICKSIGHT_API DescribeDashboardPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardId = value; }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardId = std::move(value); }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardId.assign(value); }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(const char* value) { m_dashboardArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}


    /**
     * <p>A structure that contains the permissions for the dashboard.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>A structure that contains the permissions for the dashboard.</p>
     */
    inline void SetPermissions(const Aws::Vector<ResourcePermission>& value) { m_permissions = value; }

    /**
     * <p>A structure that contains the permissions for the dashboard.</p>
     */
    inline void SetPermissions(Aws::Vector<ResourcePermission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>A structure that contains the permissions for the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& WithPermissions(const Aws::Vector<ResourcePermission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>A structure that contains the permissions for the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& WithPermissions(Aws::Vector<ResourcePermission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>A structure that contains the permissions for the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& AddPermissions(const ResourcePermission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>A structure that contains the permissions for the dashboard.</p>
     */
    inline DescribeDashboardPermissionsResult& AddPermissions(ResourcePermission&& value) { m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeDashboardPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDashboardPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDashboardPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeDashboardPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>A structure that contains the configuration of a shareable link that grants
     * access to the dashboard. Your users can use the link to view and interact with
     * the dashboard, if the dashboard has been shared with them. For more information
     * about sharing dashboards, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sharing-a-dashboard.html">Sharing
     * Dashboards</a>.</p>
     */
    inline const LinkSharingConfiguration& GetLinkSharingConfiguration() const{ return m_linkSharingConfiguration; }

    /**
     * <p>A structure that contains the configuration of a shareable link that grants
     * access to the dashboard. Your users can use the link to view and interact with
     * the dashboard, if the dashboard has been shared with them. For more information
     * about sharing dashboards, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sharing-a-dashboard.html">Sharing
     * Dashboards</a>.</p>
     */
    inline void SetLinkSharingConfiguration(const LinkSharingConfiguration& value) { m_linkSharingConfiguration = value; }

    /**
     * <p>A structure that contains the configuration of a shareable link that grants
     * access to the dashboard. Your users can use the link to view and interact with
     * the dashboard, if the dashboard has been shared with them. For more information
     * about sharing dashboards, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sharing-a-dashboard.html">Sharing
     * Dashboards</a>.</p>
     */
    inline void SetLinkSharingConfiguration(LinkSharingConfiguration&& value) { m_linkSharingConfiguration = std::move(value); }

    /**
     * <p>A structure that contains the configuration of a shareable link that grants
     * access to the dashboard. Your users can use the link to view and interact with
     * the dashboard, if the dashboard has been shared with them. For more information
     * about sharing dashboards, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sharing-a-dashboard.html">Sharing
     * Dashboards</a>.</p>
     */
    inline DescribeDashboardPermissionsResult& WithLinkSharingConfiguration(const LinkSharingConfiguration& value) { SetLinkSharingConfiguration(value); return *this;}

    /**
     * <p>A structure that contains the configuration of a shareable link that grants
     * access to the dashboard. Your users can use the link to view and interact with
     * the dashboard, if the dashboard has been shared with them. For more information
     * about sharing dashboards, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sharing-a-dashboard.html">Sharing
     * Dashboards</a>.</p>
     */
    inline DescribeDashboardPermissionsResult& WithLinkSharingConfiguration(LinkSharingConfiguration&& value) { SetLinkSharingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_dashboardId;

    Aws::String m_dashboardArn;

    Aws::Vector<ResourcePermission> m_permissions;

    int m_status;

    Aws::String m_requestId;

    LinkSharingConfiguration m_linkSharingConfiguration;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
