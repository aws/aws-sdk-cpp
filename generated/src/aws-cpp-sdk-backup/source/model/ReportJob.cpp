/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ReportJob.h>
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

ReportJob::ReportJob() : 
    m_reportJobIdHasBeenSet(false),
    m_reportPlanArnHasBeenSet(false),
    m_reportTemplateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_reportDestinationHasBeenSet(false)
{
}

ReportJob::ReportJob(JsonView jsonValue) : 
    m_reportJobIdHasBeenSet(false),
    m_reportPlanArnHasBeenSet(false),
    m_reportTemplateHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_reportDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

ReportJob& ReportJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReportJobId"))
  {
    m_reportJobId = jsonValue.GetString("ReportJobId");

    m_reportJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportPlanArn"))
  {
    m_reportPlanArn = jsonValue.GetString("ReportPlanArn");

    m_reportPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportTemplate"))
  {
    m_reportTemplate = jsonValue.GetString("ReportTemplate");

    m_reportTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

    m_completionTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("ReportDestination"))
  {
    m_reportDestination = jsonValue.GetObject("ReportDestination");

    m_reportDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportJob::Jsonize() const
{
  JsonValue payload;

  if(m_reportJobIdHasBeenSet)
  {
   payload.WithString("ReportJobId", m_reportJobId);

  }

  if(m_reportPlanArnHasBeenSet)
  {
   payload.WithString("ReportPlanArn", m_reportPlanArn);

  }

  if(m_reportTemplateHasBeenSet)
  {
   payload.WithString("ReportTemplate", m_reportTemplate);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_reportDestinationHasBeenSet)
  {
   payload.WithObject("ReportDestination", m_reportDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
