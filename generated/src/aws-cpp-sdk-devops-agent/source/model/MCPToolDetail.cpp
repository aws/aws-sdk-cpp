/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPToolDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPToolDetail::MCPToolDetail(JsonView jsonValue) { *this = jsonValue; }

MCPToolDetail& MCPToolDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolClassification")) {
    m_toolClassification = ToolClassificationMapper::GetToolClassificationForName(jsonValue.GetString("toolClassification"));
    m_toolClassificationHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPToolDetail::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_toolClassificationHasBeenSet) {
    payload.WithString("toolClassification", ToolClassificationMapper::GetNameForToolClassification(m_toolClassification));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
