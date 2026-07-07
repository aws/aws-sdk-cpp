/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ContainerImageMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ContainerImageMetadata::ContainerImageMetadata(JsonView jsonValue) { *this = jsonValue; }

ContainerImageMetadata& ContainerImageMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageTags")) {
    Aws::Utils::Array<JsonView> imageTagsJsonList = jsonValue.GetArray("imageTags");
    for (unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex) {
      m_imageTags.push_back(imageTagsJsonList[imageTagsIndex].AsString());
    }
    m_imageTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imagePulledAt")) {
    m_imagePulledAt = jsonValue.GetDouble("imagePulledAt");
    m_imagePulledAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastInUseAt")) {
    m_lastInUseAt = jsonValue.GetDouble("lastInUseAt");
    m_lastInUseAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inUseCount")) {
    m_inUseCount = jsonValue.GetInt64("inUseCount");
    m_inUseCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerImageMetadata::Jsonize() const {
  JsonValue payload;

  if (m_imageTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> imageTagsJsonList(m_imageTags.size());
    for (unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex) {
      imageTagsJsonList[imageTagsIndex].AsString(m_imageTags[imageTagsIndex]);
    }
    payload.WithArray("imageTags", std::move(imageTagsJsonList));
  }

  if (m_imagePulledAtHasBeenSet) {
    payload.WithDouble("imagePulledAt", m_imagePulledAt.SecondsWithMSPrecision());
  }

  if (m_lastInUseAtHasBeenSet) {
    payload.WithDouble("lastInUseAt", m_lastInUseAt.SecondsWithMSPrecision());
  }

  if (m_inUseCountHasBeenSet) {
    payload.WithInt64("inUseCount", m_inUseCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
