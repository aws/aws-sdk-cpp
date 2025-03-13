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
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Cognito can accept or reject the code that you provide. This response
     * parameter indicates the success of TOTP verification. Some reasons that this
     * operation might return an error are clock skew on the user's device and
     * excessive retries.</p>
     */
    inline VerifySoftwareTokenResponseType GetStatus() const { return m_status; }
    inline void SetStatus(VerifySoftwareTokenResponseType value) { m_statusHasBeenSet = true; m_status = value; }
    inline VerifySoftwareTokenResult& WithStatus(VerifySoftwareTokenResponseType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This session ID satisfies an <code>MFA_SETUP</code> challenge. Supply the
     * session ID in your challenge response.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    VerifySoftwareTokenResult& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VerifySoftwareTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VerifySoftwareTokenResponseType m_status{VerifySoftwareTokenResponseType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
