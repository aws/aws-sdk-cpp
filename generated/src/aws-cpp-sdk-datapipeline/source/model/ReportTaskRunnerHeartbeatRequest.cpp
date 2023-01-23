/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReportTaskRunnerHeartbeatRequest::ReportTaskRunnerHeartbeatRequest() : 
    m_taskrunnerIdHasBeenSet(false),
    m_workerGroupHasBeenSet(false),
    m_hostnameHasBeenSet(false)
{
}

Aws::String ReportTaskRunnerHeartbeatRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskrunnerIdHasBeenSet)
  {
   payload.WithString("taskrunnerId", m_taskrunnerId);

  }

  if(m_workerGroupHasBeenSet)
  {
   payload.WithString("workerGroup", m_workerGroup);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ReportTaskRunnerHeartbeatRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.ReportTaskRunnerHeartbeat"));
  return headers;

}




