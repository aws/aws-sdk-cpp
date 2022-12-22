/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/RemoveTemplateActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveTemplateActionRequest::RemoveTemplateActionRequest() : 
    m_actionIDHasBeenSet(false),
    m_launchConfigurationTemplateIDHasBeenSet(false)
{
}

Aws::String RemoveTemplateActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionIDHasBeenSet)
  {
   payload.WithString("actionID", m_actionID);

  }

  if(m_launchConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("launchConfigurationTemplateID", m_launchConfigurationTemplateID);

  }

  return payload.View().WriteReadable();
}




