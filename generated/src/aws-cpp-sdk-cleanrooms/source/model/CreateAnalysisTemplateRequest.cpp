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

CreateAnalysisTemplateRequest::CreateAnalysisTemplateRequest() : 
    m_descriptionHasBeenSet(false),
    m_membershipIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_format(AnalysisFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_analysisParametersHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




