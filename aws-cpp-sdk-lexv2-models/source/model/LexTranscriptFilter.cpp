/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/LexTranscriptFilter.h>
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

LexTranscriptFilter::LexTranscriptFilter() : 
    m_dateRangeFilterHasBeenSet(false)
{
}

LexTranscriptFilter::LexTranscriptFilter(JsonView jsonValue) : 
    m_dateRangeFilterHasBeenSet(false)
{
  *this = jsonValue;
}

LexTranscriptFilter& LexTranscriptFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dateRangeFilter"))
  {
    m_dateRangeFilter = jsonValue.GetObject("dateRangeFilter");

    m_dateRangeFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue LexTranscriptFilter::Jsonize() const
{
  JsonValue payload;

  if(m_dateRangeFilterHasBeenSet)
  {
   payload.WithObject("dateRangeFilter", m_dateRangeFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
