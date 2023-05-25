/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOrganizationConfigurationRequest::UpdateOrganizationConfigurationRequest() : 
    m_autoEnableHasBeenSet(false)
{
}

Aws::String UpdateOrganizationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoEnableHasBeenSet)
  {
   payload.WithObject("autoEnable", m_autoEnable.Jsonize());

  }

  return payload.View().WriteReadable();
}




