/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/NetworkFileDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

NetworkFileDefinition::NetworkFileDefinition() : 
    m_canDbcHasBeenSet(false)
{
}

NetworkFileDefinition::NetworkFileDefinition(JsonView jsonValue) : 
    m_canDbcHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFileDefinition& NetworkFileDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("canDbc"))
  {
    m_canDbc = jsonValue.GetObject("canDbc");

    m_canDbcHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFileDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_canDbcHasBeenSet)
  {
   payload.WithObject("canDbc", m_canDbc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
