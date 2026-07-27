/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/model/UpdateVirtualClusterRequest.h>

#include <utility>

using namespace Aws::EMRContainers::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateVirtualClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_schedulerConfigurationHasBeenSet) {
    payload.WithObject("schedulerConfiguration", m_schedulerConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
