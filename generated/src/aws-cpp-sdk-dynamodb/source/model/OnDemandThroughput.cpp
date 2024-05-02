/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/OnDemandThroughput.h>
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

OnDemandThroughput::OnDemandThroughput() : 
    m_maxReadRequestUnits(0),
    m_maxReadRequestUnitsHasBeenSet(false),
    m_maxWriteRequestUnits(0),
    m_maxWriteRequestUnitsHasBeenSet(false)
{
}

OnDemandThroughput::OnDemandThroughput(JsonView jsonValue) : 
    m_maxReadRequestUnits(0),
    m_maxReadRequestUnitsHasBeenSet(false),
    m_maxWriteRequestUnits(0),
    m_maxWriteRequestUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

OnDemandThroughput& OnDemandThroughput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxReadRequestUnits"))
  {
    m_maxReadRequestUnits = jsonValue.GetInt64("MaxReadRequestUnits");

    m_maxReadRequestUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxWriteRequestUnits"))
  {
    m_maxWriteRequestUnits = jsonValue.GetInt64("MaxWriteRequestUnits");

    m_maxWriteRequestUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue OnDemandThroughput::Jsonize() const
{
  JsonValue payload;

  if(m_maxReadRequestUnitsHasBeenSet)
  {
   payload.WithInt64("MaxReadRequestUnits", m_maxReadRequestUnits);

  }

  if(m_maxWriteRequestUnitsHasBeenSet)
  {
   payload.WithInt64("MaxWriteRequestUnits", m_maxWriteRequestUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
