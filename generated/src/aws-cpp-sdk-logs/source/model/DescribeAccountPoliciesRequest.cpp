/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeAccountPoliciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAccountPoliciesRequest::DescribeAccountPoliciesRequest() : 
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_accountIdentifiersHasBeenSet(false)
{
}

Aws::String DescribeAccountPoliciesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("policyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_accountIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdentifiersJsonList(m_accountIdentifiers.size());
   for(unsigned accountIdentifiersIndex = 0; accountIdentifiersIndex < accountIdentifiersJsonList.GetLength(); ++accountIdentifiersIndex)
   {
     accountIdentifiersJsonList[accountIdentifiersIndex].AsString(m_accountIdentifiers[accountIdentifiersIndex]);
   }
   payload.WithArray("accountIdentifiers", std::move(accountIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAccountPoliciesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DescribeAccountPolicies"));
  return headers;

}




