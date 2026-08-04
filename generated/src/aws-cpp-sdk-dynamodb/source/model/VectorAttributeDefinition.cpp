/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/VectorAttributeDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

VectorAttributeDefinition::VectorAttributeDefinition(JsonView jsonValue) { *this = jsonValue; }

VectorAttributeDefinition& VectorAttributeDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttributeName")) {
    m_attributeName = jsonValue.GetString("AttributeName");
    m_attributeNameHasBeenSet = true;
  }
  return *this;
}

JsonValue VectorAttributeDefinition::Jsonize() const {
  JsonValue payload;

  if (m_attributeNameHasBeenSet) {
    payload.WithString("AttributeName", m_attributeName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
