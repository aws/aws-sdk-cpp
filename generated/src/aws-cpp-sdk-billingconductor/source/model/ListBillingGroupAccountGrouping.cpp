/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListBillingGroupAccountGrouping.h>
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

ListBillingGroupAccountGrouping::ListBillingGroupAccountGrouping() : 
    m_autoAssociate(false),
    m_autoAssociateHasBeenSet(false)
{
}

ListBillingGroupAccountGrouping::ListBillingGroupAccountGrouping(JsonView jsonValue) : 
    m_autoAssociate(false),
    m_autoAssociateHasBeenSet(false)
{
  *this = jsonValue;
}

ListBillingGroupAccountGrouping& ListBillingGroupAccountGrouping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoAssociate"))
  {
    m_autoAssociate = jsonValue.GetBool("AutoAssociate");

    m_autoAssociateHasBeenSet = true;
  }

  return *this;
}

JsonValue ListBillingGroupAccountGrouping::Jsonize() const
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
