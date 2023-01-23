/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ReplaceTopicRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReplaceTopicRuleRequest::ReplaceTopicRuleRequest() : 
    m_ruleNameHasBeenSet(false),
    m_topicRulePayloadHasBeenSet(false)
{
}

Aws::String ReplaceTopicRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_topicRulePayloadHasBeenSet)
  {
   payload = m_topicRulePayload.Jsonize();
  }

  return payload.View().WriteReadable();
}




