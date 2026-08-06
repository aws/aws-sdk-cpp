/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LicenseSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LicenseSpecification::LicenseSpecification(JsonView jsonValue) { *this = jsonValue; }

LicenseSpecification& LicenseSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("licenseConfigurationArn")) {
    m_licenseConfigurationArn = jsonValue.GetString("licenseConfigurationArn");
    m_licenseConfigurationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LicenseSpecification::Jsonize() const {
  JsonValue payload;

  if (m_licenseConfigurationArnHasBeenSet) {
    payload.WithString("licenseConfigurationArn", m_licenseConfigurationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
