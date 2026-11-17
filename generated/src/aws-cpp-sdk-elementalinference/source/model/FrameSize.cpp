/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FrameSize.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FrameSize::FrameSize(JsonView jsonValue) { *this = jsonValue; }

FrameSize& FrameSize::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("widthPixels")) {
    m_widthPixels = jsonValue.GetInteger("widthPixels");
    m_widthPixelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("heightPixels")) {
    m_heightPixels = jsonValue.GetInteger("heightPixels");
    m_heightPixelsHasBeenSet = true;
  }
  return *this;
}

JsonValue FrameSize::Jsonize() const {
  JsonValue payload;

  if (m_widthPixelsHasBeenSet) {
    payload.WithInteger("widthPixels", m_widthPixels);
  }

  if (m_heightPixelsHasBeenSet) {
    payload.WithInteger("heightPixels", m_heightPixels);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
