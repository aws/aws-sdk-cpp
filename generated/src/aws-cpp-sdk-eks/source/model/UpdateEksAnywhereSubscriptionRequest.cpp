/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateEksAnywhereSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEksAnywhereSubscriptionRequest::UpdateEksAnywhereSubscriptionRequest() : 
    m_idHasBeenSet(false),
    m_autoRenew(false),
    m_autoRenewHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String UpdateEksAnywhereSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoRenewHasBeenSet)
  {
   payload.WithBool("autoRenew", m_autoRenew);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




