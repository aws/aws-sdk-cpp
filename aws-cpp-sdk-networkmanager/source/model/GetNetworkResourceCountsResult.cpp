/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetNetworkResourceCountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNetworkResourceCountsResult::GetNetworkResourceCountsResult()
{
}

GetNetworkResourceCountsResult::GetNetworkResourceCountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetNetworkResourceCountsResult& GetNetworkResourceCountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NetworkResourceCounts"))
  {
    Aws::Utils::Array<JsonView> networkResourceCountsJsonList = jsonValue.GetArray("NetworkResourceCounts");
    for(unsigned networkResourceCountsIndex = 0; networkResourceCountsIndex < networkResourceCountsJsonList.GetLength(); ++networkResourceCountsIndex)
    {
      m_networkResourceCounts.push_back(networkResourceCountsJsonList[networkResourceCountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
