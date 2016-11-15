/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ChallengeNameType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AuthenticationResultType.h>

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
   * <p>Responds to the authentication challenge, as an administrator.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminRespondToAuthChallengeResult
  {
  public:
    AdminRespondToAuthChallengeResult();
    AdminRespondToAuthChallengeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AdminRespondToAuthChallengeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The name of the challenge.</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The name of the challenge.</p>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeName = value; }

    /**
     * <p>The name of the challenge.</p>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeName = value; }

    /**
     * <p>The name of the challenge.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The name of the challenge.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The session.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(const Aws::String& value) { m_session = value; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(Aws::String&& value) { m_session = value; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(const char* value) { m_session.assign(value); }

    /**
     * <p>The session.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithSession(Aws::String&& value) { SetSession(value); return *this;}

    /**
     * <p>The session.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithSession(const char* value) { SetSession(value); return *this;}

    /**
     * <p>The challenge parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeParameters() const{ return m_challengeParameters; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline void SetChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeParameters = value; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline void SetChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeParameters = value; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeParameters(value); return *this;}

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeParameters(value); return *this;}

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(const Aws::String& key, const Aws::String& value) { m_challengeParameters[key] = value; return *this; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, const Aws::String& value) { m_challengeParameters[key] = value; return *this; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(const Aws::String& key, Aws::String&& value) { m_challengeParameters[key] = value; return *this; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, Aws::String&& value) { m_challengeParameters[key] = value; return *this; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(const char* key, Aws::String&& value) { m_challengeParameters[key] = value; return *this; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, const char* value) { m_challengeParameters[key] = value; return *this; }

    /**
     * <p>The challenge parameters.</p>
     */
    inline AdminRespondToAuthChallengeResult& AddChallengeParameters(const char* key, const char* value) { m_challengeParameters[key] = value; return *this; }

    /**
     * <p>The result returned by the server in response to the authentication
     * request.</p>
     */
    inline const AuthenticationResultType& GetAuthenticationResult() const{ return m_authenticationResult; }

    /**
     * <p>The result returned by the server in response to the authentication
     * request.</p>
     */
    inline void SetAuthenticationResult(const AuthenticationResultType& value) { m_authenticationResult = value; }

    /**
     * <p>The result returned by the server in response to the authentication
     * request.</p>
     */
    inline void SetAuthenticationResult(AuthenticationResultType&& value) { m_authenticationResult = value; }

    /**
     * <p>The result returned by the server in response to the authentication
     * request.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithAuthenticationResult(const AuthenticationResultType& value) { SetAuthenticationResult(value); return *this;}

    /**
     * <p>The result returned by the server in response to the authentication
     * request.</p>
     */
    inline AdminRespondToAuthChallengeResult& WithAuthenticationResult(AuthenticationResultType&& value) { SetAuthenticationResult(value); return *this;}

  private:
    ChallengeNameType m_challengeName;
    Aws::String m_session;
    Aws::Map<Aws::String, Aws::String> m_challengeParameters;
    AuthenticationResultType m_authenticationResult;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
