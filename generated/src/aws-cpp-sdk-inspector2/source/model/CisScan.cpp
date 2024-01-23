/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CisScan::CisScan() : 
    m_failedChecks(0),
    m_failedChecksHasBeenSet(false),
    m_scanArnHasBeenSet(false),
    m_scanConfigurationArnHasBeenSet(false),
    m_scanDateHasBeenSet(false),
    m_scanNameHasBeenSet(false),
    m_scheduledByHasBeenSet(false),
    m_securityLevel(CisSecurityLevel::NOT_SET),
    m_securityLevelHasBeenSet(false),
    m_status(CisScanStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_totalChecks(0),
    m_totalChecksHasBeenSet(false)
{
}

CisScan::CisScan(JsonView jsonValue) : 
    m_failedChecks(0),
    m_failedChecksHasBeenSet(false),
    m_scanArnHasBeenSet(false),
    m_scanConfigurationArnHasBeenSet(false),
    m_scanDateHasBeenSet(false),
    m_scanNameHasBeenSet(false),
    m_scheduledByHasBeenSet(false),
    m_securityLevel(CisSecurityLevel::NOT_SET),
    m_securityLevelHasBeenSet(false),
    m_status(CisScanStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_totalChecks(0),
    m_totalChecksHasBeenSet(false)
{
  *this = jsonValue;
}

CisScan& CisScan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failedChecks"))
  {
    m_failedChecks = jsonValue.GetInteger("failedChecks");

    m_failedChecksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanArn"))
  {
    m_scanArn = jsonValue.GetString("scanArn");

    m_scanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanConfigurationArn"))
  {
    m_scanConfigurationArn = jsonValue.GetString("scanConfigurationArn");

    m_scanConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanDate"))
  {
    m_scanDate = jsonValue.GetDouble("scanDate");

    m_scanDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanName"))
  {
    m_scanName = jsonValue.GetString("scanName");

    m_scanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledBy"))
  {
    m_scheduledBy = jsonValue.GetString("scheduledBy");

    m_scheduledByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityLevel"))
  {
    m_securityLevel = CisSecurityLevelMapper::GetCisSecurityLevelForName(jsonValue.GetString("securityLevel"));

    m_securityLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CisScanStatusMapper::GetCisScanStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targets"))
  {
    m_targets = jsonValue.GetObject("targets");

    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalChecks"))
  {
    m_totalChecks = jsonValue.GetInteger("totalChecks");

    m_totalChecksHasBeenSet = true;
  }

  return *this;
}

JsonValue CisScan::Jsonize() const
{
  JsonValue payload;

  if(m_failedChecksHasBeenSet)
  {
   payload.WithInteger("failedChecks", m_failedChecks);

  }

  if(m_scanArnHasBeenSet)
  {
   payload.WithString("scanArn", m_scanArn);

  }

  if(m_scanConfigurationArnHasBeenSet)
  {
   payload.WithString("scanConfigurationArn", m_scanConfigurationArn);

  }

  if(m_scanDateHasBeenSet)
  {
   payload.WithDouble("scanDate", m_scanDate.SecondsWithMSPrecision());
  }

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

  }

  if(m_scheduledByHasBeenSet)
  {
   payload.WithString("scheduledBy", m_scheduledBy);

  }

  if(m_securityLevelHasBeenSet)
  {
   payload.WithString("securityLevel", CisSecurityLevelMapper::GetNameForCisSecurityLevel(m_securityLevel));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CisScanStatusMapper::GetNameForCisScanStatus(m_status));
  }

  if(m_targetsHasBeenSet)
  {
   payload.WithObject("targets", m_targets.Jsonize());

  }

  if(m_totalChecksHasBeenSet)
  {
   payload.WithInteger("totalChecks", m_totalChecks);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
