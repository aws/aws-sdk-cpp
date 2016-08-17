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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
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
   * <p>Specifies the type of configuration for AWS Lambda triggers.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API LambdaConfigType
  {
  public:
    LambdaConfigType();
    LambdaConfigType(const Aws::Utils::Json::JsonValue& jsonValue);
    LambdaConfigType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A pre-registration AWS Lambda trigger.</p>
     */
    inline const Aws::String& GetPreSignUp() const{ return m_preSignUp; }

    /**
     * <p>A pre-registration AWS Lambda trigger.</p>
     */
    inline void SetPreSignUp(const Aws::String& value) { m_preSignUpHasBeenSet = true; m_preSignUp = value; }

    /**
     * <p>A pre-registration AWS Lambda trigger.</p>
     */
    inline void SetPreSignUp(Aws::String&& value) { m_preSignUpHasBeenSet = true; m_preSignUp = value; }

    /**
     * <p>A pre-registration AWS Lambda trigger.</p>
     */
    inline void SetPreSignUp(const char* value) { m_preSignUpHasBeenSet = true; m_preSignUp.assign(value); }

    /**
     * <p>A pre-registration AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreSignUp(const Aws::String& value) { SetPreSignUp(value); return *this;}

    /**
     * <p>A pre-registration AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreSignUp(Aws::String&& value) { SetPreSignUp(value); return *this;}

    /**
     * <p>A pre-registration AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreSignUp(const char* value) { SetPreSignUp(value); return *this;}

    /**
     * <p>A custom Message AWS Lambda trigger.</p>
     */
    inline const Aws::String& GetCustomMessage() const{ return m_customMessage; }

    /**
     * <p>A custom Message AWS Lambda trigger.</p>
     */
    inline void SetCustomMessage(const Aws::String& value) { m_customMessageHasBeenSet = true; m_customMessage = value; }

    /**
     * <p>A custom Message AWS Lambda trigger.</p>
     */
    inline void SetCustomMessage(Aws::String&& value) { m_customMessageHasBeenSet = true; m_customMessage = value; }

    /**
     * <p>A custom Message AWS Lambda trigger.</p>
     */
    inline void SetCustomMessage(const char* value) { m_customMessageHasBeenSet = true; m_customMessage.assign(value); }

    /**
     * <p>A custom Message AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomMessage(const Aws::String& value) { SetCustomMessage(value); return *this;}

    /**
     * <p>A custom Message AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomMessage(Aws::String&& value) { SetCustomMessage(value); return *this;}

    /**
     * <p>A custom Message AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomMessage(const char* value) { SetCustomMessage(value); return *this;}

    /**
     * <p>A post-confirmation AWS Lambda trigger.</p>
     */
    inline const Aws::String& GetPostConfirmation() const{ return m_postConfirmation; }

    /**
     * <p>A post-confirmation AWS Lambda trigger.</p>
     */
    inline void SetPostConfirmation(const Aws::String& value) { m_postConfirmationHasBeenSet = true; m_postConfirmation = value; }

    /**
     * <p>A post-confirmation AWS Lambda trigger.</p>
     */
    inline void SetPostConfirmation(Aws::String&& value) { m_postConfirmationHasBeenSet = true; m_postConfirmation = value; }

    /**
     * <p>A post-confirmation AWS Lambda trigger.</p>
     */
    inline void SetPostConfirmation(const char* value) { m_postConfirmationHasBeenSet = true; m_postConfirmation.assign(value); }

    /**
     * <p>A post-confirmation AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostConfirmation(const Aws::String& value) { SetPostConfirmation(value); return *this;}

    /**
     * <p>A post-confirmation AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostConfirmation(Aws::String&& value) { SetPostConfirmation(value); return *this;}

    /**
     * <p>A post-confirmation AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostConfirmation(const char* value) { SetPostConfirmation(value); return *this;}

    /**
     * <p>A pre-authentication AWS Lambda trigger.</p>
     */
    inline const Aws::String& GetPreAuthentication() const{ return m_preAuthentication; }

    /**
     * <p>A pre-authentication AWS Lambda trigger.</p>
     */
    inline void SetPreAuthentication(const Aws::String& value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication = value; }

    /**
     * <p>A pre-authentication AWS Lambda trigger.</p>
     */
    inline void SetPreAuthentication(Aws::String&& value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication = value; }

    /**
     * <p>A pre-authentication AWS Lambda trigger.</p>
     */
    inline void SetPreAuthentication(const char* value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication.assign(value); }

    /**
     * <p>A pre-authentication AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreAuthentication(const Aws::String& value) { SetPreAuthentication(value); return *this;}

    /**
     * <p>A pre-authentication AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreAuthentication(Aws::String&& value) { SetPreAuthentication(value); return *this;}

    /**
     * <p>A pre-authentication AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreAuthentication(const char* value) { SetPreAuthentication(value); return *this;}

    /**
     * <p>A post-authentication AWS Lambda trigger.</p>
     */
    inline const Aws::String& GetPostAuthentication() const{ return m_postAuthentication; }

    /**
     * <p>A post-authentication AWS Lambda trigger.</p>
     */
    inline void SetPostAuthentication(const Aws::String& value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication = value; }

    /**
     * <p>A post-authentication AWS Lambda trigger.</p>
     */
    inline void SetPostAuthentication(Aws::String&& value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication = value; }

    /**
     * <p>A post-authentication AWS Lambda trigger.</p>
     */
    inline void SetPostAuthentication(const char* value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication.assign(value); }

    /**
     * <p>A post-authentication AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostAuthentication(const Aws::String& value) { SetPostAuthentication(value); return *this;}

    /**
     * <p>A post-authentication AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostAuthentication(Aws::String&& value) { SetPostAuthentication(value); return *this;}

    /**
     * <p>A post-authentication AWS Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostAuthentication(const char* value) { SetPostAuthentication(value); return *this;}

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline const Aws::String& GetDefineAuthChallenge() const{ return m_defineAuthChallenge; }

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline void SetDefineAuthChallenge(const Aws::String& value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge = value; }

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline void SetDefineAuthChallenge(Aws::String&& value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge = value; }

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline void SetDefineAuthChallenge(const char* value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge.assign(value); }

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline LambdaConfigType& WithDefineAuthChallenge(const Aws::String& value) { SetDefineAuthChallenge(value); return *this;}

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline LambdaConfigType& WithDefineAuthChallenge(Aws::String&& value) { SetDefineAuthChallenge(value); return *this;}

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline LambdaConfigType& WithDefineAuthChallenge(const char* value) { SetDefineAuthChallenge(value); return *this;}

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline const Aws::String& GetCreateAuthChallenge() const{ return m_createAuthChallenge; }

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline void SetCreateAuthChallenge(const Aws::String& value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge = value; }

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline void SetCreateAuthChallenge(Aws::String&& value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge = value; }

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline void SetCreateAuthChallenge(const char* value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge.assign(value); }

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline LambdaConfigType& WithCreateAuthChallenge(const Aws::String& value) { SetCreateAuthChallenge(value); return *this;}

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline LambdaConfigType& WithCreateAuthChallenge(Aws::String&& value) { SetCreateAuthChallenge(value); return *this;}

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline LambdaConfigType& WithCreateAuthChallenge(const char* value) { SetCreateAuthChallenge(value); return *this;}

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline const Aws::String& GetVerifyAuthChallengeResponse() const{ return m_verifyAuthChallengeResponse; }

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline void SetVerifyAuthChallengeResponse(const Aws::String& value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse = value; }

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline void SetVerifyAuthChallengeResponse(Aws::String&& value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse = value; }

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline void SetVerifyAuthChallengeResponse(const char* value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse.assign(value); }

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline LambdaConfigType& WithVerifyAuthChallengeResponse(const Aws::String& value) { SetVerifyAuthChallengeResponse(value); return *this;}

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline LambdaConfigType& WithVerifyAuthChallengeResponse(Aws::String&& value) { SetVerifyAuthChallengeResponse(value); return *this;}

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline LambdaConfigType& WithVerifyAuthChallengeResponse(const char* value) { SetVerifyAuthChallengeResponse(value); return *this;}

  private:
    Aws::String m_preSignUp;
    bool m_preSignUpHasBeenSet;
    Aws::String m_customMessage;
    bool m_customMessageHasBeenSet;
    Aws::String m_postConfirmation;
    bool m_postConfirmationHasBeenSet;
    Aws::String m_preAuthentication;
    bool m_preAuthenticationHasBeenSet;
    Aws::String m_postAuthentication;
    bool m_postAuthenticationHasBeenSet;
    Aws::String m_defineAuthChallenge;
    bool m_defineAuthChallengeHasBeenSet;
    Aws::String m_createAuthChallenge;
    bool m_createAuthChallengeHasBeenSet;
    Aws::String m_verifyAuthChallengeResponse;
    bool m_verifyAuthChallengeResponseHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
