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
    AWS_IOTSITEWISE_API DescribeDashboardResult() = default;
    AWS_IOTSITEWISE_API DescribeDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    DescribeDashboardResult& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the dashboard, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dashboard/${DashboardId}</code>
     * </p>
     */
    inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
    template<typename DashboardArnT = Aws::String>
    void SetDashboardArn(DashboardArnT&& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = std::forward<DashboardArnT>(value); }
    template<typename DashboardArnT = Aws::String>
    DescribeDashboardResult& WithDashboardArn(DashboardArnT&& value) { SetDashboardArn(std::forward<DashboardArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
    template<typename DashboardNameT = Aws::String>
    void SetDashboardName(DashboardNameT&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::forward<DashboardNameT>(value); }
    template<typename DashboardNameT = Aws::String>
    DescribeDashboardResult& WithDashboardName(DashboardNameT&& value) { SetDashboardName(std::forward<DashboardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project that the dashboard is in.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    DescribeDashboardResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dashboard's description.</p>
     */
    inline const Aws::String& GetDashboardDescription() const { return m_dashboardDescription; }
    template<typename DashboardDescriptionT = Aws::String>
    void SetDashboardDescription(DashboardDescriptionT&& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = std::forward<DashboardDescriptionT>(value); }
    template<typename DashboardDescriptionT = Aws::String>
    DescribeDashboardResult& WithDashboardDescription(DashboardDescriptionT&& value) { SetDashboardDescription(std::forward<DashboardDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dashboard's definition JSON literal. For detailed information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetDashboardDefinition() const { return m_dashboardDefinition; }
    template<typename DashboardDefinitionT = Aws::String>
    void SetDashboardDefinition(DashboardDefinitionT&& value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition = std::forward<DashboardDefinitionT>(value); }
    template<typename DashboardDefinitionT = Aws::String>
    DescribeDashboardResult& WithDashboardDefinition(DashboardDefinitionT&& value) { SetDashboardDefinition(std::forward<DashboardDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the dashboard was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetDashboardCreationDate() const { return m_dashboardCreationDate; }
    template<typename DashboardCreationDateT = Aws::Utils::DateTime>
    void SetDashboardCreationDate(DashboardCreationDateT&& value) { m_dashboardCreationDateHasBeenSet = true; m_dashboardCreationDate = std::forward<DashboardCreationDateT>(value); }
    template<typename DashboardCreationDateT = Aws::Utils::DateTime>
    DescribeDashboardResult& WithDashboardCreationDate(DashboardCreationDateT&& value) { SetDashboardCreationDate(std::forward<DashboardCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the dashboard was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetDashboardLastUpdateDate() const { return m_dashboardLastUpdateDate; }
    template<typename DashboardLastUpdateDateT = Aws::Utils::DateTime>
    void SetDashboardLastUpdateDate(DashboardLastUpdateDateT&& value) { m_dashboardLastUpdateDateHasBeenSet = true; m_dashboardLastUpdateDate = std::forward<DashboardLastUpdateDateT>(value); }
    template<typename DashboardLastUpdateDateT = Aws::Utils::DateTime>
    DescribeDashboardResult& WithDashboardLastUpdateDate(DashboardLastUpdateDateT&& value) { SetDashboardLastUpdateDate(std::forward<DashboardLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDashboardResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_dashboardArn;
    bool m_dashboardArnHasBeenSet = false;

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_dashboardDescription;
    bool m_dashboardDescriptionHasBeenSet = false;

    Aws::String m_dashboardDefinition;
    bool m_dashboardDefinitionHasBeenSet = false;

    Aws::Utils::DateTime m_dashboardCreationDate{};
    bool m_dashboardCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_dashboardLastUpdateDate{};
    bool m_dashboardLastUpdateDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
