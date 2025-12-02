/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DataSource.h>
#include <aws/logs/model/S3TableIntegrationSourceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Represents a data source association with an S3 Table Integration, including
 * its status and metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/S3TableIntegrationSource">AWS
 * API Reference</a></p>
 */
class S3TableIntegrationSource {
 public:
  AWS_CLOUDWATCHLOGS_API S3TableIntegrationSource() = default;
  AWS_CLOUDWATCHLOGS_API S3TableIntegrationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API S3TableIntegrationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this data source association.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  S3TableIntegrationSource& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data source associated with the S3 Table Integration.</p>
   */
  inline const DataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataSource>
  S3TableIntegrationSource& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the data source association.</p>
   */
  inline S3TableIntegrationSourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(S3TableIntegrationSourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline S3TableIntegrationSource& WithStatus(S3TableIntegrationSourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the status of the data source association.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  S3TableIntegrationSource& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the data source association was created.</p>
   */
  inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
  inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
  inline void SetCreatedTimeStamp(long long value) {
    m_createdTimeStampHasBeenSet = true;
    m_createdTimeStamp = value;
  }
  inline S3TableIntegrationSource& WithCreatedTimeStamp(long long value) {
    SetCreatedTimeStamp(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;

  DataSource m_dataSource;
  bool m_dataSourceHasBeenSet = false;

  S3TableIntegrationSourceStatus m_status{S3TableIntegrationSourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;

  long long m_createdTimeStamp{0};
  bool m_createdTimeStampHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
