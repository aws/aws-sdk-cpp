/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SqlKnowledgeBaseConfiguration.h>
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

SqlKnowledgeBaseConfiguration::SqlKnowledgeBaseConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SqlKnowledgeBaseConfiguration& SqlKnowledgeBaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = QueryEngineTypeMapper::GetQueryEngineTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redshiftConfiguration"))
  {
    m_redshiftConfiguration = jsonValue.GetObject("redshiftConfiguration");
    m_redshiftConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SqlKnowledgeBaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", QueryEngineTypeMapper::GetNameForQueryEngineType(m_type));
  }

  if(m_redshiftConfigurationHasBeenSet)
  {
   payload.WithObject("redshiftConfiguration", m_redshiftConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
