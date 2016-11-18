﻿/*
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
#include <aws/cognito-idp/model/RespondToAuthChallengeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RespondToAuthChallengeResult::RespondToAuthChallengeResult() : 
    m_challengeName(ChallengeNameType::NOT_SET)
{
}

RespondToAuthChallengeResult::RespondToAuthChallengeResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_challengeName(ChallengeNameType::NOT_SET)
{
  *this = result;
}

RespondToAuthChallengeResult& RespondToAuthChallengeResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("ChallengeName"))
  {
    m_challengeName = ChallengeNameTypeMapper::GetChallengeNameTypeForName(jsonValue.GetString("ChallengeName"));

  }

  if(jsonValue.ValueExists("Session"))
  {
    m_session = jsonValue.GetString("Session");

  }

  if(jsonValue.ValueExists("ChallengeParameters"))
  {
    Aws::Map<Aws::String, JsonValue> challengeParametersJsonMap = jsonValue.GetObject("ChallengeParameters").GetAllObjects();
    for(auto& challengeParametersItem : challengeParametersJsonMap)
    {
      m_challengeParameters[challengeParametersItem.first] = challengeParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("AuthenticationResult"))
  {
    m_authenticationResult = jsonValue.GetObject("AuthenticationResult");

  }



  return *this;
}
