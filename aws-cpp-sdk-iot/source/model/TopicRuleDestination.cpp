/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TopicRuleDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TopicRuleDestination::TopicRuleDestination() : 
    m_arnHasBeenSet(false),
    m_status(TopicRuleDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_httpUrlPropertiesHasBeenSet(false)
{
}

TopicRuleDestination::TopicRuleDestination(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_status(TopicRuleDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_httpUrlPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRuleDestination& TopicRuleDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TopicRuleDestinationStatusMapper::GetTopicRuleDestinationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpUrlProperties"))
  {
    m_httpUrlProperties = jsonValue.GetObject("httpUrlProperties");

    m_httpUrlPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRuleDestination::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TopicRuleDestinationStatusMapper::GetNameForTopicRuleDestinationStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_httpUrlPropertiesHasBeenSet)
  {
   payload.WithObject("httpUrlProperties", m_httpUrlProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
