/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateConfiguredTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfiguredTableRequest::CreateConfiguredTableRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tableReferenceHasBeenSet(false),
    m_allowedColumnsHasBeenSet(false),
    m_analysisMethod(AnalysisMethod::NOT_SET),
    m_analysisMethodHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConfiguredTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tableReferenceHasBeenSet)
  {
   payload.WithObject("tableReference", m_tableReference.Jsonize());

  }

  if(m_allowedColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedColumnsJsonList(m_allowedColumns.size());
   for(unsigned allowedColumnsIndex = 0; allowedColumnsIndex < allowedColumnsJsonList.GetLength(); ++allowedColumnsIndex)
   {
     allowedColumnsJsonList[allowedColumnsIndex].AsString(m_allowedColumns[allowedColumnsIndex]);
   }
   payload.WithArray("allowedColumns", std::move(allowedColumnsJsonList));

  }

  if(m_analysisMethodHasBeenSet)
  {
   payload.WithString("analysisMethod", AnalysisMethodMapper::GetNameForAnalysisMethod(m_analysisMethod));
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

  return payload.View().WriteReadable();
}




