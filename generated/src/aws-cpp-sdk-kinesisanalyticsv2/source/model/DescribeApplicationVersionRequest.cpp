/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DescribeApplicationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeApplicationVersionRequest::DescribeApplicationVersionRequest() : 
    m_applicationNameHasBeenSet(false),
    m_applicationVersionId(0),
    m_applicationVersionIdHasBeenSet(false)
{
}

Aws::String DescribeApplicationVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_applicationVersionIdHasBeenSet)
  {
   payload.WithInt64("ApplicationVersionId", m_applicationVersionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeApplicationVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.DescribeApplicationVersion"));
  return headers;

}




