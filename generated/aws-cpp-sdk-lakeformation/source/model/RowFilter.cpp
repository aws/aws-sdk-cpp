/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/RowFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

RowFilter::RowFilter() : 
    m_filterExpressionHasBeenSet(false),
    m_allRowsWildcardHasBeenSet(false)
{
}

RowFilter::RowFilter(JsonView jsonValue) : 
    m_filterExpressionHasBeenSet(false),
    m_allRowsWildcardHasBeenSet(false)
{
  *this = jsonValue;
}

RowFilter& RowFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterExpression"))
  {
    m_filterExpression = jsonValue.GetString("FilterExpression");

    m_filterExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllRowsWildcard"))
  {
    m_allRowsWildcard = jsonValue.GetObject("AllRowsWildcard");

    m_allRowsWildcardHasBeenSet = true;
  }

  return *this;
}

JsonValue RowFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  if(m_allRowsWildcardHasBeenSet)
  {
   payload.WithObject("AllRowsWildcard", m_allRowsWildcard.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
