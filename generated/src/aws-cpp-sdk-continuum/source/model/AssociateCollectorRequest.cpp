/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/AssociateCollectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateCollectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_collectorArnHasBeenSet) {
    payload.WithString("collectorArn", m_collectorArn);
  }

  if (m_collectorDataAccessRoleArnHasBeenSet) {
    payload.WithString("collectorDataAccessRoleArn", m_collectorDataAccessRoleArn);
  }

  return payload.View().WriteReadable();
}
