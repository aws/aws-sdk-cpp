/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/S3StorageConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

S3StorageConfiguration::S3StorageConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3StorageConfiguration& S3StorageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BucketARN")) {
    m_bucketARN = jsonValue.GetString("BucketARN");
    m_bucketARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpectedBucketOwner")) {
    m_expectedBucketOwner = jsonValue.GetString("ExpectedBucketOwner");
    m_expectedBucketOwnerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputKeyTemplate")) {
    m_outputKeyTemplate = jsonValue.GetString("OutputKeyTemplate");
    m_outputKeyTemplateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StorageClass")) {
    m_storageClass = S3StorageClassMapper::GetS3StorageClassForName(jsonValue.GetString("StorageClass"));
    m_storageClassHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompressionType")) {
    m_compressionType = S3CompressionTypeMapper::GetS3CompressionTypeForName(jsonValue.GetString("CompressionType"));
    m_compressionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue S3StorageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bucketARNHasBeenSet) {
    payload.WithString("BucketARN", m_bucketARN);
  }

  if (m_expectedBucketOwnerHasBeenSet) {
    payload.WithString("ExpectedBucketOwner", m_expectedBucketOwner);
  }

  if (m_outputKeyTemplateHasBeenSet) {
    payload.WithString("OutputKeyTemplate", m_outputKeyTemplate);
  }

  if (m_storageClassHasBeenSet) {
    payload.WithString("StorageClass", S3StorageClassMapper::GetNameForS3StorageClass(m_storageClass));
  }

  if (m_compressionTypeHasBeenSet) {
    payload.WithString("CompressionType", S3CompressionTypeMapper::GetNameForS3CompressionType(m_compressionType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
