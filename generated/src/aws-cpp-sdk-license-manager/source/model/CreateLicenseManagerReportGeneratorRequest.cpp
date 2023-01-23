/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateLicenseManagerReportGeneratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLicenseManagerReportGeneratorRequest::CreateLicenseManagerReportGeneratorRequest() : 
    m_reportGeneratorNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_reportContextHasBeenSet(false),
    m_reportFrequencyHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLicenseManagerReportGeneratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportGeneratorNameHasBeenSet)
  {
   payload.WithString("ReportGeneratorName", m_reportGeneratorName);

  }

  if(m_typeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typeJsonList(m_type.size());
   for(unsigned typeIndex = 0; typeIndex < typeJsonList.GetLength(); ++typeIndex)
   {
     typeJsonList[typeIndex].AsString(ReportTypeMapper::GetNameForReportType(m_type[typeIndex]));
   }
   payload.WithArray("Type", std::move(typeJsonList));

  }

  if(m_reportContextHasBeenSet)
  {
   payload.WithObject("ReportContext", m_reportContext.Jsonize());

  }

  if(m_reportFrequencyHasBeenSet)
  {
   payload.WithObject("ReportFrequency", m_reportFrequency.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLicenseManagerReportGeneratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CreateLicenseManagerReportGenerator"));
  return headers;

}




