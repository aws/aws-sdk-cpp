/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/NetworkConnectorConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

NetworkConnectorConfiguration::NetworkConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

NetworkConnectorConfiguration& NetworkConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VpcEgressConfiguration")) {
    m_vpcEgressConfiguration = jsonValue.GetObject("VpcEgressConfiguration");
    m_vpcEgressConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_vpcEgressConfigurationHasBeenSet) {
    payload.WithObject("VpcEgressConfiguration", m_vpcEgressConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
