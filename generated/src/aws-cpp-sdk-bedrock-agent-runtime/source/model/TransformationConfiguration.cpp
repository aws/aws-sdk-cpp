/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/TransformationConfiguration.h>
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

TransformationConfiguration::TransformationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TransformationConfiguration& TransformationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = QueryTransformationModeMapper::GetQueryTransformationModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("textToSqlConfiguration"))
  {
    m_textToSqlConfiguration = jsonValue.GetObject("textToSqlConfiguration");
    m_textToSqlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", QueryTransformationModeMapper::GetNameForQueryTransformationMode(m_mode));
  }

  if(m_textToSqlConfigurationHasBeenSet)
  {
   payload.WithObject("textToSqlConfiguration", m_textToSqlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
