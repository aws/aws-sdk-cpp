/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInfoDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SnapshotInfoDetails::SnapshotInfoDetails(JsonView jsonValue) { *this = jsonValue; }

SnapshotInfoDetails& SnapshotInfoDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SnapshotName")) {
    m_snapshotName = jsonValue.GetString("SnapshotName");
    m_snapshotNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotArn")) {
    m_snapshotArn = jsonValue.GetString("SnapshotArn");
    m_snapshotArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotDescription")) {
    m_snapshotDescription = jsonValue.GetString("SnapshotDescription");
    m_snapshotDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotStatus")) {
    m_snapshotStatus = SnapshotStatusMapper::GetSnapshotStatusForName(jsonValue.GetString("SnapshotStatus"));
    m_snapshotStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotCreationTimestamp")) {
    m_snapshotCreationTimestamp = jsonValue.GetDouble("SnapshotCreationTimestamp");
    m_snapshotCreationTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuntimeEnvironment")) {
    m_runtimeEnvironment = RuntimeEnvironmentMapper::GetRuntimeEnvironmentForName(jsonValue.GetString("RuntimeEnvironment"));
    m_runtimeEnvironmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotSizeInBytes")) {
    m_snapshotSizeInBytes = jsonValue.GetInt64("SnapshotSizeInBytes");
    m_snapshotSizeInBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotEncryptionConfigurationDescription")) {
    m_snapshotEncryptionConfigurationDescription = jsonValue.GetObject("SnapshotEncryptionConfigurationDescription");
    m_snapshotEncryptionConfigurationDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotInitiator")) {
    m_snapshotInitiator = SnapshotInitiatorMapper::GetSnapshotInitiatorForName(jsonValue.GetString("SnapshotInitiator"));
    m_snapshotInitiatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotInitiatorOperation")) {
    m_snapshotInitiatorOperation =
        SnapshotInitiatorOperationMapper::GetSnapshotInitiatorOperationForName(jsonValue.GetString("SnapshotInitiatorOperation"));
    m_snapshotInitiatorOperationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotSourceDescription")) {
    m_snapshotSourceDescription = jsonValue.GetObject("SnapshotSourceDescription");
    m_snapshotSourceDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotFormat")) {
    m_snapshotFormat = SnapshotFormatMapper::GetSnapshotFormatForName(jsonValue.GetString("SnapshotFormat"));
    m_snapshotFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotInfoDetails::Jsonize() const {
  JsonValue payload;

  if (m_snapshotNameHasBeenSet) {
    payload.WithString("SnapshotName", m_snapshotName);
  }

  if (m_snapshotArnHasBeenSet) {
    payload.WithString("SnapshotArn", m_snapshotArn);
  }

  if (m_snapshotDescriptionHasBeenSet) {
    payload.WithString("SnapshotDescription", m_snapshotDescription);
  }

  if (m_snapshotStatusHasBeenSet) {
    payload.WithString("SnapshotStatus", SnapshotStatusMapper::GetNameForSnapshotStatus(m_snapshotStatus));
  }

  if (m_snapshotCreationTimestampHasBeenSet) {
    payload.WithDouble("SnapshotCreationTimestamp", m_snapshotCreationTimestamp.SecondsWithMSPrecision());
  }

  if (m_runtimeEnvironmentHasBeenSet) {
    payload.WithString("RuntimeEnvironment", RuntimeEnvironmentMapper::GetNameForRuntimeEnvironment(m_runtimeEnvironment));
  }

  if (m_snapshotSizeInBytesHasBeenSet) {
    payload.WithInt64("SnapshotSizeInBytes", m_snapshotSizeInBytes);
  }

  if (m_snapshotEncryptionConfigurationDescriptionHasBeenSet) {
    payload.WithObject("SnapshotEncryptionConfigurationDescription", m_snapshotEncryptionConfigurationDescription.Jsonize());
  }

  if (m_snapshotInitiatorHasBeenSet) {
    payload.WithString("SnapshotInitiator", SnapshotInitiatorMapper::GetNameForSnapshotInitiator(m_snapshotInitiator));
  }

  if (m_snapshotInitiatorOperationHasBeenSet) {
    payload.WithString("SnapshotInitiatorOperation",
                       SnapshotInitiatorOperationMapper::GetNameForSnapshotInitiatorOperation(m_snapshotInitiatorOperation));
  }

  if (m_snapshotSourceDescriptionHasBeenSet) {
    payload.WithObject("SnapshotSourceDescription", m_snapshotSourceDescription.Jsonize());
  }

  if (m_snapshotFormatHasBeenSet) {
    payload.WithString("SnapshotFormat", SnapshotFormatMapper::GetNameForSnapshotFormat(m_snapshotFormat));
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
