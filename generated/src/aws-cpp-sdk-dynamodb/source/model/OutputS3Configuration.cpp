/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/OutputS3Configuration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

OutputS3Configuration::OutputS3Configuration(JsonView jsonValue) { *this = jsonValue; }

OutputS3Configuration& OutputS3Configuration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3BucketOwner")) {
    m_s3BucketOwner = jsonValue.GetString("S3BucketOwner");
    m_s3BucketOwnerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3Bucket")) {
    m_s3Bucket = jsonValue.GetString("S3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3KeyPrefix")) {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");
    m_s3KeyPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3SseAlgorithm")) {
    m_s3SseAlgorithm = S3SseAlgorithmMapper::GetS3SseAlgorithmForName(jsonValue.GetString("S3SseAlgorithm"));
    m_s3SseAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3SseKmsKeyId")) {
    m_s3SseKmsKeyId = jsonValue.GetString("S3SseKmsKeyId");
    m_s3SseKmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputType")) {
    Aws::Utils::Array<JsonView> outputTypeJsonList = jsonValue.GetArray("OutputType");
    for (unsigned outputTypeIndex = 0; outputTypeIndex < outputTypeJsonList.GetLength(); ++outputTypeIndex) {
      m_outputType.push_back(OutputTypeEnumMapper::GetOutputTypeEnumForName(outputTypeJsonList[outputTypeIndex].AsString()));
    }
    m_outputTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputS3Configuration::Jsonize() const {
  JsonValue payload;

  if (m_s3BucketOwnerHasBeenSet) {
    payload.WithString("S3BucketOwner", m_s3BucketOwner);
  }

  if (m_s3BucketHasBeenSet) {
    payload.WithString("S3Bucket", m_s3Bucket);
  }

  if (m_s3KeyPrefixHasBeenSet) {
    payload.WithString("S3KeyPrefix", m_s3KeyPrefix);
  }

  if (m_s3SseAlgorithmHasBeenSet) {
    payload.WithString("S3SseAlgorithm", S3SseAlgorithmMapper::GetNameForS3SseAlgorithm(m_s3SseAlgorithm));
  }

  if (m_s3SseKmsKeyIdHasBeenSet) {
    payload.WithString("S3SseKmsKeyId", m_s3SseKmsKeyId);
  }

  if (m_outputTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> outputTypeJsonList(m_outputType.size());
    for (unsigned outputTypeIndex = 0; outputTypeIndex < outputTypeJsonList.GetLength(); ++outputTypeIndex) {
      outputTypeJsonList[outputTypeIndex].AsString(OutputTypeEnumMapper::GetNameForOutputTypeEnum(m_outputType[outputTypeIndex]));
    }
    payload.WithArray("OutputType", std::move(outputTypeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
