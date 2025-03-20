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

RAGConfig::RAGConfig(JsonView jsonValue)
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
  if(jsonValue.ValueExists("precomputedRagSourceConfig"))
  {
    m_precomputedRagSourceConfig = jsonValue.GetObject("precomputedRagSourceConfig");
    m_precomputedRagSourceConfigHasBeenSet = true;
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

  if(m_precomputedRagSourceConfigHasBeenSet)
  {
   payload.WithObject("precomputedRagSourceConfig", m_precomputedRagSourceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
