/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EphemeralEBSVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EphemeralEBSVolumeConfiguration::EphemeralEBSVolumeConfiguration(JsonView jsonValue) { *this = jsonValue; }

EphemeralEBSVolumeConfiguration& EphemeralEBSVolumeConfiguration::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("volumeSize")) {
    m_volumeSize = jsonValue.GetInteger("volumeSize");
    m_volumeSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("volumeInitializationRate")) {
    m_volumeInitializationRate = jsonValue.GetInteger("volumeInitializationRate");
    m_volumeInitializationRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ebsCardIndex")) {
    m_ebsCardIndex = jsonValue.GetInteger("ebsCardIndex");
    m_ebsCardIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue EphemeralEBSVolumeConfiguration::Jsonize() const {
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

  if (m_snapshotIdHasBeenSet) {
    payload.WithString("snapshotId", m_snapshotId);
  }

  if (m_volumeSizeHasBeenSet) {
    payload.WithInteger("volumeSize", m_volumeSize);
  }

  if (m_volumeInitializationRateHasBeenSet) {
    payload.WithInteger("volumeInitializationRate", m_volumeInitializationRate);
  }

  if (m_ebsCardIndexHasBeenSet) {
    payload.WithInteger("ebsCardIndex", m_ebsCardIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
