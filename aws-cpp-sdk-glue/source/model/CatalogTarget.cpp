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

#include <aws/glue/model/CatalogTarget.h>
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

CatalogTarget::CatalogTarget() : 
    m_databaseNameHasBeenSet(false),
    m_tablesHasBeenSet(false)
{
}

CatalogTarget::CatalogTarget(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_tablesHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogTarget& CatalogTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tables"))
  {
    Array<JsonView> tablesJsonList = jsonValue.GetArray("Tables");
    for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
    {
      m_tables.push_back(tablesJsonList[tablesIndex].AsString());
    }
    m_tablesHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogTarget::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tablesHasBeenSet)
  {
   Array<JsonValue> tablesJsonList(m_tables.size());
   for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
   {
     tablesJsonList[tablesIndex].AsString(m_tables[tablesIndex]);
   }
   payload.WithArray("Tables", std::move(tablesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
