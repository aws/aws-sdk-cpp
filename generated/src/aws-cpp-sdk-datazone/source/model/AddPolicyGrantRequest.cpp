/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AddPolicyGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddPolicyGrantRequest::AddPolicyGrantRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_detailHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_entityIdentifierHasBeenSet(false),
    m_entityType(TargetEntityType::NOT_SET),
    m_entityTypeHasBeenSet(false),
    m_policyType(ManagedPolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_principalHasBeenSet(false)
{
}

Aws::String AddPolicyGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_detailHasBeenSet)
  {
   payload.WithObject("detail", m_detail.Jsonize());

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




