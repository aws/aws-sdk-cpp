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
