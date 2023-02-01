/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/DescribeAutoScalingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAutoScalingConfigurationRequest::DescribeAutoScalingConfigurationRequest() : 
    m_autoScalingConfigurationArnHasBeenSet(false)
{
}

Aws::String DescribeAutoScalingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoScalingConfigurationArnHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationArn", m_autoScalingConfigurationArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAutoScalingConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.DescribeAutoScalingConfiguration"));
  return headers;

}




