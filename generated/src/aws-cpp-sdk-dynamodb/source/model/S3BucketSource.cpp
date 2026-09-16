/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/S3BucketSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

S3BucketSource::S3BucketSource(JsonView jsonValue) { *this = jsonValue; }

S3BucketSource& S3BucketSource::operator=(JsonView jsonValue) { return *this; }

JsonValue S3BucketSource::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
