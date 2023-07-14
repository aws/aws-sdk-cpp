/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/LambdaConfigType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

LambdaConfigType::LambdaConfigType() : 
    m_preSignUpHasBeenSet(false),
    m_customMessageHasBeenSet(false),
    m_postConfirmationHasBeenSet(false),
    m_preAuthenticationHasBeenSet(false),
    m_postAuthenticationHasBeenSet(false),
    m_defineAuthChallengeHasBeenSet(false),
    m_createAuthChallengeHasBeenSet(false),
    m_verifyAuthChallengeResponseHasBeenSet(false),
    m_preTokenGenerationHasBeenSet(false),
    m_userMigrationHasBeenSet(false),
    m_customSMSSenderHasBeenSet(false),
    m_customEmailSenderHasBeenSet(false),
    m_kMSKeyIDHasBeenSet(false)
{
}

LambdaConfigType::LambdaConfigType(JsonView jsonValue) : 
    m_preSignUpHasBeenSet(false),
    m_customMessageHasBeenSet(false),
    m_postConfirmationHasBeenSet(false),
    m_preAuthenticationHasBeenSet(false),
    m_postAuthenticationHasBeenSet(false),
    m_defineAuthChallengeHasBeenSet(false),
    m_createAuthChallengeHasBeenSet(false),
    m_verifyAuthChallengeResponseHasBeenSet(false),
    m_preTokenGenerationHasBeenSet(false),
    m_userMigrationHasBeenSet(false),
    m_customSMSSenderHasBeenSet(false),
    m_customEmailSenderHasBeenSet(false),
    m_kMSKeyIDHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaConfigType& LambdaConfigType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PreSignUp"))
  {
    m_preSignUp = jsonValue.GetString("PreSignUp");

    m_preSignUpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomMessage"))
  {
    m_customMessage = jsonValue.GetString("CustomMessage");

    m_customMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostConfirmation"))
  {
    m_postConfirmation = jsonValue.GetString("PostConfirmation");

    m_postConfirmationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreAuthentication"))
  {
    m_preAuthentication = jsonValue.GetString("PreAuthentication");

    m_preAuthenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostAuthentication"))
  {
    m_postAuthentication = jsonValue.GetString("PostAuthentication");

    m_postAuthenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefineAuthChallenge"))
  {
    m_defineAuthChallenge = jsonValue.GetString("DefineAuthChallenge");

    m_defineAuthChallengeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateAuthChallenge"))
  {
    m_createAuthChallenge = jsonValue.GetString("CreateAuthChallenge");

    m_createAuthChallengeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerifyAuthChallengeResponse"))
  {
    m_verifyAuthChallengeResponse = jsonValue.GetString("VerifyAuthChallengeResponse");

    m_verifyAuthChallengeResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreTokenGeneration"))
  {
    m_preTokenGeneration = jsonValue.GetString("PreTokenGeneration");

    m_preTokenGenerationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserMigration"))
  {
    m_userMigration = jsonValue.GetString("UserMigration");

    m_userMigrationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomSMSSender"))
  {
    m_customSMSSender = jsonValue.GetObject("CustomSMSSender");

    m_customSMSSenderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEmailSender"))
  {
    m_customEmailSender = jsonValue.GetObject("CustomEmailSender");

    m_customEmailSenderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSKeyID"))
  {
    m_kMSKeyID = jsonValue.GetString("KMSKeyID");

    m_kMSKeyIDHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaConfigType::Jsonize() const
{
  JsonValue payload;

  if(m_preSignUpHasBeenSet)
  {
   payload.WithString("PreSignUp", m_preSignUp);

  }

  if(m_customMessageHasBeenSet)
  {
   payload.WithString("CustomMessage", m_customMessage);

  }

  if(m_postConfirmationHasBeenSet)
  {
   payload.WithString("PostConfirmation", m_postConfirmation);

  }

  if(m_preAuthenticationHasBeenSet)
  {
   payload.WithString("PreAuthentication", m_preAuthentication);

  }

  if(m_postAuthenticationHasBeenSet)
  {
   payload.WithString("PostAuthentication", m_postAuthentication);

  }

  if(m_defineAuthChallengeHasBeenSet)
  {
   payload.WithString("DefineAuthChallenge", m_defineAuthChallenge);

  }

  if(m_createAuthChallengeHasBeenSet)
  {
   payload.WithString("CreateAuthChallenge", m_createAuthChallenge);

  }

  if(m_verifyAuthChallengeResponseHasBeenSet)
  {
   payload.WithString("VerifyAuthChallengeResponse", m_verifyAuthChallengeResponse);

  }

  if(m_preTokenGenerationHasBeenSet)
  {
   payload.WithString("PreTokenGeneration", m_preTokenGeneration);

  }

  if(m_userMigrationHasBeenSet)
  {
   payload.WithString("UserMigration", m_userMigration);

  }

  if(m_customSMSSenderHasBeenSet)
  {
   payload.WithObject("CustomSMSSender", m_customSMSSender.Jsonize());

  }

  if(m_customEmailSenderHasBeenSet)
  {
   payload.WithObject("CustomEmailSender", m_customEmailSender.Jsonize());

  }

  if(m_kMSKeyIDHasBeenSet)
  {
   payload.WithString("KMSKeyID", m_kMSKeyID);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
