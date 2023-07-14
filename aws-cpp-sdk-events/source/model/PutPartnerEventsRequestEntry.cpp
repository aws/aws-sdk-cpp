﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/PutPartnerEventsRequestEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

PutPartnerEventsRequestEntry::PutPartnerEventsRequestEntry() : 
    m_timeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_detailTypeHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

PutPartnerEventsRequestEntry::PutPartnerEventsRequestEntry(JsonView jsonValue) : 
    m_timeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_detailTypeHasBeenSet(false),
    m_detailHasBeenSet(false)
{
  *this = jsonValue;
}

PutPartnerEventsRequestEntry& PutPartnerEventsRequestEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetDouble("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetailType"))
  {
    m_detailType = jsonValue.GetString("DetailType");

    m_detailTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Detail"))
  {
    m_detail = jsonValue.GetString("Detail");

    m_detailHasBeenSet = true;
  }

  return *this;
}

JsonValue PutPartnerEventsRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_timeHasBeenSet)
  {
   payload.WithDouble("Time", m_time.SecondsWithMSPrecision());
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_resourcesHasBeenSet)
  {
   Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_detailTypeHasBeenSet)
  {
   payload.WithString("DetailType", m_detailType);

  }

  if(m_detailHasBeenSet)
  {
   payload.WithString("Detail", m_detail);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
