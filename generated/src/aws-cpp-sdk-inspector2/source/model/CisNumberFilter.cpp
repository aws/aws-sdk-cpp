/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisNumberFilter.h>
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

CisNumberFilter::CisNumberFilter() : 
    m_lowerInclusive(0),
    m_lowerInclusiveHasBeenSet(false),
    m_upperInclusive(0),
    m_upperInclusiveHasBeenSet(false)
{
}

CisNumberFilter::CisNumberFilter(JsonView jsonValue) : 
    m_lowerInclusive(0),
    m_lowerInclusiveHasBeenSet(false),
    m_upperInclusive(0),
    m_upperInclusiveHasBeenSet(false)
{
  *this = jsonValue;
}

CisNumberFilter& CisNumberFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lowerInclusive"))
  {
    m_lowerInclusive = jsonValue.GetInteger("lowerInclusive");

    m_lowerInclusiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upperInclusive"))
  {
    m_upperInclusive = jsonValue.GetInteger("upperInclusive");

    m_upperInclusiveHasBeenSet = true;
  }

  return *this;
}

JsonValue CisNumberFilter::Jsonize() const
{
  JsonValue payload;

  if(m_lowerInclusiveHasBeenSet)
  {
   payload.WithInteger("lowerInclusive", m_lowerInclusive);

  }

  if(m_upperInclusiveHasBeenSet)
  {
   payload.WithInteger("upperInclusive", m_upperInclusive);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
