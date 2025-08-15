/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/KnowledgeBaseConfiguration.h>
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

KnowledgeBaseConfiguration::KnowledgeBaseConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

KnowledgeBaseConfiguration& KnowledgeBaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = KnowledgeBaseTypeMapper::GetKnowledgeBaseTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vectorKnowledgeBaseConfiguration"))
  {
    m_vectorKnowledgeBaseConfiguration = jsonValue.GetObject("vectorKnowledgeBaseConfiguration");
    m_vectorKnowledgeBaseConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kendraKnowledgeBaseConfiguration"))
  {
    m_kendraKnowledgeBaseConfiguration = jsonValue.GetObject("kendraKnowledgeBaseConfiguration");
    m_kendraKnowledgeBaseConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sqlKnowledgeBaseConfiguration"))
  {
    m_sqlKnowledgeBaseConfiguration = jsonValue.GetObject("sqlKnowledgeBaseConfiguration");
    m_sqlKnowledgeBaseConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", KnowledgeBaseTypeMapper::GetNameForKnowledgeBaseType(m_type));
  }

  if(m_vectorKnowledgeBaseConfigurationHasBeenSet)
  {
   payload.WithObject("vectorKnowledgeBaseConfiguration", m_vectorKnowledgeBaseConfiguration.Jsonize());

  }

  if(m_kendraKnowledgeBaseConfigurationHasBeenSet)
  {
   payload.WithObject("kendraKnowledgeBaseConfiguration", m_kendraKnowledgeBaseConfiguration.Jsonize());

  }

  if(m_sqlKnowledgeBaseConfigurationHasBeenSet)
  {
   payload.WithObject("sqlKnowledgeBaseConfiguration", m_sqlKnowledgeBaseConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
