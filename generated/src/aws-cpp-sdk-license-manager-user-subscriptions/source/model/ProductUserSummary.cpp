/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ProductUserSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

ProductUserSummary::ProductUserSummary() : 
    m_domainHasBeenSet(false),
    m_identityProviderHasBeenSet(false),
    m_productHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_subscriptionEndDateHasBeenSet(false),
    m_subscriptionStartDateHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

ProductUserSummary::ProductUserSummary(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_identityProviderHasBeenSet(false),
    m_productHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_subscriptionEndDateHasBeenSet(false),
    m_subscriptionStartDateHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

ProductUserSummary& ProductUserSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityProvider"))
  {
    m_identityProvider = jsonValue.GetObject("IdentityProvider");

    m_identityProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Product"))
  {
    m_product = jsonValue.GetString("Product");

    m_productHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionEndDate"))
  {
    m_subscriptionEndDate = jsonValue.GetString("SubscriptionEndDate");

    m_subscriptionEndDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionStartDate"))
  {
    m_subscriptionStartDate = jsonValue.GetString("SubscriptionStartDate");

    m_subscriptionStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductUserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_identityProviderHasBeenSet)
  {
   payload.WithObject("IdentityProvider", m_identityProvider.Jsonize());

  }

  if(m_productHasBeenSet)
  {
   payload.WithString("Product", m_product);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_subscriptionEndDateHasBeenSet)
  {
   payload.WithString("SubscriptionEndDate", m_subscriptionEndDate);

  }

  if(m_subscriptionStartDateHasBeenSet)
  {
   payload.WithString("SubscriptionStartDate", m_subscriptionStartDate);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
