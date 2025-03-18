/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultContentColumn.h>
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

RetrievalResultContentColumn::RetrievalResultContentColumn(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrievalResultContentColumn& RetrievalResultContentColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnName"))
  {
    m_columnName = jsonValue.GetString("columnName");
    m_columnNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("columnValue"))
  {
    m_columnValue = jsonValue.GetString("columnValue");
    m_columnValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = RetrievalResultContentColumnTypeMapper::GetRetrievalResultContentColumnTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalResultContentColumn::Jsonize() const
{
  JsonValue payload;

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("columnName", m_columnName);

  }

  if(m_columnValueHasBeenSet)
  {
   payload.WithString("columnValue", m_columnValue);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RetrievalResultContentColumnTypeMapper::GetNameForRetrievalResultContentColumnType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
