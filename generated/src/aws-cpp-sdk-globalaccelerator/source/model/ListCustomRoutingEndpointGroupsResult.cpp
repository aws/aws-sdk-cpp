/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCustomRoutingEndpointGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomRoutingEndpointGroupsResult::ListCustomRoutingEndpointGroupsResult()
{
}

ListCustomRoutingEndpointGroupsResult::ListCustomRoutingEndpointGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomRoutingEndpointGroupsResult& ListCustomRoutingEndpointGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EndpointGroups"))
  {
    Aws::Utils::Array<JsonView> endpointGroupsJsonList = jsonValue.GetArray("EndpointGroups");
    for(unsigned endpointGroupsIndex = 0; endpointGroupsIndex < endpointGroupsJsonList.GetLength(); ++endpointGroupsIndex)
    {
      m_endpointGroups.push_back(endpointGroupsJsonList[endpointGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
