/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/SendCommandRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendCommandRequest::SendCommandRequest() : 
    m_instanceIdsHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_documentHashHasBeenSet(false),
    m_documentHashType(DocumentHashType::NOT_SET),
    m_documentHashTypeHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_outputS3RegionHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_outputS3KeyPrefixHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_cloudWatchOutputConfigHasBeenSet(false),
    m_alarmConfigurationHasBeenSet(false)
{
}

Aws::String SendCommandRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_documentHashHasBeenSet)
  {
   payload.WithString("DocumentHash", m_documentHash);

  }

  if(m_documentHashTypeHasBeenSet)
  {
   payload.WithString("DocumentHashType", DocumentHashTypeMapper::GetNameForDocumentHashType(m_documentHashType));
  }

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutSeconds", m_timeoutSeconds);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> parameterValueListJsonList(parametersItem.second.size());
     for(unsigned parameterValueListIndex = 0; parameterValueListIndex < parameterValueListJsonList.GetLength(); ++parameterValueListIndex)
     {
       parameterValueListJsonList[parameterValueListIndex].AsString(parametersItem.second[parameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(parameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_outputS3RegionHasBeenSet)
  {
   payload.WithString("OutputS3Region", m_outputS3Region);

  }

  if(m_outputS3BucketNameHasBeenSet)
  {
   payload.WithString("OutputS3BucketName", m_outputS3BucketName);

  }

  if(m_outputS3KeyPrefixHasBeenSet)
  {
   payload.WithString("OutputS3KeyPrefix", m_outputS3KeyPrefix);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithString("MaxConcurrency", m_maxConcurrency);

  }

  if(m_maxErrorsHasBeenSet)
  {
   payload.WithString("MaxErrors", m_maxErrors);

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_notificationConfigHasBeenSet)
  {
   payload.WithObject("NotificationConfig", m_notificationConfig.Jsonize());

  }

  if(m_cloudWatchOutputConfigHasBeenSet)
  {
   payload.WithObject("CloudWatchOutputConfig", m_cloudWatchOutputConfig.Jsonize());

  }

  if(m_alarmConfigurationHasBeenSet)
  {
   payload.WithObject("AlarmConfiguration", m_alarmConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendCommandRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.SendCommand"));
  return headers;

}




