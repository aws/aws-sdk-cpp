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

KnowledgeBaseConfiguration::KnowledgeBaseConfiguration() : 
    m_type(KnowledgeBaseType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vectorKnowledgeBaseConfigurationHasBeenSet(false)
{
}

KnowledgeBaseConfiguration::KnowledgeBaseConfiguration(JsonView jsonValue) : 
    m_type(KnowledgeBaseType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vectorKnowledgeBaseConfigurationHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
