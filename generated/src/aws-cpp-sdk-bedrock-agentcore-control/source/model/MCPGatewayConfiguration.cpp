/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MCPGatewayConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

MCPGatewayConfiguration::MCPGatewayConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

MCPGatewayConfiguration& MCPGatewayConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("supportedVersions"))
  {
    Aws::Utils::Array<JsonView> supportedVersionsJsonList = jsonValue.GetArray("supportedVersions");
    for(unsigned supportedVersionsIndex = 0; supportedVersionsIndex < supportedVersionsJsonList.GetLength(); ++supportedVersionsIndex)
    {
      m_supportedVersions.push_back(supportedVersionsJsonList[supportedVersionsIndex].AsString());
    }
    m_supportedVersionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instructions"))
  {
    m_instructions = jsonValue.GetString("instructions");
    m_instructionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("searchType"))
  {
    m_searchType = SearchTypeMapper::GetSearchTypeForName(jsonValue.GetString("searchType"));
    m_searchTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPGatewayConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_supportedVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedVersionsJsonList(m_supportedVersions.size());
   for(unsigned supportedVersionsIndex = 0; supportedVersionsIndex < supportedVersionsJsonList.GetLength(); ++supportedVersionsIndex)
   {
     supportedVersionsJsonList[supportedVersionsIndex].AsString(m_supportedVersions[supportedVersionsIndex]);
   }
   payload.WithArray("supportedVersions", std::move(supportedVersionsJsonList));

  }

  if(m_instructionsHasBeenSet)
  {
   payload.WithString("instructions", m_instructions);

  }

  if(m_searchTypeHasBeenSet)
  {
   payload.WithString("searchType", SearchTypeMapper::GetNameForSearchType(m_searchType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
