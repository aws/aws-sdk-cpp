/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/OutputConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

OutputConfig::OutputConfig(JsonView jsonValue) { *this = jsonValue; }

OutputConfig& OutputConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cropping")) {
    m_cropping = jsonValue.GetObject("cropping");
    m_croppingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clipping")) {
    m_clipping = jsonValue.GetObject("clipping");
    m_clippingHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputConfig::Jsonize() const {
  JsonValue payload;

  if (m_croppingHasBeenSet) {
    payload.WithObject("cropping", m_cropping.Jsonize());
  }

  if (m_clippingHasBeenSet) {
    payload.WithObject("clipping", m_clipping.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
