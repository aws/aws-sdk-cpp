/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowTypeCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactFlowTypeCondition::ContactFlowTypeCondition(JsonView jsonValue) { *this = jsonValue; }

ContactFlowTypeCondition& ContactFlowTypeCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContactFlowType")) {
    m_contactFlowType = ContactFlowTypeMapper::GetContactFlowTypeForName(jsonValue.GetString("ContactFlowType"));
    m_contactFlowTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactFlowTypeCondition::Jsonize() const {
  JsonValue payload;

  if (m_contactFlowTypeHasBeenSet) {
    payload.WithString("ContactFlowType", ContactFlowTypeMapper::GetNameForContactFlowType(m_contactFlowType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
