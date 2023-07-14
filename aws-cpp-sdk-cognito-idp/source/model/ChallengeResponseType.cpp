/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ChallengeResponseType::ChallengeResponseType(JsonView jsonValue) : 
    m_challengeName(ChallengeName::NOT_SET),
    m_challengeNameHasBeenSet(false),
    m_challengeResponse(ChallengeResponse::NOT_SET),
    m_challengeResponseHasBeenSet(false)
{
  *this = jsonValue;
}

ChallengeResponseType& ChallengeResponseType::operator =(JsonView jsonValue)
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
