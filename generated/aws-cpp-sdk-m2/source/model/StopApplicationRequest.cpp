/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/StopApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopApplicationRequest::StopApplicationRequest() : 
    m_applicationIdHasBeenSet(false),
    m_forceStop(false),
    m_forceStopHasBeenSet(false)
{
}

Aws::String StopApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_forceStopHasBeenSet)
  {
   payload.WithBool("forceStop", m_forceStop);

  }

  return payload.View().WriteReadable();
}




