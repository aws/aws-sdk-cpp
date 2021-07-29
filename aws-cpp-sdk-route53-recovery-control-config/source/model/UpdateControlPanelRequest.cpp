/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/UpdateControlPanelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateControlPanelRequest::UpdateControlPanelRequest() : 
    m_controlPanelArnHasBeenSet(false),
    m_controlPanelNameHasBeenSet(false)
{
}

Aws::String UpdateControlPanelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_controlPanelArnHasBeenSet)
  {
   payload.WithString("ControlPanelArn", m_controlPanelArn);

  }

  if(m_controlPanelNameHasBeenSet)
  {
   payload.WithString("ControlPanelName", m_controlPanelName);

  }

  return payload.View().WriteReadable();
}




