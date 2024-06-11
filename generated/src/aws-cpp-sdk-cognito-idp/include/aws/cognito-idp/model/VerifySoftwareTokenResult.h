/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/VerifySoftwareTokenResponseType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class VerifySoftwareTokenResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult();
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the verify software token.</p>
     */
    inline const VerifySoftwareTokenResponseType& GetStatus() const{ return m_status; }
    inline void SetStatus(const VerifySoftwareTokenResponseType& value) { m_status = value; }
    inline void SetStatus(VerifySoftwareTokenResponseType&& value) { m_status = std::move(value); }
    inline VerifySoftwareTokenResult& WithStatus(const VerifySoftwareTokenResponseType& value) { SetStatus(value); return *this;}
    inline VerifySoftwareTokenResult& WithStatus(VerifySoftwareTokenResponseType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }
    inline void SetSession(const Aws::String& value) { m_session = value; }
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }
    inline void SetSession(const char* value) { m_session.assign(value); }
    inline VerifySoftwareTokenResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}
    inline VerifySoftwareTokenResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}
    inline VerifySoftwareTokenResult& WithSession(const char* value) { SetSession(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline VerifySoftwareTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline VerifySoftwareTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline VerifySoftwareTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VerifySoftwareTokenResponseType m_status;

    Aws::String m_session;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
