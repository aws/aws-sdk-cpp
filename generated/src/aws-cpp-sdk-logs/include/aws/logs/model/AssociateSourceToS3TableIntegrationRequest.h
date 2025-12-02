/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DataSource.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class AssociateSourceToS3TableIntegrationRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API AssociateSourceToS3TableIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateSourceToS3TableIntegration"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 Table Integration to associate the
   * data source with.</p>
   */
  inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
  inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
  template <typename IntegrationArnT = Aws::String>
  void SetIntegrationArn(IntegrationArnT&& value) {
    m_integrationArnHasBeenSet = true;
    m_integrationArn = std::forward<IntegrationArnT>(value);
  }
  template <typename IntegrationArnT = Aws::String>
  AssociateSourceToS3TableIntegrationRequest& WithIntegrationArn(IntegrationArnT&& value) {
    SetIntegrationArn(std::forward<IntegrationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data source to associate with the S3 Table Integration. Contains the name
   * and type of the data source.</p>
   */
  inline const DataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataSource>
  AssociateSourceToS3TableIntegrationRequest& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationArn;
  bool m_integrationArnHasBeenSet = false;

  DataSource m_dataSource;
  bool m_dataSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
