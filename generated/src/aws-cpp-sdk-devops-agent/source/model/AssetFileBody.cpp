/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AssetFileBody.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AssetFileBody::AssetFileBody(JsonView jsonValue) { *this = jsonValue; }

AssetFileBody& AssetFileBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bytes")) {
    m_bytes = HashingUtils::Base64Decode(jsonValue.GetString("bytes"));
    m_bytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetFileBody::Jsonize() const {
  JsonValue payload;

  if (m_bytesHasBeenSet) {
    payload.WithString("bytes", HashingUtils::Base64Encode(m_bytes));
  }

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
