/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/entityresolution/model/CustomerProfilesIntegrationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EntityResolution {
namespace Model {

CustomerProfilesIntegrationConfig::CustomerProfilesIntegrationConfig(JsonView jsonValue) { *this = jsonValue; }

CustomerProfilesIntegrationConfig& CustomerProfilesIntegrationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainArn")) {
    m_domainArn = jsonValue.GetString("domainArn");
    m_domainArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("objectTypeArn")) {
    m_objectTypeArn = jsonValue.GetString("objectTypeArn");
    m_objectTypeArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerProfilesIntegrationConfig::Jsonize() const {
  JsonValue payload;

  if (m_domainArnHasBeenSet) {
    payload.WithString("domainArn", m_domainArn);
  }

  if (m_objectTypeArnHasBeenSet) {
    payload.WithString("objectTypeArn", m_objectTypeArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
