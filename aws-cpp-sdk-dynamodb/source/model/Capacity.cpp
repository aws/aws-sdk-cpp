/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
