/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/LexFlowNodeConfiguration.h>
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

LexFlowNodeConfiguration::LexFlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LexFlowNodeConfiguration& LexFlowNodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botAliasArn"))
  {
    m_botAliasArn = jsonValue.GetString("botAliasArn");
    m_botAliasArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");
    m_localeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue LexFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_botAliasArnHasBeenSet)
  {
   payload.WithString("botAliasArn", m_botAliasArn);

  }

  if(m_localeIdHasBeenSet)
  {
   payload.WithString("localeId", m_localeId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
