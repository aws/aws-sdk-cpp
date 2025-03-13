/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ReservedCapacityDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

ReservedCapacityDetails::ReservedCapacityDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ReservedCapacityDetails& ReservedCapacityDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DynamoDBCapacityDetails"))
  {
    m_dynamoDBCapacityDetails = jsonValue.GetObject("DynamoDBCapacityDetails");
    m_dynamoDBCapacityDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ReservedCapacityDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dynamoDBCapacityDetailsHasBeenSet)
  {
   payload.WithObject("DynamoDBCapacityDetails", m_dynamoDBCapacityDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
