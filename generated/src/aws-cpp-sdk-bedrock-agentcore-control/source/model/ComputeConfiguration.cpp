/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ComputeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ComputeConfiguration::ComputeConfiguration(JsonView jsonValue) { *this = jsonValue; }

ComputeConfiguration& ComputeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ec2Configuration")) {
    m_ec2Configuration = jsonValue.GetObject("ec2Configuration");
    m_ec2ConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_ec2ConfigurationHasBeenSet) {
    payload.WithObject("ec2Configuration", m_ec2Configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
