/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/AddCustomRoutingEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddCustomRoutingEndpointsResult::AddCustomRoutingEndpointsResult()
{
}

AddCustomRoutingEndpointsResult::AddCustomRoutingEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddCustomRoutingEndpointsResult& AddCustomRoutingEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EndpointDescriptions"))
  {
    Aws::Utils::Array<JsonView> endpointDescriptionsJsonList = jsonValue.GetArray("EndpointDescriptions");
    for(unsigned endpointDescriptionsIndex = 0; endpointDescriptionsIndex < endpointDescriptionsJsonList.GetLength(); ++endpointDescriptionsIndex)
    {
      m_endpointDescriptions.push_back(endpointDescriptionsJsonList[endpointDescriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("EndpointGroupArn"))
  {
    m_endpointGroupArn = jsonValue.GetString("EndpointGroupArn");

  }



  return *this;
}
