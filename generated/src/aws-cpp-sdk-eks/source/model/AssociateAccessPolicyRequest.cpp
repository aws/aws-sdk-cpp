/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AssociateAccessPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateAccessPolicyRequest::AssociateAccessPolicyRequest() : 
    m_clusterNameHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_accessScopeHasBeenSet(false)
{
}

Aws::String AssociateAccessPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_accessScopeHasBeenSet)
  {
   payload.WithObject("accessScope", m_accessScope.Jsonize());

  }

  return payload.View().WriteReadable();
}




