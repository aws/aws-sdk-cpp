/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/OffsetConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

OffsetConfiguration::OffsetConfiguration(JsonView jsonValue) { *this = jsonValue; }

OffsetConfiguration& OffsetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OffsetParameter")) {
    m_offsetParameter = jsonValue.GetObject("OffsetParameter");
    m_offsetParameterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LimitParameter")) {
    m_limitParameter = jsonValue.GetObject("LimitParameter");
    m_limitParameterHasBeenSet = true;
  }
  return *this;
}

JsonValue OffsetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_offsetParameterHasBeenSet) {
    payload.WithObject("OffsetParameter", m_offsetParameter.Jsonize());
  }

  if (m_limitParameterHasBeenSet) {
    payload.WithObject("LimitParameter", m_limitParameter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
