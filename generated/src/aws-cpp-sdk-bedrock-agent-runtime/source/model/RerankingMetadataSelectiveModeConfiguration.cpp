/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankingMetadataSelectiveModeConfiguration.h>
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

RerankingMetadataSelectiveModeConfiguration::RerankingMetadataSelectiveModeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RerankingMetadataSelectiveModeConfiguration& RerankingMetadataSelectiveModeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldsToExclude"))
  {
    Aws::Utils::Array<JsonView> fieldsToExcludeJsonList = jsonValue.GetArray("fieldsToExclude");
    for(unsigned fieldsToExcludeIndex = 0; fieldsToExcludeIndex < fieldsToExcludeJsonList.GetLength(); ++fieldsToExcludeIndex)
    {
      m_fieldsToExclude.push_back(fieldsToExcludeJsonList[fieldsToExcludeIndex].AsObject());
    }
    m_fieldsToExcludeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldsToInclude"))
  {
    Aws::Utils::Array<JsonView> fieldsToIncludeJsonList = jsonValue.GetArray("fieldsToInclude");
    for(unsigned fieldsToIncludeIndex = 0; fieldsToIncludeIndex < fieldsToIncludeJsonList.GetLength(); ++fieldsToIncludeIndex)
    {
      m_fieldsToInclude.push_back(fieldsToIncludeJsonList[fieldsToIncludeIndex].AsObject());
    }
    m_fieldsToIncludeHasBeenSet = true;
  }
  return *this;
}

JsonValue RerankingMetadataSelectiveModeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldsToExcludeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsToExcludeJsonList(m_fieldsToExclude.size());
   for(unsigned fieldsToExcludeIndex = 0; fieldsToExcludeIndex < fieldsToExcludeJsonList.GetLength(); ++fieldsToExcludeIndex)
   {
     fieldsToExcludeJsonList[fieldsToExcludeIndex].AsObject(m_fieldsToExclude[fieldsToExcludeIndex].Jsonize());
   }
   payload.WithArray("fieldsToExclude", std::move(fieldsToExcludeJsonList));

  }

  if(m_fieldsToIncludeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsToIncludeJsonList(m_fieldsToInclude.size());
   for(unsigned fieldsToIncludeIndex = 0; fieldsToIncludeIndex < fieldsToIncludeJsonList.GetLength(); ++fieldsToIncludeIndex)
   {
     fieldsToIncludeJsonList[fieldsToIncludeIndex].AsObject(m_fieldsToInclude[fieldsToIncludeIndex].Jsonize());
   }
   payload.WithArray("fieldsToInclude", std::move(fieldsToIncludeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
