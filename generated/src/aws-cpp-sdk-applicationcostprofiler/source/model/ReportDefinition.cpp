/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/ReportDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationCostProfiler
{
namespace Model
{

ReportDefinition::ReportDefinition() : 
    m_reportIdHasBeenSet(false),
    m_reportDescriptionHasBeenSet(false),
    m_reportFrequency(ReportFrequency::NOT_SET),
    m_reportFrequencyHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_destinationS3LocationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

ReportDefinition::ReportDefinition(JsonView jsonValue) : 
    m_reportIdHasBeenSet(false),
    m_reportDescriptionHasBeenSet(false),
    m_reportFrequency(ReportFrequency::NOT_SET),
    m_reportFrequencyHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_destinationS3LocationHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ReportDefinition& ReportDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reportId"))
  {
    m_reportId = jsonValue.GetString("reportId");

    m_reportIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reportDescription"))
  {
    m_reportDescription = jsonValue.GetString("reportDescription");

    m_reportDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reportFrequency"))
  {
    m_reportFrequency = ReportFrequencyMapper::GetReportFrequencyForName(jsonValue.GetString("reportFrequency"));

    m_reportFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationS3Location"))
  {
    m_destinationS3Location = jsonValue.GetObject("destinationS3Location");

    m_destinationS3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_reportIdHasBeenSet)
  {
   payload.WithString("reportId", m_reportId);

  }

  if(m_reportDescriptionHasBeenSet)
  {
   payload.WithString("reportDescription", m_reportDescription);

  }

  if(m_reportFrequencyHasBeenSet)
  {
   payload.WithString("reportFrequency", ReportFrequencyMapper::GetNameForReportFrequency(m_reportFrequency));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_destinationS3LocationHasBeenSet)
  {
   payload.WithObject("destinationS3Location", m_destinationS3Location.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
