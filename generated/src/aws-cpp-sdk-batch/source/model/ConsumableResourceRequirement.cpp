/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ConsumableResourceRequirement.h>
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

ConsumableResourceRequirement::ConsumableResourceRequirement(JsonView jsonValue)
{
  *this = jsonValue;
}

ConsumableResourceRequirement& ConsumableResourceRequirement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consumableResource"))
  {
    m_consumableResource = jsonValue.GetString("consumableResource");
    m_consumableResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quantity"))
  {
    m_quantity = jsonValue.GetInt64("quantity");
    m_quantityHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsumableResourceRequirement::Jsonize() const
{
  JsonValue payload;

  if(m_consumableResourceHasBeenSet)
  {
   payload.WithString("consumableResource", m_consumableResource);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInt64("quantity", m_quantity);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
