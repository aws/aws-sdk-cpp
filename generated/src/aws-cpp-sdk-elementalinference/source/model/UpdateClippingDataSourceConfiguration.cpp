/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/UpdateClippingDataSourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

UpdateClippingDataSourceConfiguration::UpdateClippingDataSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

UpdateClippingDataSourceConfiguration& UpdateClippingDataSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outputName")) {
    m_outputName = jsonValue.GetString("outputName");
    m_outputNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSourceConfiguration")) {
    m_dataSourceConfiguration = jsonValue.GetObject("dataSourceConfiguration");
    m_dataSourceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateClippingDataSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_outputNameHasBeenSet) {
    payload.WithString("outputName", m_outputName);
  }

  if (m_dataSourceConfigurationHasBeenSet) {
    payload.WithObject("dataSourceConfiguration", m_dataSourceConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
