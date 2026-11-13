/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInfoDetails.h>

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
class DescribeSnapshotResult {
 public:
  AWS_KINESISANALYTICSV2_API DescribeSnapshotResult() = default;
  AWS_KINESISANALYTICSV2_API DescribeSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESISANALYTICSV2_API DescribeSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An object containing information about the enhanced snapshot.</p>
   */
  inline const SnapshotInfoDetails& GetSnapshotInfoDetails() const { return m_snapshotInfoDetails; }
  template <typename SnapshotInfoDetailsT = SnapshotInfoDetails>
  void SetSnapshotInfoDetails(SnapshotInfoDetailsT&& value) {
    m_snapshotInfoDetailsHasBeenSet = true;
    m_snapshotInfoDetails = std::forward<SnapshotInfoDetailsT>(value);
  }
  template <typename SnapshotInfoDetailsT = SnapshotInfoDetails>
  DescribeSnapshotResult& WithSnapshotInfoDetails(SnapshotInfoDetailsT&& value) {
    SetSnapshotInfoDetails(std::forward<SnapshotInfoDetailsT>(value));
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
  DescribeSnapshotResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SnapshotInfoDetails m_snapshotInfoDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapshotInfoDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
