/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/UpdateRootDomainUnitOwnerRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRootDomainUnitOwnerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_currentOwnerHasBeenSet) {
    payload.WithString("currentOwner", m_currentOwner);
  }

  if (m_newOwnerHasBeenSet) {
    payload.WithString("newOwner", m_newOwner);
  }

  return payload.View().WriteReadable();
}
