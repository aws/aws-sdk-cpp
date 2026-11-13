/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DomainOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

DomainOverride::DomainOverride(JsonView jsonValue) { *this = jsonValue; }

DomainOverride& DomainOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("default")) {
    m_defaultDomain = jsonValue.GetString("default");
    m_defaultDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alternateDomains")) {
    Aws::Utils::Array<JsonView> alternateDomainsJsonList = jsonValue.GetArray("alternateDomains");
    for (unsigned alternateDomainsIndex = 0; alternateDomainsIndex < alternateDomainsJsonList.GetLength(); ++alternateDomainsIndex) {
      m_alternateDomains.push_back(alternateDomainsJsonList[alternateDomainsIndex].AsString());
    }
    m_alternateDomainsHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainOverride::Jsonize() const {
  JsonValue payload;

  if (m_defaultDomainHasBeenSet) {
    payload.WithString("default", m_defaultDomain);
  }

  if (m_alternateDomainsHasBeenSet) {
    Aws::Utils::Array<JsonValue> alternateDomainsJsonList(m_alternateDomains.size());
    for (unsigned alternateDomainsIndex = 0; alternateDomainsIndex < alternateDomainsJsonList.GetLength(); ++alternateDomainsIndex) {
      alternateDomainsJsonList[alternateDomainsIndex].AsString(m_alternateDomains[alternateDomainsIndex]);
    }
    payload.WithArray("alternateDomains", std::move(alternateDomainsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
