/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceAttachmentToIndexFieldMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ConfluenceAttachmentToIndexFieldMapping::ConfluenceAttachmentToIndexFieldMapping() : 
    m_dataSourceFieldName(ConfluenceAttachmentFieldName::NOT_SET),
    m_dataSourceFieldNameHasBeenSet(false),
    m_dateFieldFormatHasBeenSet(false),
    m_indexFieldNameHasBeenSet(false)
{
}

ConfluenceAttachmentToIndexFieldMapping::ConfluenceAttachmentToIndexFieldMapping(JsonView jsonValue) : 
    m_dataSourceFieldName(ConfluenceAttachmentFieldName::NOT_SET),
    m_dataSourceFieldNameHasBeenSet(false),
    m_dateFieldFormatHasBeenSet(false),
    m_indexFieldNameHasBeenSet(false)
{
  *this = jsonValue;
}

ConfluenceAttachmentToIndexFieldMapping& ConfluenceAttachmentToIndexFieldMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceFieldName"))
  {
    m_dataSourceFieldName = ConfluenceAttachmentFieldNameMapper::GetConfluenceAttachmentFieldNameForName(jsonValue.GetString("DataSourceFieldName"));

    m_dataSourceFieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateFieldFormat"))
  {
    m_dateFieldFormat = jsonValue.GetString("DateFieldFormat");

    m_dateFieldFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexFieldName"))
  {
    m_indexFieldName = jsonValue.GetString("IndexFieldName");

    m_indexFieldNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfluenceAttachmentToIndexFieldMapping::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceFieldNameHasBeenSet)
  {
   payload.WithString("DataSourceFieldName", ConfluenceAttachmentFieldNameMapper::GetNameForConfluenceAttachmentFieldName(m_dataSourceFieldName));
  }

  if(m_dateFieldFormatHasBeenSet)
  {
   payload.WithString("DateFieldFormat", m_dateFieldFormat);

  }

  if(m_indexFieldNameHasBeenSet)
  {
   payload.WithString("IndexFieldName", m_indexFieldName);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
