/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotMember.h>
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

BotMember::BotMember() : 
    m_botMemberIdHasBeenSet(false),
    m_botMemberNameHasBeenSet(false),
    m_botMemberAliasIdHasBeenSet(false),
    m_botMemberAliasNameHasBeenSet(false),
    m_botMemberVersionHasBeenSet(false)
{
}

BotMember::BotMember(JsonView jsonValue) : 
    m_botMemberIdHasBeenSet(false),
    m_botMemberNameHasBeenSet(false),
    m_botMemberAliasIdHasBeenSet(false),
    m_botMemberAliasNameHasBeenSet(false),
    m_botMemberVersionHasBeenSet(false)
{
  *this = jsonValue;
}

BotMember& BotMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botMemberId"))
  {
    m_botMemberId = jsonValue.GetString("botMemberId");

    m_botMemberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botMemberName"))
  {
    m_botMemberName = jsonValue.GetString("botMemberName");

    m_botMemberNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botMemberAliasId"))
  {
    m_botMemberAliasId = jsonValue.GetString("botMemberAliasId");

    m_botMemberAliasIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botMemberAliasName"))
  {
    m_botMemberAliasName = jsonValue.GetString("botMemberAliasName");

    m_botMemberAliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("botMemberVersion"))
  {
    m_botMemberVersion = jsonValue.GetString("botMemberVersion");

    m_botMemberVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue BotMember::Jsonize() const
{
  JsonValue payload;

  if(m_botMemberIdHasBeenSet)
  {
   payload.WithString("botMemberId", m_botMemberId);

  }

  if(m_botMemberNameHasBeenSet)
  {
   payload.WithString("botMemberName", m_botMemberName);

  }

  if(m_botMemberAliasIdHasBeenSet)
  {
   payload.WithString("botMemberAliasId", m_botMemberAliasId);

  }

  if(m_botMemberAliasNameHasBeenSet)
  {
   payload.WithString("botMemberAliasName", m_botMemberAliasName);

  }

  if(m_botMemberVersionHasBeenSet)
  {
   payload.WithString("botMemberVersion", m_botMemberVersion);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
