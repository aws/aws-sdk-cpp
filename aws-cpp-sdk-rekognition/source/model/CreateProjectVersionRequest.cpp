/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CreateProjectVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProjectVersionRequest::CreateProjectVersionRequest() : 
    m_projectArnHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_trainingDataHasBeenSet(false),
    m_testingDataHasBeenSet(false)
{
}

Aws::String CreateProjectVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_trainingDataHasBeenSet)
  {
   payload.WithObject("TrainingData", m_trainingData.Jsonize());

  }

  if(m_testingDataHasBeenSet)
  {
   payload.WithObject("TestingData", m_testingData.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProjectVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.CreateProjectVersion"));
  return headers;

}




