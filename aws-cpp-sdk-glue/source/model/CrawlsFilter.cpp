/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CrawlsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CrawlsFilter::CrawlsFilter() : 
    m_fieldName(FieldName::NOT_SET),
    m_fieldNameHasBeenSet(false),
    m_filterOperator(FilterOperator::NOT_SET),
    m_filterOperatorHasBeenSet(false),
    m_fieldValueHasBeenSet(false)
{
}

CrawlsFilter::CrawlsFilter(JsonView jsonValue) : 
    m_fieldName(FieldName::NOT_SET),
    m_fieldNameHasBeenSet(false),
    m_filterOperator(FilterOperator::NOT_SET),
    m_filterOperatorHasBeenSet(false),
    m_fieldValueHasBeenSet(false)
{
  *this = jsonValue;
}

CrawlsFilter& CrawlsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = FieldNameMapper::GetFieldNameForName(jsonValue.GetString("FieldName"));

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterOperator"))
  {
    m_filterOperator = FilterOperatorMapper::GetFilterOperatorForName(jsonValue.GetString("FilterOperator"));

    m_filterOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldValue"))
  {
    m_fieldValue = jsonValue.GetString("FieldValue");

    m_fieldValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CrawlsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", FieldNameMapper::GetNameForFieldName(m_fieldName));
  }

  if(m_filterOperatorHasBeenSet)
  {
   payload.WithString("FilterOperator", FilterOperatorMapper::GetNameForFilterOperator(m_filterOperator));
  }

  if(m_fieldValueHasBeenSet)
  {
   payload.WithString("FieldValue", m_fieldValue);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
