/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
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
namespace ACM {
namespace Model {
class GetAcmeExternalAccountBindingCredentialsResult {
 public:
  AWS_ACM_API GetAcmeExternalAccountBindingCredentialsResult() = default;
  AWS_ACM_API GetAcmeExternalAccountBindingCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API GetAcmeExternalAccountBindingCredentialsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The key identifier for the external account binding credentials.</p>
   */
  inline const Aws::String& GetKeyId() const { return m_keyId; }
  template <typename KeyIdT = Aws::String>
  void SetKeyId(KeyIdT&& value) {
    m_keyIdHasBeenSet = true;
    m_keyId = std::forward<KeyIdT>(value);
  }
  template <typename KeyIdT = Aws::String>
  GetAcmeExternalAccountBindingCredentialsResult& WithKeyId(KeyIdT&& value) {
    SetKeyId(std::forward<KeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MAC key for the external account binding credentials.</p>
   */
  inline const Aws::String& GetMacKey() const { return m_macKey; }
  template <typename MacKeyT = Aws::String>
  void SetMacKey(MacKeyT&& value) {
    m_macKeyHasBeenSet = true;
    m_macKey = std::forward<MacKeyT>(value);
  }
  template <typename MacKeyT = Aws::String>
  GetAcmeExternalAccountBindingCredentialsResult& WithMacKey(MacKeyT&& value) {
    SetMacKey(std::forward<MacKeyT>(value));
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
  GetAcmeExternalAccountBindingCredentialsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_keyId;

  Aws::String m_macKey;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_keyIdHasBeenSet = false;
  bool m_macKeyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
