/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListSkillsStoreCategoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSkillsStoreCategoriesResult::ListSkillsStoreCategoriesResult()
{
}

ListSkillsStoreCategoriesResult::ListSkillsStoreCategoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSkillsStoreCategoriesResult& ListSkillsStoreCategoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CategoryList"))
  {
    Aws::Utils::Array<JsonView> categoryListJsonList = jsonValue.GetArray("CategoryList");
    for(unsigned categoryListIndex = 0; categoryListIndex < categoryListJsonList.GetLength(); ++categoryListIndex)
    {
      m_categoryList.push_back(categoryListJsonList[categoryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
