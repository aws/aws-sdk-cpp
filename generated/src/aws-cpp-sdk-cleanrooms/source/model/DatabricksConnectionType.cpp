/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DatabricksConnectionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

DatabricksConnectionType::DatabricksConnectionType(JsonView jsonValue) { *this = jsonValue; }

DatabricksConnectionType& DatabricksConnectionType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deltaSharing")) {
    m_deltaSharing = jsonValue.GetObject("deltaSharing");
    m_deltaSharingHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabricksConnectionType::Jsonize() const {
  JsonValue payload;

  if (m_deltaSharingHasBeenSet) {
    payload.WithObject("deltaSharing", m_deltaSharing.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
