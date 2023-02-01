/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TableResource.h>
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

TableResource::TableResource() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tableWildcardHasBeenSet(false)
{
}

TableResource::TableResource(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tableWildcardHasBeenSet(false)
{
  *this = jsonValue;
}

TableResource& TableResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableWildcard"))
  {
    m_tableWildcard = jsonValue.GetObject("TableWildcard");

    m_tableWildcardHasBeenSet = true;
  }

  return *this;
}

JsonValue TableResource::Jsonize() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tableWildcardHasBeenSet)
  {
   payload.WithObject("TableWildcard", m_tableWildcard.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
