/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FieldForReranking.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

FieldForReranking::FieldForReranking(JsonView jsonValue)
{
  *this = jsonValue;
}

FieldForReranking& FieldForReranking::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");
    m_fieldNameHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldForReranking::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
