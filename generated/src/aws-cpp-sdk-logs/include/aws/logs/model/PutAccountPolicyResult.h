/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/AccountPolicy.h>
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
class PutAccountPolicyResult {
 public:
  AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult() = default;
  AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API PutAccountPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The account policy that you created.</p>
   */
  inline const AccountPolicy& GetAccountPolicy() const { return m_accountPolicy; }
  template <typename AccountPolicyT = AccountPolicy>
  void SetAccountPolicy(AccountPolicyT&& value) {
    m_accountPolicyHasBeenSet = true;
    m_accountPolicy = std::forward<AccountPolicyT>(value);
  }
  template <typename AccountPolicyT = AccountPolicy>
  PutAccountPolicyResult& WithAccountPolicy(AccountPolicyT&& value) {
    SetAccountPolicy(std::forward<AccountPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated impact of the policy on log groups in the account. This field
   * is returned only when the request specifies <code>dryRun</code> as
   * <code>true</code>.</p>
   */
  inline const DryRunResult& GetDryRunResult() const { return m_dryRunResult; }
  template <typename DryRunResultT = DryRunResult>
  void SetDryRunResult(DryRunResultT&& value) {
    m_dryRunResultHasBeenSet = true;
    m_dryRunResult = std::forward<DryRunResultT>(value);
  }
  template <typename DryRunResultT = DryRunResult>
  PutAccountPolicyResult& WithDryRunResult(DryRunResultT&& value) {
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
  PutAccountPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AccountPolicy m_accountPolicy;

  DryRunResult m_dryRunResult;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accountPolicyHasBeenSet = false;
  bool m_dryRunResultHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
