/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/FilesystemConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

FilesystemConfiguration::FilesystemConfiguration(JsonView jsonValue) { *this = jsonValue; }

FilesystemConfiguration& FilesystemConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionStorage")) {
    m_sessionStorage = jsonValue.GetObject("sessionStorage");
    m_sessionStorageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3FilesAccessPoint")) {
    m_s3FilesAccessPoint = jsonValue.GetObject("s3FilesAccessPoint");
    m_s3FilesAccessPointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("efsAccessPoint")) {
    m_efsAccessPoint = jsonValue.GetObject("efsAccessPoint");
    m_efsAccessPointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityProviderVolume")) {
    m_capacityProviderVolume = jsonValue.GetObject("capacityProviderVolume");
    m_capacityProviderVolumeHasBeenSet = true;
  }
  return *this;
}

JsonValue FilesystemConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sessionStorageHasBeenSet) {
    payload.WithObject("sessionStorage", m_sessionStorage.Jsonize());
  }

  if (m_s3FilesAccessPointHasBeenSet) {
    payload.WithObject("s3FilesAccessPoint", m_s3FilesAccessPoint.Jsonize());
  }

  if (m_efsAccessPointHasBeenSet) {
    payload.WithObject("efsAccessPoint", m_efsAccessPoint.Jsonize());
  }

  if (m_capacityProviderVolumeHasBeenSet) {
    payload.WithObject("capacityProviderVolume", m_capacityProviderVolume.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
