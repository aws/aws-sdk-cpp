/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/RenamedGreeting.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

RenamedGreeting::RenamedGreeting(JsonView jsonValue) { *this = jsonValue; }

RenamedGreeting& RenamedGreeting::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("salutation")) {
    m_salutation = jsonValue.GetString("salutation");
    m_salutationHasBeenSet = true;
  }
  return *this;
}

JsonValue RenamedGreeting::Jsonize() const {
  JsonValue payload;

  if (m_salutationHasBeenSet) {
    payload.WithString("salutation", m_salutation);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
