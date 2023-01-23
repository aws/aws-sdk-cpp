/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DeleteRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRuleRequest::DeleteRuleRequest() : 
    m_ruleHasBeenSet(false)
{
}

Aws::String DeleteRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleHasBeenSet)
  {
   payload.WithObject("rule", m_rule.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.DeleteRule"));
  return headers;

}




