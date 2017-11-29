/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_jobIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_documentSourceHasBeenSet(false),
    m_documentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_presignedUrlConfigHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_jobExecutionsRolloutConfigHasBeenSet(false),
    m_documentParametersHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_documentSourceHasBeenSet)
  {
   payload.WithString("documentSource", m_documentSource);

  }

  if(m_documentHasBeenSet)
  {
   payload.WithString("document", m_document);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_presignedUrlConfigHasBeenSet)
  {
   payload.WithObject("presignedUrlConfig", m_presignedUrlConfig.Jsonize());

  }

  if(m_targetSelectionHasBeenSet)
  {
   payload.WithString("targetSelection", TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection));
  }

  if(m_jobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRolloutConfig", m_jobExecutionsRolloutConfig.Jsonize());

  }

  if(m_documentParametersHasBeenSet)
  {
   JsonValue documentParametersJsonMap;
   for(auto& documentParametersItem : m_documentParameters)
   {
     documentParametersJsonMap.WithString(documentParametersItem.first, documentParametersItem.second);
   }
   payload.WithObject("documentParameters", std::move(documentParametersJsonMap));

  }

  return payload.WriteReadable();
}




