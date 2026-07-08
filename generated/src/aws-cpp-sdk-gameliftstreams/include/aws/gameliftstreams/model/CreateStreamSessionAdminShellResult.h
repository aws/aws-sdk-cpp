/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {
class CreateStreamSessionAdminShellResult {
 public:
  AWS_GAMELIFTSTREAMS_API CreateStreamSessionAdminShellResult() = default;
  AWS_GAMELIFTSTREAMS_API CreateStreamSessionAdminShellResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GAMELIFTSTREAMS_API CreateStreamSessionAdminShellResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An Amazon Web Services Systems Manager session identifier that uniquely
   * identifies the requested terminal session. Use this value with the Amazon Web
   * Services Systems Manager Session Manager plugin.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  CreateStreamSessionAdminShellResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon Web Services Systems Manager WebSocket connection endpoint for the
   * requested terminal session.</p>
   */
  inline const Aws::String& GetStreamUrl() const { return m_streamUrl; }
  template <typename StreamUrlT = Aws::String>
  void SetStreamUrl(StreamUrlT&& value) {
    m_streamUrlHasBeenSet = true;
    m_streamUrl = std::forward<StreamUrlT>(value);
  }
  template <typename StreamUrlT = Aws::String>
  CreateStreamSessionAdminShellResult& WithStreamUrl(StreamUrlT&& value) {
    SetStreamUrl(std::forward<StreamUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon Web Services Systems Manager authentication token that
   * authenticates your access to the session ID and WebSocket URL. This token must
   * be treated with the same level of security as other user credentials. The token
   * value is only valid for establishing a new connection within 60 seconds of
   * generation.</p>
   */
  inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
  template <typename TokenValueT = Aws::String>
  void SetTokenValue(TokenValueT&& value) {
    m_tokenValueHasBeenSet = true;
    m_tokenValue = std::forward<TokenValueT>(value);
  }
  template <typename TokenValueT = Aws::String>
  CreateStreamSessionAdminShellResult& WithTokenValue(TokenValueT&& value) {
    SetTokenValue(std::forward<TokenValueT>(value));
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
  CreateStreamSessionAdminShellResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sessionId;

  Aws::String m_streamUrl;

  Aws::String m_tokenValue;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sessionIdHasBeenSet = false;
  bool m_streamUrlHasBeenSet = false;
  bool m_tokenValueHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
