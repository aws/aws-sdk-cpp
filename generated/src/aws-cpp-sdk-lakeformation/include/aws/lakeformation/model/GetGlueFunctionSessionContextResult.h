/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {
class GetGlueFunctionSessionContextResult {
 public:
  AWS_LAKEFORMATION_API GetGlueFunctionSessionContextResult() = default;
  AWS_LAKEFORMATION_API GetGlueFunctionSessionContextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAKEFORMATION_API GetGlueFunctionSessionContextResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the session context.</p>
   */
  inline const Aws::String& GetSessionContextId() const { return m_sessionContextId; }
  template <typename SessionContextIdT = Aws::String>
  void SetSessionContextId(SessionContextIdT&& value) {
    m_sessionContextIdHasBeenSet = true;
    m_sessionContextId = std::forward<SessionContextIdT>(value);
  }
  template <typename SessionContextIdT = Aws::String>
  GetGlueFunctionSessionContextResult& WithSessionContextId(SessionContextIdT&& value) {
    SetSessionContextId(std::forward<SessionContextIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the session context expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
  template <typename ExpirationT = Aws::Utils::DateTime>
  void SetExpiration(ExpirationT&& value) {
    m_expirationHasBeenSet = true;
    m_expiration = std::forward<ExpirationT>(value);
  }
  template <typename ExpirationT = Aws::Utils::DateTime>
  GetGlueFunctionSessionContextResult& WithExpiration(ExpirationT&& value) {
    SetExpiration(std::forward<ExpirationT>(value));
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
  GetGlueFunctionSessionContextResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sessionContextId;

  Aws::Utils::DateTime m_expiration{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionContextIdHasBeenSet = false;
  bool m_expirationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
