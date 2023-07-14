/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateContactFlowMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContactFlowMetadataRequest::UpdateContactFlowMetadataRequest() : 
    m_instanceIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contactFlowState(ContactFlowState::NOT_SET),
    m_contactFlowStateHasBeenSet(false)
{
}

Aws::String UpdateContactFlowMetadataRequest::SerializePayload() const
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

  if(m_contactFlowStateHasBeenSet)
  {
   payload.WithString("ContactFlowState", ContactFlowStateMapper::GetNameForContactFlowState(m_contactFlowState));
  }

  return payload.View().WriteReadable();
}




