/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListAccountAssociationsFilter.h>
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

ListAccountAssociationsFilter::ListAccountAssociationsFilter() : 
    m_associationHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

ListAccountAssociationsFilter::ListAccountAssociationsFilter(JsonView jsonValue) : 
    m_associationHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListAccountAssociationsFilter& ListAccountAssociationsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Association"))
  {
    m_association = jsonValue.GetString("Association");

    m_associationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListAccountAssociationsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_associationHasBeenSet)
  {
   payload.WithString("Association", m_association);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
