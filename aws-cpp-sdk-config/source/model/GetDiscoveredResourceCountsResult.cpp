/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("totalDiscoveredResources"))
  {
    m_totalDiscoveredResources = jsonValue.GetInt64("totalDiscoveredResources");

  }

  if(jsonValue.ValueExists("resourceCounts"))
  {
    Array<JsonValue> resourceCountsJsonList = jsonValue.GetArray("resourceCounts");
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
