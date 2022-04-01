/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableProvisionedThroughputOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsDynamoDbTableProvisionedThroughputOverride::AwsDynamoDbTableProvisionedThroughputOverride() : 
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false)
{
}

AwsDynamoDbTableProvisionedThroughputOverride::AwsDynamoDbTableProvisionedThroughputOverride(JsonView jsonValue) : 
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableProvisionedThroughputOverride& AwsDynamoDbTableProvisionedThroughputOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReadCapacityUnits"))
  {
    m_readCapacityUnits = jsonValue.GetInteger("ReadCapacityUnits");

    m_readCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableProvisionedThroughputOverride::Jsonize() const
{
  JsonValue payload;

  if(m_readCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("ReadCapacityUnits", m_readCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
