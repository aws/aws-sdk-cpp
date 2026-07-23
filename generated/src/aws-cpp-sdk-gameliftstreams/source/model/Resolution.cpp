/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/model/Resolution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {

Resolution::Resolution(JsonView jsonValue) { *this = jsonValue; }

Resolution& Resolution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Width")) {
    m_width = jsonValue.GetInteger("Width");
    m_widthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Height")) {
    m_height = jsonValue.GetInteger("Height");
    m_heightHasBeenSet = true;
  }
  return *this;
}

JsonValue Resolution::Jsonize() const {
  JsonValue payload;

  if (m_widthHasBeenSet) {
    payload.WithInteger("Width", m_width);
  }

  if (m_heightHasBeenSet) {
    payload.WithInteger("Height", m_height);
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
