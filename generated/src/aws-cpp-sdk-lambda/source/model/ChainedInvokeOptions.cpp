/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ChainedInvokeOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ChainedInvokeOptions::ChainedInvokeOptions(JsonView jsonValue) { *this = jsonValue; }

ChainedInvokeOptions& ChainedInvokeOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FunctionName")) {
    m_functionName = jsonValue.GetString("FunctionName");
    m_functionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TenantId")) {
    m_tenantId = jsonValue.GetString("TenantId");
    m_tenantIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ChainedInvokeOptions::Jsonize() const {
  JsonValue payload;

  if (m_functionNameHasBeenSet) {
    payload.WithString("FunctionName", m_functionName);
  }

  if (m_tenantIdHasBeenSet) {
    payload.WithString("TenantId", m_tenantId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
