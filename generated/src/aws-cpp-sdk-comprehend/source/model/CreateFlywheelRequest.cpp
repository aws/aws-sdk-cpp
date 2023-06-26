/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/CreateFlywheelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFlywheelRequest::CreateFlywheelRequest() : 
    m_flywheelNameHasBeenSet(false),
    m_activeModelArnHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_taskConfigHasBeenSet(false),
    m_modelType(ModelType::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_dataLakeS3UriHasBeenSet(false),
    m_dataSecurityConfigHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFlywheelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flywheelNameHasBeenSet)
  {
   payload.WithString("FlywheelName", m_flywheelName);

  }

  if(m_activeModelArnHasBeenSet)
  {
   payload.WithString("ActiveModelArn", m_activeModelArn);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_taskConfigHasBeenSet)
  {
   payload.WithObject("TaskConfig", m_taskConfig.Jsonize());

  }

  if(m_modelTypeHasBeenSet)
  {
   payload.WithString("ModelType", ModelTypeMapper::GetNameForModelType(m_modelType));
  }

  if(m_dataLakeS3UriHasBeenSet)
  {
   payload.WithString("DataLakeS3Uri", m_dataLakeS3Uri);

  }

  if(m_dataSecurityConfigHasBeenSet)
  {
   payload.WithObject("DataSecurityConfig", m_dataSecurityConfig.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFlywheelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.CreateFlywheel"));
  return headers;

}




