/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOrganizationConfigurationRequest::UpdateOrganizationConfigurationRequest() : 
    m_autoEnable(false),
    m_autoEnableHasBeenSet(false)
{
}

Aws::String UpdateOrganizationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoEnableHasBeenSet)
  {
   payload.WithBool("autoEnable", m_autoEnable);

  }

  return payload.View().WriteReadable();
}




