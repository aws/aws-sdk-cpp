/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedConnectorEgressConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {

DescribedConnectorEgressConfig::DescribedConnectorEgressConfig(JsonView jsonValue) { *this = jsonValue; }

DescribedConnectorEgressConfig& DescribedConnectorEgressConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VpcLattice")) {
    m_vpcLattice = jsonValue.GetObject("VpcLattice");
    m_vpcLatticeHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribedConnectorEgressConfig::Jsonize() const {
  JsonValue payload;

  if (m_vpcLatticeHasBeenSet) {
    payload.WithObject("VpcLattice", m_vpcLattice.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
