/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/NumberFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

NumberFilter::NumberFilter() : 
    m_lowerInclusive(0.0),
    m_lowerInclusiveHasBeenSet(false),
    m_upperInclusive(0.0),
    m_upperInclusiveHasBeenSet(false)
{
}

NumberFilter::NumberFilter(JsonView jsonValue) : 
    m_lowerInclusive(0.0),
    m_lowerInclusiveHasBeenSet(false),
    m_upperInclusive(0.0),
    m_upperInclusiveHasBeenSet(false)
{
  *this = jsonValue;
}

NumberFilter& NumberFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lowerInclusive"))
  {
    m_lowerInclusive = jsonValue.GetDouble("lowerInclusive");

    m_lowerInclusiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upperInclusive"))
  {
    m_upperInclusive = jsonValue.GetDouble("upperInclusive");

    m_upperInclusiveHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberFilter::Jsonize() const
{
  JsonValue payload;

  if(m_lowerInclusiveHasBeenSet)
  {
   payload.WithDouble("lowerInclusive", m_lowerInclusive);

  }

  if(m_upperInclusiveHasBeenSet)
  {
   payload.WithDouble("upperInclusive", m_upperInclusive);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
