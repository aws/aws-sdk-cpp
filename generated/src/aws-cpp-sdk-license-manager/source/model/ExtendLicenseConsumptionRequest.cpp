/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ExtendLicenseConsumptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExtendLicenseConsumptionRequest::ExtendLicenseConsumptionRequest() : 
    m_licenseConsumptionTokenHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String ExtendLicenseConsumptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseConsumptionTokenHasBeenSet)
  {
   payload.WithString("LicenseConsumptionToken", m_licenseConsumptionToken);

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExtendLicenseConsumptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.ExtendLicenseConsumption"));
  return headers;

}




