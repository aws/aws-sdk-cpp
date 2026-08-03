/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks-auth/model/AssumeRoleForPodIdentityRequest.h>

#include <utility>

using namespace Aws::EKSAuth::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssumeRoleForPodIdentityRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tokenHasBeenSet) {
    payload.WithString("token", m_token);
  }

  if (m_eksNodeNameHasBeenSet) {
    payload.WithString("eksNodeName", m_eksNodeName);
  }

  if (m_instanceIdHasBeenSet) {
    payload.WithString("instanceId", m_instanceId);
  }

  if (m_zoneHasBeenSet) {
    payload.WithString("zone", m_zone);
  }

  return payload.View().WriteReadable();
}
