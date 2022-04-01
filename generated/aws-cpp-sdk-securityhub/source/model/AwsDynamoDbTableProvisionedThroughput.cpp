/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableProvisionedThroughput.h>
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

AwsDynamoDbTableProvisionedThroughput::AwsDynamoDbTableProvisionedThroughput() : 
    m_lastDecreaseDateTimeHasBeenSet(false),
    m_lastIncreaseDateTimeHasBeenSet(false),
    m_numberOfDecreasesToday(0),
    m_numberOfDecreasesTodayHasBeenSet(false),
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0),
    m_writeCapacityUnitsHasBeenSet(false)
{
}

AwsDynamoDbTableProvisionedThroughput::AwsDynamoDbTableProvisionedThroughput(JsonView jsonValue) : 
    m_lastDecreaseDateTimeHasBeenSet(false),
    m_lastIncreaseDateTimeHasBeenSet(false),
    m_numberOfDecreasesToday(0),
    m_numberOfDecreasesTodayHasBeenSet(false),
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0),
    m_writeCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableProvisionedThroughput& AwsDynamoDbTableProvisionedThroughput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastDecreaseDateTime"))
  {
    m_lastDecreaseDateTime = jsonValue.GetString("LastDecreaseDateTime");

    m_lastDecreaseDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastIncreaseDateTime"))
  {
    m_lastIncreaseDateTime = jsonValue.GetString("LastIncreaseDateTime");

    m_lastIncreaseDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfDecreasesToday"))
  {
    m_numberOfDecreasesToday = jsonValue.GetInteger("NumberOfDecreasesToday");

    m_numberOfDecreasesTodayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadCapacityUnits"))
  {
    m_readCapacityUnits = jsonValue.GetInteger("ReadCapacityUnits");

    m_readCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteCapacityUnits"))
  {
    m_writeCapacityUnits = jsonValue.GetInteger("WriteCapacityUnits");

    m_writeCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableProvisionedThroughput::Jsonize() const
{
  JsonValue payload;

  if(m_lastDecreaseDateTimeHasBeenSet)
  {
   payload.WithString("LastDecreaseDateTime", m_lastDecreaseDateTime);

  }

  if(m_lastIncreaseDateTimeHasBeenSet)
  {
   payload.WithString("LastIncreaseDateTime", m_lastIncreaseDateTime);

  }

  if(m_numberOfDecreasesTodayHasBeenSet)
  {
   payload.WithInteger("NumberOfDecreasesToday", m_numberOfDecreasesToday);

  }

  if(m_readCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("ReadCapacityUnits", m_readCapacityUnits);

  }

  if(m_writeCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("WriteCapacityUnits", m_writeCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
