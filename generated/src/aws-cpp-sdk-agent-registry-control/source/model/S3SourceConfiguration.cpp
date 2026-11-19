/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/S3SourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

S3SourceConfiguration::S3SourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3SourceConfiguration& S3SourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucketOwnerAccountId")) {
    m_bucketOwnerAccountId = jsonValue.GetString("bucketOwnerAccountId");
    m_bucketOwnerAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue S3SourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bucketOwnerAccountIdHasBeenSet) {
    payload.WithString("bucketOwnerAccountId", m_bucketOwnerAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
