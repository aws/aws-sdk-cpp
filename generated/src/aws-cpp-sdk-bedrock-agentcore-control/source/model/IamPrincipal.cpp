/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/IamPrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

IamPrincipal::IamPrincipal(JsonView jsonValue) { *this = jsonValue; }

IamPrincipal& IamPrincipal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operator")) {
    m_operator = PrincipalMatchOperatorMapper::GetPrincipalMatchOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue IamPrincipal::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("operator", PrincipalMatchOperatorMapper::GetNameForPrincipalMatchOperator(m_operator));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
