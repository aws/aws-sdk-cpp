/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/IdentityProviderSummary.h>
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

IdentityProviderSummary::IdentityProviderSummary() : 
    m_failureMessageHasBeenSet(false),
    m_identityProviderHasBeenSet(false),
    m_productHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

IdentityProviderSummary::IdentityProviderSummary(JsonView jsonValue) : 
    m_failureMessageHasBeenSet(false),
    m_identityProviderHasBeenSet(false),
    m_productHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityProviderSummary& IdentityProviderSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

    m_failureMessageHasBeenSet = true;
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

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityProviderSummary::Jsonize() const
{
  JsonValue payload;

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  if(m_identityProviderHasBeenSet)
  {
   payload.WithObject("IdentityProvider", m_identityProvider.Jsonize());

  }

  if(m_productHasBeenSet)
  {
   payload.WithString("Product", m_product);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
