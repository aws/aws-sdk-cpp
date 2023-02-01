/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CreateFreeTierConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

CreateFreeTierConfig::CreateFreeTierConfig() : 
    m_activated(false),
    m_activatedHasBeenSet(false)
{
}

CreateFreeTierConfig::CreateFreeTierConfig(JsonView jsonValue) : 
    m_activated(false),
    m_activatedHasBeenSet(false)
{
  *this = jsonValue;
}

CreateFreeTierConfig& CreateFreeTierConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Activated"))
  {
    m_activated = jsonValue.GetBool("Activated");

    m_activatedHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateFreeTierConfig::Jsonize() const
{
  JsonValue payload;

  if(m_activatedHasBeenSet)
  {
   payload.WithBool("Activated", m_activated);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
