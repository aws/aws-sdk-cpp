/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormAIVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationFormAIVersionSummary::EvaluationFormAIVersionSummary(JsonView jsonValue) { *this = jsonValue; }

EvaluationFormAIVersionSummary& EvaluationFormAIVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AIVersionName")) {
    m_aIVersionName = jsonValue.GetString("AIVersionName");
    m_aIVersionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIVersionLifecycle")) {
    m_aIVersionLifecycle = jsonValue.GetObject("AIVersionLifecycle");
    m_aIVersionLifecycleHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormAIVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_aIVersionNameHasBeenSet) {
    payload.WithString("AIVersionName", m_aIVersionName);
  }

  if (m_aIVersionLifecycleHasBeenSet) {
    payload.WithObject("AIVersionLifecycle", m_aIVersionLifecycle.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
