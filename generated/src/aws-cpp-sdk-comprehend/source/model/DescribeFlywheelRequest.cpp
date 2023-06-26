/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DescribeFlywheelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFlywheelRequest::DescribeFlywheelRequest() : 
    m_flywheelArnHasBeenSet(false)
{
}

Aws::String DescribeFlywheelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flywheelArnHasBeenSet)
  {
   payload.WithString("FlywheelArn", m_flywheelArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFlywheelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DescribeFlywheel"));
  return headers;

}




