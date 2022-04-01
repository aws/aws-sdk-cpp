/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DescribeAlertRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAlertRequest::DescribeAlertRequest() : 
    m_alertArnHasBeenSet(false)
{
}

Aws::String DescribeAlertRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alertArnHasBeenSet)
  {
   payload.WithString("AlertArn", m_alertArn);

  }

  return payload.View().WriteReadable();
}




