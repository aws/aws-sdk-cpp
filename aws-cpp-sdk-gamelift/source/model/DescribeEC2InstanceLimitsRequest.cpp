/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEC2InstanceLimitsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DescribeEC2InstanceLimits"));
  return headers;

}



