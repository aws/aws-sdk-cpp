/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ManagedKnowledgeBaseConnectorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {

ManagedKnowledgeBaseConnectorConfiguration::ManagedKnowledgeBaseConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

ManagedKnowledgeBaseConnectorConfiguration& ManagedKnowledgeBaseConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deletionProtectionConfiguration")) {
    m_deletionProtectionConfiguration = jsonValue.GetObject("deletionProtectionConfiguration");
    m_deletionProtectionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaExtractionConfiguration")) {
    m_mediaExtractionConfiguration = jsonValue.GetObject("mediaExtractionConfiguration");
    m_mediaExtractionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorParameters")) {
    m_connectorParameters = jsonValue.GetObject("connectorParameters");
    m_connectorParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedKnowledgeBaseConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_deletionProtectionConfigurationHasBeenSet) {
    payload.WithObject("deletionProtectionConfiguration", m_deletionProtectionConfiguration.Jsonize());
  }

  if (m_mediaExtractionConfigurationHasBeenSet) {
    payload.WithObject("mediaExtractionConfiguration", m_mediaExtractionConfiguration.Jsonize());
  }

  if (m_connectorParametersHasBeenSet) {
    if (!m_connectorParameters.View().IsNull()) {
      payload.WithObject("connectorParameters", JsonValue(m_connectorParameters.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
