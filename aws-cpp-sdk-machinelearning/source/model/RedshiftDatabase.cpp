/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

RedshiftDatabase::RedshiftDatabase(const JsonValue& jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDatabase& RedshiftDatabase::operator =(const JsonValue& jsonValue)
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