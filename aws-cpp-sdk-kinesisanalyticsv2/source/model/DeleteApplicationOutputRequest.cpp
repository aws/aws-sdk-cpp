/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DeleteApplicationOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationOutputRequest::DeleteApplicationOutputRequest() : 
    m_applicationNameHasBeenSet(false),
    m_currentApplicationVersionId(0),
    m_currentApplicationVersionIdHasBeenSet(false),
    m_outputIdHasBeenSet(false)
{
}

Aws::String DeleteApplicationOutputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_currentApplicationVersionIdHasBeenSet)
  {
   payload.WithInt64("CurrentApplicationVersionId", m_currentApplicationVersionId);

  }

  if(m_outputIdHasBeenSet)
  {
   payload.WithString("OutputId", m_outputId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteApplicationOutputRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.DeleteApplicationOutput"));
  return headers;

}




