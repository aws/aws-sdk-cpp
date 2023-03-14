/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/GetComponentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetComponentResult::GetComponentResult() : 
    m_recipeOutputFormat(RecipeOutputFormat::NOT_SET)
{
}

GetComponentResult::GetComponentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_recipeOutputFormat(RecipeOutputFormat::NOT_SET)
{
  *this = result;
}

GetComponentResult& GetComponentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("recipeOutputFormat"))
  {
    m_recipeOutputFormat = RecipeOutputFormatMapper::GetRecipeOutputFormatForName(jsonValue.GetString("recipeOutputFormat"));

  }

  if(jsonValue.ValueExists("recipe"))
  {
    m_recipe = HashingUtils::Base64Decode(jsonValue.GetString("recipe"));
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
