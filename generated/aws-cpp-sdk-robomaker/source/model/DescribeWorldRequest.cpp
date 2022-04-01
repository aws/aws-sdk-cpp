/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DescribeWorldRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeWorldRequest::DescribeWorldRequest() : 
    m_worldHasBeenSet(false)
{
}

Aws::String DescribeWorldRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_worldHasBeenSet)
  {
   payload.WithString("world", m_world);

  }

  return payload.View().WriteReadable();
}




