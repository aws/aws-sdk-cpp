/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DescribeRobotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRobotRequest::DescribeRobotRequest() : 
    m_robotHasBeenSet(false)
{
}

Aws::String DescribeRobotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_robotHasBeenSet)
  {
   payload.WithString("robot", m_robot);

  }

  return payload.View().WriteReadable();
}




