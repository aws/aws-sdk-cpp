/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/Competitor.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

Competitor::Competitor(JsonView jsonValue) { *this = jsonValue; }

Competitor& Competitor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isHome")) {
    m_isHome = jsonValue.GetBool("isHome");
    m_isHomeHasBeenSet = true;
  }
  return *this;
}

JsonValue Competitor::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_isHomeHasBeenSet) {
    payload.WithBool("isHome", m_isHome);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
