/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SendNotificationActionDefinition.h>
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

SendNotificationActionDefinition::SendNotificationActionDefinition() : 
    m_deliveryMethod(NotificationDeliveryType::NOT_SET),
    m_deliveryMethodHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentType(NotificationContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_recipientHasBeenSet(false)
{
}

SendNotificationActionDefinition::SendNotificationActionDefinition(JsonView jsonValue) : 
    m_deliveryMethod(NotificationDeliveryType::NOT_SET),
    m_deliveryMethodHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentType(NotificationContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_recipientHasBeenSet(false)
{
  *this = jsonValue;
}

SendNotificationActionDefinition& SendNotificationActionDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryMethod"))
  {
    m_deliveryMethod = NotificationDeliveryTypeMapper::GetNotificationDeliveryTypeForName(jsonValue.GetString("DeliveryMethod"));

    m_deliveryMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = NotificationContentTypeMapper::GetNotificationContentTypeForName(jsonValue.GetString("ContentType"));

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recipient"))
  {
    m_recipient = jsonValue.GetObject("Recipient");

    m_recipientHasBeenSet = true;
  }

  return *this;
}

JsonValue SendNotificationActionDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryMethodHasBeenSet)
  {
   payload.WithString("DeliveryMethod", NotificationDeliveryTypeMapper::GetNameForNotificationDeliveryType(m_deliveryMethod));
  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", NotificationContentTypeMapper::GetNameForNotificationContentType(m_contentType));
  }

  if(m_recipientHasBeenSet)
  {
   payload.WithObject("Recipient", m_recipient.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
