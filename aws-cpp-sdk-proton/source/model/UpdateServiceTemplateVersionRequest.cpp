/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateServiceTemplateVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceTemplateVersionRequest::UpdateServiceTemplateVersionRequest() : 
    m_compatibleEnvironmentTemplatesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_majorVersionHasBeenSet(false),
    m_minorVersionHasBeenSet(false),
    m_status(TemplateVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_supportedComponentSourcesHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

Aws::String UpdateServiceTemplateVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_compatibleEnvironmentTemplatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compatibleEnvironmentTemplatesJsonList(m_compatibleEnvironmentTemplates.size());
   for(unsigned compatibleEnvironmentTemplatesIndex = 0; compatibleEnvironmentTemplatesIndex < compatibleEnvironmentTemplatesJsonList.GetLength(); ++compatibleEnvironmentTemplatesIndex)
   {
     compatibleEnvironmentTemplatesJsonList[compatibleEnvironmentTemplatesIndex].AsObject(m_compatibleEnvironmentTemplates[compatibleEnvironmentTemplatesIndex].Jsonize());
   }
   payload.WithArray("compatibleEnvironmentTemplates", std::move(compatibleEnvironmentTemplatesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_majorVersionHasBeenSet)
  {
   payload.WithString("majorVersion", m_majorVersion);

  }

  if(m_minorVersionHasBeenSet)
  {
   payload.WithString("minorVersion", m_minorVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TemplateVersionStatusMapper::GetNameForTemplateVersionStatus(m_status));
  }

  if(m_supportedComponentSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedComponentSourcesJsonList(m_supportedComponentSources.size());
   for(unsigned supportedComponentSourcesIndex = 0; supportedComponentSourcesIndex < supportedComponentSourcesJsonList.GetLength(); ++supportedComponentSourcesIndex)
   {
     supportedComponentSourcesJsonList[supportedComponentSourcesIndex].AsString(ServiceTemplateSupportedComponentSourceTypeMapper::GetNameForServiceTemplateSupportedComponentSourceType(m_supportedComponentSources[supportedComponentSourcesIndex]));
   }
   payload.WithArray("supportedComponentSources", std::move(supportedComponentSourcesJsonList));

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceTemplateVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.UpdateServiceTemplateVersion"));
  return headers;

}




