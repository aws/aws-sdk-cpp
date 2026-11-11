/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace KinesisAnalyticsV2 {
namespace Model {
class ExportSnapshotResult {
 public:
  AWS_KINESISANALYTICSV2_API ExportSnapshotResult() = default;
  AWS_KINESISANALYTICSV2_API ExportSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESISANALYTICSV2_API ExportSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the snapshot operation. You can use this value with
   * <code>DescribeSnapshotOperation</code> to track the progress of the export.</p>
   */
  inline const Aws::String& GetSnapshotOperationId() const { return m_snapshotOperationId; }
  template <typename SnapshotOperationIdT = Aws::String>
  void SetSnapshotOperationId(SnapshotOperationIdT&& value) {
    m_snapshotOperationIdHasBeenSet = true;
    m_snapshotOperationId = std::forward<SnapshotOperationIdT>(value);
  }
  template <typename SnapshotOperationIdT = Aws::String>
  ExportSnapshotResult& WithSnapshotOperationId(SnapshotOperationIdT&& value) {
    SetSnapshotOperationId(std::forward<SnapshotOperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the snapshot operation.</p>
   */
  inline SnapshotOperationStatus GetSnapshotOperationStatus() const { return m_snapshotOperationStatus; }
  inline void SetSnapshotOperationStatus(SnapshotOperationStatus value) {
    m_snapshotOperationStatusHasBeenSet = true;
    m_snapshotOperationStatus = value;
  }
  inline ExportSnapshotResult& WithSnapshotOperationStatus(SnapshotOperationStatus value) {
    SetSnapshotOperationStatus(value);
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
  ExportSnapshotResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_snapshotOperationId;

  SnapshotOperationStatus m_snapshotOperationStatus{SnapshotOperationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapshotOperationIdHasBeenSet = false;
  bool m_snapshotOperationStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
