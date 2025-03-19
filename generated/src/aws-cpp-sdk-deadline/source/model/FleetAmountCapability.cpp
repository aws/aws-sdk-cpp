/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/FleetAmountCapability.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

FleetAmountCapability::FleetAmountCapability(JsonView jsonValue)
{
  *this = jsonValue;
}

FleetAmountCapability& FleetAmountCapability::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetDouble("min");
    m_minHasBeenSet = true;
  }
  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetDouble("max");
    m_maxHasBeenSet = true;
  }
  return *this;
}

JsonValue FleetAmountCapability::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_minHasBeenSet)
  {
   payload.WithDouble("min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
