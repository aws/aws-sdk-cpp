/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/SubscriptionLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

SubscriptionLimits::SubscriptionLimits() : 
    m_protectionLimitsHasBeenSet(false),
    m_protectionGroupLimitsHasBeenSet(false)
{
}

SubscriptionLimits::SubscriptionLimits(JsonView jsonValue) : 
    m_protectionLimitsHasBeenSet(false),
    m_protectionGroupLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionLimits& SubscriptionLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProtectionLimits"))
  {
    m_protectionLimits = jsonValue.GetObject("ProtectionLimits");

    m_protectionLimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectionGroupLimits"))
  {
    m_protectionGroupLimits = jsonValue.GetObject("ProtectionGroupLimits");

    m_protectionGroupLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscriptionLimits::Jsonize() const
{
  JsonValue payload;

  if(m_protectionLimitsHasBeenSet)
  {
   payload.WithObject("ProtectionLimits", m_protectionLimits.Jsonize());

  }

  if(m_protectionGroupLimitsHasBeenSet)
  {
   payload.WithObject("ProtectionGroupLimits", m_protectionGroupLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
