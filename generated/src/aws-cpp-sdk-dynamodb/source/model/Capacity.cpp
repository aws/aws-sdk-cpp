/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/Capacity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

Capacity::Capacity() : 
    m_readCapacityUnits(0.0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0.0),
    m_writeCapacityUnitsHasBeenSet(false),
    m_capacityUnits(0.0),
    m_capacityUnitsHasBeenSet(false)
{
}

Capacity::Capacity(JsonView jsonValue) : 
    m_readCapacityUnits(0.0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0.0),
    m_writeCapacityUnitsHasBeenSet(false),
    m_capacityUnits(0.0),
    m_capacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

Capacity& Capacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReadCapacityUnits"))
  {
    m_readCapacityUnits = jsonValue.GetDouble("ReadCapacityUnits");

    m_readCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteCapacityUnits"))
  {
    m_writeCapacityUnits = jsonValue.GetDouble("WriteCapacityUnits");

    m_writeCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityUnits"))
  {
    m_capacityUnits = jsonValue.GetDouble("CapacityUnits");

    m_capacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue Capacity::Jsonize() const
{
  JsonValue payload;

  if(m_readCapacityUnitsHasBeenSet)
  {
   payload.WithDouble("ReadCapacityUnits", m_readCapacityUnits);

  }

  if(m_writeCapacityUnitsHasBeenSet)
  {
   payload.WithDouble("WriteCapacityUnits", m_writeCapacityUnits);

  }

  if(m_capacityUnitsHasBeenSet)
  {
   payload.WithDouble("CapacityUnits", m_capacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
