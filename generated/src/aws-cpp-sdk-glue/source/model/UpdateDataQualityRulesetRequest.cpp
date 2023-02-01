/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateDataQualityRulesetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataQualityRulesetRequest::UpdateDataQualityRulesetRequest() : 
    m_nameHasBeenSet(false),
    m_updatedNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesetHasBeenSet(false)
{
}

Aws::String UpdateDataQualityRulesetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_updatedNameHasBeenSet)
  {
   payload.WithString("UpdatedName", m_updatedName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_rulesetHasBeenSet)
  {
   payload.WithString("Ruleset", m_ruleset);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDataQualityRulesetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateDataQualityRuleset"));
  return headers;

}




