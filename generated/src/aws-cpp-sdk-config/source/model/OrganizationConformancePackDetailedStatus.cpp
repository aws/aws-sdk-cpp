/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationConformancePackDetailedStatus.h>
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

OrganizationConformancePackDetailedStatus::OrganizationConformancePackDetailedStatus() : 
    m_accountIdHasBeenSet(false),
    m_conformancePackNameHasBeenSet(false),
    m_status(OrganizationResourceDetailedStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

OrganizationConformancePackDetailedStatus::OrganizationConformancePackDetailedStatus(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_conformancePackNameHasBeenSet(false),
    m_status(OrganizationResourceDetailedStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationConformancePackDetailedStatus& OrganizationConformancePackDetailedStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConformancePackName"))
  {
    m_conformancePackName = jsonValue.GetString("ConformancePackName");

    m_conformancePackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrganizationResourceDetailedStatusMapper::GetOrganizationResourceDetailedStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationConformancePackDetailedStatus::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_conformancePackNameHasBeenSet)
  {
   payload.WithString("ConformancePackName", m_conformancePackName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrganizationResourceDetailedStatusMapper::GetNameForOrganizationResourceDetailedStatus(m_status));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
