/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>The response to respond to the authentication challenge.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RespondToAuthChallengeResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeResult
  {
  public:
    RespondToAuthChallengeResult();
    RespondToAuthChallengeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RespondToAuthChallengeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The challenge name. For more information, see .</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The challenge name. For more information, see .</p>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeName = value; }

    /**
     * <p>The challenge name. For more information, see .</p>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeName = std::move(value); }

    /**
     * <p>The challenge name. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The challenge name. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}


    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const Aws::String& value) { m_session = value; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline void SetSession(const char* value) { m_session.assign(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline RespondToAuthChallengeResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline RespondToAuthChallengeResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service. If the or API call determines that the caller needs to go through
     * another challenge, they return a session with other challenge parameters. This
     * session should be passed as it is to the next
     * <code>RespondToAuthChallenge</code> API call.</p>
     */
    inline RespondToAuthChallengeResult& WithSession(const char* value) { SetSession(value); return *this;}


    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeParameters() const{ return m_challengeParameters; }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline void SetChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeParameters = value; }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline void SetChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeParameters = std::move(value); }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& WithChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeParameters(value); return *this;}

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& WithChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeParameters(std::move(value)); return *this;}

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& AddChallengeParameters(const Aws::String& key, const Aws::String& value) { m_challengeParameters.emplace(key, value); return *this; }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, const Aws::String& value) { m_challengeParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& AddChallengeParameters(const Aws::String& key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, Aws::String&& value) { m_challengeParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& AddChallengeParameters(const char* key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& AddChallengeParameters(Aws::String&& key, const char* value) { m_challengeParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The challenge parameters. For more information, see .</p>
     */
    inline RespondToAuthChallengeResult& AddChallengeParameters(const char* key, const char* value) { m_challengeParameters.emplace(key, value); return *this; }


    /**
     * <p>The result returned by the server in response to the request to respond to
     * the authentication challenge.</p>
     */
    inline const AuthenticationResultType& GetAuthenticationResult() const{ return m_authenticationResult; }

    /**
     * <p>The result returned by the server in response to the request to respond to
     * the authentication challenge.</p>
     */
    inline void SetAuthenticationResult(const AuthenticationResultType& value) { m_authenticationResult = value; }

    /**
     * <p>The result returned by the server in response to the request to respond to
     * the authentication challenge.</p>
     */
    inline void SetAuthenticationResult(AuthenticationResultType&& value) { m_authenticationResult = std::move(value); }

    /**
     * <p>The result returned by the server in response to the request to respond to
     * the authentication challenge.</p>
     */
    inline RespondToAuthChallengeResult& WithAuthenticationResult(const AuthenticationResultType& value) { SetAuthenticationResult(value); return *this;}

    /**
     * <p>The result returned by the server in response to the request to respond to
     * the authentication challenge.</p>
     */
    inline RespondToAuthChallengeResult& WithAuthenticationResult(AuthenticationResultType&& value) { SetAuthenticationResult(std::move(value)); return *this;}

  private:

    ChallengeNameType m_challengeName;

    Aws::String m_session;

    Aws::Map<Aws::String, Aws::String> m_challengeParameters;

    AuthenticationResultType m_authenticationResult;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
