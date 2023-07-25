/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetSimilarProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSimilarProfilesResult::GetSimilarProfilesResult() : 
    m_matchType(MatchType::NOT_SET),
    m_ruleLevel(0),
    m_confidenceScore(0.0)
{
}

GetSimilarProfilesResult::GetSimilarProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_matchType(MatchType::NOT_SET),
    m_ruleLevel(0),
    m_confidenceScore(0.0)
{
  *this = result;
}

GetSimilarProfilesResult& GetSimilarProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProfileIds"))
  {
    Aws::Utils::Array<JsonView> profileIdsJsonList = jsonValue.GetArray("ProfileIds");
    for(unsigned profileIdsIndex = 0; profileIdsIndex < profileIdsJsonList.GetLength(); ++profileIdsIndex)
    {
      m_profileIds.push_back(profileIdsJsonList[profileIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("MatchId"))
  {
    m_matchId = jsonValue.GetString("MatchId");

  }

  if(jsonValue.ValueExists("MatchType"))
  {
    m_matchType = MatchTypeMapper::GetMatchTypeForName(jsonValue.GetString("MatchType"));

  }

  if(jsonValue.ValueExists("RuleLevel"))
  {
    m_ruleLevel = jsonValue.GetInteger("RuleLevel");

  }

  if(jsonValue.ValueExists("ConfidenceScore"))
  {
    m_confidenceScore = jsonValue.GetDouble("ConfidenceScore");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
