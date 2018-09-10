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

#include <aws/cognito-idp/model/InitiateAuthResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InitiateAuthResult::InitiateAuthResult() : 
    m_challengeName(ChallengeNameType::NOT_SET)
{
}

InitiateAuthResult::InitiateAuthResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_challengeName(ChallengeNameType::NOT_SET)
{
  *this = result;
}

InitiateAuthResult& InitiateAuthResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Aws::Map<Aws::String, JsonView> challengeParametersJsonMap = jsonValue.GetObject("ChallengeParameters").GetAllObjects();
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
