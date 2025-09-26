/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GeneratedQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

GeneratedQuery::GeneratedQuery(JsonView jsonValue)
{
  *this = jsonValue;
}

GeneratedQuery& GeneratedQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GeneratedQueryTypeMapper::GetGeneratedQueryTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sql"))
  {
    m_sql = jsonValue.GetString("sql");
    m_sqlHasBeenSet = true;
  }
  return *this;
}

JsonValue GeneratedQuery::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GeneratedQueryTypeMapper::GetNameForGeneratedQueryType(m_type));
  }

  if(m_sqlHasBeenSet)
  {
   payload.WithString("sql", m_sql);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
