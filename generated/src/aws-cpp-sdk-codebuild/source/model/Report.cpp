/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/Report.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

Report::Report() : 
    m_arnHasBeenSet(false),
    m_type(ReportType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_reportGroupArnHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_status(ReportStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_exportConfigHasBeenSet(false),
    m_truncated(false),
    m_truncatedHasBeenSet(false),
    m_testSummaryHasBeenSet(false),
    m_codeCoverageSummaryHasBeenSet(false)
{
}

Report::Report(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_type(ReportType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_reportGroupArnHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_status(ReportStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_exportConfigHasBeenSet(false),
    m_truncated(false),
    m_truncatedHasBeenSet(false),
    m_testSummaryHasBeenSet(false),
    m_codeCoverageSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

Report& Report::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ReportTypeMapper::GetReportTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reportGroupArn"))
  {
    m_reportGroupArn = jsonValue.GetString("reportGroupArn");

    m_reportGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReportStatusTypeMapper::GetReportStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expired"))
  {
    m_expired = jsonValue.GetDouble("expired");

    m_expiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportConfig"))
  {
    m_exportConfig = jsonValue.GetObject("exportConfig");

    m_exportConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("truncated"))
  {
    m_truncated = jsonValue.GetBool("truncated");

    m_truncatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testSummary"))
  {
    m_testSummary = jsonValue.GetObject("testSummary");

    m_testSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codeCoverageSummary"))
  {
    m_codeCoverageSummary = jsonValue.GetObject("codeCoverageSummary");

    m_codeCoverageSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue Report::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ReportTypeMapper::GetNameForReportType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_reportGroupArnHasBeenSet)
  {
   payload.WithString("reportGroupArn", m_reportGroupArn);

  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReportStatusTypeMapper::GetNameForReportStatusType(m_status));
  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_expiredHasBeenSet)
  {
   payload.WithDouble("expired", m_expired.SecondsWithMSPrecision());
  }

  if(m_exportConfigHasBeenSet)
  {
   payload.WithObject("exportConfig", m_exportConfig.Jsonize());

  }

  if(m_truncatedHasBeenSet)
  {
   payload.WithBool("truncated", m_truncated);

  }

  if(m_testSummaryHasBeenSet)
  {
   payload.WithObject("testSummary", m_testSummary.Jsonize());

  }

  if(m_codeCoverageSummaryHasBeenSet)
  {
   payload.WithObject("codeCoverageSummary", m_codeCoverageSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
