/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/OpenSearchExporterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

OpenSearchExporterConfiguration::OpenSearchExporterConfiguration(JsonView jsonValue) { *this = jsonValue; }

OpenSearchExporterConfiguration& OpenSearchExporterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainArn")) {
    m_domainArn = jsonValue.GetString("domainArn");
    m_domainArnHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenSearchExporterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_domainArnHasBeenSet) {
    payload.WithString("domainArn", m_domainArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
