/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/PortRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

PortRange::PortRange() : 
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false)
{
}

PortRange::PortRange(JsonView jsonValue) : 
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

PortRange& PortRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetInteger("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetInteger("to");

    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue PortRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithInteger("from", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithInteger("to", m_to);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
