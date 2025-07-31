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

CisNumberFilter::CisNumberFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

CisNumberFilter& CisNumberFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("upperInclusive"))
  {
    m_upperInclusive = jsonValue.GetInteger("upperInclusive");
    m_upperInclusiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lowerInclusive"))
  {
    m_lowerInclusive = jsonValue.GetInteger("lowerInclusive");
    m_lowerInclusiveHasBeenSet = true;
  }
  return *this;
}

JsonValue CisNumberFilter::Jsonize() const
{
  JsonValue payload;

  if(m_upperInclusiveHasBeenSet)
  {
   payload.WithInteger("upperInclusive", m_upperInclusive);

  }

  if(m_lowerInclusiveHasBeenSet)
  {
   payload.WithInteger("lowerInclusive", m_lowerInclusive);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
