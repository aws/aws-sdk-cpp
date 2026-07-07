/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/AzureScopeConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

AzureScopeConfigurationInput::AzureScopeConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

AzureScopeConfigurationInput& AzureScopeConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vmScanning")) {
    m_vmScanning = jsonValue.GetObject("vmScanning");
    m_vmScanningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerImageScanning")) {
    m_containerImageScanning = jsonValue.GetObject("containerImageScanning");
    m_containerImageScanningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serverlessScanning")) {
    m_serverlessScanning = jsonValue.GetObject("serverlessScanning");
    m_serverlessScanningHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureScopeConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_vmScanningHasBeenSet) {
    payload.WithObject("vmScanning", m_vmScanning.Jsonize());
  }

  if (m_containerImageScanningHasBeenSet) {
    payload.WithObject("containerImageScanning", m_containerImageScanning.Jsonize());
  }

  if (m_serverlessScanningHasBeenSet) {
    payload.WithObject("serverlessScanning", m_serverlessScanning.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
