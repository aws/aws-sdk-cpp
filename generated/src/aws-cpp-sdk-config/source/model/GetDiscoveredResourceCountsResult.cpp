/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetDiscoveredResourceCountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDiscoveredResourceCountsResult::GetDiscoveredResourceCountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDiscoveredResourceCountsResult& GetDiscoveredResourceCountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("totalDiscoveredResources"))
  {
    m_totalDiscoveredResources = jsonValue.GetInt64("totalDiscoveredResources");
    m_totalDiscoveredResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceCounts"))
  {
    Aws::Utils::Array<JsonView> resourceCountsJsonList = jsonValue.GetArray("resourceCounts");
    for(unsigned resourceCountsIndex = 0; resourceCountsIndex < resourceCountsJsonList.GetLength(); ++resourceCountsIndex)
    {
      m_resourceCounts.push_back(resourceCountsJsonList[resourceCountsIndex].AsObject());
    }
    m_resourceCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
