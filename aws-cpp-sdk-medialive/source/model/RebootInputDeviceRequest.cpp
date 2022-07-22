/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RebootInputDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RebootInputDeviceRequest::RebootInputDeviceRequest() : 
    m_force(RebootInputDeviceForce::NOT_SET),
    m_forceHasBeenSet(false),
    m_inputDeviceIdHasBeenSet(false)
{
}

Aws::String RebootInputDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_forceHasBeenSet)
  {
   payload.WithString("force", RebootInputDeviceForceMapper::GetNameForRebootInputDeviceForce(m_force));
  }

  return payload.View().WriteReadable();
}




