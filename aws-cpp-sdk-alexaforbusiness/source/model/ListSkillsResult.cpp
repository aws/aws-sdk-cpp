/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListSkillsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSkillsResult::ListSkillsResult()
{
}

ListSkillsResult::ListSkillsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSkillsResult& ListSkillsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SkillSummaries"))
  {
    Aws::Utils::Array<JsonView> skillSummariesJsonList = jsonValue.GetArray("SkillSummaries");
    for(unsigned skillSummariesIndex = 0; skillSummariesIndex < skillSummariesJsonList.GetLength(); ++skillSummariesIndex)
    {
      m_skillSummaries.push_back(skillSummariesJsonList[skillSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
