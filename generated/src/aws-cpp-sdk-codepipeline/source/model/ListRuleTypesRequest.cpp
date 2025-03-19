/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ListRuleTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRuleTypesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleOwnerFilterHasBeenSet)
  {
   payload.WithString("ruleOwnerFilter", RuleOwnerMapper::GetNameForRuleOwner(m_ruleOwnerFilter));
  }

  if(m_regionFilterHasBeenSet)
  {
   payload.WithString("regionFilter", m_regionFilter);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRuleTypesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.ListRuleTypes"));
  return headers;

}




