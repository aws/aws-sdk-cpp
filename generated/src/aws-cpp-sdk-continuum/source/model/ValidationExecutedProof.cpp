/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ValidationExecutedProof.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ValidationExecutedProof::ValidationExecutedProof(JsonView jsonValue) { *this = jsonValue; }

ValidationExecutedProof& ValidationExecutedProof::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetObject("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("output")) {
    m_output = jsonValue.GetObject("output");
    m_outputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("observedEffect")) {
    m_observedEffect = ExploitEffectMapper::GetExploitEffectForName(jsonValue.GetString("observedEffect"));
    m_observedEffectHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationExecutedProof::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithObject("code", m_code.Jsonize());
  }

  if (m_outputHasBeenSet) {
    payload.WithObject("output", m_output.Jsonize());
  }

  if (m_observedEffectHasBeenSet) {
    payload.WithString("observedEffect", ExploitEffectMapper::GetNameForExploitEffect(m_observedEffect));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
