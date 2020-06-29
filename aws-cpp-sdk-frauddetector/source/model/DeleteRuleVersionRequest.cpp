/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DeleteRuleVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRuleVersionRequest::DeleteRuleVersionRequest() : 
    m_detectorIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleVersionHasBeenSet(false)
{
}

Aws::String DeleteRuleVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  if(m_ruleVersionHasBeenSet)
  {
   payload.WithString("ruleVersion", m_ruleVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRuleVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.DeleteRuleVersion"));
  return headers;

}




