/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/EnvironmentS3IntegrationSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

EnvironmentS3IntegrationSource::EnvironmentS3IntegrationSource(JsonView jsonValue) { *this = jsonValue; }

EnvironmentS3IntegrationSource& EnvironmentS3IntegrationSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codePrefix")) {
    m_codePrefix = jsonValue.GetString("codePrefix");
    m_codePrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contextPrefix")) {
    m_contextPrefix = jsonValue.GetString("contextPrefix");
    m_contextPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentS3IntegrationSource::Jsonize() const {
  JsonValue payload;

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_codePrefixHasBeenSet) {
    payload.WithString("codePrefix", m_codePrefix);
  }

  if (m_contextPrefixHasBeenSet) {
    payload.WithString("contextPrefix", m_contextPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
