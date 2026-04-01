/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ListDaemonsRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListDaemonsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterArnHasBeenSet) {
    payload.WithString("clusterArn", m_clusterArn);
  }

  if (m_capacityProviderArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacityProviderArnsJsonList(m_capacityProviderArns.size());
    for (unsigned capacityProviderArnsIndex = 0; capacityProviderArnsIndex < capacityProviderArnsJsonList.GetLength();
         ++capacityProviderArnsIndex) {
      capacityProviderArnsJsonList[capacityProviderArnsIndex].AsString(m_capacityProviderArns[capacityProviderArnsIndex]);
    }
    payload.WithArray("capacityProviderArns", std::move(capacityProviderArnsJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDaemonsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListDaemons"));
  return headers;
}
