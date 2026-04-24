/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-managed-integrations/model/WiFiSimpleSetupConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {

WiFiSimpleSetupConfiguration::WiFiSimpleSetupConfiguration(JsonView jsonValue) { *this = jsonValue; }

WiFiSimpleSetupConfiguration& WiFiSimpleSetupConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EnableAsProvisioner")) {
    m_enableAsProvisioner = jsonValue.GetBool("EnableAsProvisioner");
    m_enableAsProvisionerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnableAsProvisionee")) {
    m_enableAsProvisionee = jsonValue.GetBool("EnableAsProvisionee");
    m_enableAsProvisioneeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TimeoutInMinutes")) {
    m_timeoutInMinutes = jsonValue.GetInteger("TimeoutInMinutes");
    m_timeoutInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue WiFiSimpleSetupConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enableAsProvisionerHasBeenSet) {
    payload.WithBool("EnableAsProvisioner", m_enableAsProvisioner);
  }

  if (m_enableAsProvisioneeHasBeenSet) {
    payload.WithBool("EnableAsProvisionee", m_enableAsProvisionee);
  }

  if (m_timeoutInMinutesHasBeenSet) {
    payload.WithInteger("TimeoutInMinutes", m_timeoutInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
