/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/PayerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {

PayerConfiguration::PayerConfiguration(JsonView jsonValue) { *this = jsonValue; }

PayerConfiguration& PayerConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("computePayerAccountId")) {
    m_computePayerAccountId = jsonValue.GetString("computePayerAccountId");
    m_computePayerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("syntheticDataPayerAccountId")) {
    m_syntheticDataPayerAccountId = jsonValue.GetString("syntheticDataPayerAccountId");
    m_syntheticDataPayerAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue PayerConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_computePayerAccountIdHasBeenSet) {
    payload.WithString("computePayerAccountId", m_computePayerAccountId);
  }

  if (m_syntheticDataPayerAccountIdHasBeenSet) {
    payload.WithString("syntheticDataPayerAccountId", m_syntheticDataPayerAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
