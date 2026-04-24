/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/S3FilesVolumeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

S3FilesVolumeConfiguration::S3FilesVolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3FilesVolumeConfiguration& S3FilesVolumeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fileSystemArn")) {
    m_fileSystemArn = jsonValue.GetString("fileSystemArn");
    m_fileSystemArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rootDirectory")) {
    m_rootDirectory = jsonValue.GetString("rootDirectory");
    m_rootDirectoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transitEncryptionPort")) {
    m_transitEncryptionPort = jsonValue.GetInteger("transitEncryptionPort");
    m_transitEncryptionPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessPointArn")) {
    m_accessPointArn = jsonValue.GetString("accessPointArn");
    m_accessPointArnHasBeenSet = true;
  }
  return *this;
}

JsonValue S3FilesVolumeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fileSystemArnHasBeenSet) {
    payload.WithString("fileSystemArn", m_fileSystemArn);
  }

  if (m_rootDirectoryHasBeenSet) {
    payload.WithString("rootDirectory", m_rootDirectory);
  }

  if (m_transitEncryptionPortHasBeenSet) {
    payload.WithInteger("transitEncryptionPort", m_transitEncryptionPort);
  }

  if (m_accessPointArnHasBeenSet) {
    payload.WithString("accessPointArn", m_accessPointArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
