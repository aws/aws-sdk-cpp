/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/DatasetEnrichment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

DatasetEnrichment::DatasetEnrichment(JsonView jsonValue) { *this = jsonValue; }

DatasetEnrichment& DatasetEnrichment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("video")) {
    m_video = jsonValue.GetObject("video");
    m_videoHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetEnrichment::Jsonize() const {
  JsonValue payload;

  if (m_videoHasBeenSet) {
    payload.WithObject("video", m_video.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
