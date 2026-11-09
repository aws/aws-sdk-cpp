/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/account-access-runtime/model/CredentialsDetails.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AccountAccessRuntime {
namespace Model {
class GetRoleCredentialsResult {
 public:
  AWS_ACCOUNTACCESSRUNTIME_API GetRoleCredentialsResult() = default;
  AWS_ACCOUNTACCESSRUNTIME_API GetRoleCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCOUNTACCESSRUNTIME_API GetRoleCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The temporary credentials that the service returns for the requested
   * role.</p>
   */
  inline const CredentialsDetails& GetCredentialsDetails() const { return m_credentialsDetails; }
  template <typename CredentialsDetailsT = CredentialsDetails>
  void SetCredentialsDetails(CredentialsDetailsT&& value) {
    m_credentialsDetailsHasBeenSet = true;
    m_credentialsDetails = std::forward<CredentialsDetailsT>(value);
  }
  template <typename CredentialsDetailsT = CredentialsDetails>
  GetRoleCredentialsResult& WithCredentialsDetails(CredentialsDetailsT&& value) {
    SetCredentialsDetails(std::forward<CredentialsDetailsT>(value));
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
  GetRoleCredentialsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CredentialsDetails m_credentialsDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_credentialsDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
