/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListSkillsStoreSkillsByCategoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSkillsStoreSkillsByCategoryResult::ListSkillsStoreSkillsByCategoryResult()
{
}

ListSkillsStoreSkillsByCategoryResult::ListSkillsStoreSkillsByCategoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSkillsStoreSkillsByCategoryResult& ListSkillsStoreSkillsByCategoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SkillsStoreSkills"))
  {
    Aws::Utils::Array<JsonView> skillsStoreSkillsJsonList = jsonValue.GetArray("SkillsStoreSkills");
    for(unsigned skillsStoreSkillsIndex = 0; skillsStoreSkillsIndex < skillsStoreSkillsJsonList.GetLength(); ++skillsStoreSkillsIndex)
    {
      m_skillsStoreSkills.push_back(skillsStoreSkillsJsonList[skillsStoreSkillsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
