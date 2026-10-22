/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/PrevalidationSignalsBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

PrevalidationSignalsBody::PrevalidationSignalsBody(JsonView jsonValue) { *this = jsonValue; }

PrevalidationSignalsBody& PrevalidationSignalsBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("producedBy")) {
    m_producedBy = jsonValue.GetString("producedBy");
    m_producedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signals")) {
    Aws::Utils::Array<JsonView> signalsJsonList = jsonValue.GetArray("signals");
    for (unsigned signalsIndex = 0; signalsIndex < signalsJsonList.GetLength(); ++signalsIndex) {
      m_signals.push_back(signalsJsonList[signalsIndex].AsObject());
    }
    m_signalsHasBeenSet = true;
  }
  return *this;
}

JsonValue PrevalidationSignalsBody::Jsonize() const {
  JsonValue payload;

  if (m_producedByHasBeenSet) {
    payload.WithString("producedBy", m_producedBy);
  }

  if (m_signalsHasBeenSet) {
    Aws::Utils::Array<JsonValue> signalsJsonList(m_signals.size());
    for (unsigned signalsIndex = 0; signalsIndex < signalsJsonList.GetLength(); ++signalsIndex) {
      signalsJsonList[signalsIndex].AsObject(m_signals[signalsIndex].Jsonize());
    }
    payload.WithArray("signals", std::move(signalsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
