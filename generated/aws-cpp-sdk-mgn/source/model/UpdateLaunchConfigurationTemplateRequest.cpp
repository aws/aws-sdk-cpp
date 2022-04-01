/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateLaunchConfigurationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLaunchConfigurationTemplateRequest::UpdateLaunchConfigurationTemplateRequest() : 
    m_launchConfigurationTemplateIDHasBeenSet(false),
    m_postLaunchActionsHasBeenSet(false)
{
}

Aws::String UpdateLaunchConfigurationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_launchConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("launchConfigurationTemplateID", m_launchConfigurationTemplateID);

  }

  if(m_postLaunchActionsHasBeenSet)
  {
   payload.WithObject("postLaunchActions", m_postLaunchActions.Jsonize());

  }

  return payload.View().WriteReadable();
}




