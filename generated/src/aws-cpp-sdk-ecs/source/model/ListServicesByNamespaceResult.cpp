/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ListServicesByNamespaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServicesByNamespaceResult::ListServicesByNamespaceResult()
{
}

ListServicesByNamespaceResult::ListServicesByNamespaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServicesByNamespaceResult& ListServicesByNamespaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("serviceArns"))
  {
    Aws::Utils::Array<JsonView> serviceArnsJsonList = jsonValue.GetArray("serviceArns");
    for(unsigned serviceArnsIndex = 0; serviceArnsIndex < serviceArnsJsonList.GetLength(); ++serviceArnsIndex)
    {
      m_serviceArns.push_back(serviceArnsJsonList[serviceArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
