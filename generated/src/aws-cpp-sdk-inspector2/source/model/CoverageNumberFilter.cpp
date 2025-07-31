/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CoverageNumberFilter.h>
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

CoverageNumberFilter::CoverageNumberFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

CoverageNumberFilter& CoverageNumberFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("upperInclusive"))
  {
    m_upperInclusive = jsonValue.GetInt64("upperInclusive");
    m_upperInclusiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lowerInclusive"))
  {
    m_lowerInclusive = jsonValue.GetInt64("lowerInclusive");
    m_lowerInclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue CoverageNumberFilter::Jsonize() const
{
  JsonValue payload;

  if(m_upperInclusiveHasBeenSet)
  {
   payload.WithInt64("upperInclusive", m_upperInclusive);

  }

  if(m_lowerInclusiveHasBeenSet)
  {
   payload.WithInt64("lowerInclusive", m_lowerInclusive);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
