/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/AttachRLSPolicyRequest.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AttachRLSPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_resourceHasBeenSet) {
    payload.WithObject("Resource", m_resource.Jsonize());
  }

  if (m_principalHasBeenSet) {
    payload.WithObject("Principal", m_principal.Jsonize());
  }

  if (m_conditionHasBeenSet) {
    payload.WithObject("Condition", m_condition.Jsonize());
  }

  if (m_setDefaultHasBeenSet) {
    payload.WithBool("SetDefault", m_setDefault);
  }

  return payload.View().WriteReadable();
}
