/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConnectorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {

ConnectorSummary::ConnectorSummary(JsonView jsonValue) { *this = jsonValue; }

ConnectorSummary& ConnectorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = ProviderMapper::GetProviderForName(jsonValue.GetString("provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tenantIdentifier")) {
    m_tenantIdentifier = jsonValue.GetString("tenantIdentifier");
    m_tenantIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTime")) {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", ProviderMapper::GetNameForProvider(m_provider));
  }

  if (m_tenantIdentifierHasBeenSet) {
    payload.WithString("tenantIdentifier", m_tenantIdentifier);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
