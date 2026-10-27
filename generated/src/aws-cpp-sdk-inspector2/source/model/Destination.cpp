/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/Destination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

Destination::Destination(JsonView jsonValue) { *this = jsonValue; }

Destination& Destination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucketName")) {
    m_bucketName = jsonValue.GetString("bucketName");
    m_bucketNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyPrefix")) {
    m_keyPrefix = jsonValue.GetString("keyPrefix");
    m_keyPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedBucketOwner")) {
    m_expectedBucketOwner = jsonValue.GetString("expectedBucketOwner");
    m_expectedBucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue Destination::Jsonize() const {
  JsonValue payload;

  if (m_bucketNameHasBeenSet) {
    payload.WithString("bucketName", m_bucketName);
  }

  if (m_keyPrefixHasBeenSet) {
    payload.WithString("keyPrefix", m_keyPrefix);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_expectedBucketOwnerHasBeenSet) {
    payload.WithString("expectedBucketOwner", m_expectedBucketOwner);
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
