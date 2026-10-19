/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DestinationProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DestinationProperties::DestinationProperties(JsonView jsonValue) { *this = jsonValue; }

DestinationProperties& DestinationProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationArn")) {
    m_destinationArn = jsonValue.GetString("destinationArn");
    m_destinationArnHasBeenSet = true;
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

JsonValue DestinationProperties::Jsonize() const {
  JsonValue payload;

  if (m_destinationArnHasBeenSet) {
    payload.WithString("destinationArn", m_destinationArn);
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
}  // namespace GuardDuty
}  // namespace Aws
