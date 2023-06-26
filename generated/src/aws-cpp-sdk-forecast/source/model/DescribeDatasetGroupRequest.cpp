/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeDatasetGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDatasetGroupRequest::DescribeDatasetGroupRequest() : 
    m_datasetGroupArnHasBeenSet(false)
{
}

Aws::String DescribeDatasetGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("DatasetGroupArn", m_datasetGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDatasetGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DescribeDatasetGroup"));
  return headers;

}




