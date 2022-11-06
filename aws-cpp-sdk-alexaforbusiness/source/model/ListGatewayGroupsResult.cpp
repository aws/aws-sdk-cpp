/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListGatewayGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGatewayGroupsResult::ListGatewayGroupsResult()
{
}

ListGatewayGroupsResult::ListGatewayGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGatewayGroupsResult& ListGatewayGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayGroups"))
  {
    Aws::Utils::Array<JsonView> gatewayGroupsJsonList = jsonValue.GetArray("GatewayGroups");
    for(unsigned gatewayGroupsIndex = 0; gatewayGroupsIndex < gatewayGroupsJsonList.GetLength(); ++gatewayGroupsIndex)
    {
      m_gatewayGroups.push_back(gatewayGroupsJsonList[gatewayGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
