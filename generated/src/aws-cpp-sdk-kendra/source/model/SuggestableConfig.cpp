/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SuggestableConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

SuggestableConfig::SuggestableConfig() : 
    m_attributeNameHasBeenSet(false),
    m_suggestable(false),
    m_suggestableHasBeenSet(false)
{
}

SuggestableConfig::SuggestableConfig(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_suggestable(false),
    m_suggestableHasBeenSet(false)
{
  *this = jsonValue;
}

SuggestableConfig& SuggestableConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Suggestable"))
  {
    m_suggestable = jsonValue.GetBool("Suggestable");

    m_suggestableHasBeenSet = true;
  }

  return *this;
}

JsonValue SuggestableConfig::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_suggestableHasBeenSet)
  {
   payload.WithBool("Suggestable", m_suggestable);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
