/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateSubscriptionGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSubscriptionGrantRequest::CreateSubscriptionGrantRequest() : 
    m_assetTargetNamesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_grantedEntityHasBeenSet(false),
    m_subscriptionTargetIdentifierHasBeenSet(false)
{
}

Aws::String CreateSubscriptionGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetTargetNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetTargetNamesJsonList(m_assetTargetNames.size());
   for(unsigned assetTargetNamesIndex = 0; assetTargetNamesIndex < assetTargetNamesJsonList.GetLength(); ++assetTargetNamesIndex)
   {
     assetTargetNamesJsonList[assetTargetNamesIndex].AsObject(m_assetTargetNames[assetTargetNamesIndex].Jsonize());
   }
   payload.WithArray("assetTargetNames", std::move(assetTargetNamesJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_environmentIdentifierHasBeenSet)
  {
   payload.WithString("environmentIdentifier", m_environmentIdentifier);

  }

  if(m_grantedEntityHasBeenSet)
  {
   payload.WithObject("grantedEntity", m_grantedEntity.Jsonize());

  }

  if(m_subscriptionTargetIdentifierHasBeenSet)
  {
   payload.WithString("subscriptionTargetIdentifier", m_subscriptionTargetIdentifier);

  }

  return payload.View().WriteReadable();
}




