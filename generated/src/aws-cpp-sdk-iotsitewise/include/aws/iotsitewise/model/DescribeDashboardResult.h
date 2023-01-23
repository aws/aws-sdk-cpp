/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DescribeDashboardResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeDashboardResult();
    AWS_IOTSITEWISE_API DescribeDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardId = value; }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardId = std::move(value); }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardId.assign(value); }

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DescribeDashboardResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DescribeDashboardResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard.</p>
     */
    inline DescribeDashboardResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the dashboard, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dashboard/${DashboardId}</code>
     * </p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the dashboard, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dashboard/${DashboardId}</code>
     * </p>
     */
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the dashboard, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dashboard/${DashboardId}</code>
     * </p>
     */
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the dashboard, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dashboard/${DashboardId}</code>
     * </p>
     */
    inline void SetDashboardArn(const char* value) { m_dashboardArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the dashboard, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dashboard/${DashboardId}</code>
     * </p>
     */
    inline DescribeDashboardResult& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the dashboard, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dashboard/${DashboardId}</code>
     * </p>
     */
    inline DescribeDashboardResult& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the dashboard, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dashboard/${DashboardId}</code>
     * </p>
     */
    inline DescribeDashboardResult& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}


    /**
     * <p>The name of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }

    /**
     * <p>The name of the dashboard.</p>
     */
    inline void SetDashboardName(const Aws::String& value) { m_dashboardName = value; }

    /**
     * <p>The name of the dashboard.</p>
     */
    inline void SetDashboardName(Aws::String&& value) { m_dashboardName = std::move(value); }

    /**
     * <p>The name of the dashboard.</p>
     */
    inline void SetDashboardName(const char* value) { m_dashboardName.assign(value); }

    /**
     * <p>The name of the dashboard.</p>
     */
    inline DescribeDashboardResult& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}

    /**
     * <p>The name of the dashboard.</p>
     */
    inline DescribeDashboardResult& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}

    /**
     * <p>The name of the dashboard.</p>
     */
    inline DescribeDashboardResult& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}


    /**
     * <p>The ID of the project that the dashboard is in.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the project that the dashboard is in.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The ID of the project that the dashboard is in.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The ID of the project that the dashboard is in.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The ID of the project that the dashboard is in.</p>
     */
    inline DescribeDashboardResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the project that the dashboard is in.</p>
     */
    inline DescribeDashboardResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that the dashboard is in.</p>
     */
    inline DescribeDashboardResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The dashboard's description.</p>
     */
    inline const Aws::String& GetDashboardDescription() const{ return m_dashboardDescription; }

    /**
     * <p>The dashboard's description.</p>
     */
    inline void SetDashboardDescription(const Aws::String& value) { m_dashboardDescription = value; }

    /**
     * <p>The dashboard's description.</p>
     */
    inline void SetDashboardDescription(Aws::String&& value) { m_dashboardDescription = std::move(value); }

    /**
     * <p>The dashboard's description.</p>
     */
    inline void SetDashboardDescription(const char* value) { m_dashboardDescription.assign(value); }

    /**
     * <p>The dashboard's description.</p>
     */
    inline DescribeDashboardResult& WithDashboardDescription(const Aws::String& value) { SetDashboardDescription(value); return *this;}

    /**
     * <p>The dashboard's description.</p>
     */
    inline DescribeDashboardResult& WithDashboardDescription(Aws::String&& value) { SetDashboardDescription(std::move(value)); return *this;}

    /**
     * <p>The dashboard's description.</p>
     */
    inline DescribeDashboardResult& WithDashboardDescription(const char* value) { SetDashboardDescription(value); return *this;}


    /**
     * <p>The dashboard's definition JSON literal. For detailed information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetDashboardDefinition() const{ return m_dashboardDefinition; }

    /**
     * <p>The dashboard's definition JSON literal. For detailed information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDashboardDefinition(const Aws::String& value) { m_dashboardDefinition = value; }

    /**
     * <p>The dashboard's definition JSON literal. For detailed information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDashboardDefinition(Aws::String&& value) { m_dashboardDefinition = std::move(value); }

    /**
     * <p>The dashboard's definition JSON literal. For detailed information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDashboardDefinition(const char* value) { m_dashboardDefinition.assign(value); }

    /**
     * <p>The dashboard's definition JSON literal. For detailed information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline DescribeDashboardResult& WithDashboardDefinition(const Aws::String& value) { SetDashboardDefinition(value); return *this;}

    /**
     * <p>The dashboard's definition JSON literal. For detailed information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline DescribeDashboardResult& WithDashboardDefinition(Aws::String&& value) { SetDashboardDefinition(std::move(value)); return *this;}

    /**
     * <p>The dashboard's definition JSON literal. For detailed information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline DescribeDashboardResult& WithDashboardDefinition(const char* value) { SetDashboardDefinition(value); return *this;}


    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetDashboardCreationDate() const{ return m_dashboardCreationDate; }

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline void SetDashboardCreationDate(const Aws::Utils::DateTime& value) { m_dashboardCreationDate = value; }

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline void SetDashboardCreationDate(Aws::Utils::DateTime&& value) { m_dashboardCreationDate = std::move(value); }

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline DescribeDashboardResult& WithDashboardCreationDate(const Aws::Utils::DateTime& value) { SetDashboardCreationDate(value); return *this;}

    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline DescribeDashboardResult& WithDashboardCreationDate(Aws::Utils::DateTime&& value) { SetDashboardCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetDashboardLastUpdateDate() const{ return m_dashboardLastUpdateDate; }

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline void SetDashboardLastUpdateDate(const Aws::Utils::DateTime& value) { m_dashboardLastUpdateDate = value; }

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline void SetDashboardLastUpdateDate(Aws::Utils::DateTime&& value) { m_dashboardLastUpdateDate = std::move(value); }

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline DescribeDashboardResult& WithDashboardLastUpdateDate(const Aws::Utils::DateTime& value) { SetDashboardLastUpdateDate(value); return *this;}

    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline DescribeDashboardResult& WithDashboardLastUpdateDate(Aws::Utils::DateTime&& value) { SetDashboardLastUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_dashboardId;

    Aws::String m_dashboardArn;

    Aws::String m_dashboardName;

    Aws::String m_projectId;

    Aws::String m_dashboardDescription;

    Aws::String m_dashboardDefinition;

    Aws::Utils::DateTime m_dashboardCreationDate;

    Aws::Utils::DateTime m_dashboardLastUpdateDate;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
