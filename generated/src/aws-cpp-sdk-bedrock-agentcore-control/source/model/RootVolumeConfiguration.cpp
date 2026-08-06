/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RootVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RootVolumeConfiguration::RootVolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

RootVolumeConfiguration& RootVolumeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("volumeType")) {
    m_volumeType = EbsVolumeTypeMapper::GetEbsVolumeTypeForName(jsonValue.GetString("volumeType"));
    m_volumeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iops")) {
    m_iops = jsonValue.GetInteger("iops");
    m_iopsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("throughput")) {
    m_throughput = jsonValue.GetInteger("throughput");
    m_throughputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encrypted")) {
    m_encrypted = jsonValue.GetBool("encrypted");
    m_encryptedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("freeSpaceGiB")) {
    m_freeSpaceGiB = jsonValue.GetInteger("freeSpaceGiB");
    m_freeSpaceGiBHasBeenSet = true;
  }
  return *this;
}

JsonValue RootVolumeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_volumeTypeHasBeenSet) {
    payload.WithString("volumeType", EbsVolumeTypeMapper::GetNameForEbsVolumeType(m_volumeType));
  }

  if (m_iopsHasBeenSet) {
    payload.WithInteger("iops", m_iops);
  }

  if (m_throughputHasBeenSet) {
    payload.WithInteger("throughput", m_throughput);
  }

  if (m_encryptedHasBeenSet) {
    payload.WithBool("encrypted", m_encrypted);
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_freeSpaceGiBHasBeenSet) {
    payload.WithInteger("freeSpaceGiB", m_freeSpaceGiB);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
