/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/Delivery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

Delivery::Delivery() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_deliverySourceNameHasBeenSet(false),
    m_deliveryDestinationArnHasBeenSet(false),
    m_deliveryDestinationType(DeliveryDestinationType::NOT_SET),
    m_deliveryDestinationTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Delivery::Delivery(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_deliverySourceNameHasBeenSet(false),
    m_deliveryDestinationArnHasBeenSet(false),
    m_deliveryDestinationType(DeliveryDestinationType::NOT_SET),
    m_deliveryDestinationTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Delivery& Delivery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deliverySourceName"))
  {
    m_deliverySourceName = jsonValue.GetString("deliverySourceName");

    m_deliverySourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deliveryDestinationArn"))
  {
    m_deliveryDestinationArn = jsonValue.GetString("deliveryDestinationArn");

    m_deliveryDestinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deliveryDestinationType"))
  {
    m_deliveryDestinationType = DeliveryDestinationTypeMapper::GetDeliveryDestinationTypeForName(jsonValue.GetString("deliveryDestinationType"));

    m_deliveryDestinationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Delivery::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_deliverySourceNameHasBeenSet)
  {
   payload.WithString("deliverySourceName", m_deliverySourceName);

  }

  if(m_deliveryDestinationArnHasBeenSet)
  {
   payload.WithString("deliveryDestinationArn", m_deliveryDestinationArn);

  }

  if(m_deliveryDestinationTypeHasBeenSet)
  {
   payload.WithString("deliveryDestinationType", DeliveryDestinationTypeMapper::GetNameForDeliveryDestinationType(m_deliveryDestinationType));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
