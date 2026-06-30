/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ResolvedS3Object.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ResolvedS3Object::ResolvedS3Object(JsonView jsonValue) { *this = jsonValue; }

ResolvedS3Object& ResolvedS3Object::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3Bucket")) {
    m_s3Bucket = jsonValue.GetString("S3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3Key")) {
    m_s3Key = jsonValue.GetString("S3Key");
    m_s3KeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3ObjectVersion")) {
    m_s3ObjectVersion = jsonValue.GetString("S3ObjectVersion");
    m_s3ObjectVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ResolvedS3Object::Jsonize() const {
  JsonValue payload;

  if (m_s3BucketHasBeenSet) {
    payload.WithString("S3Bucket", m_s3Bucket);
  }

  if (m_s3KeyHasBeenSet) {
    payload.WithString("S3Key", m_s3Key);
  }

  if (m_s3ObjectVersionHasBeenSet) {
    payload.WithString("S3ObjectVersion", m_s3ObjectVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
