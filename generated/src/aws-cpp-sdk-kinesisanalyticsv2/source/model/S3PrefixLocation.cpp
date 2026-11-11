/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/S3PrefixLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

S3PrefixLocation::S3PrefixLocation(JsonView jsonValue) { *this = jsonValue; }

S3PrefixLocation& S3PrefixLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BucketARN")) {
    m_bucketARN = jsonValue.GetString("BucketARN");
    m_bucketARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyPrefix")) {
    m_keyPrefix = jsonValue.GetString("KeyPrefix");
    m_keyPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue S3PrefixLocation::Jsonize() const {
  JsonValue payload;

  if (m_bucketARNHasBeenSet) {
    payload.WithString("BucketARN", m_bucketARN);
  }

  if (m_keyPrefixHasBeenSet) {
    payload.WithString("KeyPrefix", m_keyPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
