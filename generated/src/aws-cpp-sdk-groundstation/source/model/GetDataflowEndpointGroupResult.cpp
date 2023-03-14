/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetDataflowEndpointGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataflowEndpointGroupResult::GetDataflowEndpointGroupResult() : 
    m_contactPostPassDurationSeconds(0),
    m_contactPrePassDurationSeconds(0)
{
}

GetDataflowEndpointGroupResult::GetDataflowEndpointGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_contactPostPassDurationSeconds(0),
    m_contactPrePassDurationSeconds(0)
{
  *this = result;
}

GetDataflowEndpointGroupResult& GetDataflowEndpointGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contactPostPassDurationSeconds"))
  {
    m_contactPostPassDurationSeconds = jsonValue.GetInteger("contactPostPassDurationSeconds");

  }

  if(jsonValue.ValueExists("contactPrePassDurationSeconds"))
  {
    m_contactPrePassDurationSeconds = jsonValue.GetInteger("contactPrePassDurationSeconds");

  }

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
    Aws::Utils::Array<JsonView> endpointsDetailsJsonList = jsonValue.GetArray("endpointsDetails");
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


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
