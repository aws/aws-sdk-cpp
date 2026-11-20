/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DataRetentionStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

DataRetentionStorageConfiguration::DataRetentionStorageConfiguration(JsonView jsonValue) { *this = jsonValue; }

DataRetentionStorageConfiguration& DataRetentionStorageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketArn")) {
    m_s3BucketArn = jsonValue.GetString("s3BucketArn");
    m_s3BucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketOwner")) {
    m_s3BucketOwner = jsonValue.GetString("s3BucketOwner");
    m_s3BucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue DataRetentionStorageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_s3BucketArnHasBeenSet) {
    payload.WithString("s3BucketArn", m_s3BucketArn);
  }

  if (m_s3BucketOwnerHasBeenSet) {
    payload.WithString("s3BucketOwner", m_s3BucketOwner);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
