/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Queue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Queue::Queue() : 
    m_nameHasBeenSet(false),
    m_queueArnHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_outboundCallerConfigHasBeenSet(false),
    m_hoursOfOperationIdHasBeenSet(false),
    m_maxContacts(0),
    m_maxContactsHasBeenSet(false),
    m_status(QueueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedRegionHasBeenSet(false)
{
}

Queue::Queue(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_queueArnHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_outboundCallerConfigHasBeenSet(false),
    m_hoursOfOperationIdHasBeenSet(false),
    m_maxContacts(0),
    m_maxContactsHasBeenSet(false),
    m_status(QueueStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedRegionHasBeenSet(false)
{
  *this = jsonValue;
}

Queue& Queue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueArn"))
  {
    m_queueArn = jsonValue.GetString("QueueArn");

    m_queueArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueId"))
  {
    m_queueId = jsonValue.GetString("QueueId");

    m_queueIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundCallerConfig"))
  {
    m_outboundCallerConfig = jsonValue.GetObject("OutboundCallerConfig");

    m_outboundCallerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HoursOfOperationId"))
  {
    m_hoursOfOperationId = jsonValue.GetString("HoursOfOperationId");

    m_hoursOfOperationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxContacts"))
  {
    m_maxContacts = jsonValue.GetInteger("MaxContacts");

    m_maxContactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = QueueStatusMapper::GetQueueStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedRegion"))
  {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");

    m_lastModifiedRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue Queue::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_queueArnHasBeenSet)
  {
   payload.WithString("QueueArn", m_queueArn);

  }

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("QueueId", m_queueId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_outboundCallerConfigHasBeenSet)
  {
   payload.WithObject("OutboundCallerConfig", m_outboundCallerConfig.Jsonize());

  }

  if(m_hoursOfOperationIdHasBeenSet)
  {
   payload.WithString("HoursOfOperationId", m_hoursOfOperationId);

  }

  if(m_maxContactsHasBeenSet)
  {
   payload.WithInteger("MaxContacts", m_maxContacts);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", QueueStatusMapper::GetNameForQueueStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedRegionHasBeenSet)
  {
   payload.WithString("LastModifiedRegion", m_lastModifiedRegion);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
