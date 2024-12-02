/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RAGConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

RAGConfig::RAGConfig() : 
    m_knowledgeBaseConfigHasBeenSet(false)
{
}

RAGConfig::RAGConfig(JsonView jsonValue)
  : RAGConfig()
{
  *this = jsonValue;
}

RAGConfig& RAGConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseConfig"))
  {
    m_knowledgeBaseConfig = jsonValue.GetObject("knowledgeBaseConfig");

    m_knowledgeBaseConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue RAGConfig::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseConfigHasBeenSet)
  {
   payload.WithObject("knowledgeBaseConfig", m_knowledgeBaseConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
