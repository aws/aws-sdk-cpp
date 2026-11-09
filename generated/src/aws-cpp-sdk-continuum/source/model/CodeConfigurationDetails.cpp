/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/CodeConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

CodeConfigurationDetails::CodeConfigurationDetails(JsonView jsonValue) { *this = jsonValue; }

CodeConfigurationDetails& CodeConfigurationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("collectorDetails")) {
    m_collectorDetails = jsonValue.GetObject("collectorDetails");
    m_collectorDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceConfiguration")) {
    m_sourceConfiguration = jsonValue.GetObject("sourceConfiguration");
    m_sourceConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentConfiguration")) {
    m_environmentConfiguration = jsonValue.GetObject("environmentConfiguration");
    m_environmentConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestScan")) {
    m_latestScan = jsonValue.GetObject("latestScan");
    m_latestScanHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeConfigurationDetails::Jsonize() const {
  JsonValue payload;

  if (m_collectorDetailsHasBeenSet) {
    payload.WithObject("collectorDetails", m_collectorDetails.Jsonize());
  }

  if (m_sourceConfigurationHasBeenSet) {
    payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());
  }

  if (m_environmentConfigurationHasBeenSet) {
    payload.WithObject("environmentConfiguration", m_environmentConfiguration.Jsonize());
  }

  if (m_latestScanHasBeenSet) {
    payload.WithObject("latestScan", m_latestScan.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
