/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/MediaTailorPlaybackConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IVS {
namespace Model {

MediaTailorPlaybackConfiguration::MediaTailorPlaybackConfiguration(JsonView jsonValue) { *this = jsonValue; }

MediaTailorPlaybackConfiguration& MediaTailorPlaybackConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("playbackConfigurationArn")) {
    m_playbackConfigurationArn = jsonValue.GetString("playbackConfigurationArn");
    m_playbackConfigurationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaTailorPlaybackConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_playbackConfigurationArnHasBeenSet) {
    payload.WithString("playbackConfigurationArn", m_playbackConfigurationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
