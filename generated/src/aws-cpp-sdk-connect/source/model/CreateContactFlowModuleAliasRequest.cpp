/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateContactFlowModuleAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateContactFlowModuleAliasRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_contactFlowModuleVersionHasBeenSet) {
    payload.WithInt64("ContactFlowModuleVersion", m_contactFlowModuleVersion);
  }

  if (m_aliasNameHasBeenSet) {
    payload.WithString("AliasName", m_aliasName);
  }

  return payload.View().WriteReadable();
}
