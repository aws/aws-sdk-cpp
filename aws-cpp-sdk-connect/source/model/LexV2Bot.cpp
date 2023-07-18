/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/LexV2Bot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

LexV2Bot::LexV2Bot() : 
    m_aliasArnHasBeenSet(false)
{
}

LexV2Bot::LexV2Bot(JsonView jsonValue) : 
    m_aliasArnHasBeenSet(false)
{
  *this = jsonValue;
}

LexV2Bot& LexV2Bot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AliasArn"))
  {
    m_aliasArn = jsonValue.GetString("AliasArn");

    m_aliasArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LexV2Bot::Jsonize() const
{
  JsonValue payload;

  if(m_aliasArnHasBeenSet)
  {
   payload.WithString("AliasArn", m_aliasArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
