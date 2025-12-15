/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

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
class CreateImportTaskResult {
 public:
  AWS_CLOUDWATCHLOGS_API CreateImportTaskResult() = default;
  AWS_CLOUDWATCHLOGS_API CreateImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API CreateImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A unique identifier for the import task.</p>
   */
  inline const Aws::String& GetImportId() const { return m_importId; }
  template <typename ImportIdT = Aws::String>
  void SetImportId(ImportIdT&& value) {
    m_importIdHasBeenSet = true;
    m_importId = std::forward<ImportIdT>(value);
  }
  template <typename ImportIdT = Aws::String>
  CreateImportTaskResult& WithImportId(ImportIdT&& value) {
    SetImportId(std::forward<ImportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the CloudWatch Logs log group created as the destination for the
   * imported events.</p>
   */
  inline const Aws::String& GetImportDestinationArn() const { return m_importDestinationArn; }
  template <typename ImportDestinationArnT = Aws::String>
  void SetImportDestinationArn(ImportDestinationArnT&& value) {
    m_importDestinationArnHasBeenSet = true;
    m_importDestinationArn = std::forward<ImportDestinationArnT>(value);
  }
  template <typename ImportDestinationArnT = Aws::String>
  CreateImportTaskResult& WithImportDestinationArn(ImportDestinationArnT&& value) {
    SetImportDestinationArn(std::forward<ImportDestinationArnT>(value));
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
  inline CreateImportTaskResult& WithCreationTime(long long value) {
    SetCreationTime(value);
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
  CreateImportTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_importId;

  Aws::String m_importDestinationArn;

  long long m_creationTime{0};

  Aws::String m_requestId;
  bool m_importIdHasBeenSet = false;
  bool m_importDestinationArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
