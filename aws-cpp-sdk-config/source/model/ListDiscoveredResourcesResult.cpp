/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ListDiscoveredResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDiscoveredResourcesResult::ListDiscoveredResourcesResult()
{
}

ListDiscoveredResourcesResult::ListDiscoveredResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDiscoveredResourcesResult& ListDiscoveredResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> resourceIdentifiersJsonList = jsonValue.GetArray("resourceIdentifiers");
    for(unsigned resourceIdentifiersIndex = 0; resourceIdentifiersIndex < resourceIdentifiersJsonList.GetLength(); ++resourceIdentifiersIndex)
    {
      m_resourceIdentifiers.push_back(resourceIdentifiersJsonList[resourceIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
