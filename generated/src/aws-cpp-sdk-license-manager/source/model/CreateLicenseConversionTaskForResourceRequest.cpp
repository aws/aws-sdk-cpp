/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateLicenseConversionTaskForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLicenseConversionTaskForResourceRequest::CreateLicenseConversionTaskForResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_sourceLicenseContextHasBeenSet(false),
    m_destinationLicenseContextHasBeenSet(false)
{
}

Aws::String CreateLicenseConversionTaskForResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_sourceLicenseContextHasBeenSet)
  {
   payload.WithObject("SourceLicenseContext", m_sourceLicenseContext.Jsonize());

  }

  if(m_destinationLicenseContextHasBeenSet)
  {
   payload.WithObject("DestinationLicenseContext", m_destinationLicenseContext.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLicenseConversionTaskForResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CreateLicenseConversionTaskForResource"));
  return headers;

}




