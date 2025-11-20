/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/SyncInputConfiguration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomationRuntime {
namespace Model {

SyncInputConfiguration::SyncInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

SyncInputConfiguration& SyncInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bytes")) {
    m_bytes = HashingUtils::Base64Decode(jsonValue.GetString("bytes"));
    m_bytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Uri")) {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue SyncInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bytesHasBeenSet) {
    payload.WithString("bytes", HashingUtils::Base64Encode(m_bytes));
  }

  if (m_s3UriHasBeenSet) {
    payload.WithString("s3Uri", m_s3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
