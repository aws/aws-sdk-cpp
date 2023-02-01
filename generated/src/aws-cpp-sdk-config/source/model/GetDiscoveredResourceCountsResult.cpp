/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetDiscoveredResourceCountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDiscoveredResourceCountsResult::GetDiscoveredResourceCountsResult() : 
    m_totalDiscoveredResources(0)
{
}

GetDiscoveredResourceCountsResult::GetDiscoveredResourceCountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalDiscoveredResources(0)
{
  *this = result;
}

GetDiscoveredResourceCountsResult& GetDiscoveredResourceCountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("totalDiscoveredResources"))
  {
    m_totalDiscoveredResources = jsonValue.GetInt64("totalDiscoveredResources");

  }

  if(jsonValue.ValueExists("resourceCounts"))
  {
    Aws::Utils::Array<JsonView> resourceCountsJsonList = jsonValue.GetArray("resourceCounts");
    for(unsigned resourceCountsIndex = 0; resourceCountsIndex < resourceCountsJsonList.GetLength(); ++resourceCountsIndex)
    {
      m_resourceCounts.push_back(resourceCountsJsonList[resourceCountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
