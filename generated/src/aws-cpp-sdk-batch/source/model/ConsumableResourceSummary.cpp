/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ConsumableResourceSummary.h>
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

ConsumableResourceSummary::ConsumableResourceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConsumableResourceSummary& ConsumableResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consumableResourceArn"))
  {
    m_consumableResourceArn = jsonValue.GetString("consumableResourceArn");
    m_consumableResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("consumableResourceName"))
  {
    m_consumableResourceName = jsonValue.GetString("consumableResourceName");
    m_consumableResourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalQuantity"))
  {
    m_totalQuantity = jsonValue.GetInt64("totalQuantity");
    m_totalQuantityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inUseQuantity"))
  {
    m_inUseQuantity = jsonValue.GetInt64("inUseQuantity");
    m_inUseQuantityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsumableResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_consumableResourceArnHasBeenSet)
  {
   payload.WithString("consumableResourceArn", m_consumableResourceArn);

  }

  if(m_consumableResourceNameHasBeenSet)
  {
   payload.WithString("consumableResourceName", m_consumableResourceName);

  }

  if(m_totalQuantityHasBeenSet)
  {
   payload.WithInt64("totalQuantity", m_totalQuantity);

  }

  if(m_inUseQuantityHasBeenSet)
  {
   payload.WithInt64("inUseQuantity", m_inUseQuantity);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
