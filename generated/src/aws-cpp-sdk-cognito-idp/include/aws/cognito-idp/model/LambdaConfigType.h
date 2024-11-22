/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/PreTokenGenerationVersionConfigType.h>
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
   * <p>A collection of user pool Lambda triggers. Amazon Cognito invokes triggers at
   * several possible stages of user pool operations. Triggers can modify the outcome
   * of the operations that invoked them.</p> <p>This data type is a request and
   * response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateUserPool.html">CreateUserPool</a>
   * and <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateUserPool.html">UpdateUserPool</a>,
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>.</p><p><h3>See
   * Also:</h3>   <a
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


    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-pre-sign-up.html">pre
     * sign-up Lambda trigger</a> in a user pool. This trigger evaluates new users and
     * can bypass confirmation, <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-identity-federation-consolidate-users.html">link
     * a federated user profile</a>, or block sign-up requests.</p>
     */
    inline const Aws::String& GetPreSignUp() const{ return m_preSignUp; }
    inline bool PreSignUpHasBeenSet() const { return m_preSignUpHasBeenSet; }
    inline void SetPreSignUp(const Aws::String& value) { m_preSignUpHasBeenSet = true; m_preSignUp = value; }
    inline void SetPreSignUp(Aws::String&& value) { m_preSignUpHasBeenSet = true; m_preSignUp = std::move(value); }
    inline void SetPreSignUp(const char* value) { m_preSignUpHasBeenSet = true; m_preSignUp.assign(value); }
    inline LambdaConfigType& WithPreSignUp(const Aws::String& value) { SetPreSignUp(value); return *this;}
    inline LambdaConfigType& WithPreSignUp(Aws::String&& value) { SetPreSignUp(std::move(value)); return *this;}
    inline LambdaConfigType& WithPreSignUp(const char* value) { SetPreSignUp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom message Lambda trigger. This trigger is an opportunity to customize
     * all SMS and email messages from your user pool. When a custom message trigger is
     * active, your user pool routes all messages to a Lambda function that returns a
     * runtime-customized message subject and body for your user pool to deliver to a
     * user.</p>
     */
    inline const Aws::String& GetCustomMessage() const{ return m_customMessage; }
    inline bool CustomMessageHasBeenSet() const { return m_customMessageHasBeenSet; }
    inline void SetCustomMessage(const Aws::String& value) { m_customMessageHasBeenSet = true; m_customMessage = value; }
    inline void SetCustomMessage(Aws::String&& value) { m_customMessageHasBeenSet = true; m_customMessage = std::move(value); }
    inline void SetCustomMessage(const char* value) { m_customMessageHasBeenSet = true; m_customMessage.assign(value); }
    inline LambdaConfigType& WithCustomMessage(const Aws::String& value) { SetCustomMessage(value); return *this;}
    inline LambdaConfigType& WithCustomMessage(Aws::String&& value) { SetCustomMessage(std::move(value)); return *this;}
    inline LambdaConfigType& WithCustomMessage(const char* value) { SetCustomMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-post-confirmation.html">post
     * confirmation Lambda trigger</a> in a user pool. This trigger can take custom
     * actions after a user confirms their user account and their email address or
     * phone number.</p>
     */
    inline const Aws::String& GetPostConfirmation() const{ return m_postConfirmation; }
    inline bool PostConfirmationHasBeenSet() const { return m_postConfirmationHasBeenSet; }
    inline void SetPostConfirmation(const Aws::String& value) { m_postConfirmationHasBeenSet = true; m_postConfirmation = value; }
    inline void SetPostConfirmation(Aws::String&& value) { m_postConfirmationHasBeenSet = true; m_postConfirmation = std::move(value); }
    inline void SetPostConfirmation(const char* value) { m_postConfirmationHasBeenSet = true; m_postConfirmation.assign(value); }
    inline LambdaConfigType& WithPostConfirmation(const Aws::String& value) { SetPostConfirmation(value); return *this;}
    inline LambdaConfigType& WithPostConfirmation(Aws::String&& value) { SetPostConfirmation(std::move(value)); return *this;}
    inline LambdaConfigType& WithPostConfirmation(const char* value) { SetPostConfirmation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-pre-authentication.html">pre
     * authentication trigger</a> in a user pool. This trigger can evaluate and modify
     * user sign-in events.</p>
     */
    inline const Aws::String& GetPreAuthentication() const{ return m_preAuthentication; }
    inline bool PreAuthenticationHasBeenSet() const { return m_preAuthenticationHasBeenSet; }
    inline void SetPreAuthentication(const Aws::String& value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication = value; }
    inline void SetPreAuthentication(Aws::String&& value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication = std::move(value); }
    inline void SetPreAuthentication(const char* value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication.assign(value); }
    inline LambdaConfigType& WithPreAuthentication(const Aws::String& value) { SetPreAuthentication(value); return *this;}
    inline LambdaConfigType& WithPreAuthentication(Aws::String&& value) { SetPreAuthentication(std::move(value)); return *this;}
    inline LambdaConfigType& WithPreAuthentication(const char* value) { SetPreAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-post-authentication.html">post
     * authentication Lambda trigger</a> in a user pool. This trigger can take custom
     * actions after a user signs in.</p>
     */
    inline const Aws::String& GetPostAuthentication() const{ return m_postAuthentication; }
    inline bool PostAuthenticationHasBeenSet() const { return m_postAuthenticationHasBeenSet; }
    inline void SetPostAuthentication(const Aws::String& value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication = value; }
    inline void SetPostAuthentication(Aws::String&& value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication = std::move(value); }
    inline void SetPostAuthentication(const char* value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication.assign(value); }
    inline LambdaConfigType& WithPostAuthentication(const Aws::String& value) { SetPostAuthentication(value); return *this;}
    inline LambdaConfigType& WithPostAuthentication(Aws::String&& value) { SetPostAuthentication(std::move(value)); return *this;}
    inline LambdaConfigType& WithPostAuthentication(const char* value) { SetPostAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a define auth challenge Lambda trigger, one of three
     * triggers in the sequence of the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">custom
     * authentication challenge triggers</a>.</p>
     */
    inline const Aws::String& GetDefineAuthChallenge() const{ return m_defineAuthChallenge; }
    inline bool DefineAuthChallengeHasBeenSet() const { return m_defineAuthChallengeHasBeenSet; }
    inline void SetDefineAuthChallenge(const Aws::String& value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge = value; }
    inline void SetDefineAuthChallenge(Aws::String&& value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge = std::move(value); }
    inline void SetDefineAuthChallenge(const char* value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge.assign(value); }
    inline LambdaConfigType& WithDefineAuthChallenge(const Aws::String& value) { SetDefineAuthChallenge(value); return *this;}
    inline LambdaConfigType& WithDefineAuthChallenge(Aws::String&& value) { SetDefineAuthChallenge(std::move(value)); return *this;}
    inline LambdaConfigType& WithDefineAuthChallenge(const char* value) { SetDefineAuthChallenge(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a create auth challenge Lambda trigger, one of three
     * triggers in the sequence of the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">custom
     * authentication challenge triggers</a>.</p>
     */
    inline const Aws::String& GetCreateAuthChallenge() const{ return m_createAuthChallenge; }
    inline bool CreateAuthChallengeHasBeenSet() const { return m_createAuthChallengeHasBeenSet; }
    inline void SetCreateAuthChallenge(const Aws::String& value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge = value; }
    inline void SetCreateAuthChallenge(Aws::String&& value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge = std::move(value); }
    inline void SetCreateAuthChallenge(const char* value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge.assign(value); }
    inline LambdaConfigType& WithCreateAuthChallenge(const Aws::String& value) { SetCreateAuthChallenge(value); return *this;}
    inline LambdaConfigType& WithCreateAuthChallenge(Aws::String&& value) { SetCreateAuthChallenge(std::move(value)); return *this;}
    inline LambdaConfigType& WithCreateAuthChallenge(const char* value) { SetCreateAuthChallenge(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a verify auth challenge Lambda trigger, one of three
     * triggers in the sequence of the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">custom
     * authentication challenge triggers</a>.</p>
     */
    inline const Aws::String& GetVerifyAuthChallengeResponse() const{ return m_verifyAuthChallengeResponse; }
    inline bool VerifyAuthChallengeResponseHasBeenSet() const { return m_verifyAuthChallengeResponseHasBeenSet; }
    inline void SetVerifyAuthChallengeResponse(const Aws::String& value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse = value; }
    inline void SetVerifyAuthChallengeResponse(Aws::String&& value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse = std::move(value); }
    inline void SetVerifyAuthChallengeResponse(const char* value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse.assign(value); }
    inline LambdaConfigType& WithVerifyAuthChallengeResponse(const Aws::String& value) { SetVerifyAuthChallengeResponse(value); return *this;}
    inline LambdaConfigType& WithVerifyAuthChallengeResponse(Aws::String&& value) { SetVerifyAuthChallengeResponse(std::move(value)); return *this;}
    inline LambdaConfigType& WithVerifyAuthChallengeResponse(const char* value) { SetVerifyAuthChallengeResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legacy configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-pre-token-generation.html">pre
     * token generation Lambda trigger</a> in a user pool.</p> <p>Set this parameter
     * for legacy purposes. If you also set an ARN in
     * <code>PreTokenGenerationConfig</code>, its value must be identical to
     * <code>PreTokenGeneration</code>. For new instances of pre token generation
     * triggers, set the <code>LambdaArn</code> of
     * <code>PreTokenGenerationConfig</code>.</p>
     */
    inline const Aws::String& GetPreTokenGeneration() const{ return m_preTokenGeneration; }
    inline bool PreTokenGenerationHasBeenSet() const { return m_preTokenGenerationHasBeenSet; }
    inline void SetPreTokenGeneration(const Aws::String& value) { m_preTokenGenerationHasBeenSet = true; m_preTokenGeneration = value; }
    inline void SetPreTokenGeneration(Aws::String&& value) { m_preTokenGenerationHasBeenSet = true; m_preTokenGeneration = std::move(value); }
    inline void SetPreTokenGeneration(const char* value) { m_preTokenGenerationHasBeenSet = true; m_preTokenGeneration.assign(value); }
    inline LambdaConfigType& WithPreTokenGeneration(const Aws::String& value) { SetPreTokenGeneration(value); return *this;}
    inline LambdaConfigType& WithPreTokenGeneration(Aws::String&& value) { SetPreTokenGeneration(std::move(value)); return *this;}
    inline LambdaConfigType& WithPreTokenGeneration(const char* value) { SetPreTokenGeneration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-migrate-user.html">migrate
     * user Lambda trigger</a> in a user pool. This trigger can create user profiles
     * when users sign in or attempt to reset their password with credentials that
     * don't exist yet.</p>
     */
    inline const Aws::String& GetUserMigration() const{ return m_userMigration; }
    inline bool UserMigrationHasBeenSet() const { return m_userMigrationHasBeenSet; }
    inline void SetUserMigration(const Aws::String& value) { m_userMigrationHasBeenSet = true; m_userMigration = value; }
    inline void SetUserMigration(Aws::String&& value) { m_userMigrationHasBeenSet = true; m_userMigration = std::move(value); }
    inline void SetUserMigration(const char* value) { m_userMigrationHasBeenSet = true; m_userMigration.assign(value); }
    inline LambdaConfigType& WithUserMigration(const Aws::String& value) { SetUserMigration(value); return *this;}
    inline LambdaConfigType& WithUserMigration(Aws::String&& value) { SetUserMigration(std::move(value)); return *this;}
    inline LambdaConfigType& WithUserMigration(const char* value) { SetUserMigration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-pre-token-generation.html">pre
     * token generation Lambda trigger</a> in a user pool. If you also set an ARN in
     * <code>PreTokenGeneration</code>, its value must be identical to
     * <code>PreTokenGenerationConfig</code>.</p>
     */
    inline const PreTokenGenerationVersionConfigType& GetPreTokenGenerationConfig() const{ return m_preTokenGenerationConfig; }
    inline bool PreTokenGenerationConfigHasBeenSet() const { return m_preTokenGenerationConfigHasBeenSet; }
    inline void SetPreTokenGenerationConfig(const PreTokenGenerationVersionConfigType& value) { m_preTokenGenerationConfigHasBeenSet = true; m_preTokenGenerationConfig = value; }
    inline void SetPreTokenGenerationConfig(PreTokenGenerationVersionConfigType&& value) { m_preTokenGenerationConfigHasBeenSet = true; m_preTokenGenerationConfig = std::move(value); }
    inline LambdaConfigType& WithPreTokenGenerationConfig(const PreTokenGenerationVersionConfigType& value) { SetPreTokenGenerationConfig(value); return *this;}
    inline LambdaConfigType& WithPreTokenGenerationConfig(PreTokenGenerationVersionConfigType&& value) { SetPreTokenGenerationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a custom SMS sender Lambda trigger. This trigger routes
     * all SMS notifications from a user pool to a Lambda function that delivers the
     * message using custom logic.</p>
     */
    inline const CustomSMSLambdaVersionConfigType& GetCustomSMSSender() const{ return m_customSMSSender; }
    inline bool CustomSMSSenderHasBeenSet() const { return m_customSMSSenderHasBeenSet; }
    inline void SetCustomSMSSender(const CustomSMSLambdaVersionConfigType& value) { m_customSMSSenderHasBeenSet = true; m_customSMSSender = value; }
    inline void SetCustomSMSSender(CustomSMSLambdaVersionConfigType&& value) { m_customSMSSenderHasBeenSet = true; m_customSMSSender = std::move(value); }
    inline LambdaConfigType& WithCustomSMSSender(const CustomSMSLambdaVersionConfigType& value) { SetCustomSMSSender(value); return *this;}
    inline LambdaConfigType& WithCustomSMSSender(CustomSMSLambdaVersionConfigType&& value) { SetCustomSMSSender(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a custom email sender Lambda trigger. This trigger
     * routes all email notifications from a user pool to a Lambda function that
     * delivers the message using custom logic.</p>
     */
    inline const CustomEmailLambdaVersionConfigType& GetCustomEmailSender() const{ return m_customEmailSender; }
    inline bool CustomEmailSenderHasBeenSet() const { return m_customEmailSenderHasBeenSet; }
    inline void SetCustomEmailSender(const CustomEmailLambdaVersionConfigType& value) { m_customEmailSenderHasBeenSet = true; m_customEmailSender = value; }
    inline void SetCustomEmailSender(CustomEmailLambdaVersionConfigType&& value) { m_customEmailSenderHasBeenSet = true; m_customEmailSender = std::move(value); }
    inline LambdaConfigType& WithCustomEmailSender(const CustomEmailLambdaVersionConfigType& value) { SetCustomEmailSender(value); return *this;}
    inline LambdaConfigType& WithCustomEmailSender(CustomEmailLambdaVersionConfigType&& value) { SetCustomEmailSender(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">KMS
     * key</a>. Amazon Cognito uses the key to encrypt codes and temporary passwords
     * sent to custom sender Lambda triggers.</p>
     */
    inline const Aws::String& GetKMSKeyID() const{ return m_kMSKeyID; }
    inline bool KMSKeyIDHasBeenSet() const { return m_kMSKeyIDHasBeenSet; }
    inline void SetKMSKeyID(const Aws::String& value) { m_kMSKeyIDHasBeenSet = true; m_kMSKeyID = value; }
    inline void SetKMSKeyID(Aws::String&& value) { m_kMSKeyIDHasBeenSet = true; m_kMSKeyID = std::move(value); }
    inline void SetKMSKeyID(const char* value) { m_kMSKeyIDHasBeenSet = true; m_kMSKeyID.assign(value); }
    inline LambdaConfigType& WithKMSKeyID(const Aws::String& value) { SetKMSKeyID(value); return *this;}
    inline LambdaConfigType& WithKMSKeyID(Aws::String&& value) { SetKMSKeyID(std::move(value)); return *this;}
    inline LambdaConfigType& WithKMSKeyID(const char* value) { SetKMSKeyID(value); return *this;}
    ///@}
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

    PreTokenGenerationVersionConfigType m_preTokenGenerationConfig;
    bool m_preTokenGenerationConfigHasBeenSet = false;

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
