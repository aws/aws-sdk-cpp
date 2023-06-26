/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetLicenseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLicenseRequest::GetLicenseRequest() : 
    m_licenseArnHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String GetLicenseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseArnHasBeenSet)
  {
   payload.WithString("LicenseArn", m_licenseArn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLicenseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.GetLicense"));
  return headers;

}




