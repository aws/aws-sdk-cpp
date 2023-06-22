/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/LexConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

LexConfiguration::LexConfiguration() : 
    m_respondsTo(RespondsTo::NOT_SET),
    m_respondsToHasBeenSet(false),
    m_invokedByHasBeenSet(false),
    m_lexBotAliasArnHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_welcomeIntentHasBeenSet(false)
{
}

LexConfiguration::LexConfiguration(JsonView jsonValue) : 
    m_respondsTo(RespondsTo::NOT_SET),
    m_respondsToHasBeenSet(false),
    m_invokedByHasBeenSet(false),
    m_lexBotAliasArnHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_welcomeIntentHasBeenSet(false)
{
  *this = jsonValue;
}

LexConfiguration& LexConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RespondsTo"))
  {
    m_respondsTo = RespondsToMapper::GetRespondsToForName(jsonValue.GetString("RespondsTo"));

    m_respondsToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvokedBy"))
  {
    m_invokedBy = jsonValue.GetObject("InvokedBy");

    m_invokedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LexBotAliasArn"))
  {
    m_lexBotAliasArn = jsonValue.GetString("LexBotAliasArn");

    m_lexBotAliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocaleId"))
  {
    m_localeId = jsonValue.GetString("LocaleId");

    m_localeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WelcomeIntent"))
  {
    m_welcomeIntent = jsonValue.GetString("WelcomeIntent");

    m_welcomeIntentHasBeenSet = true;
  }

  return *this;
}

JsonValue LexConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_respondsToHasBeenSet)
  {
   payload.WithString("RespondsTo", RespondsToMapper::GetNameForRespondsTo(m_respondsTo));
  }

  if(m_invokedByHasBeenSet)
  {
   payload.WithObject("InvokedBy", m_invokedBy.Jsonize());

  }

  if(m_lexBotAliasArnHasBeenSet)
  {
   payload.WithString("LexBotAliasArn", m_lexBotAliasArn);

  }

  if(m_localeIdHasBeenSet)
  {
   payload.WithString("LocaleId", m_localeId);

  }

  if(m_welcomeIntentHasBeenSet)
  {
   payload.WithString("WelcomeIntent", m_welcomeIntent);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
