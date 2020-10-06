/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/StopApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopApplicationRequest::StopApplicationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String StopApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("Force", m_force);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.StopApplication"));
  return headers;

}




