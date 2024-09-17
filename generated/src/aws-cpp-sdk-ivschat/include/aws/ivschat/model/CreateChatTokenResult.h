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
    AWS_IVSCHAT_API CreateChatTokenResult();
    AWS_IVSCHAT_API CreateChatTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API CreateChatTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The issued client token, encrypted.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline void SetToken(const Aws::String& value) { m_token = value; }
    inline void SetToken(Aws::String&& value) { m_token = std::move(value); }
    inline void SetToken(const char* value) { m_token.assign(value); }
    inline CreateChatTokenResult& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline CreateChatTokenResult& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline CreateChatTokenResult& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time after which the token is no longer valid and cannot be used to connect
     * to a room. This is an ISO 8601 timestamp; <i>note that this is returned as a
     * string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetTokenExpirationTime() const{ return m_tokenExpirationTime; }
    inline void SetTokenExpirationTime(const Aws::Utils::DateTime& value) { m_tokenExpirationTime = value; }
    inline void SetTokenExpirationTime(Aws::Utils::DateTime&& value) { m_tokenExpirationTime = std::move(value); }
    inline CreateChatTokenResult& WithTokenExpirationTime(const Aws::Utils::DateTime& value) { SetTokenExpirationTime(value); return *this;}
    inline CreateChatTokenResult& WithTokenExpirationTime(Aws::Utils::DateTime&& value) { SetTokenExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time after which an end user's session is no longer valid. This is an ISO
     * 8601 timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetSessionExpirationTime() const{ return m_sessionExpirationTime; }
    inline void SetSessionExpirationTime(const Aws::Utils::DateTime& value) { m_sessionExpirationTime = value; }
    inline void SetSessionExpirationTime(Aws::Utils::DateTime&& value) { m_sessionExpirationTime = std::move(value); }
    inline CreateChatTokenResult& WithSessionExpirationTime(const Aws::Utils::DateTime& value) { SetSessionExpirationTime(value); return *this;}
    inline CreateChatTokenResult& WithSessionExpirationTime(Aws::Utils::DateTime&& value) { SetSessionExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateChatTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateChatTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateChatTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_token;

    Aws::Utils::DateTime m_tokenExpirationTime;

    Aws::Utils::DateTime m_sessionExpirationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
