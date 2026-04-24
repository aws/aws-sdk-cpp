/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ContentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ContentConfiguration::ContentConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContentConfiguration& ContentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("level")) {
    m_level = ContentLevelMapper::GetContentLevelForName(jsonValue.GetString("level"));
    m_levelHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", ContentTypeMapper::GetNameForContentType(m_type));
  }

  if (m_levelHasBeenSet) {
    payload.WithString("level", ContentLevelMapper::GetNameForContentLevel(m_level));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
