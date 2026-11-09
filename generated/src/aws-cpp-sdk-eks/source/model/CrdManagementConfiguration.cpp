/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CrdManagementConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

CrdManagementConfiguration::CrdManagementConfiguration(JsonView jsonValue) { *this = jsonValue; }

CrdManagementConfiguration& CrdManagementConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managed")) {
    m_managed = jsonValue.GetBool("managed");
    m_managedHasBeenSet = true;
  }
  return *this;
}

JsonValue CrdManagementConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_managedHasBeenSet) {
    payload.WithBool("managed", m_managed);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
