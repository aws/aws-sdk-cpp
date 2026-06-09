/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AssetFileContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AssetFileContent::AssetFileContent(JsonView jsonValue) { *this = jsonValue; }

AssetFileContent& AssetFileContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("body")) {
    m_body = jsonValue.GetObject("body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetFileContent::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_bodyHasBeenSet) {
    payload.WithObject("body", m_body.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    if (!m_metadata.View().IsNull()) {
      payload.WithObject("metadata", JsonValue(m_metadata.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
