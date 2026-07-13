/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AzureConnectorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

AzureConnectorConfiguration::AzureConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

AzureConnectorConfiguration& AzureConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tenantIdentifier")) {
    m_tenantIdentifier = jsonValue.GetString("tenantIdentifier");
    m_tenantIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientIdentifier")) {
    m_clientIdentifier = jsonValue.GetString("clientIdentifier");
    m_clientIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_tenantIdentifierHasBeenSet) {
    payload.WithString("tenantIdentifier", m_tenantIdentifier);
  }

  if (m_clientIdentifierHasBeenSet) {
    payload.WithString("clientIdentifier", m_clientIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
