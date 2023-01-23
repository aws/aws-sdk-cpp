/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ListDataflowEndpointGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataflowEndpointGroupsResult::ListDataflowEndpointGroupsResult()
{
}

ListDataflowEndpointGroupsResult::ListDataflowEndpointGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataflowEndpointGroupsResult& ListDataflowEndpointGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataflowEndpointGroupList"))
  {
    Aws::Utils::Array<JsonView> dataflowEndpointGroupListJsonList = jsonValue.GetArray("dataflowEndpointGroupList");
    for(unsigned dataflowEndpointGroupListIndex = 0; dataflowEndpointGroupListIndex < dataflowEndpointGroupListJsonList.GetLength(); ++dataflowEndpointGroupListIndex)
    {
      m_dataflowEndpointGroupList.push_back(dataflowEndpointGroupListJsonList[dataflowEndpointGroupListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
