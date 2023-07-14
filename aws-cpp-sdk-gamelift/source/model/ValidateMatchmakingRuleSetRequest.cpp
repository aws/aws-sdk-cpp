/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ValidateMatchmakingRuleSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ValidateMatchmakingRuleSetRequest::ValidateMatchmakingRuleSetRequest() : 
    m_ruleSetBodyHasBeenSet(false)
{
}

Aws::String ValidateMatchmakingRuleSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleSetBodyHasBeenSet)
  {
   payload.WithString("RuleSetBody", m_ruleSetBody);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ValidateMatchmakingRuleSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.ValidateMatchmakingRuleSet"));
  return headers;

}




