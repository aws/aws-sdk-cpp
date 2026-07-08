/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AuthCodeEntityType.h>
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
namespace Connect {
namespace Model {
class CreateAuthCodeResult {
 public:
  AWS_CONNECT_API CreateAuthCodeResult() = default;
  AWS_CONNECT_API CreateAuthCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateAuthCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The authorization code to use for establishing a session.</p>
   */
  inline const Aws::String& GetAuthCode() const { return m_authCode; }
  template <typename AuthCodeT = Aws::String>
  void SetAuthCode(AuthCodeT&& value) {
    m_authCodeHasBeenSet = true;
    m_authCode = std::forward<AuthCodeT>(value);
  }
  template <typename AuthCodeT = Aws::String>
  CreateAuthCodeResult& WithAuthCode(AuthCodeT&& value) {
    SetAuthCode(std::forward<AuthCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the session created with the authorization code.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  CreateAuthCodeResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of entity associated with the authorization code.</p>
   */
  inline AuthCodeEntityType GetEntityType() const { return m_entityType; }
  inline void SetEntityType(AuthCodeEntityType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline CreateAuthCodeResult& WithEntityType(AuthCodeEntityType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the entity associated with the authorization code.</p>
   */
  inline const Aws::String& GetEntityId() const { return m_entityId; }
  template <typename EntityIdT = Aws::String>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = Aws::String>
  CreateAuthCodeResult& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
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
  CreateAuthCodeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_authCode;

  Aws::String m_sessionId;

  AuthCodeEntityType m_entityType{AuthCodeEntityType::NOT_SET};

  Aws::String m_entityId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_authCodeHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
