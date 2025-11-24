/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisvideo/model/StreamStorageConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisVideo {
namespace Model {

StreamStorageConfiguration::StreamStorageConfiguration(JsonView jsonValue) { *this = jsonValue; }

StreamStorageConfiguration& StreamStorageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DefaultStorageTier")) {
    m_defaultStorageTier = DefaultStorageTierMapper::GetDefaultStorageTierForName(jsonValue.GetString("DefaultStorageTier"));
    m_defaultStorageTierHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamStorageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_defaultStorageTierHasBeenSet) {
    payload.WithString("DefaultStorageTier", DefaultStorageTierMapper::GetNameForDefaultStorageTier(m_defaultStorageTier));
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
