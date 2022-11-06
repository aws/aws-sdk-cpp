/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateArtifactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateArtifactRequest::UpdateArtifactRequest() : 
    m_artifactArnHasBeenSet(false),
    m_artifactNameHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_propertiesToRemoveHasBeenSet(false)
{
}

Aws::String UpdateArtifactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_artifactArnHasBeenSet)
  {
   payload.WithString("ArtifactArn", m_artifactArn);

  }

  if(m_artifactNameHasBeenSet)
  {
   payload.WithString("ArtifactName", m_artifactName);

  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
   }
   payload.WithObject("Properties", std::move(propertiesJsonMap));

  }

  if(m_propertiesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesToRemoveJsonList(m_propertiesToRemove.size());
   for(unsigned propertiesToRemoveIndex = 0; propertiesToRemoveIndex < propertiesToRemoveJsonList.GetLength(); ++propertiesToRemoveIndex)
   {
     propertiesToRemoveJsonList[propertiesToRemoveIndex].AsString(m_propertiesToRemove[propertiesToRemoveIndex]);
   }
   payload.WithArray("PropertiesToRemove", std::move(propertiesToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateArtifactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateArtifact"));
  return headers;

}




