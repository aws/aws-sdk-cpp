﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateSolutionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSolutionVersionRequest::CreateSolutionVersionRequest() : 
    m_solutionArnHasBeenSet(false),
    m_trainingMode(TrainingMode::NOT_SET),
    m_trainingModeHasBeenSet(false)
{
}

Aws::String CreateSolutionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_solutionArnHasBeenSet)
  {
   payload.WithString("solutionArn", m_solutionArn);

  }

  if(m_trainingModeHasBeenSet)
  {
   payload.WithString("trainingMode", TrainingModeMapper::GetNameForTrainingMode(m_trainingMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSolutionVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateSolutionVersion"));
  return headers;

}




