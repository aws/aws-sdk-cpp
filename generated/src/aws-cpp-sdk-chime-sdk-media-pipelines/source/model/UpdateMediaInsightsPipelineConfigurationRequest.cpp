/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/UpdateMediaInsightsPipelineConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMediaInsightsPipelineConfigurationRequest::UpdateMediaInsightsPipelineConfigurationRequest() : 
    m_identifierHasBeenSet(false),
    m_resourceAccessRoleArnHasBeenSet(false),
    m_realTimeAlertConfigurationHasBeenSet(false),
    m_elementsHasBeenSet(false)
{
}

Aws::String UpdateMediaInsightsPipelineConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ResourceAccessRoleArn", m_resourceAccessRoleArn);

  }

  if(m_realTimeAlertConfigurationHasBeenSet)
  {
   payload.WithObject("RealTimeAlertConfiguration", m_realTimeAlertConfiguration.Jsonize());

  }

  if(m_elementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elementsJsonList(m_elements.size());
   for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
   {
     elementsJsonList[elementsIndex].AsObject(m_elements[elementsIndex].Jsonize());
   }
   payload.WithArray("Elements", std::move(elementsJsonList));

  }

  return payload.View().WriteReadable();
}




