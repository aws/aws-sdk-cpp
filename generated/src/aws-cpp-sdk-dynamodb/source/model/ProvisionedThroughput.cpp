/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ProvisionedThroughput.h>
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

ProvisionedThroughput::ProvisionedThroughput(JsonView jsonValue)
{
  *this = jsonValue;
}

ProvisionedThroughput& ProvisionedThroughput::operator =(JsonView jsonValue)
{
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

JsonValue ProvisionedThroughput::Jsonize() const
{
  JsonValue payload;

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
