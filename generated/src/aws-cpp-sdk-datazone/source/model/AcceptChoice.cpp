/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/AcceptChoice.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

AcceptChoice::AcceptChoice(JsonView jsonValue) { *this = jsonValue; }

AcceptChoice& AcceptChoice::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("predictionTarget")) {
    m_predictionTarget = jsonValue.GetString("predictionTarget");
    m_predictionTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("predictionChoice")) {
    m_predictionChoice = jsonValue.GetInteger("predictionChoice");
    m_predictionChoiceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("editedValue")) {
    m_editedValue = jsonValue.GetString("editedValue");
    m_editedValueHasBeenSet = true;
  }
  return *this;
}

JsonValue AcceptChoice::Jsonize() const {
  JsonValue payload;

  if (m_predictionTargetHasBeenSet) {
    payload.WithString("predictionTarget", m_predictionTarget);
  }

  if (m_predictionChoiceHasBeenSet) {
    payload.WithInteger("predictionChoice", m_predictionChoice);
  }

  if (m_editedValueHasBeenSet) {
    payload.WithString("editedValue", m_editedValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
