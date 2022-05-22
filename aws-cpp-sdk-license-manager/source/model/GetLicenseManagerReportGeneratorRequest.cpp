/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetLicenseManagerReportGeneratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLicenseManagerReportGeneratorRequest::GetLicenseManagerReportGeneratorRequest() : 
    m_licenseManagerReportGeneratorArnHasBeenSet(false)
{
}

Aws::String GetLicenseManagerReportGeneratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseManagerReportGeneratorArnHasBeenSet)
  {
   payload.WithString("LicenseManagerReportGeneratorArn", m_licenseManagerReportGeneratorArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLicenseManagerReportGeneratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.GetLicenseManagerReportGenerator"));
  return headers;

}




