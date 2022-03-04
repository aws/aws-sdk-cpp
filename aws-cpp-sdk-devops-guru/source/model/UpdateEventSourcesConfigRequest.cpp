/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/UpdateEventSourcesConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventSourcesConfigRequest::UpdateEventSourcesConfigRequest() : 
    m_eventSourcesHasBeenSet(false)
{
}

Aws::String UpdateEventSourcesConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventSourcesHasBeenSet)
  {
   payload.WithObject("EventSources", m_eventSources.Jsonize());

  }

  return payload.View().WriteReadable();
}




