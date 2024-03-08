/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CheckAccessNotGrantedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CheckAccessNotGrantedRequest::CheckAccessNotGrantedRequest() : 
    m_policyDocumentHasBeenSet(false),
    m_accessHasBeenSet(false),
    m_policyType(AccessCheckPolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
}

Aws::String CheckAccessNotGrantedRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  if(m_accessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessJsonList(m_access.size());
   for(unsigned accessIndex = 0; accessIndex < accessJsonList.GetLength(); ++accessIndex)
   {
     accessJsonList[accessIndex].AsObject(m_access[accessIndex].Jsonize());
   }
   payload.WithArray("access", std::move(accessJsonList));

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("policyType", AccessCheckPolicyTypeMapper::GetNameForAccessCheckPolicyType(m_policyType));
  }

  return payload.View().WriteReadable();
}




