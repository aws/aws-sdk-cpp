/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/S3BucketMountConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

S3BucketMountConfiguration::S3BucketMountConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3BucketMountConfiguration& S3BucketMountConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucket")) {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mountPath")) {
    m_mountPath = jsonValue.GetString("mountPath");
    m_mountPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("prefix")) {
    m_prefix = jsonValue.GetString("prefix");
    m_prefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketOwner")) {
    m_s3BucketOwner = jsonValue.GetString("s3BucketOwner");
    m_s3BucketOwnerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketRegion")) {
    m_s3BucketRegion = jsonValue.GetString("s3BucketRegion");
    m_s3BucketRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue S3BucketMountConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bucketHasBeenSet) {
    payload.WithString("bucket", m_bucket);
  }

  if (m_mountPathHasBeenSet) {
    payload.WithString("mountPath", m_mountPath);
  }

  if (m_prefixHasBeenSet) {
    payload.WithString("prefix", m_prefix);
  }

  if (m_s3BucketOwnerHasBeenSet) {
    payload.WithString("s3BucketOwner", m_s3BucketOwner);
  }

  if (m_s3BucketRegionHasBeenSet) {
    payload.WithString("s3BucketRegion", m_s3BucketRegion);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
