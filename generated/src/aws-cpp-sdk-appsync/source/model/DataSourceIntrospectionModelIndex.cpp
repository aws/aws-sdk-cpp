/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceIntrospectionModelIndex.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

DataSourceIntrospectionModelIndex::DataSourceIntrospectionModelIndex() : 
    m_nameHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

DataSourceIntrospectionModelIndex::DataSourceIntrospectionModelIndex(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceIntrospectionModelIndex& DataSourceIntrospectionModelIndex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsString());
    }
    m_fieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceIntrospectionModelIndex::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsString(m_fields[fieldsIndex]);
   }
   payload.WithArray("fields", std::move(fieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
