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
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/ChallengeNameType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The request to respond to an authentication challenge.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API RespondToAuthChallengeRequest : public CognitoIdentityProviderRequest
  {
  public:
    RespondToAuthChallengeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client ID.</p>
     */
    inline RespondToAuthChallengeRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID.</p>
     */
    inline RespondToAuthChallengeRequest& WithClientId(Aws::String&& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID.</p>
     */
    inline RespondToAuthChallengeRequest& WithClientId(const char* value) { SetClientId(value); return *this;}

    /**
     * <p>The name of the challenge.</p>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }

    /**
     * <p>The name of the challenge.</p>
     */
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }

    /**
     * <p>The name of the challenge.</p>
     */
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeNameHasBeenSet = true; m_challengeName = value; }

    /**
     * <p>The name of the challenge.</p>
     */
    inline RespondToAuthChallengeRequest& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The name of the challenge.</p>
     */
    inline RespondToAuthChallengeRequest& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(value); return *this;}

    /**
     * <p>The session.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(const Aws::String& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(Aws::String&& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * <p>The session.</p>
     */
    inline void SetSession(const char* value) { m_sessionHasBeenSet = true; m_session.assign(value); }

    /**
     * <p>The session.</p>
     */
    inline RespondToAuthChallengeRequest& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session.</p>
     */
    inline RespondToAuthChallengeRequest& WithSession(Aws::String&& value) { SetSession(value); return *this;}

    /**
     * <p>The session.</p>
     */
    inline RespondToAuthChallengeRequest& WithSession(const char* value) { SetSession(value); return *this;}

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeResponses() const{ return m_challengeResponses; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline void SetChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = value; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline void SetChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses = value; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& WithChallengeResponses(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeResponses(value); return *this;}

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& WithChallengeResponses(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeResponses(value); return *this;}

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses[key] = value; return *this; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const Aws::String& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses[key] = value; return *this; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const Aws::String& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses[key] = value; return *this; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses[key] = value; return *this; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const char* key, Aws::String&& value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses[key] = value; return *this; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(Aws::String&& key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses[key] = value; return *this; }

    /**
     * <p>The responses to the authentication challenge.</p>
     */
    inline RespondToAuthChallengeRequest& AddChallengeResponses(const char* key, const char* value) { m_challengeResponsesHasBeenSet = true; m_challengeResponses[key] = value; return *this; }

  private:
    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;
    ChallengeNameType m_challengeName;
    bool m_challengeNameHasBeenSet;
    Aws::String m_session;
    bool m_sessionHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_challengeResponses;
    bool m_challengeResponsesHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
