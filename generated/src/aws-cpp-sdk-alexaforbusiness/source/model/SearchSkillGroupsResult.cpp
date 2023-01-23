/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SearchSkillGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchSkillGroupsResult::SearchSkillGroupsResult() : 
    m_totalCount(0)
{
}

SearchSkillGroupsResult::SearchSkillGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalCount(0)
{
  *this = result;
}

SearchSkillGroupsResult& SearchSkillGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SkillGroups"))
  {
    Aws::Utils::Array<JsonView> skillGroupsJsonList = jsonValue.GetArray("SkillGroups");
    for(unsigned skillGroupsIndex = 0; skillGroupsIndex < skillGroupsJsonList.GetLength(); ++skillGroupsIndex)
    {
      m_skillGroups.push_back(skillGroupsJsonList[skillGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");

  }



  return *this;
}
