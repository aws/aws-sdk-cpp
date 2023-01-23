/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateTopicRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTopicRuleRequest::CreateTopicRuleRequest() : 
    m_ruleNameHasBeenSet(false),
    m_topicRulePayloadHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTopicRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_topicRulePayloadHasBeenSet)
  {
   payload = m_topicRulePayload.Jsonize();
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTopicRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_tagsHasBeenSet)
  {
    ss << m_tags;
    headers.emplace("x-amz-tagging",  ss.str());
    ss.str("");
  }

  return headers;

}




