/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DataCatalogOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

DataCatalogOutput::DataCatalogOutput() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_s3OptionsHasBeenSet(false),
    m_databaseOptionsHasBeenSet(false),
    m_overwrite(false),
    m_overwriteHasBeenSet(false)
{
}

DataCatalogOutput::DataCatalogOutput(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_s3OptionsHasBeenSet(false),
    m_databaseOptionsHasBeenSet(false),
    m_overwrite(false),
    m_overwriteHasBeenSet(false)
{
  *this = jsonValue;
}

DataCatalogOutput& DataCatalogOutput::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Options"))
  {
    m_s3Options = jsonValue.GetObject("S3Options");

    m_s3OptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseOptions"))
  {
    m_databaseOptions = jsonValue.GetObject("DatabaseOptions");

    m_databaseOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overwrite"))
  {
    m_overwrite = jsonValue.GetBool("Overwrite");

    m_overwriteHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCatalogOutput::Jsonize() const
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

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_s3OptionsHasBeenSet)
  {
   payload.WithObject("S3Options", m_s3Options.Jsonize());

  }

  if(m_databaseOptionsHasBeenSet)
  {
   payload.WithObject("DatabaseOptions", m_databaseOptions.Jsonize());

  }

  if(m_overwriteHasBeenSet)
  {
   payload.WithBool("Overwrite", m_overwrite);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
