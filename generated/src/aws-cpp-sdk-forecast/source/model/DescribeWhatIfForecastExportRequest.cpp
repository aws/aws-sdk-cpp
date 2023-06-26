/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeWhatIfForecastExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWhatIfForecastExportRequest::DescribeWhatIfForecastExportRequest() : 
    m_whatIfForecastExportArnHasBeenSet(false)
{
}

Aws::String DescribeWhatIfForecastExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_whatIfForecastExportArnHasBeenSet)
  {
   payload.WithString("WhatIfForecastExportArn", m_whatIfForecastExportArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWhatIfForecastExportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DescribeWhatIfForecastExport"));
  return headers;

}




