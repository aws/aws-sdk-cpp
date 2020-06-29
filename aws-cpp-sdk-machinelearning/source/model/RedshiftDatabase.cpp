/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/RedshiftDatabase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

RedshiftDatabase::RedshiftDatabase() : 
    m_databaseNameHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false)
{
}

RedshiftDatabase::RedshiftDatabase(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDatabase& RedshiftDatabase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("ClusterIdentifier");

    m_clusterIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftDatabase::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("ClusterIdentifier", m_clusterIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
