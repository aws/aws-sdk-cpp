/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/FilterByComponentType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

FilterByComponentType::FilterByComponentType() : 
    m_componentTypeIdHasBeenSet(false)
{
}

FilterByComponentType::FilterByComponentType(JsonView jsonValue) : 
    m_componentTypeIdHasBeenSet(false)
{
  *this = jsonValue;
}

FilterByComponentType& FilterByComponentType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentTypeId"))
  {
    m_componentTypeId = jsonValue.GetString("componentTypeId");

    m_componentTypeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterByComponentType::Jsonize() const
{
  JsonValue payload;

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
