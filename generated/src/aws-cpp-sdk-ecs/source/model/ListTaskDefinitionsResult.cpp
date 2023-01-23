/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ListTaskDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTaskDefinitionsResult::ListTaskDefinitionsResult()
{
}

ListTaskDefinitionsResult::ListTaskDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTaskDefinitionsResult& ListTaskDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskDefinitionArns"))
  {
    Aws::Utils::Array<JsonView> taskDefinitionArnsJsonList = jsonValue.GetArray("taskDefinitionArns");
    for(unsigned taskDefinitionArnsIndex = 0; taskDefinitionArnsIndex < taskDefinitionArnsJsonList.GetLength(); ++taskDefinitionArnsIndex)
    {
      m_taskDefinitionArns.push_back(taskDefinitionArnsJsonList[taskDefinitionArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
