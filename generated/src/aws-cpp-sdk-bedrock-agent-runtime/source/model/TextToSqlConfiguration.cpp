﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/TextToSqlConfiguration.h>
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

TextToSqlConfiguration::TextToSqlConfiguration() : 
    m_knowledgeBaseConfigurationHasBeenSet(false),
    m_type(TextToSqlConfigurationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

TextToSqlConfiguration::TextToSqlConfiguration(JsonView jsonValue)
  : TextToSqlConfiguration()
{
  *this = jsonValue;
}

TextToSqlConfiguration& TextToSqlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseConfiguration"))
  {
    m_knowledgeBaseConfiguration = jsonValue.GetObject("knowledgeBaseConfiguration");

    m_knowledgeBaseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TextToSqlConfigurationTypeMapper::GetTextToSqlConfigurationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue TextToSqlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseConfigurationHasBeenSet)
  {
   payload.WithObject("knowledgeBaseConfiguration", m_knowledgeBaseConfiguration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TextToSqlConfigurationTypeMapper::GetNameForTextToSqlConfigurationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
