/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DescribeDaemonDeploymentsRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeDaemonDeploymentsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_daemonDeploymentArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> daemonDeploymentArnsJsonList(m_daemonDeploymentArns.size());
    for (unsigned daemonDeploymentArnsIndex = 0; daemonDeploymentArnsIndex < daemonDeploymentArnsJsonList.GetLength();
         ++daemonDeploymentArnsIndex) {
      daemonDeploymentArnsJsonList[daemonDeploymentArnsIndex].AsString(m_daemonDeploymentArns[daemonDeploymentArnsIndex]);
    }
    payload.WithArray("daemonDeploymentArns", std::move(daemonDeploymentArnsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDaemonDeploymentsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeDaemonDeployments"));
  return headers;
}
