/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationResourceDetailedStatusFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

OrganizationResourceDetailedStatusFilters::OrganizationResourceDetailedStatusFilters() : 
    m_accountIdHasBeenSet(false),
    m_status(OrganizationResourceDetailedStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

OrganizationResourceDetailedStatusFilters::OrganizationResourceDetailedStatusFilters(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_status(OrganizationResourceDetailedStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationResourceDetailedStatusFilters& OrganizationResourceDetailedStatusFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrganizationResourceDetailedStatusMapper::GetOrganizationResourceDetailedStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationResourceDetailedStatusFilters::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrganizationResourceDetailedStatusMapper::GetNameForOrganizationResourceDetailedStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
