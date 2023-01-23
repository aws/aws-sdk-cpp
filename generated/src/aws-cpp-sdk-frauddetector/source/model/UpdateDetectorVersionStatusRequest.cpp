/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/UpdateDetectorVersionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDetectorVersionStatusRequest::UpdateDetectorVersionStatusRequest() : 
    m_detectorIdHasBeenSet(false),
    m_detectorVersionIdHasBeenSet(false),
    m_status(DetectorVersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateDetectorVersionStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_detectorVersionIdHasBeenSet)
  {
   payload.WithString("detectorVersionId", m_detectorVersionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DetectorVersionStatusMapper::GetNameForDetectorVersionStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDetectorVersionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.UpdateDetectorVersionStatus"));
  return headers;

}




