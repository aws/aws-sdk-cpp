/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetLogAnomalyDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLogAnomalyDetectorRequest::GetLogAnomalyDetectorRequest() : 
    m_anomalyDetectorArnHasBeenSet(false)
{
}

Aws::String GetLogAnomalyDetectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("anomalyDetectorArn", m_anomalyDetectorArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLogAnomalyDetectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.GetLogAnomalyDetector"));
  return headers;

}




