/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/QueryTransformationConfiguration.h>
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

QueryTransformationConfiguration::QueryTransformationConfiguration() : 
    m_type(QueryTransformationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

QueryTransformationConfiguration::QueryTransformationConfiguration(JsonView jsonValue)
  : QueryTransformationConfiguration()
{
  *this = jsonValue;
}

QueryTransformationConfiguration& QueryTransformationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = QueryTransformationTypeMapper::GetQueryTransformationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryTransformationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", QueryTransformationTypeMapper::GetNameForQueryTransformationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
