/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/FunctionVersionsByCapacityProviderListItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

FunctionVersionsByCapacityProviderListItem::FunctionVersionsByCapacityProviderListItem(JsonView jsonValue) { *this = jsonValue; }

FunctionVersionsByCapacityProviderListItem& FunctionVersionsByCapacityProviderListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FunctionArn")) {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionVersionsByCapacityProviderListItem::Jsonize() const {
  JsonValue payload;

  if (m_functionArnHasBeenSet) {
    payload.WithString("FunctionArn", m_functionArn);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
