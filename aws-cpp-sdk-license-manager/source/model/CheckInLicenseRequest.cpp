/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CheckInLicenseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CheckInLicenseRequest::CheckInLicenseRequest() : 
    m_licenseConsumptionTokenHasBeenSet(false),
    m_beneficiaryHasBeenSet(false)
{
}

Aws::String CheckInLicenseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseConsumptionTokenHasBeenSet)
  {
   payload.WithString("LicenseConsumptionToken", m_licenseConsumptionToken);

  }

  if(m_beneficiaryHasBeenSet)
  {
   payload.WithString("Beneficiary", m_beneficiary);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CheckInLicenseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CheckInLicense"));
  return headers;

}




