/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/FilterStringConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

FilterStringConfiguration::FilterStringConfiguration(JsonView jsonValue) { *this = jsonValue; }

FilterStringConfiguration& FilterStringConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QueryParameterName")) {
    m_queryParameterName = jsonValue.GetString("QueryParameterName");
    m_queryParameterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuoteStringValues")) {
    m_quoteStringValues = jsonValue.GetBool("QuoteStringValues");
    m_quoteStringValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuoteCharacter")) {
    m_quoteCharacter = jsonValue.GetString("QuoteCharacter");
    m_quoteCharacterHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterStringConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_queryParameterNameHasBeenSet) {
    payload.WithString("QueryParameterName", m_queryParameterName);
  }

  if (m_quoteStringValuesHasBeenSet) {
    payload.WithBool("QuoteStringValues", m_quoteStringValues);
  }

  if (m_quoteCharacterHasBeenSet) {
    payload.WithString("QuoteCharacter", m_quoteCharacter);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
