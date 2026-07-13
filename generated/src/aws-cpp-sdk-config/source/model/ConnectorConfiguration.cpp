/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConnectorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

ConnectorConfiguration::ConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConnectorConfiguration& ConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("azure")) {
    m_azure = jsonValue.GetObject("azure");
    m_azureHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_azureHasBeenSet) {
    payload.WithObject("azure", m_azure.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
