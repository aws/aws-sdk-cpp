/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RemovePolicyGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RemovePolicyGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_grantIdentifierHasBeenSet)
  {
   payload.WithString("grantIdentifier", m_grantIdentifier);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("policyType", ManagedPolicyTypeMapper::GetNameForManagedPolicyType(m_policyType));
  }

  if(m_principalHasBeenSet)
  {
   payload.WithObject("principal", m_principal.Jsonize());

  }

  return payload.View().WriteReadable();
}




