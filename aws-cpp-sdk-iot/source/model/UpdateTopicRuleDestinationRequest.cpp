/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateTopicRuleDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTopicRuleDestinationRequest::UpdateTopicRuleDestinationRequest() : 
    m_arnHasBeenSet(false),
    m_status(TopicRuleDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateTopicRuleDestinationRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




