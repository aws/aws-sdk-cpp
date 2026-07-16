/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ConnectorScanConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ConnectorScanConfiguration::ConnectorScanConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConnectorScanConfiguration& ConnectorScanConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("containerImageScanning")) {
    m_containerImageScanning = jsonValue.GetObject("containerImageScanning");
    m_containerImageScanningHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorScanConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_containerImageScanningHasBeenSet) {
    payload.WithObject("containerImageScanning", m_containerImageScanning.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
