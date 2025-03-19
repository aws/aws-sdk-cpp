/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/KnowledgeBaseConfig.h>
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

KnowledgeBaseConfig::KnowledgeBaseConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

KnowledgeBaseConfig& KnowledgeBaseConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("retrieveConfig"))
  {
    m_retrieveConfig = jsonValue.GetObject("retrieveConfig");
    m_retrieveConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retrieveAndGenerateConfig"))
  {
    m_retrieveAndGenerateConfig = jsonValue.GetObject("retrieveAndGenerateConfig");
    m_retrieveAndGenerateConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseConfig::Jsonize() const
{
  JsonValue payload;

  if(m_retrieveConfigHasBeenSet)
  {
   payload.WithObject("retrieveConfig", m_retrieveConfig.Jsonize());

  }

  if(m_retrieveAndGenerateConfigHasBeenSet)
  {
   payload.WithObject("retrieveAndGenerateConfig", m_retrieveAndGenerateConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
