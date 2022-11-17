/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/MetadataCatalogDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

MetadataCatalogDetail::MetadataCatalogDetail() : 
    m_catalogType(CatalogType::NOT_SET),
    m_catalogTypeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableRegistrationOutputHasBeenSet(false),
    m_partitionRegistrationOutputHasBeenSet(false)
{
}

MetadataCatalogDetail::MetadataCatalogDetail(JsonView jsonValue) : 
    m_catalogType(CatalogType::NOT_SET),
    m_catalogTypeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableRegistrationOutputHasBeenSet(false),
    m_partitionRegistrationOutputHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataCatalogDetail& MetadataCatalogDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("catalogType"))
  {
    m_catalogType = CatalogTypeMapper::GetCatalogTypeForName(jsonValue.GetString("catalogType"));

    m_catalogTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableRegistrationOutput"))
  {
    m_tableRegistrationOutput = jsonValue.GetObject("tableRegistrationOutput");

    m_tableRegistrationOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partitionRegistrationOutput"))
  {
    m_partitionRegistrationOutput = jsonValue.GetObject("partitionRegistrationOutput");

    m_partitionRegistrationOutputHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataCatalogDetail::Jsonize() const
{
  JsonValue payload;

  if(m_catalogTypeHasBeenSet)
  {
   payload.WithString("catalogType", CatalogTypeMapper::GetNameForCatalogType(m_catalogType));
  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_tableRegistrationOutputHasBeenSet)
  {
   payload.WithObject("tableRegistrationOutput", m_tableRegistrationOutput.Jsonize());

  }

  if(m_partitionRegistrationOutputHasBeenSet)
  {
   payload.WithObject("partitionRegistrationOutput", m_partitionRegistrationOutput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
