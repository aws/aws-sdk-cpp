/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
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
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("DiscoveredResourceList"))
  {
    Aws::Utils::Array<JsonView> discoveredResourceListJsonList = jsonValue.GetArray("DiscoveredResourceList");
    for(unsigned discoveredResourceListIndex = 0; discoveredResourceListIndex < discoveredResourceListJsonList.GetLength(); ++discoveredResourceListIndex)
    {
      m_discoveredResourceList.push_back(discoveredResourceListJsonList[discoveredResourceListIndex].AsObject());
    }
  }



  return *this;
}
