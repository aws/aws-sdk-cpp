/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/CollectorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

CollectorDetails::CollectorDetails(JsonView jsonValue) { *this = jsonValue; }

CollectorDetails& CollectorDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("collectorDataAccessRoleArn")) {
    m_collectorDataAccessRoleArn = jsonValue.GetString("collectorDataAccessRoleArn");
    m_collectorDataAccessRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CollectorDetails::Jsonize() const {
  JsonValue payload;

  if (m_collectorDataAccessRoleArnHasBeenSet) {
    payload.WithString("collectorDataAccessRoleArn", m_collectorDataAccessRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
