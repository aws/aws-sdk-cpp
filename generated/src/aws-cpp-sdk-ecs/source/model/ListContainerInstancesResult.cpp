/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ListContainerInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContainerInstancesResult::ListContainerInstancesResult()
{
}

ListContainerInstancesResult::ListContainerInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContainerInstancesResult& ListContainerInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("containerInstanceArns"))
  {
    Aws::Utils::Array<JsonView> containerInstanceArnsJsonList = jsonValue.GetArray("containerInstanceArns");
    for(unsigned containerInstanceArnsIndex = 0; containerInstanceArnsIndex < containerInstanceArnsJsonList.GetLength(); ++containerInstanceArnsIndex)
    {
      m_containerInstanceArns.push_back(containerInstanceArnsJsonList[containerInstanceArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
