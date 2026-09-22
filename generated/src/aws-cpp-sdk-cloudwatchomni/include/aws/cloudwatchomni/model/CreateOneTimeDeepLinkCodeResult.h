/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {
class CreateOneTimeDeepLinkCodeResult {
 public:
  AWS_CLOUDWATCHOMNI_API CreateOneTimeDeepLinkCodeResult() = default;
  AWS_CLOUDWATCHOMNI_API CreateOneTimeDeepLinkCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API CreateOneTimeDeepLinkCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The one-time deep-link code.</p>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  CreateOneTimeDeepLinkCodeResult& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deep-link URL containing the one-time code.</p>
   */
  inline const Aws::String& GetDeepLinkUrl() const { return m_deepLinkUrl; }
  template <typename DeepLinkUrlT = Aws::String>
  void SetDeepLinkUrl(DeepLinkUrlT&& value) {
    m_deepLinkUrlHasBeenSet = true;
    m_deepLinkUrl = std::forward<DeepLinkUrlT>(value);
  }
  template <typename DeepLinkUrlT = Aws::String>
  CreateOneTimeDeepLinkCodeResult& WithDeepLinkUrl(DeepLinkUrlT&& value) {
    SetDeepLinkUrl(std::forward<DeepLinkUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the code expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  CreateOneTimeDeepLinkCodeResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
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
  CreateOneTimeDeepLinkCodeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_code;

  Aws::String m_deepLinkUrl;

  Aws::Utils::DateTime m_expiresAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_codeHasBeenSet = false;
  bool m_deepLinkUrlHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
