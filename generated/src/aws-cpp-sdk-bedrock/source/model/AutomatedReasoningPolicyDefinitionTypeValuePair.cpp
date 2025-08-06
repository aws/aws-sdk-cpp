/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionTypeValuePair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyDefinitionTypeValuePair::AutomatedReasoningPolicyDefinitionTypeValuePair(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyDefinitionTypeValuePair& AutomatedReasoningPolicyDefinitionTypeValuePair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("typeName"))
  {
    m_typeName = jsonValue.GetString("typeName");
    m_typeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("valueName"))
  {
    m_valueName = jsonValue.GetString("valueName");
    m_valueNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyDefinitionTypeValuePair::Jsonize() const
{
  JsonValue payload;

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("typeName", m_typeName);

  }

  if(m_valueNameHasBeenSet)
  {
   payload.WithString("valueName", m_valueName);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
