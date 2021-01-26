/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminRespondToAuthChallengeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AdminRespondToAuthChallengeResult::AdminRespondToAuthChallengeResult() : 
    m_challengeName(ChallengeNameType::NOT_SET)
{
}

AdminRespondToAuthChallengeResult::AdminRespondToAuthChallengeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_challengeName(ChallengeNameType::NOT_SET)
{
  *this = result;
}

AdminRespondToAuthChallengeResult& AdminRespondToAuthChallengeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
