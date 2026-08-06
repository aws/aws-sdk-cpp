/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EphemeralBlockDeviceMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EphemeralBlockDeviceMapping::EphemeralBlockDeviceMapping(JsonView jsonValue) { *this = jsonValue; }

EphemeralBlockDeviceMapping& EphemeralBlockDeviceMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deviceName")) {
    m_deviceName = jsonValue.GetString("deviceName");
    m_deviceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("virtualName")) {
    m_virtualName = jsonValue.GetString("virtualName");
    m_virtualNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ebs")) {
    m_ebs = jsonValue.GetObject("ebs");
    m_ebsHasBeenSet = true;
  }
  return *this;
}

JsonValue EphemeralBlockDeviceMapping::Jsonize() const {
  JsonValue payload;

  if (m_deviceNameHasBeenSet) {
    payload.WithString("deviceName", m_deviceName);
  }

  if (m_virtualNameHasBeenSet) {
    payload.WithString("virtualName", m_virtualName);
  }

  if (m_ebsHasBeenSet) {
    payload.WithObject("ebs", m_ebs.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
