/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Denied.h>
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

Denied::Denied() : 
    m_implicitDenyHasBeenSet(false),
    m_explicitDenyHasBeenSet(false)
{
}

Denied::Denied(JsonView jsonValue) : 
    m_implicitDenyHasBeenSet(false),
    m_explicitDenyHasBeenSet(false)
{
  *this = jsonValue;
}

Denied& Denied::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("implicitDeny"))
  {
    m_implicitDeny = jsonValue.GetObject("implicitDeny");

    m_implicitDenyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("explicitDeny"))
  {
    m_explicitDeny = jsonValue.GetObject("explicitDeny");

    m_explicitDenyHasBeenSet = true;
  }

  return *this;
}

JsonValue Denied::Jsonize() const
{
  JsonValue payload;

  if(m_implicitDenyHasBeenSet)
  {
   payload.WithObject("implicitDeny", m_implicitDeny.Jsonize());

  }

  if(m_explicitDenyHasBeenSet)
  {
   payload.WithObject("explicitDeny", m_explicitDeny.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
