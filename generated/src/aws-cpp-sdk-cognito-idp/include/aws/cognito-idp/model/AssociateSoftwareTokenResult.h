/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
  class AssociateSoftwareTokenResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AssociateSoftwareTokenResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AssociateSoftwareTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AssociateSoftwareTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique generated shared secret code that is used by the TOTP algorithm to
     * generate a one-time code.</p>
     */
    inline const Aws::String& GetSecretCode() const { return m_secretCode; }
    template<typename SecretCodeT = Aws::String>
    void SetSecretCode(SecretCodeT&& value) { m_secretCodeHasBeenSet = true; m_secretCode = std::forward<SecretCodeT>(value); }
    template<typename SecretCodeT = Aws::String>
    AssociateSoftwareTokenResult& WithSecretCode(SecretCodeT&& value) { SetSecretCode(std::forward<SecretCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session identifier that maintains the state of authentication requests
     * and challenge responses.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    AssociateSoftwareTokenResult& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateSoftwareTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretCode;
    bool m_secretCodeHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
