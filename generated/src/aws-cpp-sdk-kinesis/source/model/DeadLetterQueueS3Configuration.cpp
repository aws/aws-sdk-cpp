/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/DeadLetterQueueS3Configuration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

DeadLetterQueueS3Configuration::DeadLetterQueueS3Configuration(JsonView jsonValue) { *this = jsonValue; }

DeadLetterQueueS3Configuration& DeadLetterQueueS3Configuration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BucketARN")) {
    m_bucketARN = jsonValue.GetString("BucketARN");
    m_bucketARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpectedBucketOwner")) {
    m_expectedBucketOwner = jsonValue.GetString("ExpectedBucketOwner");
    m_expectedBucketOwnerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorOutputPrefix")) {
    m_errorOutputPrefix = jsonValue.GetString("ErrorOutputPrefix");
    m_errorOutputPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue DeadLetterQueueS3Configuration::Jsonize() const {
  JsonValue payload;

  if (m_bucketARNHasBeenSet) {
    payload.WithString("BucketARN", m_bucketARN);
  }

  if (m_expectedBucketOwnerHasBeenSet) {
    payload.WithString("ExpectedBucketOwner", m_expectedBucketOwner);
  }

  if (m_errorOutputPrefixHasBeenSet) {
    payload.WithString("ErrorOutputPrefix", m_errorOutputPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
