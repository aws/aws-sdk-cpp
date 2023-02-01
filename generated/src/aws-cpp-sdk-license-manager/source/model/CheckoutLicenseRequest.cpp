/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CheckoutLicenseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CheckoutLicenseRequest::CheckoutLicenseRequest() : 
    m_productSKUHasBeenSet(false),
    m_checkoutType(CheckoutType::NOT_SET),
    m_checkoutTypeHasBeenSet(false),
    m_keyFingerprintHasBeenSet(false),
    m_entitlementsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_beneficiaryHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

Aws::String CheckoutLicenseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productSKUHasBeenSet)
  {
   payload.WithString("ProductSKU", m_productSKU);

  }

  if(m_checkoutTypeHasBeenSet)
  {
   payload.WithString("CheckoutType", CheckoutTypeMapper::GetNameForCheckoutType(m_checkoutType));
  }

  if(m_keyFingerprintHasBeenSet)
  {
   payload.WithString("KeyFingerprint", m_keyFingerprint);

  }

  if(m_entitlementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitlementsJsonList(m_entitlements.size());
   for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
   {
     entitlementsJsonList[entitlementsIndex].AsObject(m_entitlements[entitlementsIndex].Jsonize());
   }
   payload.WithArray("Entitlements", std::move(entitlementsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_beneficiaryHasBeenSet)
  {
   payload.WithString("Beneficiary", m_beneficiary);

  }

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CheckoutLicenseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CheckoutLicense"));
  return headers;

}




