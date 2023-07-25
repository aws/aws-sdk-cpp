/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateBillingGroupAccountGrouping.h>
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

UpdateBillingGroupAccountGrouping::UpdateBillingGroupAccountGrouping() : 
    m_autoAssociate(false),
    m_autoAssociateHasBeenSet(false)
{
}

UpdateBillingGroupAccountGrouping::UpdateBillingGroupAccountGrouping(JsonView jsonValue) : 
    m_autoAssociate(false),
    m_autoAssociateHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateBillingGroupAccountGrouping& UpdateBillingGroupAccountGrouping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoAssociate"))
  {
    m_autoAssociate = jsonValue.GetBool("AutoAssociate");

    m_autoAssociateHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateBillingGroupAccountGrouping::Jsonize() const
{
  JsonValue payload;

  if(m_autoAssociateHasBeenSet)
  {
   payload.WithBool("AutoAssociate", m_autoAssociate);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
