/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsByDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomRoutingPortMappingsByDestinationResult::ListCustomRoutingPortMappingsByDestinationResult()
{
}

ListCustomRoutingPortMappingsByDestinationResult::ListCustomRoutingPortMappingsByDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomRoutingPortMappingsByDestinationResult& ListCustomRoutingPortMappingsByDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DestinationPortMappings"))
  {
    Aws::Utils::Array<JsonView> destinationPortMappingsJsonList = jsonValue.GetArray("DestinationPortMappings");
    for(unsigned destinationPortMappingsIndex = 0; destinationPortMappingsIndex < destinationPortMappingsJsonList.GetLength(); ++destinationPortMappingsIndex)
    {
      m_destinationPortMappings.push_back(destinationPortMappingsJsonList[destinationPortMappingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
