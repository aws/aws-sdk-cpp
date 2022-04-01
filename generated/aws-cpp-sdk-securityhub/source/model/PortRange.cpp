/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/PortRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

PortRange::PortRange() : 
    m_begin(0),
    m_beginHasBeenSet(false),
    m_end(0),
    m_endHasBeenSet(false)
{
}

PortRange::PortRange(JsonView jsonValue) : 
    m_begin(0),
    m_beginHasBeenSet(false),
    m_end(0),
    m_endHasBeenSet(false)
{
  *this = jsonValue;
}

PortRange& PortRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Begin"))
  {
    m_begin = jsonValue.GetInteger("Begin");

    m_beginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetInteger("End");

    m_endHasBeenSet = true;
  }

  return *this;
}

JsonValue PortRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginHasBeenSet)
  {
   payload.WithInteger("Begin", m_begin);

  }

  if(m_endHasBeenSet)
  {
   payload.WithInteger("End", m_end);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
