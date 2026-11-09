/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalPreconditions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

SignalPreconditions::SignalPreconditions(JsonView jsonValue) { *this = jsonValue; }

SignalPreconditions& SignalPreconditions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reachableFromAttacker")) {
    m_reachableFromAttacker = jsonValue.GetObject("reachableFromAttacker");
    m_reachableFromAttackerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurationNeeded")) {
    m_configurationNeeded = jsonValue.GetObject("configurationNeeded");
    m_configurationNeededHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessLevel")) {
    m_accessLevel = jsonValue.GetObject("accessLevel");
    m_accessLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userInteractionRequired")) {
    m_userInteractionRequired = jsonValue.GetObject("userInteractionRequired");
    m_userInteractionRequiredHasBeenSet = true;
  }
  return *this;
}

JsonValue SignalPreconditions::Jsonize() const {
  JsonValue payload;

  if (m_reachableFromAttackerHasBeenSet) {
    payload.WithObject("reachableFromAttacker", m_reachableFromAttacker.Jsonize());
  }

  if (m_configurationNeededHasBeenSet) {
    payload.WithObject("configurationNeeded", m_configurationNeeded.Jsonize());
  }

  if (m_accessLevelHasBeenSet) {
    payload.WithObject("accessLevel", m_accessLevel.Jsonize());
  }

  if (m_userInteractionRequiredHasBeenSet) {
    payload.WithObject("userInteractionRequired", m_userInteractionRequired.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
