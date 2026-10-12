/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/RLSProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

RLSProperties::RLSProperties(JsonView jsonValue) { *this = jsonValue; }

RLSProperties& RLSProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DefaultRLSPolicy")) {
    m_defaultRLSPolicy = jsonValue.GetString("DefaultRLSPolicy");
    m_defaultRLSPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue RLSProperties::Jsonize() const {
  JsonValue payload;

  if (m_defaultRLSPolicyHasBeenSet) {
    payload.WithString("DefaultRLSPolicy", m_defaultRLSPolicy);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
