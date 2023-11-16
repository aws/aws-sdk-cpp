/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GeoLocationTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

GeoLocationTarget::GeoLocationTarget() : 
    m_nameHasBeenSet(false),
    m_order(TargetFieldOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

GeoLocationTarget::GeoLocationTarget(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_order(TargetFieldOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

GeoLocationTarget& GeoLocationTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = TargetFieldOrderMapper::GetTargetFieldOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoLocationTarget::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", TargetFieldOrderMapper::GetNameForTargetFieldOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
