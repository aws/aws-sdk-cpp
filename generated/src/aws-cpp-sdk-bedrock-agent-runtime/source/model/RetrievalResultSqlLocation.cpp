/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultSqlLocation.h>
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

RetrievalResultSqlLocation::RetrievalResultSqlLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrievalResultSqlLocation& RetrievalResultSqlLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("query"))
  {
    m_query = jsonValue.GetString("query");
    m_queryHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalResultSqlLocation::Jsonize() const
{
  JsonValue payload;

  if(m_queryHasBeenSet)
  {
   payload.WithString("query", m_query);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
