/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EbsVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EbsVolumeConfiguration::EbsVolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

EbsVolumeConfiguration& EbsVolumeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sizeGiB")) {
    m_sizeGiB = jsonValue.GetInteger("sizeGiB");
    m_sizeGiBHasBeenSet = true;
  }
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
  if (jsonValue.ValueExists("snapshotId")) {
    m_snapshotId = jsonValue.GetString("snapshotId");
    m_snapshotIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EbsVolumeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_sizeGiBHasBeenSet) {
    payload.WithInteger("sizeGiB", m_sizeGiB);
  }

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

  if (m_snapshotIdHasBeenSet) {
    payload.WithString("snapshotId", m_snapshotId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
