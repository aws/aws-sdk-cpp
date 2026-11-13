/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInfo.h>

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
class ListSnapshotsResult {
 public:
  AWS_KINESISANALYTICSV2_API ListSnapshotsResult() = default;
  AWS_KINESISANALYTICSV2_API ListSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESISANALYTICSV2_API ListSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>SnapshotInfo</code> objects.</p>
   */
  inline const Aws::Vector<SnapshotInfo>& GetSnapshotInfoList() const { return m_snapshotInfoList; }
  template <typename SnapshotInfoListT = Aws::Vector<SnapshotInfo>>
  void SetSnapshotInfoList(SnapshotInfoListT&& value) {
    m_snapshotInfoListHasBeenSet = true;
    m_snapshotInfoList = std::forward<SnapshotInfoListT>(value);
  }
  template <typename SnapshotInfoListT = Aws::Vector<SnapshotInfo>>
  ListSnapshotsResult& WithSnapshotInfoList(SnapshotInfoListT&& value) {
    SetSnapshotInfoList(std::forward<SnapshotInfoListT>(value));
    return *this;
  }
  template <typename SnapshotInfoListT = SnapshotInfo>
  ListSnapshotsResult& AddSnapshotInfoList(SnapshotInfoListT&& value) {
    m_snapshotInfoListHasBeenSet = true;
    m_snapshotInfoList.emplace_back(std::forward<SnapshotInfoListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSnapshotsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListSnapshotsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SnapshotInfo> m_snapshotInfoList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapshotInfoListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
