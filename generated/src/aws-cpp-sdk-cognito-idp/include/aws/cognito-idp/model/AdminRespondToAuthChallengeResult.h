﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ChallengeNameType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AuthenticationResultType.h>
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
  /**
   * <p>Responds to the authentication challenge, as an administrator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminRespondToAuthChallengeResponse">AWS
   * API Reference</a></p>
   */
  class AdminRespondToAuthChallengeResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminRespondToAuthChallengeResult();
    AWS_COGNITOIDENTITYPROVIDER_API AdminRespondToAuthChallengeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminRespondToAuthChallengeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the challenge that you must next respond to. You can find more
     * information about values for <code>ChallengeName</code> in the response
     * parameters of <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html#CognitoUserPools-AdminInitiateAuth-response-ChallengeName">AdminInitiateAuth</a>.</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeName = value; }
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeName = std::move(value); }
    inline AdminRespondToAuthChallengeResult& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}
    inline AdminRespondToAuthChallengeResult& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session identifier that maintains the state of authentication requests
     * and challenge responses. If an <code>AdminInitiateAuth</code> or
     * <code>AdminRespondToAuthChallenge</code> API request results in a determination
     * that your application must pass another challenge, Amazon Cognito returns a
     * session with other challenge parameters. Send this session identifier,
     * unmodified, to the next <code>AdminRespondToAuthChallenge</code> request.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }
    inline void SetSession(const Aws::String& value) { m_session = value; }
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }
    inline void SetSession(const char* value) { m_session.assign(value); }
    inline AdminRespondToAuthChallengeResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}
    inline AdminRespondToAuthChallengeResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}
    inline AdminRespondToAuthChallengeResult& WithSession(const char* value) { SetSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that define your response to the next challenge. Take the
     * values in <code>ChallengeParameters</code> and provide values for them in the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminRespondToAuthChallenge.html#CognitoUserPools-AdminRespondToAuthChallenge-request-ChallengeResponses">ChallengeResponses</a>
     * of the next <code>AdminRespondToAuthChallenge</code> request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeParameters() const{ return m_challengeParameters; }
    inline void SetChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeParameters = value; }
    inline void SetChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeParameters = std::move(value); }
    inline AdminRespondToAuthChallengeResult& WithChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeParameters(value); return *this;}
    inline AdminRespondToAuthChallengeResult& WithChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeParameters(std::move(value)); return *this;}
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(const Aws::String& key, const Aws::String& value) { m_challengeParameters.emplace(key, value); return *this; }
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, const Aws::String& value) { m_challengeParameters.emplace(std::move(key), value); return *this; }
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(const Aws::String& key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, Aws::String&& value) { m_challengeParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(const char* key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, const char* value) { m_challengeParameters.emplace(std::move(key), value); return *this; }
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(const char* key, const char* value) { m_challengeParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outcome of a successful authentication process. After your application
     * has passed all challenges, Amazon Cognito returns an
     * <code>AuthenticationResult</code> with the JSON web tokens (JWTs) that indicate
     * successful sign-in.</p>
     */
    inline const AuthenticationResultType& GetAuthenticationResult() const{ return m_authenticationResult; }
    inline void SetAuthenticationResult(const AuthenticationResultType& value) { m_authenticationResult = value; }
    inline void SetAuthenticationResult(AuthenticationResultType&& value) { m_authenticationResult = std::move(value); }
    inline AdminRespondToAuthChallengeResult& WithAuthenticationResult(const AuthenticationResultType& value) { SetAuthenticationResult(value); return *this;}
    inline AdminRespondToAuthChallengeResult& WithAuthenticationResult(AuthenticationResultType&& value) { SetAuthenticationResult(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AdminRespondToAuthChallengeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AdminRespondToAuthChallengeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AdminRespondToAuthChallengeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ChallengeNameType m_challengeName;

    Aws::String m_session;

    Aws::Map<Aws::String, Aws::String> m_challengeParameters;

    AuthenticationResultType m_authenticationResult;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
