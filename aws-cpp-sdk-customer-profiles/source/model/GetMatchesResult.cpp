/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetMatchesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMatchesResult::GetMatchesResult() : 
    m_potentialMatches(0)
{
}

GetMatchesResult::GetMatchesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_potentialMatches(0)
{
  *this = result;
}

GetMatchesResult& GetMatchesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("MatchGenerationDate"))
  {
    m_matchGenerationDate = jsonValue.GetDouble("MatchGenerationDate");

  }

  if(jsonValue.ValueExists("PotentialMatches"))
  {
    m_potentialMatches = jsonValue.GetInteger("PotentialMatches");

  }

  if(jsonValue.ValueExists("Matches"))
  {
    Aws::Utils::Array<JsonView> matchesJsonList = jsonValue.GetArray("Matches");
    for(unsigned matchesIndex = 0; matchesIndex < matchesJsonList.GetLength(); ++matchesIndex)
    {
      m_matches.push_back(matchesJsonList[matchesIndex].AsObject());
    }
  }



  return *this;
}
