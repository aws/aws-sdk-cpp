/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/VolumeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

VolumeConfig::VolumeConfig(JsonView jsonValue) { *this = jsonValue; }

VolumeConfig& VolumeConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VolumeSizeInGb")) {
    m_volumeSizeInGb = jsonValue.GetInteger("VolumeSizeInGb");
    m_volumeSizeInGbHasBeenSet = true;
  }
  return *this;
}

JsonValue VolumeConfig::Jsonize() const {
  JsonValue payload;

  if (m_volumeSizeInGbHasBeenSet) {
    payload.WithInteger("VolumeSizeInGb", m_volumeSizeInGb);
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
