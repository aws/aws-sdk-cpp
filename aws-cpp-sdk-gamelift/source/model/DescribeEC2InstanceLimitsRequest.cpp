/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeEC2InstanceLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEC2InstanceLimitsRequest::DescribeEC2InstanceLimitsRequest() : 
    m_eC2InstanceType(EC2InstanceType::NOT_SET),
    m_eC2InstanceTypeHasBeenSet(false)
{
}

Aws::String DescribeEC2InstanceLimitsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eC2InstanceTypeHasBeenSet)
  {
   payload.WithString("EC2InstanceType", EC2InstanceTypeMapper::GetNameForEC2InstanceType(m_eC2InstanceType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEC2InstanceLimitsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeEC2InstanceLimits"));
  return headers;

}




