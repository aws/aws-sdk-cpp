/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/EnvironmentNetworkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

EnvironmentNetworkConfiguration::EnvironmentNetworkConfiguration(JsonView jsonValue) { *this = jsonValue; }

EnvironmentNetworkConfiguration& EnvironmentNetworkConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowedDomains")) {
    Aws::Utils::Array<JsonView> allowedDomainsJsonList = jsonValue.GetArray("allowedDomains");
    for (unsigned allowedDomainsIndex = 0; allowedDomainsIndex < allowedDomainsJsonList.GetLength(); ++allowedDomainsIndex) {
      m_allowedDomains.push_back(allowedDomainsJsonList[allowedDomainsIndex].AsString());
    }
    m_allowedDomainsHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentNetworkConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_allowedDomainsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedDomainsJsonList(m_allowedDomains.size());
    for (unsigned allowedDomainsIndex = 0; allowedDomainsIndex < allowedDomainsJsonList.GetLength(); ++allowedDomainsIndex) {
      allowedDomainsJsonList[allowedDomainsIndex].AsString(m_allowedDomains[allowedDomainsIndex]);
    }
    payload.WithArray("allowedDomains", std::move(allowedDomainsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
