/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CheckoutBorrowLicenseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CheckoutBorrowLicenseRequest::CheckoutBorrowLicenseRequest() : 
    m_licenseArnHasBeenSet(false),
    m_entitlementsHasBeenSet(false),
    m_digitalSignatureMethod(DigitalSignatureMethod::NOT_SET),
    m_digitalSignatureMethodHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_checkoutMetadataHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CheckoutBorrowLicenseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseArnHasBeenSet)
  {
   payload.WithString("LicenseArn", m_licenseArn);

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

  if(m_digitalSignatureMethodHasBeenSet)
  {
   payload.WithString("DigitalSignatureMethod", DigitalSignatureMethodMapper::GetNameForDigitalSignatureMethod(m_digitalSignatureMethod));
  }

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  if(m_checkoutMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> checkoutMetadataJsonList(m_checkoutMetadata.size());
   for(unsigned checkoutMetadataIndex = 0; checkoutMetadataIndex < checkoutMetadataJsonList.GetLength(); ++checkoutMetadataIndex)
   {
     checkoutMetadataJsonList[checkoutMetadataIndex].AsObject(m_checkoutMetadata[checkoutMetadataIndex].Jsonize());
   }
   payload.WithArray("CheckoutMetadata", std::move(checkoutMetadataJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CheckoutBorrowLicenseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CheckoutBorrowLicense"));
  return headers;

}




