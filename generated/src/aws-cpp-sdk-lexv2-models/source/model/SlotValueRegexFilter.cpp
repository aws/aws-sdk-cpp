/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotValueRegexFilter.h>
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

SlotValueRegexFilter::SlotValueRegexFilter() : 
    m_patternHasBeenSet(false)
{
}

SlotValueRegexFilter::SlotValueRegexFilter(JsonView jsonValue) : 
    m_patternHasBeenSet(false)
{
  *this = jsonValue;
}

SlotValueRegexFilter& SlotValueRegexFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pattern"))
  {
    m_pattern = jsonValue.GetString("pattern");

    m_patternHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotValueRegexFilter::Jsonize() const
{
  JsonValue payload;

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
