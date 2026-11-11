/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationInfoDetails.h>

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
class DescribeSnapshotOperationResult {
 public:
  AWS_KINESISANALYTICSV2_API DescribeSnapshotOperationResult() = default;
  AWS_KINESISANALYTICSV2_API DescribeSnapshotOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESISANALYTICSV2_API DescribeSnapshotOperationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An object containing information about the snapshot operation.</p>
   */
  inline const SnapshotOperationInfoDetails& GetSnapshotOperationInfoDetails() const { return m_snapshotOperationInfoDetails; }
  template <typename SnapshotOperationInfoDetailsT = SnapshotOperationInfoDetails>
  void SetSnapshotOperationInfoDetails(SnapshotOperationInfoDetailsT&& value) {
    m_snapshotOperationInfoDetailsHasBeenSet = true;
    m_snapshotOperationInfoDetails = std::forward<SnapshotOperationInfoDetailsT>(value);
  }
  template <typename SnapshotOperationInfoDetailsT = SnapshotOperationInfoDetails>
  DescribeSnapshotOperationResult& WithSnapshotOperationInfoDetails(SnapshotOperationInfoDetailsT&& value) {
    SetSnapshotOperationInfoDetails(std::forward<SnapshotOperationInfoDetailsT>(value));
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
  DescribeSnapshotOperationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SnapshotOperationInfoDetails m_snapshotOperationInfoDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapshotOperationInfoDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
