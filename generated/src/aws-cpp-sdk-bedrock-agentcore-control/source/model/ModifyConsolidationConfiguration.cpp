﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ModifyConsolidationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ModifyConsolidationConfiguration::ModifyConsolidationConfiguration(JsonView jsonValue) { *this = jsonValue; }

ModifyConsolidationConfiguration& ModifyConsolidationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("customConsolidationConfiguration")) {
    m_customConsolidationConfiguration = jsonValue.GetObject("customConsolidationConfiguration");
    m_customConsolidationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ModifyConsolidationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_customConsolidationConfigurationHasBeenSet) {
    payload.WithObject("customConsolidationConfiguration", m_customConsolidationConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
