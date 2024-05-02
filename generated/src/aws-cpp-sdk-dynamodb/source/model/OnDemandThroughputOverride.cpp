/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/OnDemandThroughputOverride.h>
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

OnDemandThroughputOverride::OnDemandThroughputOverride() : 
    m_maxReadRequestUnits(0),
    m_maxReadRequestUnitsHasBeenSet(false)
{
}

OnDemandThroughputOverride::OnDemandThroughputOverride(JsonView jsonValue) : 
    m_maxReadRequestUnits(0),
    m_maxReadRequestUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

OnDemandThroughputOverride& OnDemandThroughputOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxReadRequestUnits"))
  {
    m_maxReadRequestUnits = jsonValue.GetInt64("MaxReadRequestUnits");

    m_maxReadRequestUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue OnDemandThroughputOverride::Jsonize() const
{
  JsonValue payload;

  if(m_maxReadRequestUnitsHasBeenSet)
  {
   payload.WithInt64("MaxReadRequestUnits", m_maxReadRequestUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
