/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ServiceTier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

ServiceTier::ServiceTier(JsonView jsonValue) { *this = jsonValue; }

ServiceTier& ServiceTier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = ServiceTierTypeMapper::GetServiceTierTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceTier::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", ServiceTierTypeMapper::GetNameForServiceTierType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
