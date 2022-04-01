/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ReportPlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ReportPlan::ReportPlan() : 
    m_reportPlanArnHasBeenSet(false),
    m_reportPlanNameHasBeenSet(false),
    m_reportPlanDescriptionHasBeenSet(false),
    m_reportSettingHasBeenSet(false),
    m_reportDeliveryChannelHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastAttemptedExecutionTimeHasBeenSet(false),
    m_lastSuccessfulExecutionTimeHasBeenSet(false)
{
}

ReportPlan::ReportPlan(JsonView jsonValue) : 
    m_reportPlanArnHasBeenSet(false),
    m_reportPlanNameHasBeenSet(false),
    m_reportPlanDescriptionHasBeenSet(false),
    m_reportSettingHasBeenSet(false),
    m_reportDeliveryChannelHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastAttemptedExecutionTimeHasBeenSet(false),
    m_lastSuccessfulExecutionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ReportPlan& ReportPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReportPlanArn"))
  {
    m_reportPlanArn = jsonValue.GetString("ReportPlanArn");

    m_reportPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportPlanName"))
  {
    m_reportPlanName = jsonValue.GetString("ReportPlanName");

    m_reportPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportPlanDescription"))
  {
    m_reportPlanDescription = jsonValue.GetString("ReportPlanDescription");

    m_reportPlanDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportSetting"))
  {
    m_reportSetting = jsonValue.GetObject("ReportSetting");

    m_reportSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportDeliveryChannel"))
  {
    m_reportDeliveryChannel = jsonValue.GetObject("ReportDeliveryChannel");

    m_reportDeliveryChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = jsonValue.GetString("DeploymentStatus");

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAttemptedExecutionTime"))
  {
    m_lastAttemptedExecutionTime = jsonValue.GetDouble("LastAttemptedExecutionTime");

    m_lastAttemptedExecutionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulExecutionTime"))
  {
    m_lastSuccessfulExecutionTime = jsonValue.GetDouble("LastSuccessfulExecutionTime");

    m_lastSuccessfulExecutionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportPlan::Jsonize() const
{
  JsonValue payload;

  if(m_reportPlanArnHasBeenSet)
  {
   payload.WithString("ReportPlanArn", m_reportPlanArn);

  }

  if(m_reportPlanNameHasBeenSet)
  {
   payload.WithString("ReportPlanName", m_reportPlanName);

  }

  if(m_reportPlanDescriptionHasBeenSet)
  {
   payload.WithString("ReportPlanDescription", m_reportPlanDescription);

  }

  if(m_reportSettingHasBeenSet)
  {
   payload.WithObject("ReportSetting", m_reportSetting.Jsonize());

  }

  if(m_reportDeliveryChannelHasBeenSet)
  {
   payload.WithObject("ReportDeliveryChannel", m_reportDeliveryChannel.Jsonize());

  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("DeploymentStatus", m_deploymentStatus);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastAttemptedExecutionTimeHasBeenSet)
  {
   payload.WithDouble("LastAttemptedExecutionTime", m_lastAttemptedExecutionTime.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulExecutionTimeHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulExecutionTime", m_lastSuccessfulExecutionTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
