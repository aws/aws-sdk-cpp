/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/UpdateDetectorModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDetectorModelRequest::UpdateDetectorModelRequest() : 
    m_detectorModelNameHasBeenSet(false),
    m_detectorModelDefinitionHasBeenSet(false),
    m_detectorModelDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_evaluationMethod(EvaluationMethod::NOT_SET),
    m_evaluationMethodHasBeenSet(false)
{
}

Aws::String UpdateDetectorModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorModelDefinitionHasBeenSet)
  {
   payload.WithObject("detectorModelDefinition", m_detectorModelDefinition.Jsonize());

  }

  if(m_detectorModelDescriptionHasBeenSet)
  {
   payload.WithString("detectorModelDescription", m_detectorModelDescription);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_evaluationMethodHasBeenSet)
  {
   payload.WithString("evaluationMethod", EvaluationMethodMapper::GetNameForEvaluationMethod(m_evaluationMethod));
  }

  return payload.View().WriteReadable();
}




