/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_provisioningRoleArnHasBeenSet(false)
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

  return payload.View().WriteReadable();
}




