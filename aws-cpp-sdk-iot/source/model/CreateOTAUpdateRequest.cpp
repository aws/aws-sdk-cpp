﻿/*
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

#include <aws/iot/model/CreateOTAUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOTAUpdateRequest::CreateOTAUpdateRequest() : 
    m_otaUpdateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_awsJobExecutionsRolloutConfigHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_additionalParametersHasBeenSet(false)
{
}

Aws::String CreateOTAUpdateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_targetSelectionHasBeenSet)
  {
   payload.WithString("targetSelection", TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection));
  }

  if(m_awsJobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("awsJobExecutionsRolloutConfig", m_awsJobExecutionsRolloutConfig.Jsonize());

  }

  if(m_filesHasBeenSet)
  {
   Array<JsonValue> filesJsonList(m_files.size());
   for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
   {
     filesJsonList[filesIndex].AsObject(m_files[filesIndex].Jsonize());
   }
   payload.WithArray("files", std::move(filesJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_additionalParametersHasBeenSet)
  {
   JsonValue additionalParametersJsonMap;
   for(auto& additionalParametersItem : m_additionalParameters)
   {
     additionalParametersJsonMap.WithString(additionalParametersItem.first, additionalParametersItem.second);
   }
   payload.WithObject("additionalParameters", std::move(additionalParametersJsonMap));

  }

  return payload.View().WriteReadable();
}




