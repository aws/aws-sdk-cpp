/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ImportStatistics.h>
#include <aws/logs/model/ImportStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {
class CancelImportTaskResult {
 public:
  AWS_CLOUDWATCHLOGS_API CancelImportTaskResult() = default;
  AWS_CLOUDWATCHLOGS_API CancelImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API CancelImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the cancelled import task.</p>
   */
  inline const Aws::String& GetImportId() const { return m_importId; }
  template <typename ImportIdT = Aws::String>
  void SetImportId(ImportIdT&& value) {
    m_importIdHasBeenSet = true;
    m_importId = std::forward<ImportIdT>(value);
  }
  template <typename ImportIdT = Aws::String>
  CancelImportTaskResult& WithImportId(ImportIdT&& value) {
    SetImportId(std::forward<ImportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Statistics about the import progress at the time of cancellation.</p>
   */
  inline const ImportStatistics& GetImportStatistics() const { return m_importStatistics; }
  template <typename ImportStatisticsT = ImportStatistics>
  void SetImportStatistics(ImportStatisticsT&& value) {
    m_importStatisticsHasBeenSet = true;
    m_importStatistics = std::forward<ImportStatisticsT>(value);
  }
  template <typename ImportStatisticsT = ImportStatistics>
  CancelImportTaskResult& WithImportStatistics(ImportStatisticsT&& value) {
    SetImportStatistics(std::forward<ImportStatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final status of the import task. This will be set to CANCELLED.</p>
   */
  inline ImportStatus GetImportStatus() const { return m_importStatus; }
  inline void SetImportStatus(ImportStatus value) {
    m_importStatusHasBeenSet = true;
    m_importStatus = value;
  }
  inline CancelImportTaskResult& WithImportStatus(ImportStatus value) {
    SetImportStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the import task was created, expressed as the number of
   * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
   */
  inline long long GetCreationTime() const { return m_creationTime; }
  inline void SetCreationTime(long long value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = value;
  }
  inline CancelImportTaskResult& WithCreationTime(long long value) {
    SetCreationTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the import task was cancelled, expressed as the number of
   * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
   */
  inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline void SetLastUpdatedTime(long long value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = value;
  }
  inline CancelImportTaskResult& WithLastUpdatedTime(long long value) {
    SetLastUpdatedTime(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CancelImportTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_importId;

  ImportStatistics m_importStatistics;

  ImportStatus m_importStatus{ImportStatus::NOT_SET};

  long long m_creationTime{0};

  long long m_lastUpdatedTime{0};

  Aws::String m_requestId;
  bool m_importIdHasBeenSet = false;
  bool m_importStatisticsHasBeenSet = false;
  bool m_importStatusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
