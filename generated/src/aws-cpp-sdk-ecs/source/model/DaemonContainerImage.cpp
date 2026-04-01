/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonContainerImage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonContainerImage::DaemonContainerImage(JsonView jsonValue) { *this = jsonValue; }

DaemonContainerImage& DaemonContainerImage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("containerName")) {
    m_containerName = jsonValue.GetString("containerName");
    m_containerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageDigest")) {
    m_imageDigest = jsonValue.GetString("imageDigest");
    m_imageDigestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("image")) {
    m_image = jsonValue.GetString("image");
    m_imageHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonContainerImage::Jsonize() const {
  JsonValue payload;

  if (m_containerNameHasBeenSet) {
    payload.WithString("containerName", m_containerName);
  }

  if (m_imageDigestHasBeenSet) {
    payload.WithString("imageDigest", m_imageDigest);
  }

  if (m_imageHasBeenSet) {
    payload.WithString("image", m_image);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
