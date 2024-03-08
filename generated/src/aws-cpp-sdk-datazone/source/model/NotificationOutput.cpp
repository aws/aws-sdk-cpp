/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/NotificationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

NotificationOutput::NotificationOutput() : 
    m_actionLinkHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_status(TaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_type(NotificationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

NotificationOutput::NotificationOutput(JsonView jsonValue) : 
    m_actionLinkHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_status(TaskStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_type(NotificationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationOutput& NotificationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionLink"))
  {
    m_actionLink = jsonValue.GetString("actionLink");

    m_actionLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainIdentifier"))
  {
    m_domainIdentifier = jsonValue.GetString("domainIdentifier");

    m_domainIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("lastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topic"))
  {
    m_topic = jsonValue.GetObject("topic");

    m_topicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = NotificationTypeMapper::GetNotificationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_actionLinkHasBeenSet)
  {
   payload.WithString("actionLink", m_actionLink);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("creationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_domainIdentifierHasBeenSet)
  {
   payload.WithString("domainIdentifier", m_domainIdentifier);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("metadata", std::move(metadataJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TaskStatusMapper::GetNameForTaskStatus(m_status));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_topicHasBeenSet)
  {
   payload.WithObject("topic", m_topic.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", NotificationTypeMapper::GetNameForNotificationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
