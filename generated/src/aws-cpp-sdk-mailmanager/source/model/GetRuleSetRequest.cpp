/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetRuleSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRuleSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleSetIdHasBeenSet)
  {
   payload.WithString("RuleSetId", m_ruleSetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRuleSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.GetRuleSet"));
  return headers;

}




