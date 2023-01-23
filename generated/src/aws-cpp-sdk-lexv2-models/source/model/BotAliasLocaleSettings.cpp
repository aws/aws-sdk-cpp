/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotAliasLocaleSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

BotAliasLocaleSettings::BotAliasLocaleSettings() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_codeHookSpecificationHasBeenSet(false)
{
}

BotAliasLocaleSettings::BotAliasLocaleSettings(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_codeHookSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

BotAliasLocaleSettings& BotAliasLocaleSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codeHookSpecification"))
  {
    m_codeHookSpecification = jsonValue.GetObject("codeHookSpecification");

    m_codeHookSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue BotAliasLocaleSettings::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_codeHookSpecificationHasBeenSet)
  {
   payload.WithObject("codeHookSpecification", m_codeHookSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
