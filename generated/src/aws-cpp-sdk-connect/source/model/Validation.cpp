/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Validation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

Validation::Validation(JsonView jsonValue) { *this = jsonValue; }

Validation& Validation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MinLength")) {
    m_minLength = jsonValue.GetInteger("MinLength");
    m_minLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxLength")) {
    m_maxLength = jsonValue.GetInteger("MaxLength");
    m_maxLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MinValues")) {
    m_minValues = jsonValue.GetInteger("MinValues");
    m_minValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxValues")) {
    m_maxValues = jsonValue.GetInteger("MaxValues");
    m_maxValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IgnoreCase")) {
    m_ignoreCase = jsonValue.GetBool("IgnoreCase");
    m_ignoreCaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Minimum")) {
    m_minimum = jsonValue.GetDouble("Minimum");
    m_minimumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Maximum")) {
    m_maximum = jsonValue.GetDouble("Maximum");
    m_maximumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExclusiveMinimum")) {
    m_exclusiveMinimum = jsonValue.GetDouble("ExclusiveMinimum");
    m_exclusiveMinimumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExclusiveMaximum")) {
    m_exclusiveMaximum = jsonValue.GetDouble("ExclusiveMaximum");
    m_exclusiveMaximumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MultipleOf")) {
    m_multipleOf = jsonValue.GetDouble("MultipleOf");
    m_multipleOfHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Enum")) {
    m_enum = jsonValue.GetObject("Enum");
    m_enumHasBeenSet = true;
  }
  return *this;
}

JsonValue Validation::Jsonize() const {
  JsonValue payload;

  if (m_minLengthHasBeenSet) {
    payload.WithInteger("MinLength", m_minLength);
  }

  if (m_maxLengthHasBeenSet) {
    payload.WithInteger("MaxLength", m_maxLength);
  }

  if (m_minValuesHasBeenSet) {
    payload.WithInteger("MinValues", m_minValues);
  }

  if (m_maxValuesHasBeenSet) {
    payload.WithInteger("MaxValues", m_maxValues);
  }

  if (m_ignoreCaseHasBeenSet) {
    payload.WithBool("IgnoreCase", m_ignoreCase);
  }

  if (m_minimumHasBeenSet) {
    payload.WithDouble("Minimum", m_minimum);
  }

  if (m_maximumHasBeenSet) {
    payload.WithDouble("Maximum", m_maximum);
  }

  if (m_exclusiveMinimumHasBeenSet) {
    payload.WithDouble("ExclusiveMinimum", m_exclusiveMinimum);
  }

  if (m_exclusiveMaximumHasBeenSet) {
    payload.WithDouble("ExclusiveMaximum", m_exclusiveMaximum);
  }

  if (m_multipleOfHasBeenSet) {
    payload.WithDouble("MultipleOf", m_multipleOf);
  }

  if (m_enumHasBeenSet) {
    payload.WithObject("Enum", m_enum.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
