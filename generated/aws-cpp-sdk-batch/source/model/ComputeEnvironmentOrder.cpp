/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ComputeEnvironmentOrder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ComputeEnvironmentOrder::ComputeEnvironmentOrder() : 
    m_order(0),
    m_orderHasBeenSet(false),
    m_computeEnvironmentHasBeenSet(false)
{
}

ComputeEnvironmentOrder::ComputeEnvironmentOrder(JsonView jsonValue) : 
    m_order(0),
    m_orderHasBeenSet(false),
    m_computeEnvironmentHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeEnvironmentOrder& ComputeEnvironmentOrder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetInteger("order");

    m_orderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeEnvironment"))
  {
    m_computeEnvironment = jsonValue.GetString("computeEnvironment");

    m_computeEnvironmentHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeEnvironmentOrder::Jsonize() const
{
  JsonValue payload;

  if(m_orderHasBeenSet)
  {
   payload.WithInteger("order", m_order);

  }

  if(m_computeEnvironmentHasBeenSet)
  {
   payload.WithString("computeEnvironment", m_computeEnvironment);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
