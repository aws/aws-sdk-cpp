/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DescribeApplicationSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeApplicationSnapshotRequest::DescribeApplicationSnapshotRequest() : 
    m_applicationNameHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
{
}

Aws::String DescribeApplicationSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_snapshotNameHasBeenSet)
  {
   payload.WithString("SnapshotName", m_snapshotName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeApplicationSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.DescribeApplicationSnapshot"));
  return headers;

}




