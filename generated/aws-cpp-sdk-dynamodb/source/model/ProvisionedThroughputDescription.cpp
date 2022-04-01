/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ProvisionedThroughputDescription.h>
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

ProvisionedThroughputDescription::ProvisionedThroughputDescription() : 
    m_lastIncreaseDateTimeHasBeenSet(false),
    m_lastDecreaseDateTimeHasBeenSet(false),
    m_numberOfDecreasesToday(0),
    m_numberOfDecreasesTodayHasBeenSet(false),
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0),
    m_writeCapacityUnitsHasBeenSet(false)
{
}

ProvisionedThroughputDescription::ProvisionedThroughputDescription(JsonView jsonValue) : 
    m_lastIncreaseDateTimeHasBeenSet(false),
    m_lastDecreaseDateTimeHasBeenSet(false),
    m_numberOfDecreasesToday(0),
    m_numberOfDecreasesTodayHasBeenSet(false),
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0),
    m_writeCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedThroughputDescription& ProvisionedThroughputDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastIncreaseDateTime"))
  {
    m_lastIncreaseDateTime = jsonValue.GetDouble("LastIncreaseDateTime");

    m_lastIncreaseDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastDecreaseDateTime"))
  {
    m_lastDecreaseDateTime = jsonValue.GetDouble("LastDecreaseDateTime");

    m_lastDecreaseDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfDecreasesToday"))
  {
    m_numberOfDecreasesToday = jsonValue.GetInt64("NumberOfDecreasesToday");

    m_numberOfDecreasesTodayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadCapacityUnits"))
  {
    m_readCapacityUnits = jsonValue.GetInt64("ReadCapacityUnits");

    m_readCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteCapacityUnits"))
  {
    m_writeCapacityUnits = jsonValue.GetInt64("WriteCapacityUnits");

    m_writeCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedThroughputDescription::Jsonize() const
{
  JsonValue payload;

  if(m_lastIncreaseDateTimeHasBeenSet)
  {
   payload.WithDouble("LastIncreaseDateTime", m_lastIncreaseDateTime.SecondsWithMSPrecision());
  }

  if(m_lastDecreaseDateTimeHasBeenSet)
  {
   payload.WithDouble("LastDecreaseDateTime", m_lastDecreaseDateTime.SecondsWithMSPrecision());
  }

  if(m_numberOfDecreasesTodayHasBeenSet)
  {
   payload.WithInt64("NumberOfDecreasesToday", m_numberOfDecreasesToday);

  }

  if(m_readCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("ReadCapacityUnits", m_readCapacityUnits);

  }

  if(m_writeCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("WriteCapacityUnits", m_writeCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
