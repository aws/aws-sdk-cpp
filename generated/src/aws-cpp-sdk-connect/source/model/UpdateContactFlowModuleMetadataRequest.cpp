/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateContactFlowModuleMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactFlowModuleMetadataRequest::UpdateContactFlowModuleMetadataRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactFlowModuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(ContactFlowModuleState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Aws::String UpdateContactFlowModuleMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ContactFlowModuleStateMapper::GetNameForContactFlowModuleState(m_state));
  }

  return payload.View().WriteReadable();
}




