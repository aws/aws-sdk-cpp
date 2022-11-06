/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/CreateGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGrantRequest::CreateGrantRequest() : 
    m_keyIdHasBeenSet(false),
    m_granteePrincipalHasBeenSet(false),
    m_retiringPrincipalHasBeenSet(false),
    m_operationsHasBeenSet(false),
    m_constraintsHasBeenSet(false),
    m_grantTokensHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String CreateGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_granteePrincipalHasBeenSet)
  {
   payload.WithString("GranteePrincipal", m_granteePrincipal);

  }

  if(m_retiringPrincipalHasBeenSet)
  {
   payload.WithString("RetiringPrincipal", m_retiringPrincipal);

  }

  if(m_operationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
   for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
   {
     operationsJsonList[operationsIndex].AsString(GrantOperationMapper::GetNameForGrantOperation(m_operations[operationsIndex]));
   }
   payload.WithArray("Operations", std::move(operationsJsonList));

  }

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("Constraints", m_constraints.Jsonize());

  }

  if(m_grantTokensHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantTokensJsonList(m_grantTokens.size());
   for(unsigned grantTokensIndex = 0; grantTokensIndex < grantTokensJsonList.GetLength(); ++grantTokensIndex)
   {
     grantTokensJsonList[grantTokensIndex].AsString(m_grantTokens[grantTokensIndex]);
   }
   payload.WithArray("GrantTokens", std::move(grantTokensJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGrantRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.CreateGrant"));
  return headers;

}




