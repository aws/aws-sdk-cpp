﻿/**
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

SqlKnowledgeBaseConfiguration::SqlKnowledgeBaseConfiguration() : 
    m_redshiftConfigurationHasBeenSet(false),
    m_type(QueryEngineType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SqlKnowledgeBaseConfiguration::SqlKnowledgeBaseConfiguration(JsonView jsonValue)
  : SqlKnowledgeBaseConfiguration()
{
  *this = jsonValue;
}

SqlKnowledgeBaseConfiguration& SqlKnowledgeBaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("redshiftConfiguration"))
  {
    m_redshiftConfiguration = jsonValue.GetObject("redshiftConfiguration");

    m_redshiftConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = QueryEngineTypeMapper::GetQueryEngineTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlKnowledgeBaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_redshiftConfigurationHasBeenSet)
  {
   payload.WithObject("redshiftConfiguration", m_redshiftConfiguration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", QueryEngineTypeMapper::GetNameForQueryEngineType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
