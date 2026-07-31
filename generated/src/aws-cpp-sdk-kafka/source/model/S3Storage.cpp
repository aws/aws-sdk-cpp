/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/S3Storage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

S3Storage::S3Storage(JsonView jsonValue) { *this = jsonValue; }

S3Storage& S3Storage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucketArn")) {
    m_bucketArn = jsonValue.GetString("bucketArn");
    m_bucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("compressionType")) {
    m_compressionType = S3CompressionTypeMapper::GetS3CompressionTypeForName(jsonValue.GetString("compressionType"));
    m_compressionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputPrefix")) {
    m_outputPrefix = jsonValue.GetString("outputPrefix");
    m_outputPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputKeyTemplate")) {
    m_outputKeyTemplate = jsonValue.GetString("outputKeyTemplate");
    m_outputKeyTemplateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageClass")) {
    m_storageClass = S3StorageClassMapper::GetS3StorageClassForName(jsonValue.GetString("storageClass"));
    m_storageClassHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedBucketOwner")) {
    m_expectedBucketOwner = jsonValue.GetString("expectedBucketOwner");
    m_expectedBucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Storage::Jsonize() const {
  JsonValue payload;

  if (m_bucketArnHasBeenSet) {
    payload.WithString("bucketArn", m_bucketArn);
  }

  if (m_compressionTypeHasBeenSet) {
    payload.WithString("compressionType", S3CompressionTypeMapper::GetNameForS3CompressionType(m_compressionType));
  }

  if (m_outputPrefixHasBeenSet) {
    payload.WithString("outputPrefix", m_outputPrefix);
  }

  if (m_outputKeyTemplateHasBeenSet) {
    payload.WithString("outputKeyTemplate", m_outputKeyTemplate);
  }

  if (m_storageClassHasBeenSet) {
    payload.WithString("storageClass", S3StorageClassMapper::GetNameForS3StorageClass(m_storageClass));
  }

  if (m_expectedBucketOwnerHasBeenSet) {
    payload.WithString("expectedBucketOwner", m_expectedBucketOwner);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
