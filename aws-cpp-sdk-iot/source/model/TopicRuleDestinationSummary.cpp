/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TopicRuleDestinationSummary.h>
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

TopicRuleDestinationSummary::TopicRuleDestinationSummary() : 
    m_arnHasBeenSet(false),
    m_status(TopicRuleDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_httpUrlSummaryHasBeenSet(false)
{
}

TopicRuleDestinationSummary::TopicRuleDestinationSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_status(TopicRuleDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_httpUrlSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRuleDestinationSummary& TopicRuleDestinationSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("httpUrlSummary"))
  {
    m_httpUrlSummary = jsonValue.GetObject("httpUrlSummary");

    m_httpUrlSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRuleDestinationSummary::Jsonize() const
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

  if(m_httpUrlSummaryHasBeenSet)
  {
   payload.WithObject("httpUrlSummary", m_httpUrlSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
