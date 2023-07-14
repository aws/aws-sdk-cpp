/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationConformancePackStatus.h>
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

OrganizationConformancePackStatus::OrganizationConformancePackStatus() : 
    m_organizationConformancePackNameHasBeenSet(false),
    m_status(OrganizationResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

OrganizationConformancePackStatus::OrganizationConformancePackStatus(JsonView jsonValue) : 
    m_organizationConformancePackNameHasBeenSet(false),
    m_status(OrganizationResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationConformancePackStatus& OrganizationConformancePackStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationConformancePackName"))
  {
    m_organizationConformancePackName = jsonValue.GetString("OrganizationConformancePackName");

    m_organizationConformancePackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrganizationResourceStatusMapper::GetOrganizationResourceStatusForName(jsonValue.GetString("Status"));

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

JsonValue OrganizationConformancePackStatus::Jsonize() const
{
  JsonValue payload;

  if(m_organizationConformancePackNameHasBeenSet)
  {
   payload.WithString("OrganizationConformancePackName", m_organizationConformancePackName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OrganizationResourceStatusMapper::GetNameForOrganizationResourceStatus(m_status));
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
