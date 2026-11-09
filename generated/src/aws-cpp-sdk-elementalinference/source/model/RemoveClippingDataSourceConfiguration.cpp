/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/RemoveClippingDataSourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

RemoveClippingDataSourceConfiguration::RemoveClippingDataSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

RemoveClippingDataSourceConfiguration& RemoveClippingDataSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outputName")) {
    m_outputName = jsonValue.GetString("outputName");
    m_outputNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoveClippingDataSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_outputNameHasBeenSet) {
    payload.WithString("outputName", m_outputName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
