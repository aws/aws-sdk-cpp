/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/PublicEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

PublicEndpoint::PublicEndpoint() : 
    m_addressHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_channelType(ChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_demographicHasBeenSet(false),
    m_effectiveDateHasBeenSet(false),
    m_endpointStatusHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_optOutHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

PublicEndpoint::PublicEndpoint(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_channelType(ChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_demographicHasBeenSet(false),
    m_effectiveDateHasBeenSet(false),
    m_endpointStatusHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_optOutHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

PublicEndpoint& PublicEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      Aws::Utils::Array<JsonView> listOf__stringJsonList = attributesItem.second.AsArray();
      Aws::Vector<Aws::String> listOf__stringList;
      listOf__stringList.reserve((size_t)listOf__stringJsonList.GetLength());
      for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
      {
        listOf__stringList.push_back(listOf__stringJsonList[listOf__stringIndex].AsString());
      }
      m_attributes[attributesItem.first] = std::move(listOf__stringList);
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelType"))
  {
    m_channelType = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("ChannelType"));

    m_channelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Demographic"))
  {
    m_demographic = jsonValue.GetObject("Demographic");

    m_demographicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveDate"))
  {
    m_effectiveDate = jsonValue.GetString("EffectiveDate");

    m_effectiveDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointStatus"))
  {
    m_endpointStatus = jsonValue.GetString("EndpointStatus");

    m_endpointStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetObject("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Map<Aws::String, JsonView> metricsJsonMap = jsonValue.GetObject("Metrics").GetAllObjects();
    for(auto& metricsItem : metricsJsonMap)
    {
      m_metrics[metricsItem.first] = metricsItem.second.AsDouble();
    }
    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptOut"))
  {
    m_optOut = jsonValue.GetString("OptOut");

    m_optOutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetObject("User");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     Aws::Utils::Array<JsonValue> listOf__stringJsonList(attributesItem.second.size());
     for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
     {
       listOf__stringJsonList[listOf__stringIndex].AsString(attributesItem.second[listOf__stringIndex]);
     }
     attributesJsonMap.WithArray(attributesItem.first, std::move(listOf__stringJsonList));
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_channelTypeHasBeenSet)
  {
   payload.WithString("ChannelType", ChannelTypeMapper::GetNameForChannelType(m_channelType));
  }

  if(m_demographicHasBeenSet)
  {
   payload.WithObject("Demographic", m_demographic.Jsonize());

  }

  if(m_effectiveDateHasBeenSet)
  {
   payload.WithString("EffectiveDate", m_effectiveDate);

  }

  if(m_endpointStatusHasBeenSet)
  {
   payload.WithString("EndpointStatus", m_endpointStatus);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  if(m_metricsHasBeenSet)
  {
   JsonValue metricsJsonMap;
   for(auto& metricsItem : m_metrics)
   {
     metricsJsonMap.WithDouble(metricsItem.first, metricsItem.second);
   }
   payload.WithObject("Metrics", std::move(metricsJsonMap));

  }

  if(m_optOutHasBeenSet)
  {
   payload.WithString("OptOut", m_optOut);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("User", m_user.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
