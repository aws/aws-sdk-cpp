/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DeleteMultiplexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteMultiplexResult::DeleteMultiplexResult() : 
    m_pipelinesRunningCount(0),
    m_programCount(0),
    m_state(MultiplexState::NOT_SET)
{
}

DeleteMultiplexResult::DeleteMultiplexResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_pipelinesRunningCount(0),
    m_programCount(0),
    m_state(MultiplexState::NOT_SET)
{
  *this = result;
}

DeleteMultiplexResult& DeleteMultiplexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("availabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("multiplexSettings"))
  {
    m_multiplexSettings = jsonValue.GetObject("multiplexSettings");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("pipelinesRunningCount"))
  {
    m_pipelinesRunningCount = jsonValue.GetInteger("pipelinesRunningCount");

  }

  if(jsonValue.ValueExists("programCount"))
  {
    m_programCount = jsonValue.GetInteger("programCount");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = MultiplexStateMapper::GetMultiplexStateForName(jsonValue.GetString("state"));

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
