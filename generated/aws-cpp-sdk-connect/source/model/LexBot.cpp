/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/LexBot.h>
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

LexBot::LexBot() : 
    m_nameHasBeenSet(false),
    m_lexRegionHasBeenSet(false)
{
}

LexBot::LexBot(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_lexRegionHasBeenSet(false)
{
  *this = jsonValue;
}

LexBot& LexBot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LexRegion"))
  {
    m_lexRegion = jsonValue.GetString("LexRegion");

    m_lexRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue LexBot::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_lexRegionHasBeenSet)
  {
   payload.WithString("LexRegion", m_lexRegion);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
