/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/UpdateWorkGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWorkGroupRequest::UpdateWorkGroupRequest() : 
    m_workGroupHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configurationUpdatesHasBeenSet(false),
    m_state(WorkGroupState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Aws::String UpdateWorkGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_configurationUpdatesHasBeenSet)
  {
   payload.WithObject("ConfigurationUpdates", m_configurationUpdates.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", WorkGroupStateMapper::GetNameForWorkGroupState(m_state));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateWorkGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.UpdateWorkGroup"));
  return headers;

}




