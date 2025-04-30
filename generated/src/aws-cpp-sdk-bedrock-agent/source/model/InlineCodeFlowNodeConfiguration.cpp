/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/InlineCodeFlowNodeConfiguration.h>
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

InlineCodeFlowNodeConfiguration::InlineCodeFlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InlineCodeFlowNodeConfiguration& InlineCodeFlowNodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("language"))
  {
    m_language = SupportedLanguagesMapper::GetSupportedLanguagesForName(jsonValue.GetString("language"));
    m_languageHasBeenSet = true;
  }
  return *this;
}

JsonValue InlineCodeFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", SupportedLanguagesMapper::GetNameForSupportedLanguages(m_language));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
