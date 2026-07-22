/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

Destination::Destination(JsonView jsonValue) { *this = jsonValue; }

Destination& Destination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ampConfiguration")) {
    m_ampConfiguration = jsonValue.GetObject("ampConfiguration");
    m_ampConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudWatchConfiguration")) {
    m_cloudWatchConfiguration = jsonValue.GetObject("cloudWatchConfiguration");
    m_cloudWatchConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Destination::Jsonize() const {
  JsonValue payload;

  if (m_ampConfigurationHasBeenSet) {
    payload.WithObject("ampConfiguration", m_ampConfiguration.Jsonize());
  }

  if (m_cloudWatchConfigurationHasBeenSet) {
    payload.WithObject("cloudWatchConfiguration", m_cloudWatchConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
