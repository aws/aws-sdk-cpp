/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class GetLogFieldsRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API GetLogFieldsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetLogFields"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the data source to retrieve log fields for.</p>
   */
  inline const Aws::String& GetDataSourceName() const { return m_dataSourceName; }
  inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
  template <typename DataSourceNameT = Aws::String>
  void SetDataSourceName(DataSourceNameT&& value) {
    m_dataSourceNameHasBeenSet = true;
    m_dataSourceName = std::forward<DataSourceNameT>(value);
  }
  template <typename DataSourceNameT = Aws::String>
  GetLogFieldsRequest& WithDataSourceName(DataSourceNameT&& value) {
    SetDataSourceName(std::forward<DataSourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the data source to retrieve log fields for.</p>
   */
  inline const Aws::String& GetDataSourceType() const { return m_dataSourceType; }
  inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
  template <typename DataSourceTypeT = Aws::String>
  void SetDataSourceType(DataSourceTypeT&& value) {
    m_dataSourceTypeHasBeenSet = true;
    m_dataSourceType = std::forward<DataSourceTypeT>(value);
  }
  template <typename DataSourceTypeT = Aws::String>
  GetLogFieldsRequest& WithDataSourceType(DataSourceTypeT&& value) {
    SetDataSourceType(std::forward<DataSourceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSourceName;

  Aws::String m_dataSourceType;
  bool m_dataSourceNameHasBeenSet = false;
  bool m_dataSourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
