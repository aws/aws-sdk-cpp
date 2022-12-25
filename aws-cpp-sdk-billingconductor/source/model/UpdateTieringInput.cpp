/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateTieringInput.h>
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

UpdateTieringInput::UpdateTieringInput() : 
    m_freeTierHasBeenSet(false)
{
}

UpdateTieringInput::UpdateTieringInput(JsonView jsonValue) : 
    m_freeTierHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateTieringInput& UpdateTieringInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FreeTier"))
  {
    m_freeTier = jsonValue.GetObject("FreeTier");

    m_freeTierHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateTieringInput::Jsonize() const
{
  JsonValue payload;

  if(m_freeTierHasBeenSet)
  {
   payload.WithObject("FreeTier", m_freeTier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
