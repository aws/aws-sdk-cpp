/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationInfoDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SnapshotOperationInfoDetails::SnapshotOperationInfoDetails(JsonView jsonValue) { *this = jsonValue; }

SnapshotOperationInfoDetails& SnapshotOperationInfoDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SnapshotOperationId")) {
    m_snapshotOperationId = jsonValue.GetString("SnapshotOperationId");
    m_snapshotOperationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotOperation")) {
    m_snapshotOperation = SnapshotOperationMapper::GetSnapshotOperationForName(jsonValue.GetString("SnapshotOperation"));
    m_snapshotOperationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotOperationStatus")) {
    m_snapshotOperationStatus =
        SnapshotOperationStatusMapper::GetSnapshotOperationStatusForName(jsonValue.GetString("SnapshotOperationStatus"));
    m_snapshotOperationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotArn")) {
    m_snapshotArn = jsonValue.GetString("SnapshotArn");
    m_snapshotArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceEncryptionConfigurationDescription")) {
    m_sourceEncryptionConfigurationDescription = jsonValue.GetObject("SourceEncryptionConfigurationDescription");
    m_sourceEncryptionConfigurationDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationEncryptionConfigurationDescription")) {
    m_destinationEncryptionConfigurationDescription = jsonValue.GetObject("DestinationEncryptionConfigurationDescription");
    m_destinationEncryptionConfigurationDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotSourceLocationDescription")) {
    m_snapshotSourceLocationDescription = jsonValue.GetObject("SnapshotSourceLocationDescription");
    m_snapshotSourceLocationDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotDestinationLocationDescription")) {
    m_snapshotDestinationLocationDescription = jsonValue.GetObject("SnapshotDestinationLocationDescription");
    m_snapshotDestinationLocationDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationOperationDescription")) {
    m_applicationOperationDescription = jsonValue.GetObject("ApplicationOperationDescription");
    m_applicationOperationDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotOperationFailureDetails")) {
    m_snapshotOperationFailureDetails = jsonValue.GetObject("SnapshotOperationFailureDetails");
    m_snapshotOperationFailureDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotOperationInfoDetails::Jsonize() const {
  JsonValue payload;

  if (m_snapshotOperationIdHasBeenSet) {
    payload.WithString("SnapshotOperationId", m_snapshotOperationId);
  }

  if (m_snapshotOperationHasBeenSet) {
    payload.WithString("SnapshotOperation", SnapshotOperationMapper::GetNameForSnapshotOperation(m_snapshotOperation));
  }

  if (m_snapshotOperationStatusHasBeenSet) {
    payload.WithString("SnapshotOperationStatus",
                       SnapshotOperationStatusMapper::GetNameForSnapshotOperationStatus(m_snapshotOperationStatus));
  }

  if (m_snapshotArnHasBeenSet) {
    payload.WithString("SnapshotArn", m_snapshotArn);
  }

  if (m_sourceEncryptionConfigurationDescriptionHasBeenSet) {
    payload.WithObject("SourceEncryptionConfigurationDescription", m_sourceEncryptionConfigurationDescription.Jsonize());
  }

  if (m_destinationEncryptionConfigurationDescriptionHasBeenSet) {
    payload.WithObject("DestinationEncryptionConfigurationDescription", m_destinationEncryptionConfigurationDescription.Jsonize());
  }

  if (m_snapshotSourceLocationDescriptionHasBeenSet) {
    payload.WithObject("SnapshotSourceLocationDescription", m_snapshotSourceLocationDescription.Jsonize());
  }

  if (m_snapshotDestinationLocationDescriptionHasBeenSet) {
    payload.WithObject("SnapshotDestinationLocationDescription", m_snapshotDestinationLocationDescription.Jsonize());
  }

  if (m_applicationOperationDescriptionHasBeenSet) {
    payload.WithObject("ApplicationOperationDescription", m_applicationOperationDescription.Jsonize());
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_snapshotOperationFailureDetailsHasBeenSet) {
    payload.WithObject("SnapshotOperationFailureDetails", m_snapshotOperationFailureDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
