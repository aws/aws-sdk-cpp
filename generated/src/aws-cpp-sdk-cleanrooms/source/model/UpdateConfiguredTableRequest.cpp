/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/UpdateConfiguredTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfiguredTableRequest::UpdateConfiguredTableRequest() : 
    m_configuredTableIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_analysisMethod(AnalysisMethod::NOT_SET),
    m_analysisMethodHasBeenSet(false),
    m_selectedAnalysisMethodsHasBeenSet(false)
{
}

Aws::String UpdateConfiguredTableRequest::SerializePayload() const
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

  if(m_analysisMethodHasBeenSet)
  {
   payload.WithString("analysisMethod", AnalysisMethodMapper::GetNameForAnalysisMethod(m_analysisMethod));
  }

  if(m_selectedAnalysisMethodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedAnalysisMethodsJsonList(m_selectedAnalysisMethods.size());
   for(unsigned selectedAnalysisMethodsIndex = 0; selectedAnalysisMethodsIndex < selectedAnalysisMethodsJsonList.GetLength(); ++selectedAnalysisMethodsIndex)
   {
     selectedAnalysisMethodsJsonList[selectedAnalysisMethodsIndex].AsString(SelectedAnalysisMethodMapper::GetNameForSelectedAnalysisMethod(m_selectedAnalysisMethods[selectedAnalysisMethodsIndex]));
   }
   payload.WithArray("selectedAnalysisMethods", std::move(selectedAnalysisMethodsJsonList));

  }

  return payload.View().WriteReadable();
}




