/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ExperimentReport::ExperimentReport() : 
    m_contentHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_reportName(ExperimentReportName::NOT_SET),
    m_reportNameHasBeenSet(false),
    m_treatmentNameHasBeenSet(false)
{
}

ExperimentReport::ExperimentReport(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_reportName(ExperimentReportName::NOT_SET),
    m_reportNameHasBeenSet(false),
    m_treatmentNameHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentReport& ExperimentReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reportName"))
  {
    m_reportName = ExperimentReportNameMapper::GetExperimentReportNameForName(jsonValue.GetString("reportName"));

    m_reportNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("treatmentName"))
  {
    m_treatmentName = jsonValue.GetString("treatmentName");

    m_treatmentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentReport::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_reportNameHasBeenSet)
  {
   payload.WithString("reportName", ExperimentReportNameMapper::GetNameForExperimentReportName(m_reportName));
  }

  if(m_treatmentNameHasBeenSet)
  {
   payload.WithString("treatmentName", m_treatmentName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
