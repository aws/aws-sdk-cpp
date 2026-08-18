/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RulesExtractionDefinitionIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

RulesExtractionDefinitionIdentifier::RulesExtractionDefinitionIdentifier(JsonView jsonValue) { *this = jsonValue; }

RulesExtractionDefinitionIdentifier& RulesExtractionDefinitionIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Identifier")) {
    m_identifier = jsonValue.GetString("Identifier");
    m_identifierHasBeenSet = true;
  }
  return *this;
}

JsonValue RulesExtractionDefinitionIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
