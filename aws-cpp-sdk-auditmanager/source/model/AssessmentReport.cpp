/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

AssessmentReport::AssessmentReport() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_status(AssessmentReportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

AssessmentReport::AssessmentReport(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_status(AssessmentReportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentReport& AssessmentReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentId"))
  {
    m_assessmentId = jsonValue.GetString("assessmentId");

    m_assessmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentName"))
  {
    m_assessmentName = jsonValue.GetString("assessmentName");

    m_assessmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("author"))
  {
    m_author = jsonValue.GetString("author");

    m_authorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AssessmentReportStatusMapper::GetAssessmentReportStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentReport::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("assessmentId", m_assessmentId);

  }

  if(m_assessmentNameHasBeenSet)
  {
   payload.WithString("assessmentName", m_assessmentName);

  }

  if(m_authorHasBeenSet)
  {
   payload.WithString("author", m_author);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AssessmentReportStatusMapper::GetNameForAssessmentReportStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
