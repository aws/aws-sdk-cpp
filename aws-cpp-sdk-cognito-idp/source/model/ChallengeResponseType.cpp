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

#include <aws/cognito-idp/model/ChallengeResponseType.h>
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

ChallengeResponseType::ChallengeResponseType() : 
    m_challengeName(ChallengeName::NOT_SET),
    m_challengeNameHasBeenSet(false),
    m_challengeResponse(ChallengeResponse::NOT_SET),
    m_challengeResponseHasBeenSet(false)
{
}

ChallengeResponseType::ChallengeResponseType(const JsonValue& jsonValue) : 
    m_challengeName(ChallengeName::NOT_SET),
    m_challengeNameHasBeenSet(false),
    m_challengeResponse(ChallengeResponse::NOT_SET),
    m_challengeResponseHasBeenSet(false)
{
  *this = jsonValue;
}

ChallengeResponseType& ChallengeResponseType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ChallengeName"))
  {
    m_challengeName = ChallengeNameMapper::GetChallengeNameForName(jsonValue.GetString("ChallengeName"));

    m_challengeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChallengeResponse"))
  {
    m_challengeResponse = ChallengeResponseMapper::GetChallengeResponseForName(jsonValue.GetString("ChallengeResponse"));

    m_challengeResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue ChallengeResponseType::Jsonize() const
{
  JsonValue payload;

  if(m_challengeNameHasBeenSet)
  {
   payload.WithString("ChallengeName", ChallengeNameMapper::GetNameForChallengeName(m_challengeName));
  }

  if(m_challengeResponseHasBeenSet)
  {
   payload.WithString("ChallengeResponse", ChallengeResponseMapper::GetNameForChallengeResponse(m_challengeResponse));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
