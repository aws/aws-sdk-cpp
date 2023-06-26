/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/CustomSMSLambdaVersionConfigType.h>
#include <aws/cognito-idp/model/CustomEmailLambdaVersionConfigType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Specifies the configuration for Lambda triggers.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/LambdaConfigType">AWS
   * API Reference</a></p>
   */
  class LambdaConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API LambdaConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API LambdaConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API LambdaConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A pre-registration Lambda trigger.</p>
     */
    inline const Aws::String& GetPreSignUp() const{ return m_preSignUp; }

    /**
     * <p>A pre-registration Lambda trigger.</p>
     */
    inline bool PreSignUpHasBeenSet() const { return m_preSignUpHasBeenSet; }

    /**
     * <p>A pre-registration Lambda trigger.</p>
     */
    inline void SetPreSignUp(const Aws::String& value) { m_preSignUpHasBeenSet = true; m_preSignUp = value; }

    /**
     * <p>A pre-registration Lambda trigger.</p>
     */
    inline void SetPreSignUp(Aws::String&& value) { m_preSignUpHasBeenSet = true; m_preSignUp = std::move(value); }

    /**
     * <p>A pre-registration Lambda trigger.</p>
     */
    inline void SetPreSignUp(const char* value) { m_preSignUpHasBeenSet = true; m_preSignUp.assign(value); }

    /**
     * <p>A pre-registration Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreSignUp(const Aws::String& value) { SetPreSignUp(value); return *this;}

    /**
     * <p>A pre-registration Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreSignUp(Aws::String&& value) { SetPreSignUp(std::move(value)); return *this;}

    /**
     * <p>A pre-registration Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreSignUp(const char* value) { SetPreSignUp(value); return *this;}


    /**
     * <p>A custom Message Lambda trigger.</p>
     */
    inline const Aws::String& GetCustomMessage() const{ return m_customMessage; }

    /**
     * <p>A custom Message Lambda trigger.</p>
     */
    inline bool CustomMessageHasBeenSet() const { return m_customMessageHasBeenSet; }

    /**
     * <p>A custom Message Lambda trigger.</p>
     */
    inline void SetCustomMessage(const Aws::String& value) { m_customMessageHasBeenSet = true; m_customMessage = value; }

    /**
     * <p>A custom Message Lambda trigger.</p>
     */
    inline void SetCustomMessage(Aws::String&& value) { m_customMessageHasBeenSet = true; m_customMessage = std::move(value); }

    /**
     * <p>A custom Message Lambda trigger.</p>
     */
    inline void SetCustomMessage(const char* value) { m_customMessageHasBeenSet = true; m_customMessage.assign(value); }

    /**
     * <p>A custom Message Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomMessage(const Aws::String& value) { SetCustomMessage(value); return *this;}

    /**
     * <p>A custom Message Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomMessage(Aws::String&& value) { SetCustomMessage(std::move(value)); return *this;}

    /**
     * <p>A custom Message Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomMessage(const char* value) { SetCustomMessage(value); return *this;}


    /**
     * <p>A post-confirmation Lambda trigger.</p>
     */
    inline const Aws::String& GetPostConfirmation() const{ return m_postConfirmation; }

    /**
     * <p>A post-confirmation Lambda trigger.</p>
     */
    inline bool PostConfirmationHasBeenSet() const { return m_postConfirmationHasBeenSet; }

    /**
     * <p>A post-confirmation Lambda trigger.</p>
     */
    inline void SetPostConfirmation(const Aws::String& value) { m_postConfirmationHasBeenSet = true; m_postConfirmation = value; }

    /**
     * <p>A post-confirmation Lambda trigger.</p>
     */
    inline void SetPostConfirmation(Aws::String&& value) { m_postConfirmationHasBeenSet = true; m_postConfirmation = std::move(value); }

    /**
     * <p>A post-confirmation Lambda trigger.</p>
     */
    inline void SetPostConfirmation(const char* value) { m_postConfirmationHasBeenSet = true; m_postConfirmation.assign(value); }

    /**
     * <p>A post-confirmation Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostConfirmation(const Aws::String& value) { SetPostConfirmation(value); return *this;}

    /**
     * <p>A post-confirmation Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostConfirmation(Aws::String&& value) { SetPostConfirmation(std::move(value)); return *this;}

    /**
     * <p>A post-confirmation Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostConfirmation(const char* value) { SetPostConfirmation(value); return *this;}


    /**
     * <p>A pre-authentication Lambda trigger.</p>
     */
    inline const Aws::String& GetPreAuthentication() const{ return m_preAuthentication; }

    /**
     * <p>A pre-authentication Lambda trigger.</p>
     */
    inline bool PreAuthenticationHasBeenSet() const { return m_preAuthenticationHasBeenSet; }

    /**
     * <p>A pre-authentication Lambda trigger.</p>
     */
    inline void SetPreAuthentication(const Aws::String& value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication = value; }

    /**
     * <p>A pre-authentication Lambda trigger.</p>
     */
    inline void SetPreAuthentication(Aws::String&& value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication = std::move(value); }

    /**
     * <p>A pre-authentication Lambda trigger.</p>
     */
    inline void SetPreAuthentication(const char* value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication.assign(value); }

    /**
     * <p>A pre-authentication Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreAuthentication(const Aws::String& value) { SetPreAuthentication(value); return *this;}

    /**
     * <p>A pre-authentication Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreAuthentication(Aws::String&& value) { SetPreAuthentication(std::move(value)); return *this;}

    /**
     * <p>A pre-authentication Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPreAuthentication(const char* value) { SetPreAuthentication(value); return *this;}


    /**
     * <p>A post-authentication Lambda trigger.</p>
     */
    inline const Aws::String& GetPostAuthentication() const{ return m_postAuthentication; }

    /**
     * <p>A post-authentication Lambda trigger.</p>
     */
    inline bool PostAuthenticationHasBeenSet() const { return m_postAuthenticationHasBeenSet; }

    /**
     * <p>A post-authentication Lambda trigger.</p>
     */
    inline void SetPostAuthentication(const Aws::String& value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication = value; }

    /**
     * <p>A post-authentication Lambda trigger.</p>
     */
    inline void SetPostAuthentication(Aws::String&& value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication = std::move(value); }

    /**
     * <p>A post-authentication Lambda trigger.</p>
     */
    inline void SetPostAuthentication(const char* value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication.assign(value); }

    /**
     * <p>A post-authentication Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostAuthentication(const Aws::String& value) { SetPostAuthentication(value); return *this;}

    /**
     * <p>A post-authentication Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostAuthentication(Aws::String&& value) { SetPostAuthentication(std::move(value)); return *this;}

    /**
     * <p>A post-authentication Lambda trigger.</p>
     */
    inline LambdaConfigType& WithPostAuthentication(const char* value) { SetPostAuthentication(value); return *this;}


    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline const Aws::String& GetDefineAuthChallenge() const{ return m_defineAuthChallenge; }

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline bool DefineAuthChallengeHasBeenSet() const { return m_defineAuthChallengeHasBeenSet; }

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline void SetDefineAuthChallenge(const Aws::String& value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge = value; }

    /**
     * <p>Defines the authentication challenge.</p>
     */
    inline void SetDefineAuthChallenge(Aws::String&& value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge = std::move(value); }

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
    inline LambdaConfigType& WithDefineAuthChallenge(Aws::String&& value) { SetDefineAuthChallenge(std::move(value)); return *this;}

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
    inline bool CreateAuthChallengeHasBeenSet() const { return m_createAuthChallengeHasBeenSet; }

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline void SetCreateAuthChallenge(const Aws::String& value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge = value; }

    /**
     * <p>Creates an authentication challenge.</p>
     */
    inline void SetCreateAuthChallenge(Aws::String&& value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge = std::move(value); }

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
    inline LambdaConfigType& WithCreateAuthChallenge(Aws::String&& value) { SetCreateAuthChallenge(std::move(value)); return *this;}

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
    inline bool VerifyAuthChallengeResponseHasBeenSet() const { return m_verifyAuthChallengeResponseHasBeenSet; }

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline void SetVerifyAuthChallengeResponse(const Aws::String& value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse = value; }

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline void SetVerifyAuthChallengeResponse(Aws::String&& value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse = std::move(value); }

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
    inline LambdaConfigType& WithVerifyAuthChallengeResponse(Aws::String&& value) { SetVerifyAuthChallengeResponse(std::move(value)); return *this;}

    /**
     * <p>Verifies the authentication challenge response.</p>
     */
    inline LambdaConfigType& WithVerifyAuthChallengeResponse(const char* value) { SetVerifyAuthChallengeResponse(value); return *this;}


    /**
     * <p>A Lambda trigger that is invoked before token generation.</p>
     */
    inline const Aws::String& GetPreTokenGeneration() const{ return m_preTokenGeneration; }

    /**
     * <p>A Lambda trigger that is invoked before token generation.</p>
     */
    inline bool PreTokenGenerationHasBeenSet() const { return m_preTokenGenerationHasBeenSet; }

    /**
     * <p>A Lambda trigger that is invoked before token generation.</p>
     */
    inline void SetPreTokenGeneration(const Aws::String& value) { m_preTokenGenerationHasBeenSet = true; m_preTokenGeneration = value; }

    /**
     * <p>A Lambda trigger that is invoked before token generation.</p>
     */
    inline void SetPreTokenGeneration(Aws::String&& value) { m_preTokenGenerationHasBeenSet = true; m_preTokenGeneration = std::move(value); }

    /**
     * <p>A Lambda trigger that is invoked before token generation.</p>
     */
    inline void SetPreTokenGeneration(const char* value) { m_preTokenGenerationHasBeenSet = true; m_preTokenGeneration.assign(value); }

    /**
     * <p>A Lambda trigger that is invoked before token generation.</p>
     */
    inline LambdaConfigType& WithPreTokenGeneration(const Aws::String& value) { SetPreTokenGeneration(value); return *this;}

    /**
     * <p>A Lambda trigger that is invoked before token generation.</p>
     */
    inline LambdaConfigType& WithPreTokenGeneration(Aws::String&& value) { SetPreTokenGeneration(std::move(value)); return *this;}

    /**
     * <p>A Lambda trigger that is invoked before token generation.</p>
     */
    inline LambdaConfigType& WithPreTokenGeneration(const char* value) { SetPreTokenGeneration(value); return *this;}


    /**
     * <p>The user migration Lambda config type.</p>
     */
    inline const Aws::String& GetUserMigration() const{ return m_userMigration; }

    /**
     * <p>The user migration Lambda config type.</p>
     */
    inline bool UserMigrationHasBeenSet() const { return m_userMigrationHasBeenSet; }

    /**
     * <p>The user migration Lambda config type.</p>
     */
    inline void SetUserMigration(const Aws::String& value) { m_userMigrationHasBeenSet = true; m_userMigration = value; }

    /**
     * <p>The user migration Lambda config type.</p>
     */
    inline void SetUserMigration(Aws::String&& value) { m_userMigrationHasBeenSet = true; m_userMigration = std::move(value); }

    /**
     * <p>The user migration Lambda config type.</p>
     */
    inline void SetUserMigration(const char* value) { m_userMigrationHasBeenSet = true; m_userMigration.assign(value); }

    /**
     * <p>The user migration Lambda config type.</p>
     */
    inline LambdaConfigType& WithUserMigration(const Aws::String& value) { SetUserMigration(value); return *this;}

    /**
     * <p>The user migration Lambda config type.</p>
     */
    inline LambdaConfigType& WithUserMigration(Aws::String&& value) { SetUserMigration(std::move(value)); return *this;}

    /**
     * <p>The user migration Lambda config type.</p>
     */
    inline LambdaConfigType& WithUserMigration(const char* value) { SetUserMigration(value); return *this;}


    /**
     * <p>A custom SMS sender Lambda trigger.</p>
     */
    inline const CustomSMSLambdaVersionConfigType& GetCustomSMSSender() const{ return m_customSMSSender; }

    /**
     * <p>A custom SMS sender Lambda trigger.</p>
     */
    inline bool CustomSMSSenderHasBeenSet() const { return m_customSMSSenderHasBeenSet; }

    /**
     * <p>A custom SMS sender Lambda trigger.</p>
     */
    inline void SetCustomSMSSender(const CustomSMSLambdaVersionConfigType& value) { m_customSMSSenderHasBeenSet = true; m_customSMSSender = value; }

    /**
     * <p>A custom SMS sender Lambda trigger.</p>
     */
    inline void SetCustomSMSSender(CustomSMSLambdaVersionConfigType&& value) { m_customSMSSenderHasBeenSet = true; m_customSMSSender = std::move(value); }

    /**
     * <p>A custom SMS sender Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomSMSSender(const CustomSMSLambdaVersionConfigType& value) { SetCustomSMSSender(value); return *this;}

    /**
     * <p>A custom SMS sender Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomSMSSender(CustomSMSLambdaVersionConfigType&& value) { SetCustomSMSSender(std::move(value)); return *this;}


    /**
     * <p>A custom email sender Lambda trigger.</p>
     */
    inline const CustomEmailLambdaVersionConfigType& GetCustomEmailSender() const{ return m_customEmailSender; }

    /**
     * <p>A custom email sender Lambda trigger.</p>
     */
    inline bool CustomEmailSenderHasBeenSet() const { return m_customEmailSenderHasBeenSet; }

    /**
     * <p>A custom email sender Lambda trigger.</p>
     */
    inline void SetCustomEmailSender(const CustomEmailLambdaVersionConfigType& value) { m_customEmailSenderHasBeenSet = true; m_customEmailSender = value; }

    /**
     * <p>A custom email sender Lambda trigger.</p>
     */
    inline void SetCustomEmailSender(CustomEmailLambdaVersionConfigType&& value) { m_customEmailSenderHasBeenSet = true; m_customEmailSender = std::move(value); }

    /**
     * <p>A custom email sender Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomEmailSender(const CustomEmailLambdaVersionConfigType& value) { SetCustomEmailSender(value); return *this;}

    /**
     * <p>A custom email sender Lambda trigger.</p>
     */
    inline LambdaConfigType& WithCustomEmailSender(CustomEmailLambdaVersionConfigType&& value) { SetCustomEmailSender(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an <a
     * href="/kms/latest/developerguide/concepts.html#master_keys">KMS key</a>. Amazon
     * Cognito uses the key to encrypt codes and temporary passwords sent to
     * <code>CustomEmailSender</code> and <code>CustomSMSSender</code>.</p>
     */
    inline const Aws::String& GetKMSKeyID() const{ return m_kMSKeyID; }

    /**
     * <p>The Amazon Resource Name (ARN) of an <a
     * href="/kms/latest/developerguide/concepts.html#master_keys">KMS key</a>. Amazon
     * Cognito uses the key to encrypt codes and temporary passwords sent to
     * <code>CustomEmailSender</code> and <code>CustomSMSSender</code>.</p>
     */
    inline bool KMSKeyIDHasBeenSet() const { return m_kMSKeyIDHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an <a
     * href="/kms/latest/developerguide/concepts.html#master_keys">KMS key</a>. Amazon
     * Cognito uses the key to encrypt codes and temporary passwords sent to
     * <code>CustomEmailSender</code> and <code>CustomSMSSender</code>.</p>
     */
    inline void SetKMSKeyID(const Aws::String& value) { m_kMSKeyIDHasBeenSet = true; m_kMSKeyID = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an <a
     * href="/kms/latest/developerguide/concepts.html#master_keys">KMS key</a>. Amazon
     * Cognito uses the key to encrypt codes and temporary passwords sent to
     * <code>CustomEmailSender</code> and <code>CustomSMSSender</code>.</p>
     */
    inline void SetKMSKeyID(Aws::String&& value) { m_kMSKeyIDHasBeenSet = true; m_kMSKeyID = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an <a
     * href="/kms/latest/developerguide/concepts.html#master_keys">KMS key</a>. Amazon
     * Cognito uses the key to encrypt codes and temporary passwords sent to
     * <code>CustomEmailSender</code> and <code>CustomSMSSender</code>.</p>
     */
    inline void SetKMSKeyID(const char* value) { m_kMSKeyIDHasBeenSet = true; m_kMSKeyID.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an <a
     * href="/kms/latest/developerguide/concepts.html#master_keys">KMS key</a>. Amazon
     * Cognito uses the key to encrypt codes and temporary passwords sent to
     * <code>CustomEmailSender</code> and <code>CustomSMSSender</code>.</p>
     */
    inline LambdaConfigType& WithKMSKeyID(const Aws::String& value) { SetKMSKeyID(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an <a
     * href="/kms/latest/developerguide/concepts.html#master_keys">KMS key</a>. Amazon
     * Cognito uses the key to encrypt codes and temporary passwords sent to
     * <code>CustomEmailSender</code> and <code>CustomSMSSender</code>.</p>
     */
    inline LambdaConfigType& WithKMSKeyID(Aws::String&& value) { SetKMSKeyID(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an <a
     * href="/kms/latest/developerguide/concepts.html#master_keys">KMS key</a>. Amazon
     * Cognito uses the key to encrypt codes and temporary passwords sent to
     * <code>CustomEmailSender</code> and <code>CustomSMSSender</code>.</p>
     */
    inline LambdaConfigType& WithKMSKeyID(const char* value) { SetKMSKeyID(value); return *this;}

  private:

    Aws::String m_preSignUp;
    bool m_preSignUpHasBeenSet = false;

    Aws::String m_customMessage;
    bool m_customMessageHasBeenSet = false;

    Aws::String m_postConfirmation;
    bool m_postConfirmationHasBeenSet = false;

    Aws::String m_preAuthentication;
    bool m_preAuthenticationHasBeenSet = false;

    Aws::String m_postAuthentication;
    bool m_postAuthenticationHasBeenSet = false;

    Aws::String m_defineAuthChallenge;
    bool m_defineAuthChallengeHasBeenSet = false;

    Aws::String m_createAuthChallenge;
    bool m_createAuthChallengeHasBeenSet = false;

    Aws::String m_verifyAuthChallengeResponse;
    bool m_verifyAuthChallengeResponseHasBeenSet = false;

    Aws::String m_preTokenGeneration;
    bool m_preTokenGenerationHasBeenSet = false;

    Aws::String m_userMigration;
    bool m_userMigrationHasBeenSet = false;

    CustomSMSLambdaVersionConfigType m_customSMSSender;
    bool m_customSMSSenderHasBeenSet = false;

    CustomEmailLambdaVersionConfigType m_customEmailSender;
    bool m_customEmailSenderHasBeenSet = false;

    Aws::String m_kMSKeyID;
    bool m_kMSKeyIDHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
