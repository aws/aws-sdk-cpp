/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ListRecipeVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecipeVersionsResult::ListRecipeVersionsResult()
{
}

ListRecipeVersionsResult::ListRecipeVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecipeVersionsResult& ListRecipeVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Recipes"))
  {
    Aws::Utils::Array<JsonView> recipesJsonList = jsonValue.GetArray("Recipes");
    for(unsigned recipesIndex = 0; recipesIndex < recipesJsonList.GetLength(); ++recipesIndex)
    {
      m_recipes.push_back(recipesJsonList[recipesIndex].AsObject());
    }
  }



  return *this;
}
