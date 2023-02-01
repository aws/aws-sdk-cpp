/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateDataQualityRulesetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataQualityRulesetRequest::CreateDataQualityRulesetRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_rulesetHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetTableHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreateDataQualityRulesetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_rulesetHasBeenSet)
  {
   payload.WithString("Ruleset", m_ruleset);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_targetTableHasBeenSet)
  {
   payload.WithObject("TargetTable", m_targetTable.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDataQualityRulesetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateDataQualityRuleset"));
  return headers;

}




