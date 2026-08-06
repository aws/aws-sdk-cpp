/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LaunchTemplateSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LaunchTemplateSource::LaunchTemplateSource(JsonView jsonValue) { *this = jsonValue; }

LaunchTemplateSource& LaunchTemplateSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("launchParameters")) {
    m_launchParameters = jsonValue.GetObject("launchParameters");
    m_launchParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue LaunchTemplateSource::Jsonize() const {
  JsonValue payload;

  if (m_launchParametersHasBeenSet) {
    payload.WithObject("launchParameters", m_launchParameters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
