/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CreateTieringInput.h>
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

CreateTieringInput::CreateTieringInput() : 
    m_freeTierHasBeenSet(false)
{
}

CreateTieringInput::CreateTieringInput(JsonView jsonValue) : 
    m_freeTierHasBeenSet(false)
{
  *this = jsonValue;
}

CreateTieringInput& CreateTieringInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FreeTier"))
  {
    m_freeTier = jsonValue.GetObject("FreeTier");

    m_freeTierHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateTieringInput::Jsonize() const
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
