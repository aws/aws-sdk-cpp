/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationLocationDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SnapshotOperationLocationDescription::SnapshotOperationLocationDescription(JsonView jsonValue) { *this = jsonValue; }

SnapshotOperationLocationDescription& SnapshotOperationLocationDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LocationType")) {
    m_locationType = StorageLocationTypeMapper::GetStorageLocationTypeForName(jsonValue.GetString("LocationType"));
    m_locationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3PrefixLocation")) {
    m_s3PrefixLocation = jsonValue.GetObject("S3PrefixLocation");
    m_s3PrefixLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotOperationLocationDescription::Jsonize() const {
  JsonValue payload;

  if (m_locationTypeHasBeenSet) {
    payload.WithString("LocationType", StorageLocationTypeMapper::GetNameForStorageLocationType(m_locationType));
  }

  if (m_s3PrefixLocationHasBeenSet) {
    payload.WithObject("S3PrefixLocation", m_s3PrefixLocation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
