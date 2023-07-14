/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/PollForTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PollForTaskRequest::PollForTaskRequest() : 
    m_workerGroupHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_instanceIdentityHasBeenSet(false)
{
}

Aws::String PollForTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workerGroupHasBeenSet)
  {
   payload.WithString("workerGroup", m_workerGroup);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_instanceIdentityHasBeenSet)
  {
   payload.WithObject("instanceIdentity", m_instanceIdentity.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PollForTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.PollForTask"));
  return headers;

}




