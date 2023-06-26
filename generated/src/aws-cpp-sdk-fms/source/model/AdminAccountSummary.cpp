/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AdminAccountSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

AdminAccountSummary::AdminAccountSummary() : 
    m_adminAccountHasBeenSet(false),
    m_defaultAdmin(false),
    m_defaultAdminHasBeenSet(false),
    m_status(OrganizationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AdminAccountSummary::AdminAccountSummary(JsonView jsonValue) : 
    m_adminAccountHasBeenSet(false),
    m_defaultAdmin(false),
    m_defaultAdminHasBeenSet(false),
    m_status(OrganizationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AdminAccountSummary& AdminAccountSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdminAccount"))
  {
    m_adminAccount = jsonValue.GetString("AdminAccount");

    m_adminAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAdmin"))
  {
    m_defaultAdmin = jsonValue.GetBool("DefaultAdmin");

    m_defaultAdminHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrganizationStatusMapper::GetOrganizationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AdminAccountSummary::Jsonize() const
{
  JsonValue payload;

  if(m_adminAccountHasBeenSet)
  {
   payload.WithString("AdminAccount", m_adminAccount);

  }

  if(m_defaultAdminHasBeenSet)
  {
   payload.WithBool("DefaultAdmin", m_defaultAdmin);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrganizationStatusMapper::GetNameForOrganizationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
