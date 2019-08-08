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

#include <aws/lakeformation/model/Resource.h>
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

Resource::Resource() : 
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_tableWithColumnsHasBeenSet(false),
    m_dataLocationHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_tableWithColumnsHasBeenSet(false),
    m_dataLocationHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetObject("Catalog");

    m_catalogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetObject("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableWithColumns"))
  {
    m_tableWithColumns = jsonValue.GetObject("TableWithColumns");

    m_tableWithColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataLocation"))
  {
    m_dataLocation = jsonValue.GetObject("DataLocation");

    m_dataLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithObject("Catalog", m_catalog.Jsonize());

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithObject("Database", m_database.Jsonize());

  }

  if(m_tableHasBeenSet)
  {
   payload.WithObject("Table", m_table.Jsonize());

  }

  if(m_tableWithColumnsHasBeenSet)
  {
   payload.WithObject("TableWithColumns", m_tableWithColumns.Jsonize());

  }

  if(m_dataLocationHasBeenSet)
  {
   payload.WithObject("DataLocation", m_dataLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
