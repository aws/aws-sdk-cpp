/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/Intent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

Intent::Intent() : 
    m_intentNameHasBeenSet(false),
    m_intentVersionHasBeenSet(false)
{
}

Intent::Intent(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_intentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Intent& Intent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentVersion"))
  {
    m_intentVersion = jsonValue.GetString("intentVersion");

    m_intentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Intent::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_intentVersionHasBeenSet)
  {
   payload.WithString("intentVersion", m_intentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
