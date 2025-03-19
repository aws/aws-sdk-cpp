/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/KendraKnowledgeBaseConfiguration.h>
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

KendraKnowledgeBaseConfiguration::KendraKnowledgeBaseConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

KendraKnowledgeBaseConfiguration& KendraKnowledgeBaseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kendraIndexArn"))
  {
    m_kendraIndexArn = jsonValue.GetString("kendraIndexArn");
    m_kendraIndexArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KendraKnowledgeBaseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kendraIndexArnHasBeenSet)
  {
   payload.WithString("kendraIndexArn", m_kendraIndexArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
