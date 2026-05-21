/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/S3Source.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

S3Source::S3Source(JsonView jsonValue) { *this = jsonValue; }

S3Source& S3Source::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Uri")) {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Source::Jsonize() const {
  JsonValue payload;

  if (m_s3UriHasBeenSet) {
    payload.WithString("s3Uri", m_s3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
