/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CreateRobotApplicationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRobotApplicationVersionRequest::CreateRobotApplicationVersionRequest() : 
    m_applicationHasBeenSet(false),
    m_currentRevisionIdHasBeenSet(false)
{
}

Aws::String CreateRobotApplicationVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationHasBeenSet)
  {
   payload.WithString("application", m_application);

  }

  if(m_currentRevisionIdHasBeenSet)
  {
   payload.WithString("currentRevisionId", m_currentRevisionId);

  }

  return payload.View().WriteReadable();
}




