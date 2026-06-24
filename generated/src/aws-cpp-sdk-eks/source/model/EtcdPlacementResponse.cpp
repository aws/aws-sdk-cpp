/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/EtcdPlacementResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

EtcdPlacementResponse::EtcdPlacementResponse(JsonView jsonValue) { *this = jsonValue; }

EtcdPlacementResponse& EtcdPlacementResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spreadLevel")) {
    m_spreadLevel = SpreadLevelMapper::GetSpreadLevelForName(jsonValue.GetString("spreadLevel"));
    m_spreadLevelHasBeenSet = true;
  }
  return *this;
}

JsonValue EtcdPlacementResponse::Jsonize() const {
  JsonValue payload;

  if (m_spreadLevelHasBeenSet) {
    payload.WithString("spreadLevel", SpreadLevelMapper::GetNameForSpreadLevel(m_spreadLevel));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
