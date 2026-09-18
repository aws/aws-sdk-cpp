/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AIAgent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AIAgent::AIAgent(JsonView jsonValue) { *this = jsonValue; }

AIAgent& AIAgent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = AIAgentTypeMapper::GetAIAgentTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AIAgent::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", AIAgentTypeMapper::GetNameForAIAgentType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
