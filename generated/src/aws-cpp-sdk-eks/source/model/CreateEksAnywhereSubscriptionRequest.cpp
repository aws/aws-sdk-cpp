/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/CreateEksAnywhereSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateEksAnywhereSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_termHasBeenSet)
  {
   payload.WithObject("term", m_term.Jsonize());

  }

  if(m_licenseQuantityHasBeenSet)
  {
   payload.WithInteger("licenseQuantity", m_licenseQuantity);

  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("licenseType", EksAnywhereSubscriptionLicenseTypeMapper::GetNameForEksAnywhereSubscriptionLicenseType(m_licenseType));
  }

  if(m_autoRenewHasBeenSet)
  {
   payload.WithBool("autoRenew", m_autoRenew);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




