/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/model/DisplayConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {

DisplayConfiguration::DisplayConfiguration(JsonView jsonValue) { *this = jsonValue; }

DisplayConfiguration& DisplayConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Resolution")) {
    m_resolution = jsonValue.GetObject("Resolution");
    m_resolutionHasBeenSet = true;
  }
  return *this;
}

JsonValue DisplayConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_resolutionHasBeenSet) {
    payload.WithObject("Resolution", m_resolution.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
