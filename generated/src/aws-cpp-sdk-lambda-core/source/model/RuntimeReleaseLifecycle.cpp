/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/RuntimeReleaseLifecycle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

RuntimeReleaseLifecycle::RuntimeReleaseLifecycle(JsonView jsonValue) { *this = jsonValue; }

RuntimeReleaseLifecycle& RuntimeReleaseLifecycle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReleaseState")) {
    m_releaseState = RuntimeReleaseStateMapper::GetRuntimeReleaseStateForName(jsonValue.GetString("ReleaseState"));
    m_releaseStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeprecationDate")) {
    m_deprecationDate = jsonValue.GetString("DeprecationDate");
    m_deprecationDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionCreateBlockDate")) {
    m_functionCreateBlockDate = jsonValue.GetString("FunctionCreateBlockDate");
    m_functionCreateBlockDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionUpdateBlockDate")) {
    m_functionUpdateBlockDate = jsonValue.GetString("FunctionUpdateBlockDate");
    m_functionUpdateBlockDateHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeReleaseLifecycle::Jsonize() const {
  JsonValue payload;

  if (m_releaseStateHasBeenSet) {
    payload.WithString("ReleaseState", RuntimeReleaseStateMapper::GetNameForRuntimeReleaseState(m_releaseState));
  }

  if (m_deprecationDateHasBeenSet) {
    payload.WithString("DeprecationDate", m_deprecationDate);
  }

  if (m_functionCreateBlockDateHasBeenSet) {
    payload.WithString("FunctionCreateBlockDate", m_functionCreateBlockDate);
  }

  if (m_functionUpdateBlockDateHasBeenSet) {
    payload.WithString("FunctionUpdateBlockDate", m_functionUpdateBlockDate);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
