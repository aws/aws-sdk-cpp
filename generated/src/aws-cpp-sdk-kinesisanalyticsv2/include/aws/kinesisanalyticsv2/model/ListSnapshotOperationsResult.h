/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationInfo.h>

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
class ListSnapshotOperationsResult {
 public:
  AWS_KINESISANALYTICSV2_API ListSnapshotOperationsResult() = default;
  AWS_KINESISANALYTICSV2_API ListSnapshotOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESISANALYTICSV2_API ListSnapshotOperationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>SnapshotOperationInfo</code> objects.</p>
   */
  inline const Aws::Vector<SnapshotOperationInfo>& GetSnapshotOperationInfoList() const { return m_snapshotOperationInfoList; }
  template <typename SnapshotOperationInfoListT = Aws::Vector<SnapshotOperationInfo>>
  void SetSnapshotOperationInfoList(SnapshotOperationInfoListT&& value) {
    m_snapshotOperationInfoListHasBeenSet = true;
    m_snapshotOperationInfoList = std::forward<SnapshotOperationInfoListT>(value);
  }
  template <typename SnapshotOperationInfoListT = Aws::Vector<SnapshotOperationInfo>>
  ListSnapshotOperationsResult& WithSnapshotOperationInfoList(SnapshotOperationInfoListT&& value) {
    SetSnapshotOperationInfoList(std::forward<SnapshotOperationInfoListT>(value));
    return *this;
  }
  template <typename SnapshotOperationInfoListT = SnapshotOperationInfo>
  ListSnapshotOperationsResult& AddSnapshotOperationInfoList(SnapshotOperationInfoListT&& value) {
    m_snapshotOperationInfoListHasBeenSet = true;
    m_snapshotOperationInfoList.emplace_back(std::forward<SnapshotOperationInfoListT>(value));
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
  ListSnapshotOperationsResult& WithNextToken(NextTokenT&& value) {
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
  ListSnapshotOperationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SnapshotOperationInfo> m_snapshotOperationInfoList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapshotOperationInfoListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
