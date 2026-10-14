/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/AutoScalingGroupConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

AutoScalingGroupConfiguration::AutoScalingGroupConfiguration(JsonView jsonValue) { *this = jsonValue; }

AutoScalingGroupConfiguration& AutoScalingGroupConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityWaitTimeoutSeconds")) {
    m_capacityWaitTimeoutSeconds = jsonValue.GetInteger("capacityWaitTimeoutSeconds");
    m_capacityWaitTimeoutSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoScalingGroupConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_capacityWaitTimeoutSecondsHasBeenSet) {
    payload.WithInteger("capacityWaitTimeoutSeconds", m_capacityWaitTimeoutSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
