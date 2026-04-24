/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/deadline/model/BatchUpdateJobRequest.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_jobsHasBeenSet) {
    Aws::Utils::Array<JsonValue> jobsJsonList(m_jobs.size());
    for (unsigned jobsIndex = 0; jobsIndex < jobsJsonList.GetLength(); ++jobsIndex) {
      jobsJsonList[jobsIndex].AsObject(m_jobs[jobsIndex].Jsonize());
    }
    payload.WithArray("jobs", std::move(jobsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchUpdateJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_clientTokenHasBeenSet) {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token", ss.str());
    ss.str("");
  }

  return headers;
}
