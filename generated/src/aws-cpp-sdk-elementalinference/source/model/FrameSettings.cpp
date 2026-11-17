/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FrameSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FrameSettings::FrameSettings(JsonView jsonValue) { *this = jsonValue; }

FrameSettings& FrameSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("frameSampling")) {
    m_frameSampling = jsonValue.GetObject("frameSampling");
    m_frameSamplingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("frameSize")) {
    m_frameSize = jsonValue.GetObject("frameSize");
    m_frameSizeHasBeenSet = true;
  }
  return *this;
}

JsonValue FrameSettings::Jsonize() const {
  JsonValue payload;

  if (m_frameSamplingHasBeenSet) {
    payload.WithObject("frameSampling", m_frameSampling.Jsonize());
  }

  if (m_frameSizeHasBeenSet) {
    payload.WithObject("frameSize", m_frameSize.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
