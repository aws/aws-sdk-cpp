/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/GetTemporaryGlueFunctionCredentialsRequest.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTemporaryGlueFunctionCredentialsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userDefinedFunctionArnHasBeenSet) {
    payload.WithString("UserDefinedFunctionArn", m_userDefinedFunctionArn);
  }

  if (m_auditContextHasBeenSet) {
    payload.WithObject("AuditContext", m_auditContext.Jsonize());
  }

  return payload.View().WriteReadable();
}
