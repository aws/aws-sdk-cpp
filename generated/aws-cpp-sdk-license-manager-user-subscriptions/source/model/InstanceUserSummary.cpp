/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/InstanceUserSummary.h>
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

InstanceUserSummary::InstanceUserSummary() : 
    m_associationDateHasBeenSet(false),
    m_disassociationDateHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_identityProviderHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

InstanceUserSummary::InstanceUserSummary(JsonView jsonValue) : 
    m_associationDateHasBeenSet(false),
    m_disassociationDateHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_identityProviderHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceUserSummary& InstanceUserSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationDate"))
  {
    m_associationDate = jsonValue.GetString("AssociationDate");

    m_associationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisassociationDate"))
  {
    m_disassociationDate = jsonValue.GetString("DisassociationDate");

    m_disassociationDateHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceUserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_associationDateHasBeenSet)
  {
   payload.WithString("AssociationDate", m_associationDate);

  }

  if(m_disassociationDateHasBeenSet)
  {
   payload.WithString("DisassociationDate", m_disassociationDate);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_identityProviderHasBeenSet)
  {
   payload.WithObject("IdentityProvider", m_identityProvider.Jsonize());

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

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
