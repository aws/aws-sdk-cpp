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
    AWS_CLOUDWATCHLOGS_API OpenSearchResourceConfig();
    AWS_CLOUDWATCHLOGS_API OpenSearchResourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchResourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>To have the vended dashboard data encrypted with KMS instead of the
     * CloudWatch Logs default encryption method, specify the ARN of the KMS key that
     * you want to use.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline OpenSearchResourceConfig& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline OpenSearchResourceConfig& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline OpenSearchResourceConfig& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
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
    inline const Aws::String& GetDataSourceRoleArn() const{ return m_dataSourceRoleArn; }
    inline bool DataSourceRoleArnHasBeenSet() const { return m_dataSourceRoleArnHasBeenSet; }
    inline void SetDataSourceRoleArn(const Aws::String& value) { m_dataSourceRoleArnHasBeenSet = true; m_dataSourceRoleArn = value; }
    inline void SetDataSourceRoleArn(Aws::String&& value) { m_dataSourceRoleArnHasBeenSet = true; m_dataSourceRoleArn = std::move(value); }
    inline void SetDataSourceRoleArn(const char* value) { m_dataSourceRoleArnHasBeenSet = true; m_dataSourceRoleArn.assign(value); }
    inline OpenSearchResourceConfig& WithDataSourceRoleArn(const Aws::String& value) { SetDataSourceRoleArn(value); return *this;}
    inline OpenSearchResourceConfig& WithDataSourceRoleArn(Aws::String&& value) { SetDataSourceRoleArn(std::move(value)); return *this;}
    inline OpenSearchResourceConfig& WithDataSourceRoleArn(const char* value) { SetDataSourceRoleArn(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetDashboardViewerPrincipals() const{ return m_dashboardViewerPrincipals; }
    inline bool DashboardViewerPrincipalsHasBeenSet() const { return m_dashboardViewerPrincipalsHasBeenSet; }
    inline void SetDashboardViewerPrincipals(const Aws::Vector<Aws::String>& value) { m_dashboardViewerPrincipalsHasBeenSet = true; m_dashboardViewerPrincipals = value; }
    inline void SetDashboardViewerPrincipals(Aws::Vector<Aws::String>&& value) { m_dashboardViewerPrincipalsHasBeenSet = true; m_dashboardViewerPrincipals = std::move(value); }
    inline OpenSearchResourceConfig& WithDashboardViewerPrincipals(const Aws::Vector<Aws::String>& value) { SetDashboardViewerPrincipals(value); return *this;}
    inline OpenSearchResourceConfig& WithDashboardViewerPrincipals(Aws::Vector<Aws::String>&& value) { SetDashboardViewerPrincipals(std::move(value)); return *this;}
    inline OpenSearchResourceConfig& AddDashboardViewerPrincipals(const Aws::String& value) { m_dashboardViewerPrincipalsHasBeenSet = true; m_dashboardViewerPrincipals.push_back(value); return *this; }
    inline OpenSearchResourceConfig& AddDashboardViewerPrincipals(Aws::String&& value) { m_dashboardViewerPrincipalsHasBeenSet = true; m_dashboardViewerPrincipals.push_back(std::move(value)); return *this; }
    inline OpenSearchResourceConfig& AddDashboardViewerPrincipals(const char* value) { m_dashboardViewerPrincipalsHasBeenSet = true; m_dashboardViewerPrincipals.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you want to use an existing OpenSearch Service application for your
     * integration with OpenSearch Service, specify it here. If you omit this, a new
     * application will be created.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }
    inline OpenSearchResourceConfig& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline OpenSearchResourceConfig& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline OpenSearchResourceConfig& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify how many days that you want the data derived by OpenSearch Service to
     * be retained in the index that the dashboard refers to. This also sets the
     * maximum time period that you can choose when viewing data in the dashboard.
     * Choosing a longer time frame will incur additional costs. </p>
     */
    inline int GetRetentionDays() const{ return m_retentionDays; }
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

    int m_retentionDays;
    bool m_retentionDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
