/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class CreateTokenResult
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateTokenResult();
    AWS_AMPLIFYBACKEND_API CreateTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API CreateTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline void SetAppId(const Aws::String& value) { m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appId.assign(value); }
    inline CreateTokenResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline CreateTokenResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline CreateTokenResult& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One-time challenge code for authenticating into the Amplify Admin UI.</p>
     */
    inline const Aws::String& GetChallengeCode() const{ return m_challengeCode; }
    inline void SetChallengeCode(const Aws::String& value) { m_challengeCode = value; }
    inline void SetChallengeCode(Aws::String&& value) { m_challengeCode = std::move(value); }
    inline void SetChallengeCode(const char* value) { m_challengeCode.assign(value); }
    inline CreateTokenResult& WithChallengeCode(const Aws::String& value) { SetChallengeCode(value); return *this;}
    inline CreateTokenResult& WithChallengeCode(Aws::String&& value) { SetChallengeCode(std::move(value)); return *this;}
    inline CreateTokenResult& WithChallengeCode(const char* value) { SetChallengeCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID provided when creating a new challenge token.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline CreateTokenResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline CreateTokenResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline CreateTokenResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry time for the one-time generated token code.</p>
     */
    inline const Aws::String& GetTtl() const{ return m_ttl; }
    inline void SetTtl(const Aws::String& value) { m_ttl = value; }
    inline void SetTtl(Aws::String&& value) { m_ttl = std::move(value); }
    inline void SetTtl(const char* value) { m_ttl.assign(value); }
    inline CreateTokenResult& WithTtl(const Aws::String& value) { SetTtl(value); return *this;}
    inline CreateTokenResult& WithTtl(Aws::String&& value) { SetTtl(std::move(value)); return *this;}
    inline CreateTokenResult& WithTtl(const char* value) { SetTtl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;

    Aws::String m_challengeCode;

    Aws::String m_sessionId;

    Aws::String m_ttl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
