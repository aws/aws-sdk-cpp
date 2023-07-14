/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/EvaluateFeatureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EvaluateFeatureRequest::EvaluateFeatureRequest() : 
    m_entityIdHasBeenSet(false),
    m_evaluationContextHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_projectHasBeenSet(false)
{
}

Aws::String EvaluateFeatureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_evaluationContextHasBeenSet)
  {
   payload.WithString("evaluationContext", m_evaluationContext);

  }

  return payload.View().WriteReadable();
}




