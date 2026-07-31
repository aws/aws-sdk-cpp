/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/DeadLetterQueueS3.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

DeadLetterQueueS3::DeadLetterQueueS3(JsonView jsonValue) { *this = jsonValue; }

DeadLetterQueueS3& DeadLetterQueueS3::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucketArn")) {
    m_bucketArn = jsonValue.GetString("bucketArn");
    m_bucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorOutputPrefix")) {
    m_errorOutputPrefix = jsonValue.GetString("errorOutputPrefix");
    m_errorOutputPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedBucketOwner")) {
    m_expectedBucketOwner = jsonValue.GetString("expectedBucketOwner");
    m_expectedBucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue DeadLetterQueueS3::Jsonize() const {
  JsonValue payload;

  if (m_bucketArnHasBeenSet) {
    payload.WithString("bucketArn", m_bucketArn);
  }

  if (m_errorOutputPrefixHasBeenSet) {
    payload.WithString("errorOutputPrefix", m_errorOutputPrefix);
  }

  if (m_expectedBucketOwnerHasBeenSet) {
    payload.WithString("expectedBucketOwner", m_expectedBucketOwner);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
