/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DryRunResult.h>

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
class DeleteAccountPolicyResult {
 public:
  AWS_CLOUDWATCHLOGS_API DeleteAccountPolicyResult() = default;
  AWS_CLOUDWATCHLOGS_API DeleteAccountPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API DeleteAccountPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The estimated impact of deleting the policy. This field is returned only when
   * the request specifies <code>dryRun</code> as <code>true</code>.</p>
   */
  inline const DryRunResult& GetDryRunResult() const { return m_dryRunResult; }
  template <typename DryRunResultT = DryRunResult>
  void SetDryRunResult(DryRunResultT&& value) {
    m_dryRunResultHasBeenSet = true;
    m_dryRunResult = std::forward<DryRunResultT>(value);
  }
  template <typename DryRunResultT = DryRunResult>
  DeleteAccountPolicyResult& WithDryRunResult(DryRunResultT&& value) {
    SetDryRunResult(std::forward<DryRunResultT>(value));
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
  DeleteAccountPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DryRunResult m_dryRunResult;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dryRunResultHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
