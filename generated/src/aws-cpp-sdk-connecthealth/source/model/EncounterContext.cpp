/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/EncounterContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

EncounterContext::EncounterContext(JsonView jsonValue) { *this = jsonValue; }

EncounterContext& EncounterContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("unstructuredContext")) {
    m_unstructuredContext = jsonValue.GetString("unstructuredContext");
    m_unstructuredContextHasBeenSet = true;
  }
  return *this;
}

JsonValue EncounterContext::Jsonize() const {
  JsonValue payload;

  if (m_unstructuredContextHasBeenSet) {
    payload.WithString("unstructuredContext", m_unstructuredContext);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
