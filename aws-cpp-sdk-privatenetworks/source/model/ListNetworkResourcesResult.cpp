/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ListNetworkResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNetworkResourcesResult::ListNetworkResourcesResult()
{
}

ListNetworkResourcesResult::ListNetworkResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNetworkResourcesResult& ListNetworkResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("networkResources"))
  {
    Aws::Utils::Array<JsonView> networkResourcesJsonList = jsonValue.GetArray("networkResources");
    for(unsigned networkResourcesIndex = 0; networkResourcesIndex < networkResourcesJsonList.GetLength(); ++networkResourcesIndex)
    {
      m_networkResources.push_back(networkResourcesJsonList[networkResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
