/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/Source.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

Source::Source(JsonView jsonValue) { *this = jsonValue; }

Source& Source::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eksConfiguration")) {
    m_eksConfiguration = jsonValue.GetObject("eksConfiguration");
    m_eksConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcConfiguration")) {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");
    m_vpcConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Source::Jsonize() const {
  JsonValue payload;

  if (m_eksConfigurationHasBeenSet) {
    payload.WithObject("eksConfiguration", m_eksConfiguration.Jsonize());
  }

  if (m_vpcConfigurationHasBeenSet) {
    payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
