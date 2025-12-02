/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ChainedInvokeStartedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ChainedInvokeStartedDetails::ChainedInvokeStartedDetails(JsonView jsonValue) { *this = jsonValue; }

ChainedInvokeStartedDetails& ChainedInvokeStartedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FunctionName")) {
    m_functionName = jsonValue.GetString("FunctionName");
    m_functionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TenantId")) {
    m_tenantId = jsonValue.GetString("TenantId");
    m_tenantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Input")) {
    m_input = jsonValue.GetObject("Input");
    m_inputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutedVersion")) {
    m_executedVersion = jsonValue.GetString("ExecutedVersion");
    m_executedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DurableExecutionArn")) {
    m_durableExecutionArn = jsonValue.GetString("DurableExecutionArn");
    m_durableExecutionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ChainedInvokeStartedDetails::Jsonize() const {
  JsonValue payload;

  if (m_functionNameHasBeenSet) {
    payload.WithString("FunctionName", m_functionName);
  }

  if (m_tenantIdHasBeenSet) {
    payload.WithString("TenantId", m_tenantId);
  }

  if (m_inputHasBeenSet) {
    payload.WithObject("Input", m_input.Jsonize());
  }

  if (m_executedVersionHasBeenSet) {
    payload.WithString("ExecutedVersion", m_executedVersion);
  }

  if (m_durableExecutionArnHasBeenSet) {
    payload.WithString("DurableExecutionArn", m_durableExecutionArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
