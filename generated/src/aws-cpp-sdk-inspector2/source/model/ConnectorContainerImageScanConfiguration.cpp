/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ConnectorContainerImageScanConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ConnectorContainerImageScanConfiguration::ConnectorContainerImageScanConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConnectorContainerImageScanConfiguration& ConnectorContainerImageScanConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pushDuration")) {
    m_pushDuration = ContainerImageRescanDurationMapper::GetContainerImageRescanDurationForName(jsonValue.GetString("pushDuration"));
    m_pushDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pullDuration")) {
    m_pullDuration =
        ContainerImagePullDateRescanDurationMapper::GetContainerImagePullDateRescanDurationForName(jsonValue.GetString("pullDuration"));
    m_pullDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorContainerImageScanConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_pushDurationHasBeenSet) {
    payload.WithString("pushDuration", ContainerImageRescanDurationMapper::GetNameForContainerImageRescanDuration(m_pushDuration));
  }

  if (m_pullDurationHasBeenSet) {
    payload.WithString("pullDuration",
                       ContainerImagePullDateRescanDurationMapper::GetNameForContainerImagePullDateRescanDuration(m_pullDuration));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
