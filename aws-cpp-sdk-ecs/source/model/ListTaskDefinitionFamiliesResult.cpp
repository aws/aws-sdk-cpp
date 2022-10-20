/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ListTaskDefinitionFamiliesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTaskDefinitionFamiliesResult::ListTaskDefinitionFamiliesResult()
{
}

ListTaskDefinitionFamiliesResult::ListTaskDefinitionFamiliesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTaskDefinitionFamiliesResult& ListTaskDefinitionFamiliesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("families"))
  {
    Aws::Utils::Array<JsonView> familiesJsonList = jsonValue.GetArray("families");
    for(unsigned familiesIndex = 0; familiesIndex < familiesJsonList.GetLength(); ++familiesIndex)
    {
      m_families.push_back(familiesJsonList[familiesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
