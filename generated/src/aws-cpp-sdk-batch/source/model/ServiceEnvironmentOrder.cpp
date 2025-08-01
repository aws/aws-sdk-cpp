/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceEnvironmentOrder.h>
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

ServiceEnvironmentOrder::ServiceEnvironmentOrder(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceEnvironmentOrder& ServiceEnvironmentOrder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetInteger("order");
    m_orderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceEnvironment"))
  {
    m_serviceEnvironment = jsonValue.GetString("serviceEnvironment");
    m_serviceEnvironmentHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceEnvironmentOrder::Jsonize() const
{
  JsonValue payload;

  if(m_orderHasBeenSet)
  {
   payload.WithInteger("order", m_order);

  }

  if(m_serviceEnvironmentHasBeenSet)
  {
   payload.WithString("serviceEnvironment", m_serviceEnvironment);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
