/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeregisterRobotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterRobotRequest::DeregisterRobotRequest() : 
    m_fleetHasBeenSet(false),
    m_robotHasBeenSet(false)
{
}

Aws::String DeregisterRobotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetHasBeenSet)
  {
   payload.WithString("fleet", m_fleet);

  }

  if(m_robotHasBeenSet)
  {
   payload.WithString("robot", m_robot);

  }

  return payload.View().WriteReadable();
}




