/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/EksAnywhereSubscriptionTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

EksAnywhereSubscriptionTerm::EksAnywhereSubscriptionTerm(JsonView jsonValue)
{
  *this = jsonValue;
}

EksAnywhereSubscriptionTerm& EksAnywhereSubscriptionTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInteger("duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = EksAnywhereSubscriptionTermUnitMapper::GetEksAnywhereSubscriptionTermUnitForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue EksAnywhereSubscriptionTerm::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("duration", m_duration);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", EksAnywhereSubscriptionTermUnitMapper::GetNameForEksAnywhereSubscriptionTermUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
