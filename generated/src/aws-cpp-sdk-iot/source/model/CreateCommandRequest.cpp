/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateCommandRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCommandRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", CommandNamespaceMapper::GetNameForCommandNamespace(m_namespace));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithObject("payload", m_payload.Jsonize());

  }

  if(m_mandatoryParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mandatoryParametersJsonList(m_mandatoryParameters.size());
   for(unsigned mandatoryParametersIndex = 0; mandatoryParametersIndex < mandatoryParametersJsonList.GetLength(); ++mandatoryParametersIndex)
   {
     mandatoryParametersJsonList[mandatoryParametersIndex].AsObject(m_mandatoryParameters[mandatoryParametersIndex].Jsonize());
   }
   payload.WithArray("mandatoryParameters", std::move(mandatoryParametersJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




