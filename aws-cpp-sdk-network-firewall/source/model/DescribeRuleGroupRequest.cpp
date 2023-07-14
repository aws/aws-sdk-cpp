/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DescribeRuleGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRuleGroupRequest::DescribeRuleGroupRequest() : 
    m_ruleGroupNameHasBeenSet(false),
    m_ruleGroupArnHasBeenSet(false),
    m_type(RuleGroupType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String DescribeRuleGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleGroupNameHasBeenSet)
  {
   payload.WithString("RuleGroupName", m_ruleGroupName);

  }

  if(m_ruleGroupArnHasBeenSet)
  {
   payload.WithString("RuleGroupArn", m_ruleGroupArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RuleGroupTypeMapper::GetNameForRuleGroupType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRuleGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "NetworkFirewall_20201112.DescribeRuleGroup"));
  return headers;

}




