/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/AccountAssociationsListElement.h>
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

AccountAssociationsListElement::AccountAssociationsListElement() : 
    m_accountIdHasBeenSet(false),
    m_billingGroupArnHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_accountEmailHasBeenSet(false)
{
}

AccountAssociationsListElement::AccountAssociationsListElement(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_billingGroupArnHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_accountEmailHasBeenSet(false)
{
  *this = jsonValue;
}

AccountAssociationsListElement& AccountAssociationsListElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillingGroupArn"))
  {
    m_billingGroupArn = jsonValue.GetString("BillingGroupArn");

    m_billingGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountName"))
  {
    m_accountName = jsonValue.GetString("AccountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountEmail"))
  {
    m_accountEmail = jsonValue.GetString("AccountEmail");

    m_accountEmailHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountAssociationsListElement::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_billingGroupArnHasBeenSet)
  {
   payload.WithString("BillingGroupArn", m_billingGroupArn);

  }

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_accountEmailHasBeenSet)
  {
   payload.WithString("AccountEmail", m_accountEmail);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
