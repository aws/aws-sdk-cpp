/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
class UpdateLookupTableResult {
 public:
  AWS_CLOUDWATCHLOGS_API UpdateLookupTableResult() = default;
  AWS_CLOUDWATCHLOGS_API UpdateLookupTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API UpdateLookupTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the lookup table that was updated.</p>
   */
  inline const Aws::String& GetLookupTableArn() const { return m_lookupTableArn; }
  template <typename LookupTableArnT = Aws::String>
  void SetLookupTableArn(LookupTableArnT&& value) {
    m_lookupTableArnHasBeenSet = true;
    m_lookupTableArn = std::forward<LookupTableArnT>(value);
  }
  template <typename LookupTableArnT = Aws::String>
  UpdateLookupTableResult& WithLookupTableArn(LookupTableArnT&& value) {
    SetLookupTableArn(std::forward<LookupTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the lookup table was last updated, expressed as the number of
   * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
   */
  inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline void SetLastUpdatedTime(long long value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = value;
  }
  inline UpdateLookupTableResult& WithLastUpdatedTime(long long value) {
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
  UpdateLookupTableResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_lookupTableArn;

  long long m_lastUpdatedTime{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_lookupTableArnHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
