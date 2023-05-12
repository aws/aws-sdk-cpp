﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/CreateWorkerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkerRequest::CreateWorkerRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_nameHasBeenSet(false),
    m_fleetHasBeenSet(false),
    m_additionalTransientPropertiesHasBeenSet(false),
    m_additionalFixedPropertiesHasBeenSet(false),
    m_vendorPropertiesHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_orientationHasBeenSet(false)
{
}

Aws::String CreateWorkerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_fleetHasBeenSet)
  {
   payload.WithString("fleet", m_fleet);

  }

  if(m_additionalTransientPropertiesHasBeenSet)
  {
   payload.WithString("additionalTransientProperties", m_additionalTransientProperties);

  }

  if(m_additionalFixedPropertiesHasBeenSet)
  {
   payload.WithString("additionalFixedProperties", m_additionalFixedProperties);

  }

  if(m_vendorPropertiesHasBeenSet)
  {
   payload.WithObject("vendorProperties", m_vendorProperties.Jsonize());

  }

  if(m_positionHasBeenSet)
  {
   payload.WithObject("position", m_position.Jsonize());

  }

  if(m_orientationHasBeenSet)
  {
   payload.WithObject("orientation", m_orientation.Jsonize());

  }

  return payload.View().WriteReadable();
}




