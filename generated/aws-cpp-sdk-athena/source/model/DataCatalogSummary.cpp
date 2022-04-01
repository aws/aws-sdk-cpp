/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/DataCatalogSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

DataCatalogSummary::DataCatalogSummary() : 
    m_catalogNameHasBeenSet(false),
    m_type(DataCatalogType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

DataCatalogSummary::DataCatalogSummary(JsonView jsonValue) : 
    m_catalogNameHasBeenSet(false),
    m_type(DataCatalogType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

DataCatalogSummary& DataCatalogSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogName"))
  {
    m_catalogName = jsonValue.GetString("CatalogName");

    m_catalogNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DataCatalogTypeMapper::GetDataCatalogTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCatalogSummary::Jsonize() const
{
  JsonValue payload;

  if(m_catalogNameHasBeenSet)
  {
   payload.WithString("CatalogName", m_catalogName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DataCatalogTypeMapper::GetNameForDataCatalogType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
