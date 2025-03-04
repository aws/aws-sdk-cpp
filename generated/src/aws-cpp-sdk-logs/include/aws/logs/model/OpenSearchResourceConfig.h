/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains configuration details about an integration between
   * CloudWatch Logs and OpenSearch Service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OpenSearchResourceConfig">AWS
   * API Reference</a></p>
   */
  class OpenSearchResourceConfig
  {
  public:
    AWS_CLOUDWATCHLOGS_API OpenSearchResourceConfig() = default;
    AWS_CLOUDWATCHLOGS_API OpenSearchResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>To have the vended dashboard data encrypted with KMS instead of the
     * CloudWatch Logs default encryption method, specify the ARN of the KMS key that
     * you want to use.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    OpenSearchResourceConfig& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the ARN of an IAM role that CloudWatch Logs will use to create the
     * integration. This role must have the permissions necessary to access the
     * OpenSearch Service collection to be able to create the dashboards. For more
     * information about the permissions needed, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/OpenSearch-Dashboards-CreateRole.html">Permissions
     * that the integration needs</a> in the CloudWatch Logs User Guide.</p>
     */
    inline const Aws::String& GetDataSourceRoleArn() const { return m_dataSourceRoleArn; }
    inline bool DataSourceRoleArnHasBeenSet() const { return m_dataSourceRoleArnHasBeenSet; }
    template<typename DataSourceRoleArnT = Aws::String>
    void SetDataSourceRoleArn(DataSourceRoleArnT&& value) { m_dataSourceRoleArnHasBeenSet = true; m_dataSourceRoleArn = std::forward<DataSourceRoleArnT>(value); }
    template<typename DataSourceRoleArnT = Aws::String>
    OpenSearchResourceConfig& WithDataSourceRoleArn(DataSourceRoleArnT&& value) { SetDataSourceRoleArn(std::forward<DataSourceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the ARNs of IAM roles and IAM users who you want to grant permission
     * to for viewing the dashboards.</p>  <p>In addition to specifying
     * these users here, you must also grant them the
     * <b>CloudWatchOpenSearchDashboardAccess</b> IAM policy. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/OpenSearch-Dashboards-UserRoles.html">IAM
     * policies for users</a>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetDashboardViewerPrincipals() const { return m_dashboardViewerPrincipals; }
    inline bool DashboardViewerPrincipalsHasBeenSet() const { return m_dashboardViewerPrincipalsHasBeenSet; }
    template<typename DashboardViewerPrincipalsT = Aws::Vector<Aws::String>>
    void SetDashboardViewerPrincipals(DashboardViewerPrincipalsT&& value) { m_dashboardViewerPrincipalsHasBeenSet = true; m_dashboardViewerPrincipals = std::forward<DashboardViewerPrincipalsT>(value); }
    template<typename DashboardViewerPrincipalsT = Aws::Vector<Aws::String>>
    OpenSearchResourceConfig& WithDashboardViewerPrincipals(DashboardViewerPrincipalsT&& value) { SetDashboardViewerPrincipals(std::forward<DashboardViewerPrincipalsT>(value)); return *this;}
    template<typename DashboardViewerPrincipalsT = Aws::String>
    OpenSearchResourceConfig& AddDashboardViewerPrincipals(DashboardViewerPrincipalsT&& value) { m_dashboardViewerPrincipalsHasBeenSet = true; m_dashboardViewerPrincipals.emplace_back(std::forward<DashboardViewerPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you want to use an existing OpenSearch Service application for your
     * integration with OpenSearch Service, specify it here. If you omit this, a new
     * application will be created.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    OpenSearchResourceConfig& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify how many days that you want the data derived by OpenSearch Service to
     * be retained in the index that the dashboard refers to. This also sets the
     * maximum time period that you can choose when viewing data in the dashboard.
     * Choosing a longer time frame will incur additional costs. </p>
     */
    inline int GetRetentionDays() const { return m_retentionDays; }
    inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }
    inline void SetRetentionDays(int value) { m_retentionDaysHasBeenSet = true; m_retentionDays = value; }
    inline OpenSearchResourceConfig& WithRetentionDays(int value) { SetRetentionDays(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_dataSourceRoleArn;
    bool m_dataSourceRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_dashboardViewerPrincipals;
    bool m_dashboardViewerPrincipalsHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    int m_retentionDays{0};
    bool m_retentionDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
