/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/RDSDatabase.h>
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

RDSDatabase::RDSDatabase() : 
    m_instanceIdentifierHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

RDSDatabase::RDSDatabase(JsonView jsonValue) : 
    m_instanceIdentifierHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
  *this = jsonValue;
}

RDSDatabase& RDSDatabase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceIdentifier"))
  {
    m_instanceIdentifier = jsonValue.GetString("InstanceIdentifier");

    m_instanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RDSDatabase::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdentifierHasBeenSet)
  {
   payload.WithString("InstanceIdentifier", m_instanceIdentifier);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
