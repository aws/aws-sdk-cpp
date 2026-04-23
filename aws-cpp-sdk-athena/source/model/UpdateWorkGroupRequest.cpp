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




