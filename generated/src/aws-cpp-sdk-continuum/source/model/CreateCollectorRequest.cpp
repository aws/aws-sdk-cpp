/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/CreateCollectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCollectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", CollectorTypeMapper::GetNameForCollectorType(m_type));
  }

  if (m_kubernetesClusterRoleHasBeenSet) {
    payload.WithObject("k8ClusterRole", m_kubernetesClusterRole.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
