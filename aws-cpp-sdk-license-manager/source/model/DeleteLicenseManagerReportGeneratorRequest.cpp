/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/DeleteLicenseManagerReportGeneratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLicenseManagerReportGeneratorRequest::DeleteLicenseManagerReportGeneratorRequest() : 
    m_licenseManagerReportGeneratorArnHasBeenSet(false)
{
}

Aws::String DeleteLicenseManagerReportGeneratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseManagerReportGeneratorArnHasBeenSet)
  {
   payload.WithString("LicenseManagerReportGeneratorArn", m_licenseManagerReportGeneratorArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteLicenseManagerReportGeneratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.DeleteLicenseManagerReportGenerator"));
  return headers;

}




