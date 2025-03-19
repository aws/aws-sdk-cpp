/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/InitiateAuthResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InitiateAuthResult::InitiateAuthResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InitiateAuthResult& InitiateAuthResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChallengeName"))
  {
    m_challengeName = ChallengeNameTypeMapper::GetChallengeNameTypeForName(jsonValue.GetString("ChallengeName"));
    m_challengeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Session"))
  {
    m_session = jsonValue.GetString("Session");
    m_sessionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChallengeParameters"))
  {
    Aws::Map<Aws::String, JsonView> challengeParametersJsonMap = jsonValue.GetObject("ChallengeParameters").GetAllObjects();
    for(auto& challengeParametersItem : challengeParametersJsonMap)
    {
      m_challengeParameters[challengeParametersItem.first] = challengeParametersItem.second.AsString();
    }
    m_challengeParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationResult"))
  {
    m_authenticationResult = jsonValue.GetObject("AuthenticationResult");
    m_authenticationResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableChallenges"))
  {
    Aws::Utils::Array<JsonView> availableChallengesJsonList = jsonValue.GetArray("AvailableChallenges");
    for(unsigned availableChallengesIndex = 0; availableChallengesIndex < availableChallengesJsonList.GetLength(); ++availableChallengesIndex)
    {
      m_availableChallenges.push_back(ChallengeNameTypeMapper::GetChallengeNameTypeForName(availableChallengesJsonList[availableChallengesIndex].AsString()));
    }
    m_availableChallengesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
