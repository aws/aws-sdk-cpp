/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

Location::Location(JsonView jsonValue) { *this = jsonValue; }

Location& Location::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CodeLocation")) {
    m_codeLocation = jsonValue.GetObject("CodeLocation");
    m_codeLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue Location::Jsonize() const {
  JsonValue payload;

  if (m_codeLocationHasBeenSet) {
    payload.WithObject("CodeLocation", m_codeLocation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
