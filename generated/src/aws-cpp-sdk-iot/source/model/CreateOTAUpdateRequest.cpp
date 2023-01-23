/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_protocolsHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_awsJobExecutionsRolloutConfigHasBeenSet(false),
    m_awsJobPresignedUrlConfigHasBeenSet(false),
    m_awsJobAbortConfigHasBeenSet(false),
    m_awsJobTimeoutConfigHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_additionalParametersHasBeenSet(false),
    m_tagsHasBeenSet(false)
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
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("protocols", std::move(protocolsJsonList));

  }

  if(m_targetSelectionHasBeenSet)
  {
   payload.WithString("targetSelection", TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection));
  }

  if(m_awsJobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("awsJobExecutionsRolloutConfig", m_awsJobExecutionsRolloutConfig.Jsonize());

  }

  if(m_awsJobPresignedUrlConfigHasBeenSet)
  {
   payload.WithObject("awsJobPresignedUrlConfig", m_awsJobPresignedUrlConfig.Jsonize());

  }

  if(m_awsJobAbortConfigHasBeenSet)
  {
   payload.WithObject("awsJobAbortConfig", m_awsJobAbortConfig.Jsonize());

  }

  if(m_awsJobTimeoutConfigHasBeenSet)
  {
   payload.WithObject("awsJobTimeoutConfig", m_awsJobTimeoutConfig.Jsonize());

  }

  if(m_filesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filesJsonList(m_files.size());
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




