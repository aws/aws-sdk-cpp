/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeleteRobotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRobotRequest::DeleteRobotRequest() : 
    m_robotHasBeenSet(false)
{
}

Aws::String DeleteRobotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_robotHasBeenSet)
  {
   payload.WithString("robot", m_robot);

  }

  return payload.View().WriteReadable();
}




