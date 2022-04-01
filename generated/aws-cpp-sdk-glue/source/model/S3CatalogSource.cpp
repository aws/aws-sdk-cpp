/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3CatalogSource.h>
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

S3CatalogSource::S3CatalogSource() : 
    m_nameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_partitionPredicateHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false)
{
}

S3CatalogSource::S3CatalogSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_partitionPredicateHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

S3CatalogSource& S3CatalogSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionPredicate"))
  {
    m_partitionPredicate = jsonValue.GetString("PartitionPredicate");

    m_partitionPredicateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    m_additionalOptions = jsonValue.GetObject("AdditionalOptions");

    m_additionalOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue S3CatalogSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_partitionPredicateHasBeenSet)
  {
   payload.WithString("PartitionPredicate", m_partitionPredicate);

  }

  if(m_additionalOptionsHasBeenSet)
  {
   payload.WithObject("AdditionalOptions", m_additionalOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
