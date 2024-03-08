/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/UpdateModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateModelRequest::UpdateModelRequest() : 
    m_modelNameHasBeenSet(false),
    m_labelsInputConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_modelDiagnosticsOutputConfigurationHasBeenSet(false)
{
}

Aws::String UpdateModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_labelsInputConfigurationHasBeenSet)
  {
   payload.WithObject("LabelsInputConfiguration", m_labelsInputConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_modelDiagnosticsOutputConfigurationHasBeenSet)
  {
   payload.WithObject("ModelDiagnosticsOutputConfiguration", m_modelDiagnosticsOutputConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLookoutEquipmentFrontendService.UpdateModel"));
  return headers;

}




