/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ValidationSourceAnalysis.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ValidationSourceAnalysis::ValidationSourceAnalysis(JsonView jsonValue) { *this = jsonValue; }

ValidationSourceAnalysis& ValidationSourceAnalysis::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("summary")) {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inferredEffect")) {
    m_inferredEffect = ExploitEffectMapper::GetExploitEffectForName(jsonValue.GetString("inferredEffect"));
    m_inferredEffectHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationSourceAnalysis::Jsonize() const {
  JsonValue payload;

  if (m_summaryHasBeenSet) {
    payload.WithString("summary", m_summary);
  }

  if (m_inferredEffectHasBeenSet) {
    payload.WithString("inferredEffect", ExploitEffectMapper::GetNameForExploitEffect(m_inferredEffect));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
