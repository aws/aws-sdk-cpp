/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Amount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

Amount::Amount(JsonView jsonValue) { *this = jsonValue; }

Amount& Amount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currency")) {
    m_currency = CurrencyMapper::GetCurrencyForName(jsonValue.GetString("currency"));
    m_currencyHasBeenSet = true;
  }
  return *this;
}

JsonValue Amount::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
