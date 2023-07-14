/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GdgAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

GdgAttributes::GdgAttributes() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_rollDispositionHasBeenSet(false)
{
}

GdgAttributes::GdgAttributes(JsonView jsonValue) : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_rollDispositionHasBeenSet(false)
{
  *this = jsonValue;
}

GdgAttributes& GdgAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("limit"))
  {
    m_limit = jsonValue.GetInteger("limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollDisposition"))
  {
    m_rollDisposition = jsonValue.GetString("rollDisposition");

    m_rollDispositionHasBeenSet = true;
  }

  return *this;
}

JsonValue GdgAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  if(m_rollDispositionHasBeenSet)
  {
   payload.WithString("rollDisposition", m_rollDisposition);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
