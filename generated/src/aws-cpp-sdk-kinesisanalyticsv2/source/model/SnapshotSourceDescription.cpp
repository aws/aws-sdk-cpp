/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SnapshotSourceDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SnapshotSourceDescription::SnapshotSourceDescription(JsonView jsonValue) { *this = jsonValue; }

SnapshotSourceDescription& SnapshotSourceDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3PrefixLocation")) {
    m_s3PrefixLocation = jsonValue.GetObject("S3PrefixLocation");
    m_s3PrefixLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceApplicationDescription")) {
    m_sourceApplicationDescription = jsonValue.GetObject("SourceApplicationDescription");
    m_sourceApplicationDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotSourceDescription::Jsonize() const {
  JsonValue payload;

  if (m_s3PrefixLocationHasBeenSet) {
    payload.WithObject("S3PrefixLocation", m_s3PrefixLocation.Jsonize());
  }

  if (m_sourceApplicationDescriptionHasBeenSet) {
    payload.WithObject("SourceApplicationDescription", m_sourceApplicationDescription.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
