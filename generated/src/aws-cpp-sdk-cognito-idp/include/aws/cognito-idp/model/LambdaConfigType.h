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
   * of the operations that invoked them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/LambdaConfigType">AWS
   * API Reference</a></p>
   */
  class LambdaConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API LambdaConfigType() = default;
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
    inline const Aws::String& GetPreSignUp() const { return m_preSignUp; }
    inline bool PreSignUpHasBeenSet() const { return m_preSignUpHasBeenSet; }
    template<typename PreSignUpT = Aws::String>
    void SetPreSignUp(PreSignUpT&& value) { m_preSignUpHasBeenSet = true; m_preSignUp = std::forward<PreSignUpT>(value); }
    template<typename PreSignUpT = Aws::String>
    LambdaConfigType& WithPreSignUp(PreSignUpT&& value) { SetPreSignUp(std::forward<PreSignUpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom message Lambda trigger. This trigger is an opportunity to customize
     * all SMS and email messages from your user pool. When a custom message trigger is
     * active, your user pool routes all messages to a Lambda function that returns a
     * runtime-customized message subject and body for your user pool to deliver to a
     * user.</p>
     */
    inline const Aws::String& GetCustomMessage() const { return m_customMessage; }
    inline bool CustomMessageHasBeenSet() const { return m_customMessageHasBeenSet; }
    template<typename CustomMessageT = Aws::String>
    void SetCustomMessage(CustomMessageT&& value) { m_customMessageHasBeenSet = true; m_customMessage = std::forward<CustomMessageT>(value); }
    template<typename CustomMessageT = Aws::String>
    LambdaConfigType& WithCustomMessage(CustomMessageT&& value) { SetCustomMessage(std::forward<CustomMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-post-confirmation.html">post
     * confirmation Lambda trigger</a> in a user pool. This trigger can take custom
     * actions after a user confirms their user account and their email address or
     * phone number.</p>
     */
    inline const Aws::String& GetPostConfirmation() const { return m_postConfirmation; }
    inline bool PostConfirmationHasBeenSet() const { return m_postConfirmationHasBeenSet; }
    template<typename PostConfirmationT = Aws::String>
    void SetPostConfirmation(PostConfirmationT&& value) { m_postConfirmationHasBeenSet = true; m_postConfirmation = std::forward<PostConfirmationT>(value); }
    template<typename PostConfirmationT = Aws::String>
    LambdaConfigType& WithPostConfirmation(PostConfirmationT&& value) { SetPostConfirmation(std::forward<PostConfirmationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-pre-authentication.html">pre
     * authentication trigger</a> in a user pool. This trigger can evaluate and modify
     * user sign-in events.</p>
     */
    inline const Aws::String& GetPreAuthentication() const { return m_preAuthentication; }
    inline bool PreAuthenticationHasBeenSet() const { return m_preAuthenticationHasBeenSet; }
    template<typename PreAuthenticationT = Aws::String>
    void SetPreAuthentication(PreAuthenticationT&& value) { m_preAuthenticationHasBeenSet = true; m_preAuthentication = std::forward<PreAuthenticationT>(value); }
    template<typename PreAuthenticationT = Aws::String>
    LambdaConfigType& WithPreAuthentication(PreAuthenticationT&& value) { SetPreAuthentication(std::forward<PreAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-post-authentication.html">post
     * authentication Lambda trigger</a> in a user pool. This trigger can take custom
     * actions after a user signs in.</p>
     */
    inline const Aws::String& GetPostAuthentication() const { return m_postAuthentication; }
    inline bool PostAuthenticationHasBeenSet() const { return m_postAuthenticationHasBeenSet; }
    template<typename PostAuthenticationT = Aws::String>
    void SetPostAuthentication(PostAuthenticationT&& value) { m_postAuthenticationHasBeenSet = true; m_postAuthentication = std::forward<PostAuthenticationT>(value); }
    template<typename PostAuthenticationT = Aws::String>
    LambdaConfigType& WithPostAuthentication(PostAuthenticationT&& value) { SetPostAuthentication(std::forward<PostAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a define auth challenge Lambda trigger, one of three
     * triggers in the sequence of the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">custom
     * authentication challenge triggers</a>.</p>
     */
    inline const Aws::String& GetDefineAuthChallenge() const { return m_defineAuthChallenge; }
    inline bool DefineAuthChallengeHasBeenSet() const { return m_defineAuthChallengeHasBeenSet; }
    template<typename DefineAuthChallengeT = Aws::String>
    void SetDefineAuthChallenge(DefineAuthChallengeT&& value) { m_defineAuthChallengeHasBeenSet = true; m_defineAuthChallenge = std::forward<DefineAuthChallengeT>(value); }
    template<typename DefineAuthChallengeT = Aws::String>
    LambdaConfigType& WithDefineAuthChallenge(DefineAuthChallengeT&& value) { SetDefineAuthChallenge(std::forward<DefineAuthChallengeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a create auth challenge Lambda trigger, one of three
     * triggers in the sequence of the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">custom
     * authentication challenge triggers</a>.</p>
     */
    inline const Aws::String& GetCreateAuthChallenge() const { return m_createAuthChallenge; }
    inline bool CreateAuthChallengeHasBeenSet() const { return m_createAuthChallengeHasBeenSet; }
    template<typename CreateAuthChallengeT = Aws::String>
    void SetCreateAuthChallenge(CreateAuthChallengeT&& value) { m_createAuthChallengeHasBeenSet = true; m_createAuthChallenge = std::forward<CreateAuthChallengeT>(value); }
    template<typename CreateAuthChallengeT = Aws::String>
    LambdaConfigType& WithCreateAuthChallenge(CreateAuthChallengeT&& value) { SetCreateAuthChallenge(std::forward<CreateAuthChallengeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a verify auth challenge Lambda trigger, one of three
     * triggers in the sequence of the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">custom
     * authentication challenge triggers</a>.</p>
     */
    inline const Aws::String& GetVerifyAuthChallengeResponse() const { return m_verifyAuthChallengeResponse; }
    inline bool VerifyAuthChallengeResponseHasBeenSet() const { return m_verifyAuthChallengeResponseHasBeenSet; }
    template<typename VerifyAuthChallengeResponseT = Aws::String>
    void SetVerifyAuthChallengeResponse(VerifyAuthChallengeResponseT&& value) { m_verifyAuthChallengeResponseHasBeenSet = true; m_verifyAuthChallengeResponse = std::forward<VerifyAuthChallengeResponseT>(value); }
    template<typename VerifyAuthChallengeResponseT = Aws::String>
    LambdaConfigType& WithVerifyAuthChallengeResponse(VerifyAuthChallengeResponseT&& value) { SetVerifyAuthChallengeResponse(std::forward<VerifyAuthChallengeResponseT>(value)); return *this;}
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
    inline const Aws::String& GetPreTokenGeneration() const { return m_preTokenGeneration; }
    inline bool PreTokenGenerationHasBeenSet() const { return m_preTokenGenerationHasBeenSet; }
    template<typename PreTokenGenerationT = Aws::String>
    void SetPreTokenGeneration(PreTokenGenerationT&& value) { m_preTokenGenerationHasBeenSet = true; m_preTokenGeneration = std::forward<PreTokenGenerationT>(value); }
    template<typename PreTokenGenerationT = Aws::String>
    LambdaConfigType& WithPreTokenGeneration(PreTokenGenerationT&& value) { SetPreTokenGeneration(std::forward<PreTokenGenerationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-migrate-user.html">migrate
     * user Lambda trigger</a> in a user pool. This trigger can create user profiles
     * when users sign in or attempt to reset their password with credentials that
     * don't exist yet.</p>
     */
    inline const Aws::String& GetUserMigration() const { return m_userMigration; }
    inline bool UserMigrationHasBeenSet() const { return m_userMigrationHasBeenSet; }
    template<typename UserMigrationT = Aws::String>
    void SetUserMigration(UserMigrationT&& value) { m_userMigrationHasBeenSet = true; m_userMigration = std::forward<UserMigrationT>(value); }
    template<typename UserMigrationT = Aws::String>
    LambdaConfigType& WithUserMigration(UserMigrationT&& value) { SetUserMigration(std::forward<UserMigrationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed configuration of a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-pre-token-generation.html">pre
     * token generation Lambda trigger</a> in a user pool. If you also set an ARN in
     * <code>PreTokenGeneration</code>, its value must be identical to
     * <code>PreTokenGenerationConfig</code>.</p>
     */
    inline const PreTokenGenerationVersionConfigType& GetPreTokenGenerationConfig() const { return m_preTokenGenerationConfig; }
    inline bool PreTokenGenerationConfigHasBeenSet() const { return m_preTokenGenerationConfigHasBeenSet; }
    template<typename PreTokenGenerationConfigT = PreTokenGenerationVersionConfigType>
    void SetPreTokenGenerationConfig(PreTokenGenerationConfigT&& value) { m_preTokenGenerationConfigHasBeenSet = true; m_preTokenGenerationConfig = std::forward<PreTokenGenerationConfigT>(value); }
    template<typename PreTokenGenerationConfigT = PreTokenGenerationVersionConfigType>
    LambdaConfigType& WithPreTokenGenerationConfig(PreTokenGenerationConfigT&& value) { SetPreTokenGenerationConfig(std::forward<PreTokenGenerationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a custom SMS sender Lambda trigger. This trigger routes
     * all SMS notifications from a user pool to a Lambda function that delivers the
     * message using custom logic.</p>
     */
    inline const CustomSMSLambdaVersionConfigType& GetCustomSMSSender() const { return m_customSMSSender; }
    inline bool CustomSMSSenderHasBeenSet() const { return m_customSMSSenderHasBeenSet; }
    template<typename CustomSMSSenderT = CustomSMSLambdaVersionConfigType>
    void SetCustomSMSSender(CustomSMSSenderT&& value) { m_customSMSSenderHasBeenSet = true; m_customSMSSender = std::forward<CustomSMSSenderT>(value); }
    template<typename CustomSMSSenderT = CustomSMSLambdaVersionConfigType>
    LambdaConfigType& WithCustomSMSSender(CustomSMSSenderT&& value) { SetCustomSMSSender(std::forward<CustomSMSSenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a custom email sender Lambda trigger. This trigger
     * routes all email notifications from a user pool to a Lambda function that
     * delivers the message using custom logic.</p>
     */
    inline const CustomEmailLambdaVersionConfigType& GetCustomEmailSender() const { return m_customEmailSender; }
    inline bool CustomEmailSenderHasBeenSet() const { return m_customEmailSenderHasBeenSet; }
    template<typename CustomEmailSenderT = CustomEmailLambdaVersionConfigType>
    void SetCustomEmailSender(CustomEmailSenderT&& value) { m_customEmailSenderHasBeenSet = true; m_customEmailSender = std::forward<CustomEmailSenderT>(value); }
    template<typename CustomEmailSenderT = CustomEmailLambdaVersionConfigType>
    LambdaConfigType& WithCustomEmailSender(CustomEmailSenderT&& value) { SetCustomEmailSender(std::forward<CustomEmailSenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">KMS
     * key</a>. Amazon Cognito uses the key to encrypt codes and temporary passwords
     * sent to custom sender Lambda triggers.</p>
     */
    inline const Aws::String& GetKMSKeyID() const { return m_kMSKeyID; }
    inline bool KMSKeyIDHasBeenSet() const { return m_kMSKeyIDHasBeenSet; }
    template<typename KMSKeyIDT = Aws::String>
    void SetKMSKeyID(KMSKeyIDT&& value) { m_kMSKeyIDHasBeenSet = true; m_kMSKeyID = std::forward<KMSKeyIDT>(value); }
    template<typename KMSKeyIDT = Aws::String>
    LambdaConfigType& WithKMSKeyID(KMSKeyIDT&& value) { SetKMSKeyID(std::forward<KMSKeyIDT>(value)); return *this;}
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
