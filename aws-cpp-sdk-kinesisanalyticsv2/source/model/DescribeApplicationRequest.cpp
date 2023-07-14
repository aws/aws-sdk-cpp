/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DescribeApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeApplicationRequest::DescribeApplicationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_includeAdditionalDetails(false),
    m_includeAdditionalDetailsHasBeenSet(false)
{
}

Aws::String DescribeApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_includeAdditionalDetailsHasBeenSet)
  {
   payload.WithBool("IncludeAdditionalDetails", m_includeAdditionalDetails);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.DescribeApplication"));
  return headers;

}




