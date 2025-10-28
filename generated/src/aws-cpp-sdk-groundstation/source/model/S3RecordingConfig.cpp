/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/S3RecordingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

S3RecordingConfig::S3RecordingConfig(JsonView jsonValue) { *this = jsonValue; }

S3RecordingConfig& S3RecordingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucketArn")) {
    m_bucketArn = jsonValue.GetString("bucketArn");
    m_bucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("prefix")) {
    m_prefix = jsonValue.GetString("prefix");
    m_prefixHasBeenSet = true;
  }
  return *this;
}

JsonValue S3RecordingConfig::Jsonize() const {
  JsonValue payload;

  if (m_bucketArnHasBeenSet) {
    payload.WithString("bucketArn", m_bucketArn);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_prefixHasBeenSet) {
    payload.WithString("prefix", m_prefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
