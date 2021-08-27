/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SegmentDimensions.h>
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

SegmentDimensions::SegmentDimensions() : 
    m_attributesHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_demographicHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_userAttributesHasBeenSet(false)
{
}

SegmentDimensions::SegmentDimensions(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_demographicHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_userAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentDimensions& SegmentDimensions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsObject();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Behavior"))
  {
    m_behavior = jsonValue.GetObject("Behavior");

    m_behaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Demographic"))
  {
    m_demographic = jsonValue.GetObject("Demographic");

    m_demographicHasBeenSet = true;
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
      m_metrics[metricsItem.first] = metricsItem.second.AsObject();
    }
    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserAttributes"))
  {
    Aws::Map<Aws::String, JsonView> userAttributesJsonMap = jsonValue.GetObject("UserAttributes").GetAllObjects();
    for(auto& userAttributesItem : userAttributesJsonMap)
    {
      m_userAttributes[userAttributesItem.first] = userAttributesItem.second.AsObject();
    }
    m_userAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentDimensions::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithObject(attributesItem.first, attributesItem.second.Jsonize());
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_behaviorHasBeenSet)
  {
   payload.WithObject("Behavior", m_behavior.Jsonize());

  }

  if(m_demographicHasBeenSet)
  {
   payload.WithObject("Demographic", m_demographic.Jsonize());

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
     metricsJsonMap.WithObject(metricsItem.first, metricsItem.second.Jsonize());
   }
   payload.WithObject("Metrics", std::move(metricsJsonMap));

  }

  if(m_userAttributesHasBeenSet)
  {
   JsonValue userAttributesJsonMap;
   for(auto& userAttributesItem : m_userAttributes)
   {
     userAttributesJsonMap.WithObject(userAttributesItem.first, userAttributesItem.second.Jsonize());
   }
   payload.WithObject("UserAttributes", std::move(userAttributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
