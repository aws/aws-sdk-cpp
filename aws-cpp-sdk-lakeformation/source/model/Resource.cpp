/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_dataLocationHasBeenSet(false),
    m_dataCellsFilterHasBeenSet(false),
    m_lFTagHasBeenSet(false),
    m_lFTagPolicyHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_tableWithColumnsHasBeenSet(false),
    m_dataLocationHasBeenSet(false),
    m_dataCellsFilterHasBeenSet(false),
    m_lFTagHasBeenSet(false),
    m_lFTagPolicyHasBeenSet(false)
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

  if(jsonValue.ValueExists("DataCellsFilter"))
  {
    m_dataCellsFilter = jsonValue.GetObject("DataCellsFilter");

    m_dataCellsFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LFTag"))
  {
    m_lFTag = jsonValue.GetObject("LFTag");

    m_lFTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LFTagPolicy"))
  {
    m_lFTagPolicy = jsonValue.GetObject("LFTagPolicy");

    m_lFTagPolicyHasBeenSet = true;
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

  if(m_dataCellsFilterHasBeenSet)
  {
   payload.WithObject("DataCellsFilter", m_dataCellsFilter.Jsonize());

  }

  if(m_lFTagHasBeenSet)
  {
   payload.WithObject("LFTag", m_lFTag.Jsonize());

  }

  if(m_lFTagPolicyHasBeenSet)
  {
   payload.WithObject("LFTagPolicy", m_lFTagPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
