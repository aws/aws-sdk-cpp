/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ExporterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

ExporterConfiguration::ExporterConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExporterConfiguration& ExporterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("openSearchConfiguration")) {
    m_openSearchConfiguration = jsonValue.GetObject("openSearchConfiguration");
    m_openSearchConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExporterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_openSearchConfigurationHasBeenSet) {
    payload.WithObject("openSearchConfiguration", m_openSearchConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
