/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NumberFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

NumberFilter::NumberFilter() : 
    m_gte(0.0),
    m_gteHasBeenSet(false),
    m_lte(0.0),
    m_lteHasBeenSet(false),
    m_eq(0.0),
    m_eqHasBeenSet(false)
{
}

NumberFilter::NumberFilter(JsonView jsonValue) : 
    m_gte(0.0),
    m_gteHasBeenSet(false),
    m_lte(0.0),
    m_lteHasBeenSet(false),
    m_eq(0.0),
    m_eqHasBeenSet(false)
{
  *this = jsonValue;
}

NumberFilter& NumberFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Gte"))
  {
    m_gte = jsonValue.GetDouble("Gte");

    m_gteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lte"))
  {
    m_lte = jsonValue.GetDouble("Lte");

    m_lteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Eq"))
  {
    m_eq = jsonValue.GetDouble("Eq");

    m_eqHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberFilter::Jsonize() const
{
  JsonValue payload;

  if(m_gteHasBeenSet)
  {
   payload.WithDouble("Gte", m_gte);

  }

  if(m_lteHasBeenSet)
  {
   payload.WithDouble("Lte", m_lte);

  }

  if(m_eqHasBeenSet)
  {
   payload.WithDouble("Eq", m_eq);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
