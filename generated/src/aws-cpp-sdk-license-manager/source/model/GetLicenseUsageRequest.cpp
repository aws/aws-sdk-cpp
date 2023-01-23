/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetLicenseUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLicenseUsageRequest::GetLicenseUsageRequest() : 
    m_licenseArnHasBeenSet(false)
{
}

Aws::String GetLicenseUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseArnHasBeenSet)
  {
   payload.WithString("LicenseArn", m_licenseArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLicenseUsageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.GetLicenseUsage"));
  return headers;

}




