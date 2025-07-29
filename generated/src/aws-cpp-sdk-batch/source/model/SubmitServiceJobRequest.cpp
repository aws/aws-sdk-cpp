/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/SubmitServiceJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SubmitServiceJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_jobQueueHasBeenSet)
  {
   payload.WithString("jobQueue", m_jobQueue);

  }

  if(m_retryStrategyHasBeenSet)
  {
   payload.WithObject("retryStrategy", m_retryStrategy.Jsonize());

  }

  if(m_schedulingPriorityHasBeenSet)
  {
   payload.WithInteger("schedulingPriority", m_schedulingPriority);

  }

  if(m_serviceRequestPayloadHasBeenSet)
  {
   payload.WithString("serviceRequestPayload", m_serviceRequestPayload);

  }

  if(m_serviceJobTypeHasBeenSet)
  {
   payload.WithString("serviceJobType", ServiceJobTypeMapper::GetNameForServiceJobType(m_serviceJobType));
  }

  if(m_shareIdentifierHasBeenSet)
  {
   payload.WithString("shareIdentifier", m_shareIdentifier);

  }

  if(m_timeoutConfigHasBeenSet)
  {
   payload.WithObject("timeoutConfig", m_timeoutConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




