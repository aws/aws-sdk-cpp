/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RFTConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

RFTConfig::RFTConfig(JsonView jsonValue) { *this = jsonValue; }

RFTConfig& RFTConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("graderConfig")) {
    m_graderConfig = jsonValue.GetObject("graderConfig");
    m_graderConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hyperParameters")) {
    m_hyperParameters = jsonValue.GetObject("hyperParameters");
    m_hyperParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue RFTConfig::Jsonize() const {
  JsonValue payload;

  if (m_graderConfigHasBeenSet) {
    payload.WithObject("graderConfig", m_graderConfig.Jsonize());
  }

  if (m_hyperParametersHasBeenSet) {
    payload.WithObject("hyperParameters", m_hyperParameters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
