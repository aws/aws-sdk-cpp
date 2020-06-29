/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateProvisioningTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProvisioningTemplateRequest::UpdateProvisioningTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_defaultVersionId(0),
    m_defaultVersionIdHasBeenSet(false),
    m_provisioningRoleArnHasBeenSet(false),
    m_preProvisioningHookHasBeenSet(false),
    m_removePreProvisioningHook(false),
    m_removePreProvisioningHookHasBeenSet(false)
{
}

Aws::String UpdateProvisioningTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_defaultVersionIdHasBeenSet)
  {
   payload.WithInteger("defaultVersionId", m_defaultVersionId);

  }

  if(m_provisioningRoleArnHasBeenSet)
  {
   payload.WithString("provisioningRoleArn", m_provisioningRoleArn);

  }

  if(m_preProvisioningHookHasBeenSet)
  {
   payload.WithObject("preProvisioningHook", m_preProvisioningHook.Jsonize());

  }

  if(m_removePreProvisioningHookHasBeenSet)
  {
   payload.WithBool("removePreProvisioningHook", m_removePreProvisioningHook);

  }

  return payload.View().WriteReadable();
}




