/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DescribeDaemonRevisionsRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeDaemonRevisionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_daemonRevisionArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> daemonRevisionArnsJsonList(m_daemonRevisionArns.size());
    for (unsigned daemonRevisionArnsIndex = 0; daemonRevisionArnsIndex < daemonRevisionArnsJsonList.GetLength();
         ++daemonRevisionArnsIndex) {
      daemonRevisionArnsJsonList[daemonRevisionArnsIndex].AsString(m_daemonRevisionArns[daemonRevisionArnsIndex]);
    }
    payload.WithArray("daemonRevisionArns", std::move(daemonRevisionArnsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDaemonRevisionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeDaemonRevisions"));
  return headers;
}
