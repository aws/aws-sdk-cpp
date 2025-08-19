/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateAnalysisTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAnalysisTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", AnalysisFormatMapper::GetNameForAnalysisFormat(m_format));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_analysisParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisParametersJsonList(m_analysisParameters.size());
   for(unsigned analysisParametersIndex = 0; analysisParametersIndex < analysisParametersJsonList.GetLength(); ++analysisParametersIndex)
   {
     analysisParametersJsonList[analysisParametersIndex].AsObject(m_analysisParameters[analysisParametersIndex].Jsonize());
   }
   payload.WithArray("analysisParameters", std::move(analysisParametersJsonList));

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("schema", m_schema.Jsonize());

  }

  if(m_errorMessageConfigurationHasBeenSet)
  {
   payload.WithObject("errorMessageConfiguration", m_errorMessageConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




