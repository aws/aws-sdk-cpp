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

#include <aws/imagebuilder/model/UpdateImagePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateImagePipelineRequest::UpdateImagePipelineRequest() : 
    m_imagePipelineArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageRecipeArnHasBeenSet(false),
    m_infrastructureConfigurationArnHasBeenSet(false),
    m_distributionConfigurationArnHasBeenSet(false),
    m_imageTestsConfigurationHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_status(PipelineStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateImagePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imagePipelineArnHasBeenSet)
  {
   payload.WithString("imagePipelineArn", m_imagePipelineArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_imageRecipeArnHasBeenSet)
  {
   payload.WithString("imageRecipeArn", m_imageRecipeArn);

  }

  if(m_infrastructureConfigurationArnHasBeenSet)
  {
   payload.WithString("infrastructureConfigurationArn", m_infrastructureConfigurationArn);

  }

  if(m_distributionConfigurationArnHasBeenSet)
  {
   payload.WithString("distributionConfigurationArn", m_distributionConfigurationArn);

  }

  if(m_imageTestsConfigurationHasBeenSet)
  {
   payload.WithObject("imageTestsConfiguration", m_imageTestsConfiguration.Jsonize());

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PipelineStatusMapper::GetNameForPipelineStatus(m_status));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




