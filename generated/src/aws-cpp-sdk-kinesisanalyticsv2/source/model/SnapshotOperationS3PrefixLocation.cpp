/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationS3PrefixLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SnapshotOperationS3PrefixLocation::SnapshotOperationS3PrefixLocation(JsonView jsonValue) { *this = jsonValue; }

SnapshotOperationS3PrefixLocation& SnapshotOperationS3PrefixLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BucketARN")) {
    m_bucketARN = jsonValue.GetString("BucketARN");
    m_bucketARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyPrefix")) {
    m_keyPrefix = jsonValue.GetString("KeyPrefix");
    m_keyPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportedPrefix")) {
    m_exportedPrefix = jsonValue.GetString("ExportedPrefix");
    m_exportedPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotOperationS3PrefixLocation::Jsonize() const {
  JsonValue payload;

  if (m_bucketARNHasBeenSet) {
    payload.WithString("BucketARN", m_bucketARN);
  }

  if (m_keyPrefixHasBeenSet) {
    payload.WithString("KeyPrefix", m_keyPrefix);
  }

  if (m_exportedPrefixHasBeenSet) {
    payload.WithString("ExportedPrefix", m_exportedPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
