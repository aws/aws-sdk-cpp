﻿/*
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
    m_userMigrationHasBeenSet(false)
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
    m_userMigrationHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
