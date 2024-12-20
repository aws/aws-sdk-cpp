/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchWriteResponse.h>
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

BatchWriteResponse::BatchWriteResponse() : 
    m_consumedCapacityUnits(0.0),
    m_consumedCapacityUnitsHasBeenSet(false)
{
}

BatchWriteResponse::BatchWriteResponse(JsonView jsonValue)
  : BatchWriteResponse()
{
  *this = jsonValue;
}

BatchWriteResponse& BatchWriteResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConsumedCapacityUnits"))
  {
    m_consumedCapacityUnits = jsonValue.GetDouble("ConsumedCapacityUnits");

    m_consumedCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchWriteResponse::Jsonize() const
{
  JsonValue payload;

  if(m_consumedCapacityUnitsHasBeenSet)
  {
   payload.WithDouble("ConsumedCapacityUnits", m_consumedCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
