/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ProvisionedThroughputOverride.h>
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

ProvisionedThroughputOverride::ProvisionedThroughputOverride() : 
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false)
{
}

ProvisionedThroughputOverride::ProvisionedThroughputOverride(JsonView jsonValue) : 
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedThroughputOverride& ProvisionedThroughputOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReadCapacityUnits"))
  {
    m_readCapacityUnits = jsonValue.GetInt64("ReadCapacityUnits");

    m_readCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedThroughputOverride::Jsonize() const
{
  JsonValue payload;

  if(m_readCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ReadCapacityUnits", m_readCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
