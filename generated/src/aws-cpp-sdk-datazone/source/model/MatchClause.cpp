/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/MatchClause.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

MatchClause::MatchClause(JsonView jsonValue) { *this = jsonValue; }

MatchClause& MatchClause::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("relationPattern")) {
    m_relationPattern = jsonValue.GetObject("relationPattern");
    m_relationPatternHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityPattern")) {
    m_entityPattern = jsonValue.GetObject("entityPattern");
    m_entityPatternHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchClause::Jsonize() const {
  JsonValue payload;

  if (m_relationPatternHasBeenSet) {
    payload.WithObject("relationPattern", m_relationPattern.Jsonize());
  }

  if (m_entityPatternHasBeenSet) {
    payload.WithObject("entityPattern", m_entityPattern.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
