/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
 * <p>A collection of events being imported to CloudWatch</p><p><h3>See Also:</h3>
 * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ImportBatch">AWS
 * API Reference</a></p>
 */
class ImportBatch {
 public:
  AWS_CLOUDWATCHLOGS_API ImportBatch() = default;
  AWS_CLOUDWATCHLOGS_API ImportBatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API ImportBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the import batch.</p>
   */
  inline const Aws::String& GetBatchId() const { return m_batchId; }
  inline bool BatchIdHasBeenSet() const { return m_batchIdHasBeenSet; }
  template <typename BatchIdT = Aws::String>
  void SetBatchId(BatchIdT&& value) {
    m_batchIdHasBeenSet = true;
    m_batchId = std::forward<BatchIdT>(value);
  }
  template <typename BatchIdT = Aws::String>
  ImportBatch& WithBatchId(BatchIdT&& value) {
    SetBatchId(std::forward<BatchIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the import batch. Valid values are IN_PROGRESS,
   * CANCELLED, COMPLETED and FAILED.</p>
   */
  inline ImportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ImportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ImportBatch& WithStatus(ImportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message if the batch failed to import. Only present when status is
   * FAILED.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  ImportBatch& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_batchId;

  ImportStatus m_status{ImportStatus::NOT_SET};

  Aws::String m_errorMessage;
  bool m_batchIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
