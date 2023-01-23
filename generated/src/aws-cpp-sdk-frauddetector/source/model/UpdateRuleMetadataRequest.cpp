/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/UpdateRuleMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRuleMetadataRequest::UpdateRuleMetadataRequest() : 
    m_ruleHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateRuleMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleHasBeenSet)
  {
   payload.WithObject("rule", m_rule.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRuleMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateRuleMetadata"));
  return headers;

}




