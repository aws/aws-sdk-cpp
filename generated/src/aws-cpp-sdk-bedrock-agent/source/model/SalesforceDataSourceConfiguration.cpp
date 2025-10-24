﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SalesforceDataSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

SalesforceDataSourceConfiguration::SalesforceDataSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

SalesforceDataSourceConfiguration& SalesforceDataSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceConfiguration")) {
    m_sourceConfiguration = jsonValue.GetObject("sourceConfiguration");
    m_sourceConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crawlerConfiguration")) {
    m_crawlerConfiguration = jsonValue.GetObject("crawlerConfiguration");
    m_crawlerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SalesforceDataSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceConfigurationHasBeenSet) {
    payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());
  }

  if (m_crawlerConfigurationHasBeenSet) {
    payload.WithObject("crawlerConfiguration", m_crawlerConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
