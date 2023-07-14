/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/SlotTypeRegexConfiguration.h>
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

SlotTypeRegexConfiguration::SlotTypeRegexConfiguration() : 
    m_patternHasBeenSet(false)
{
}

SlotTypeRegexConfiguration::SlotTypeRegexConfiguration(JsonView jsonValue) : 
    m_patternHasBeenSet(false)
{
  *this = jsonValue;
}

SlotTypeRegexConfiguration& SlotTypeRegexConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetString("pattern");

    m_patternHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotTypeRegexConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
