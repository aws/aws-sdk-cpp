/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
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

DataSourceToIndexFieldMapping::DataSourceToIndexFieldMapping() : 
    m_dataSourceFieldNameHasBeenSet(false),
    m_dateFieldFormatHasBeenSet(false),
    m_indexFieldNameHasBeenSet(false)
{
}

DataSourceToIndexFieldMapping::DataSourceToIndexFieldMapping(JsonView jsonValue) : 
    m_dataSourceFieldNameHasBeenSet(false),
    m_dateFieldFormatHasBeenSet(false),
    m_indexFieldNameHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceToIndexFieldMapping& DataSourceToIndexFieldMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceFieldName"))
  {
    m_dataSourceFieldName = jsonValue.GetString("DataSourceFieldName");

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

JsonValue DataSourceToIndexFieldMapping::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceFieldNameHasBeenSet)
  {
   payload.WithString("DataSourceFieldName", m_dataSourceFieldName);

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
