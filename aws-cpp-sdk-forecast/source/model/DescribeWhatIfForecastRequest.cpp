/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeWhatIfForecastRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWhatIfForecastRequest::DescribeWhatIfForecastRequest() : 
    m_whatIfForecastArnHasBeenSet(false)
{
}

Aws::String DescribeWhatIfForecastRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_whatIfForecastArnHasBeenSet)
  {
   payload.WithString("WhatIfForecastArn", m_whatIfForecastArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeWhatIfForecastRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonForecast.DescribeWhatIfForecast"));
  return headers;

}




