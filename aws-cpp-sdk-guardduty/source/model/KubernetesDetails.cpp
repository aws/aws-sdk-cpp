/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

KubernetesDetails::KubernetesDetails() : 
    m_kubernetesUserDetailsHasBeenSet(false),
    m_kubernetesWorkloadDetailsHasBeenSet(false)
{
}

KubernetesDetails::KubernetesDetails(JsonView jsonValue) : 
    m_kubernetesUserDetailsHasBeenSet(false),
    m_kubernetesWorkloadDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesDetails& KubernetesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kubernetesUserDetails"))
  {
    m_kubernetesUserDetails = jsonValue.GetObject("kubernetesUserDetails");

    m_kubernetesUserDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesWorkloadDetails"))
  {
    m_kubernetesWorkloadDetails = jsonValue.GetObject("kubernetesWorkloadDetails");

    m_kubernetesWorkloadDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_kubernetesUserDetailsHasBeenSet)
  {
   payload.WithObject("kubernetesUserDetails", m_kubernetesUserDetails.Jsonize());

  }

  if(m_kubernetesWorkloadDetailsHasBeenSet)
  {
   payload.WithObject("kubernetesWorkloadDetails", m_kubernetesWorkloadDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
