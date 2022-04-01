/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteFeatureGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFeatureGroupRequest::DeleteFeatureGroupRequest() : 
    m_featureGroupNameHasBeenSet(false)
{
}

Aws::String DeleteFeatureGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFeatureGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteFeatureGroup"));
  return headers;

}




