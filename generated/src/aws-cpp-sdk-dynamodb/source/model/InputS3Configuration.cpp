/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/InputS3Configuration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

InputS3Configuration::InputS3Configuration(JsonView jsonValue) { *this = jsonValue; }

InputS3Configuration& InputS3Configuration::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("InputFormat")) {
    m_inputFormat = BulkOperationInputFormatMapper::GetBulkOperationInputFormatForName(jsonValue.GetString("InputFormat"));
    m_inputFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputCompressionType")) {
    m_inputCompressionType = InputCompressionTypeMapper::GetInputCompressionTypeForName(jsonValue.GetString("InputCompressionType"));
    m_inputCompressionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue InputS3Configuration::Jsonize() const {
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

  if (m_inputFormatHasBeenSet) {
    payload.WithString("InputFormat", BulkOperationInputFormatMapper::GetNameForBulkOperationInputFormat(m_inputFormat));
  }

  if (m_inputCompressionTypeHasBeenSet) {
    payload.WithString("InputCompressionType", InputCompressionTypeMapper::GetNameForInputCompressionType(m_inputCompressionType));
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
