/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/StorageTier.h>

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
class PutStorageTierPolicyResult {
 public:
  AWS_CLOUDWATCHLOGS_API PutStorageTierPolicyResult() = default;
  AWS_CLOUDWATCHLOGS_API PutStorageTierPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API PutStorageTierPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The storage tier that was set.</p>
   */
  inline StorageTier GetStorageTier() const { return m_storageTier; }
  inline void SetStorageTier(StorageTier value) {
    m_storageTierHasBeenSet = true;
    m_storageTier = value;
  }
  inline PutStorageTierPolicyResult& WithStorageTier(StorageTier value) {
    SetStorageTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the storage tier policy was last updated, expressed as the
   * number of milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
   */
  inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline void SetLastUpdatedTime(long long value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = value;
  }
  inline PutStorageTierPolicyResult& WithLastUpdatedTime(long long value) {
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
  PutStorageTierPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  StorageTier m_storageTier{StorageTier::NOT_SET};

  long long m_lastUpdatedTime{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_storageTierHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
