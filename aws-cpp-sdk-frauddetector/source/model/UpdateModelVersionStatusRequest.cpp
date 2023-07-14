/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/UpdateModelVersionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateModelVersionStatusRequest::UpdateModelVersionStatusRequest() : 
    m_modelIdHasBeenSet(false),
    m_modelType(ModelTypeEnum::NOT_SET),
    m_modelTypeHasBeenSet(false),
    m_modelVersionNumberHasBeenSet(false),
    m_status(ModelVersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateModelVersionStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_modelTypeHasBeenSet)
  {
   payload.WithString("modelType", ModelTypeEnumMapper::GetNameForModelTypeEnum(m_modelType));
  }

  if(m_modelVersionNumberHasBeenSet)
  {
   payload.WithString("modelVersionNumber", m_modelVersionNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ModelVersionStatusMapper::GetNameForModelVersionStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateModelVersionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateModelVersionStatus"));
  return headers;

}




