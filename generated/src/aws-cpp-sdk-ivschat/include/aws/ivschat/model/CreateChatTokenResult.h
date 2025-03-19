/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ivschat
{
namespace Model
{
  class CreateChatTokenResult
  {
  public:
    AWS_IVSCHAT_API CreateChatTokenResult() = default;
    AWS_IVSCHAT_API CreateChatTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API CreateChatTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    CreateChatTokenResult& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time after which the token is no longer valid and cannot be used to connect
     * to a room. This is an ISO 8601 timestamp; <i>note that this is returned as a
     * string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetTokenExpirationTime() const { return m_tokenExpirationTime; }
    template<typename TokenExpirationTimeT = Aws::Utils::DateTime>
    void SetTokenExpirationTime(TokenExpirationTimeT&& value) { m_tokenExpirationTimeHasBeenSet = true; m_tokenExpirationTime = std::forward<TokenExpirationTimeT>(value); }
    template<typename TokenExpirationTimeT = Aws::Utils::DateTime>
    CreateChatTokenResult& WithTokenExpirationTime(TokenExpirationTimeT&& value) { SetTokenExpirationTime(std::forward<TokenExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time after which an end user's session is no longer valid. This is an ISO
     * 8601 timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetSessionExpirationTime() const { return m_sessionExpirationTime; }
    template<typename SessionExpirationTimeT = Aws::Utils::DateTime>
    void SetSessionExpirationTime(SessionExpirationTimeT&& value) { m_sessionExpirationTimeHasBeenSet = true; m_sessionExpirationTime = std::forward<SessionExpirationTimeT>(value); }
    template<typename SessionExpirationTimeT = Aws::Utils::DateTime>
    CreateChatTokenResult& WithSessionExpirationTime(SessionExpirationTimeT&& value) { SetSessionExpirationTime(std::forward<SessionExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateChatTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::Utils::DateTime m_tokenExpirationTime{};
    bool m_tokenExpirationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_sessionExpirationTime{};
    bool m_sessionExpirationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
