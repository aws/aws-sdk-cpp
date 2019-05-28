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

#include <aws/groundstation/model/GetDataflowEndpointGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataflowEndpointGroupResult::GetDataflowEndpointGroupResult()
{
}

GetDataflowEndpointGroupResult::GetDataflowEndpointGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataflowEndpointGroupResult& GetDataflowEndpointGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dataflowEndpointGroupArn"))
  {
    m_dataflowEndpointGroupArn = jsonValue.GetString("dataflowEndpointGroupArn");

  }

  if(jsonValue.ValueExists("dataflowEndpointGroupId"))
  {
    m_dataflowEndpointGroupId = jsonValue.GetString("dataflowEndpointGroupId");

  }

  if(jsonValue.ValueExists("endpointsDetails"))
  {
    Array<JsonView> endpointsDetailsJsonList = jsonValue.GetArray("endpointsDetails");
    for(unsigned endpointsDetailsIndex = 0; endpointsDetailsIndex < endpointsDetailsJsonList.GetLength(); ++endpointsDetailsIndex)
    {
      m_endpointsDetails.push_back(endpointsDetailsJsonList[endpointsDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
