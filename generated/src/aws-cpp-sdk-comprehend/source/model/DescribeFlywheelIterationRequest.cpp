/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DescribeFlywheelIterationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFlywheelIterationRequest::DescribeFlywheelIterationRequest() : 
    m_flywheelArnHasBeenSet(false),
    m_flywheelIterationIdHasBeenSet(false)
{
}

Aws::String DescribeFlywheelIterationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flywheelArnHasBeenSet)
  {
   payload.WithString("FlywheelArn", m_flywheelArn);

  }

  if(m_flywheelIterationIdHasBeenSet)
  {
   payload.WithString("FlywheelIterationId", m_flywheelIterationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFlywheelIterationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.DescribeFlywheelIteration"));
  return headers;

}




