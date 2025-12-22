/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ImportFilter.h>
#include <aws/logs/model/ImportStatistics.h>
#include <aws/logs/model/ImportStatus.h>

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
 * <p>An import job to move data from CloudTrail Event Data Store to
 * CloudWatch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/Import">AWS API
 * Reference</a></p>
 */
class Import {
 public:
  AWS_CLOUDWATCHLOGS_API Import() = default;
  AWS_CLOUDWATCHLOGS_API Import(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Import& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the import task.</p>
   */
  inline const Aws::String& GetImportId() const { return m_importId; }
  inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }
  template <typename ImportIdT = Aws::String>
  void SetImportId(ImportIdT&& value) {
    m_importIdHasBeenSet = true;
    m_importId = std::forward<ImportIdT>(value);
  }
  template <typename ImportIdT = Aws::String>
  Import& WithImportId(ImportIdT&& value) {
    SetImportId(std::forward<ImportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the CloudTrail Lake Event Data Store being imported from.</p>
   */
  inline const Aws::String& GetImportSourceArn() const { return m_importSourceArn; }
  inline bool ImportSourceArnHasBeenSet() const { return m_importSourceArnHasBeenSet; }
  template <typename ImportSourceArnT = Aws::String>
  void SetImportSourceArn(ImportSourceArnT&& value) {
    m_importSourceArnHasBeenSet = true;
    m_importSourceArn = std::forward<ImportSourceArnT>(value);
  }
  template <typename ImportSourceArnT = Aws::String>
  Import& WithImportSourceArn(ImportSourceArnT&& value) {
    SetImportSourceArn(std::forward<ImportSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the import task. Valid values are IN_PROGRESS,
   * CANCELLED, COMPLETED and FAILED.</p>
   */
  inline ImportStatus GetImportStatus() const { return m_importStatus; }
  inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
  inline void SetImportStatus(ImportStatus value) {
    m_importStatusHasBeenSet = true;
    m_importStatus = value;
  }
  inline Import& WithImportStatus(ImportStatus value) {
    SetImportStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the managed CloudWatch Logs log group where the events are being
   * imported to.</p>
   */
  inline const Aws::String& GetImportDestinationArn() const { return m_importDestinationArn; }
  inline bool ImportDestinationArnHasBeenSet() const { return m_importDestinationArnHasBeenSet; }
  template <typename ImportDestinationArnT = Aws::String>
  void SetImportDestinationArn(ImportDestinationArnT&& value) {
    m_importDestinationArnHasBeenSet = true;
    m_importDestinationArn = std::forward<ImportDestinationArnT>(value);
  }
  template <typename ImportDestinationArnT = Aws::String>
  Import& WithImportDestinationArn(ImportDestinationArnT&& value) {
    SetImportDestinationArn(std::forward<ImportDestinationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Statistics about the import progress</p>
   */
  inline const ImportStatistics& GetImportStatistics() const { return m_importStatistics; }
  inline bool ImportStatisticsHasBeenSet() const { return m_importStatisticsHasBeenSet; }
  template <typename ImportStatisticsT = ImportStatistics>
  void SetImportStatistics(ImportStatisticsT&& value) {
    m_importStatisticsHasBeenSet = true;
    m_importStatistics = std::forward<ImportStatisticsT>(value);
  }
  template <typename ImportStatisticsT = ImportStatistics>
  Import& WithImportStatistics(ImportStatisticsT&& value) {
    SetImportStatistics(std::forward<ImportStatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter criteria used for this import task.</p>
   */
  inline const ImportFilter& GetImportFilter() const { return m_importFilter; }
  inline bool ImportFilterHasBeenSet() const { return m_importFilterHasBeenSet; }
  template <typename ImportFilterT = ImportFilter>
  void SetImportFilter(ImportFilterT&& value) {
    m_importFilterHasBeenSet = true;
    m_importFilter = std::forward<ImportFilterT>(value);
  }
  template <typename ImportFilterT = ImportFilter>
  Import& WithImportFilter(ImportFilterT&& value) {
    SetImportFilter(std::forward<ImportFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the import task was created, expressed as the number of
   * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
   */
  inline long long GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  inline void SetCreationTime(long long value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = value;
  }
  inline Import& WithCreationTime(long long value) {
    SetCreationTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the import task was last updated, expressed as the number
   * of milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
   */
  inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  inline void SetLastUpdatedTime(long long value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = value;
  }
  inline Import& WithLastUpdatedTime(long long value) {
    SetLastUpdatedTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error message related to any failed imports</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  Import& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_importId;

  Aws::String m_importSourceArn;

  ImportStatus m_importStatus{ImportStatus::NOT_SET};

  Aws::String m_importDestinationArn;

  ImportStatistics m_importStatistics;

  ImportFilter m_importFilter;

  long long m_creationTime{0};

  long long m_lastUpdatedTime{0};

  Aws::String m_errorMessage;
  bool m_importIdHasBeenSet = false;
  bool m_importSourceArnHasBeenSet = false;
  bool m_importStatusHasBeenSet = false;
  bool m_importDestinationArnHasBeenSet = false;
  bool m_importStatisticsHasBeenSet = false;
  bool m_importFilterHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
